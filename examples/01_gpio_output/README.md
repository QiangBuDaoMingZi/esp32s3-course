# GPIO 输出：屏幕背光闪烁

使用 GPIO13 控制屏幕背光：亮 500 ms、灭 500 ms，完整周期约 1 秒。

## 硬件

课程 ESP32-S3 N16R8 开发板，GPIO13 为背光控制，高电平点亮。无需外接 LED。本例不初始化 LCD，观察的是背光亮灭，不是屏幕图像。

完整引脚说明见 [硬件信息](../../docs/硬件信息.md)。

## 工程文件

| 文件 | 用途 |
| --- | --- |
| main/main.c | GPIO 输出与闪烁循环，保留原课程源码 |
| main/board_pins.h | 本例使用的 GPIO13 定义 |
| main/CMakeLists.txt | 注册应用源码及 ESP-IDF 组件依赖 |
| CMakeLists.txt | ESP-IDF 工程入口 |
| sdkconfig.defaults | 从原工程提取的配置 |

本例不依赖仓库外的 common_components，也不需要下载第三方组件。

## 编译与烧录

原工程配置文件记录 ESP-IDF 6.0.1，目标为 ESP32-S3。安装对应开发环境后，在已加载 ESP-IDF 环境的终端中进入本目录：

```sh
idf.py set-target esp32s3
idf.py build
idf.py -p COMx flash monitor
```

将 COMx 替换为实际串口，数据线连接 COM1（CH343P USB 转串口接口）。按 Ctrl+] 退出监视器。本例不打印应用日志，烧录后观察背光亮灭。

保留原工程的 DIO、80 MHz、2 MB Flash 构建配置；这是固件配置使用范围，开发板物理 Flash 仍为 16 MB。本例不使用 PSRAM。

## 收录说明

发布副本移除了原有的仓库外 board_config 依赖，补充最小引脚头文件，main.c 保持不变。没有收录 build/、完整 sdkconfig、本机编辑器配置或工具链。

源码已收录，静态配置与文件检查已完成。

<!-- UPDATE: example-01-verification -->
【待更新】本发布副本的编译与上板复核记录；当前未提供新的复核结果。

原创程序代码采用 [MIT](../../LICENSE)，允许商用，分发时保留版权与许可声明。

[返回示例目录](../README.md) · [授权与使用](../../README.md#授权与使用)
