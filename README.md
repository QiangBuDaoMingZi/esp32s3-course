# ESP32-S3 零基础入门

ESP32-S3 零基础课程配套源码。仓库刚开始更新，以当前已发布的文件为准。

[课程示例](examples/README.md) · [硬件资料](docs/README.md) · [MIT 许可证](LICENSE)

## 当前内容

<!-- UPDATE: examples-status -->
| 内容 | 状态 | 入口 |
| --- | --- | --- |
| GPIO 输出：屏幕背光闪烁 | 源码已发布 | [01_gpio_output](examples/01_gpio_output/README.md) |
| 其他示例 | 【待更新】 | [示例目录](examples/README.md) |
| 开发板资料 | 已提供基础说明与附件 | [硬件信息](docs/硬件信息.md) |
| 固件下载包 | 【待更新】，暂无下载 | [发布状态](releases/README.md) |

## 下载与使用

```sh
git clone https://github.com/QiangBuDaoMingZi/esp32s3-course.git
cd esp32s3-course/examples/01_gpio_output
```

按 [首课说明](examples/01_gpio_output/README.md) 配置环境、编译与烧录。源码仓库不包含本机工具链或 build/ 缓存。

<!-- UPDATE: getting-started-docs -->
【待更新】统一的环境安装与常见问题说明；当前使用步骤以已发布示例的 README 为准。

## 目录

| 目录 | 内容与状态 |
| --- | --- |
| examples/ | 已发布示例与【待更新】目录 |
| docs/ | 硬件资料与使用说明 |
| components/ | 【待更新】 |
| projects/ | 【待更新】 |
| tools/ | 【待更新】 |
| releases/ | 【待更新】固件下载索引 |

## 授权与使用

原创程序代码及配套工程说明采用 [MIT](LICENSE)，允许免费使用、修改、商用和再分发，分发时保留版权与许可声明。另有明确许可的第三方文件除外。

原创 UI 非软件素材仅在具体文件明确标记时采用 [CC BY 4.0](UI-LICENSE.md)，分享时合理注明出处；当前未收录此类素材。

课程正文、视频、品牌标识及硬件设计附件不随程序代码统一授权。[第三方声明](THIRD_PARTY_NOTICES.md) · [AI 操作规则](AGENTS.md)
