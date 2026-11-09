#include <stdbool.h>             // 引入布尔类型以及 true、false，下面用 true 表示一直循环。
#include "board_pins.h"          // 引入本项目的板级引脚定义，避免直接写死 GPIO 编号。
#include "driver/gpio.h"         // 引入 GPIO 驱动，用于配置引脚和设置输出电平。
#include "freertos/FreeRTOS.h"   // 引入 FreeRTOS 基础定义，以及毫秒转系统节拍的宏。
#include "freertos/task.h"       // 引入任务接口，使用 vTaskDelay 暂停当前任务。

#define LED_GPIO BOARD_LCD_BACKLIGHT // 使用 GPIO13 控制屏幕背光，作为点灯练习的观察对象。
#define LED_ON_LEVEL 1               // 输出高电平（1）时点亮背光。
#define LED_OFF_LEVEL 0              // 输出低电平（0）时熄灭背光。
#define BLINK_INTERVAL_MS 500        // 亮、灭各保持 500 毫秒，完整闪烁周期约为 1 秒。

void app_main(void) // ESP-IDF 应用入口；系统启动后自动调用，无需自己编写 main 函数。
{ // 应用入口函数开始。
    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT); // 将背光引脚设置为输出模式，才能控制它的高低电平。

    while (true) // 持续重复点亮和熄灭，直到断电或系统复位。
    { // 闪烁循环开始。
        gpio_set_level(LED_GPIO, LED_ON_LEVEL); // 输出高电平，点亮背光。
        vTaskDelay(pdMS_TO_TICKS(BLINK_INTERVAL_MS)); // 毫秒转系统节拍，暂停当前任务，让其他任务运行。
        gpio_set_level(LED_GPIO, LED_OFF_LEVEL); // 输出低电平，熄灭背光。
        vTaskDelay(pdMS_TO_TICKS(BLINK_INTERVAL_MS)); // 保持熄灭 500 毫秒，然后进入下一轮循环。
    } // 闪烁循环体结束。
} // 应用入口函数结束。
