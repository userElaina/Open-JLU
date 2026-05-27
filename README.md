# Open JLU

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=flat-square)](https://github.com/userElaina/Open-JLU?tab=MIT-1-ov-file)
[![Last Commit](https://img.shields.io/github/last-commit/userElaina/Open-JLU?style=flat-square)](https://github.com/userElaina/Open-JLU/commits/main)
[![Stars](https://img.shields.io/github/stars/userElaina/Open-JLU?style=flat-square)](https://github.com/userElaina/Open-JLU/stargazers)
[![Forks](https://img.shields.io/github/forks/userElaina/Open-JLU?style=flat-square)](https://github.com/userElaina/Open-JLU/network/members)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](https://github.com/userElaina/Open-JLU/pulls)

汇总了在吉林大学生存所需的 Repositories.

项目原标题 **[Outlast](https://store.steampowered.com/app/273300/): Jilin University DLC**, [原封面](https://raw.githubusercontent.com/userElaina/Outlast-JLU-DLC/main/steam.png).

有任何疑问 / 建议 / 想法 / 信息, 欢迎以你喜欢的方式 [反馈](#反馈).

本文件 ([README.md](https://github.com/userElaina/Open-JLU?tab=readme-ov-file)) 以 [MIT](https://github.com/userElaina/Open-JLU?tab=MIT-1-ov-file) 协议发布. PDF 以 [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/) 协议发布, 可在 [Releases](https://github.com/userElaina/Open-JLU/releases) 下载.

> ⚠️ **可用性提示**: 校园网协议变更、维护者毕业等原因可能导致部分工具失效. **VPN 与"学在吉大 / 校园生活"分类下的每个项目链接旁都附有 last-commit badge**, 请结合最近更新时间与原仓库 issues 自行甄别可用性. DrCOM 协议长期未变化, 故未附 badge, 但部分早期项目可能依赖已过时的运行环境.
>
> **下列项目中存在 *[Gitee](https://gitee.com/)* 的项目, 以 *斜体* 标注, 有一定安全需求的用户请注意甄别.**

## 目录

- [工具](#工具)
  - [VPN](#vpn)
  - [DrCOM](#drcom)
  - [学在吉大与学习辅助](#学在吉大与学习辅助)
  - [抢课与教评](#抢课与教评)
  - [校园生活](#校园生活)
  - [信息聚合与杂项](#信息聚合与杂项)
- [学生组织与战队](#学生组织与战队)
- [课程学习与资料](#课程学习与资料)
  - [课程笔记与资源](#课程笔记与资源)
  - [毕业设计模板](#毕业设计模板)
  - [综合资料合集](#综合资料合集)
- [大作业](#大作业)
  - [公共基础](#公共基础)
  - [程序设计入门](#程序设计入门)
  - [数据结构与算法](#数据结构与算法)
  - [面向对象与 Java](#面向对象与-java)
  - [Web 开发](#web-开发)
  - [操作系统](#操作系统)
  - [网络](#网络)
  - [数据库与系统软件](#数据库与系统软件)
  - [编译原理](#编译原理)
  - [图形与游戏](#图形与游戏)
  - [硬件与底层](#硬件与底层)
  - [AI 与数据科学](#ai-与数据科学)
  - [平台开发与异构计算](#平台开发与异构计算)
  - [软件工程与设计模式](#软件工程与设计模式)
  - [综合实践与毕设](#综合实践与毕设)
- [反馈](#反馈)
- [名词解释](#名词解释)
- [Star History](#star-history)

---

## 工具

### VPN

| 项目 | 简介 |
| -- | -- |
| [JLU-VPN](https://github.com/MerlynAllen/JLU-VPN) ![](https://img.shields.io/github/last-commit/MerlynAllen/JLU-VPN?style=flat-square&label=) | VPN-URL |
| [jlu-vpns-dokodemo-door](https://github.com/MerlynAllen/jlu-vpns-dokodemo-door) ![](https://img.shields.io/github/last-commit/MerlynAllen/jlu-vpns-dokodemo-door?style=flat-square&label=) | VPN-Door |
| [jlu-http-proxy](https://github.com/Yesterday17/jlu-http-proxy) ![](https://img.shields.io/github/last-commit/Yesterday17/jlu-http-proxy?style=flat-square&label=) | http-proxy |

### DrCOM

官方提供的 DrCOM 程序闭源, 行为不可控, 且只有 Windows 版, 因此产生了许多第三方版本. 对于新手, 建议直接使用 [该脚本](https://github.com/drcoms/jlu-drcom-client/blob/master/jlu-drcom-py3/newclinet-py3.py).

#### 桌面 GUI 客户端

| 项目 | 平台 / 语言 |
| -- | -- |
| [drcom-jlu-qt](https://github.com/code4lala/drcom-jlu-qt) | Qt |
| [jlu-drcom-csharp](https://github.com/yang-er/jlu-drcom-csharp) | C# |
| [DrComDotnet](https://github.com/milkpuff/DrComDotnet) | .NET |
| [jlu-drcom-gtk](https://github.com/JonathanKang/jlu-drcom-gtk) | C / Gtk |
| [jlu-drcom-client-gtk](https://github.com/JonathanKang/jlu-drcom-client-gtk) | Python 3 / Gtk |
| [dr-jlu-win32](https://github.com/code4lala/dr-jlu-win32) | C++ / Win32 |
| [JLUNET](https://github.com/Maximilianxu/JLUNET) | Python 2.7 |

#### 命令行 / 后台服务

| 项目 | 平台 / 语言 | 备注 |
| -- | -- | -- |
| [JLUDrcomService](https://github.com/Yesterday17/JLUDrcomService) | C# | Windows Service |
| [go-drcom-jlu](https://github.com/Yesterday17/go-drcom-jlu) | Golang |  |
| [go-jlu-drcom-client](https://github.com/wucongyou/go-jlu-drcom-client) | Golang |  |
| [cygnus-rs](https://github.com/Dessera/cygnus-rs) | Rust | release 中提供二进制文件 |
| [drcomlite](https://github.com/hyec/drcomlite) | C |  |
| [drcom-Jlu](https://github.com/H4ckF0rFun/drcom-Jlu) | C |  |
| [dr-jlu-linux](https://github.com/CrackTC/dr-jlu-linux) | C++ | Linux |
| [jlu-drcom-in-c](https://github.com/feix/jlu-drcom-in-c) | C | Linux |

<details>
<summary><strong>路由器固件与协议研究</strong></summary>

| 项目 | 平台 / 用途 |
| -- | -- |
| [luci-app-jlu-drcom](https://github.com/kotori2/luci-app-jlu-drcom) | OpenWRT |
| [jlu.hiwifi](https://github.com/jiafeng5513/jlu.hiwifi) | hiwifi |
| [drcoms (含多个项目)](https://github.com/drcoms) | 协议研究 |

</details>

### 学在吉大与学习辅助

| 项目 | 简介 |
| -- | -- |
| [StudyAtJlu_Desktop](https://github.com/RikaCelery/StudyAtJLU_Desktop) ![](https://img.shields.io/github/last-commit/RikaCelery/StudyAtJLU_Desktop?style=flat-square&label=) | 学在吉大桌面客户端 |
| [iLearn](https://github.com/wzyyyyyyy/iLearn) ![](https://img.shields.io/github/last-commit/wzyyyyyyy/iLearn?style=flat-square&label=) | 学在吉大 WPF 客户端 (FluentUI) |

### 抢课与教评

| 项目 | 简介 |
| -- | -- |
| [JLUiCourse](https://github.com/wzyyyyyyy/JLUiCourse) ![](https://img.shields.io/github/last-commit/wzyyyyyyy/JLUiCourse?style=flat-square&label=) | 自动抢课 |
| [Fuck-Lesson](https://github.com/H4ckF0rFun/Fuck-Lesson) ![](https://img.shields.io/github/last-commit/H4ckF0rFun/Fuck-Lesson?style=flat-square&label=) | 抢课脚本 |
| [funky_lesson_core](https://github.com/Islatri/funky_lesson_core) ![](https://img.shields.io/github/last-commit/Islatri/funky_lesson_core?style=flat-square&label=) | Fuck-Lesson 的 Rust 实现 |
| [funky-lesson](https://github.com/Islatri/funky-lesson) ![](https://img.shields.io/github/last-commit/Islatri/funky-lesson?style=flat-square&label=) | 抢课 GUI, 支持 Windows / Android, 理论支持 Linux / macOS |
| [jlu-jxpg-250609](https://github.com/Islatri/jlu-jxpg-250609) ![](https://img.shields.io/github/last-commit/Islatri/jlu-jxpg-250609?style=flat-square&label=) | 教学评估一键完成 |

### 校园生活

| 项目 | 简介 |
| -- | -- |
| [JLUSchoolGIS](https://github.com/Baolvlv/JLUSchoolGIS) ![](https://img.shields.io/github/last-commit/Baolvlv/JLUSchoolGIS?style=flat-square&label=) | 校园地理信息系统 |
| [JLUSmartCard](https://github.com/RigoLigoRLC/JLUSmartCard) ![](https://img.shields.io/github/last-commit/RigoLigoRLC/JLUSmartCard?style=flat-square&label=) | 校园卡 App |
| [jlu_helper](https://github.com/276562578/jlu_helper) ![](https://img.shields.io/github/last-commit/276562578/jlu_helper?style=flat-square&label=) | 吉大助手, 整合信息服务 |
| [JiShi-Android](https://github.com/tsurumi-yizhou/JiShi-Android) ![](https://img.shields.io/github/last-commit/tsurumi-yizhou/JiShi-Android?style=flat-square&label=) | 开发中 |
| [JLU LibSeat PC Wide](https://github.com/flash122u/jlu-libseat-pc-wide) ![](https://img.shields.io/github/last-commit/flash122u/jlu-libseat-pc-wide?style=flat-square&label=) | 图书馆 PC 端座位图增强和预约辅助 |

### 信息聚合与杂项

| 项目 | 简介 |
| -- | -- |
| [Reachee](https://github.com/TechCiel/Reachee) ![](https://img.shields.io/github/last-commit/TechCiel/Reachee?style=flat-square&label=) | 通知爬虫 |
| [JLUroll](https://github.com/userElaina/JLUroll) ![](https://img.shields.io/github/last-commit/userElaina/JLUroll?style=flat-square&label=) | 收集 JLUer 的开源社区账户与 Blog |
| [JLUBOOK-forNew](https://github.com/AQiu-2003/JLUBOOK-forNew) ![](https://img.shields.io/github/last-commit/AQiu-2003/JLUBOOK-forNew?style=flat-square&label=) | JLUBOOK 附属站点 |
| [Outlast-JLU-DLC](https://github.com/userElaina/Outlast-JLU-DLC) ![](https://img.shields.io/github/last-commit/userElaina/Outlast-JLU-DLC?style=flat-square&label=) | 本项目前身 |

---

## 学生组织与战队

| 组织 | 简介 |
| -- | -- |
| [JLULUG](https://github.com/JLULUG) | Linux 用户协会, 含镜像站相关 |
| [JLU iOS Club](https://github.com/jlu-ios-club) | iOS Club, 含一些作业 |
| [JLU-OSTA](https://github.com/JLU-OSTA) | 开源协会, 含一些作业 |
| [Namofun](https://github.com/namofun) | Online Judge |
| TARS GO | RoboMaster 战队, 项目列表见下方 ↓ |

<details>
<summary><strong>TARS GO 项目列表 (9 个)</strong></summary>

| 简介 | Link |
| -- | -- |
| 视觉算法 | [RoboVision](https://github.com/QunShanHe/JLURoboVision) |
| 装甲板识别 | [Vision](https://github.com/QunShanHe/TarsGoVision) |
| 决策 | [Decision](https://github.com/Junking1/ICRA2020-JLU-TARS_GO-Decision) |
| 导航与路径规划 | [Navigation](https://github.com/Junking1/ICRA2020-JLU-TARS_GO-Navigation) |
| 感知 | [Perception](https://github.com/Junking1/ICRA2020-JLU-TARS_GO-Perception) |
| 感知模块 | [AI_Sentry](https://github.com/yycloudywind/TARS_GO-AI_Sentry) |
| 点云配准 | [Alignment](https://github.com/TARS-Go-Nav/tars_alignment) |
| 决策 (25 赛季) | [Decision(25)](https://github.com/TARS-Go-Nav/tars_sentry_decision) |
| 仿真 (25 赛季) | [Simulation(25)](https://github.com/TARS-Go-Nav/ros_gz_rm2025) |

</details>

---

## 课程学习与资料

毕业设计相关内容主要适用于吉林大学学生, 使用者请自行参考比对自己学院最新下发的格式要求. 由于格式要求的更新, 2013 年以前的 LaTeX 模板将不会被收录.

### 课程笔记与资源

| 课程 | 简介 | Link | 备注 |
| -- | -- | -- | -- |
| 面向对象 (C++) | 笔记 | [oop-notes](https://github.com/userElaina/oop-notes) |  |
| 概率论 | 笔记 | [Probability-Statistics-Notes](https://github.com/Kisechan/Probability-Statistics-Notes) |  |
| 计算机图形学 | Computer Graphics | [jlu-computer-graphics](https://github.com/userElaina/jlu-computer-graphics) | 教材缺失的 API 的实现, 相关算法的实现 |
| 汇编 | 课程资源 | [x86-asm-book-source](https://github.com/lichuang/x86-asm-book-source) |  |
| 嵌入式 | 提纲 + 题库 | [Embedded-System](https://github.com/userElaina/Embedded-System) | 嵌入式系统原理及应用教程 (孟祥莲) |
| 嵌入式 | 课程资源 | [up-tech-cup-s3c2440](https://github.com/userElaina/up-tech-cup-s3c2440-source) |  |
| 嵌入式 | LED 点阵模拟器 | [LED-lattice-simulator](https://github.com/waynelee-lwc/LED-lattice-simulator) | [Demo](http://www.wayne-lee.cn:3006/) |
| 大创 |  | [Retinal-Image-Recognition](https://github.com/CloudMagician/Retinal-Image-Recognition) |  |
| 计算机专业课笔记 | 笔记 | [docs.ozy]([Introduction · docs.ozy](https://jlu005807.github.io/docs.ozy/)) | 包含大部分笔记（cpp,数据结构,算法,OS,计组,计网,数据库等) |

### 毕业设计模板

| 简介 | Link | 备注 |
| -- | -- | -- |
| 毕设答辩 (1) | [JLU-Beamer-Theme](https://github.com/KveinAxel/JLU-Beamer-Theme) | LaTeX, Beamer, 未更改配色 |
| 毕设答辩 (2) | [JLU-Beamer-Theme](https://github.com/GohUnTsuan/JLU-Beamer-Theme) | LaTeX, Beamer, [Overleaf](https://www.overleaf.com/latex/templates/jlu-beamer-theme/pbnvqnnbczvh), 更改配色 |
| 计院本科毕业论文 | [JLU-CCST-Thesis](https://github.com/x86vk/JLU-CCST-Thesis) | LaTeX, 2018 |
| 研究生学位论文 | [JLUThesis2020](https://github.com/maxuewei2/JLUThesis2020) | LaTeX, 2020 |
| 电院本科毕业论文 | [JLU-EE-template](https://github.com/lyjslay/JLU-EE-template) | LaTeX, MS Word, 2021, [参考](https://github.com/x86vk/JLU-CCST-Thesis) |
| 软院本科毕业论文 | [JLU-CSW-template](https://github.com/cheunglei/JLU-CSW-Thesis) | LaTeX, 2021, [参考](https://github.com/x86vk/JLU-CCST-Thesis) |
| 软院本科毕业论文 | [JLU-SE-Thesis-template](https://github.com/OceanPresentChao/JLU-SE-Thesis-Template) | LaTeX, 2024 |
| 本 / 硕 / 博学位论文 | [JLU_Dissertation](https://github.com/jiafeng5513/JLU_Dissertation) | LaTeX, 2021, [参考](https://gitea.com/CasperVector/pkuthss) |
| 信院本科毕业论文 | [JLU-Thesis](https://github.com/Sakura-shem/JLUThesis) | LaTeX, 2023, [参考](https://github.com/csarron/bsThesisWHU) |
| 本科毕业论文 | [JLUThesis](https://github.com/geekifan/jluthesis) | LaTeX, 2023, [参考](https://github.com/Sakura-shem/JLUThesis) |
| 毕业设计论文模板 | [universal-jlu-thesis](https://github.com/Islatri/universal-jlu-thesis) | Typst, 0.13.0, [Typst Universe](https://typst.app/universe/package/universal-jlu-thesis) |

### 综合资料合集

| 简介 | Link |
| -- | -- |
| 计院研究生课程资料 | [DocsForReview](https://github.com/jiafeng5513/DocsForReview) |
| 计算机课件 | [courseware](https://github.com/open-courseware-cn/jlu-cs-courseware) |
| 计算机课程资料 | [Major-Courses](https://github.com/Geraldxm/Major-Courses) |
| 计算机思维导图 | [AwesomeStudyResource](https://github.com/liudongdong1/AwesomeStudyResource) |
| 软件学院课程资料 | [Courses](https://github.com/JLU-NightsWatch/JLU-Courses) |
| 软件学院选课指南 | [Selection-Guide](https://github.com/JLU-NightsWatch/JLU-SE-Course-Selection-Guide) |
| 自动化生存资料 | [OpenAuto](https://github.com/Sakura-shem/JLU-OpenAuto) |
| 计算物理入门 | [Computational_Physics](https://github.com/JLUComPhy/JLU_Computational_Physics) |
| NLP 相关数据集总结 | [NLP_DataSets](https://github.com/RidongHan/JLU_NLP_DataSets) |
| 软件学院学习资料 | [JLU-Course](https://github.com/ryan6073/JLU-Course) |
| 软件学院学习资料 | [JLU](https://github.com/ChenGeng0102/JLU) |
| 计院速通课程资料 | [JLUCS_Speedrun](https://github.com/Xiaoc7r/JLUCS_Speedrun) |
| 计算机专业课笔记合集 | [docs.ozy]([Introduction · docs.ozy](https://jlu005807.github.io/docs.ozy/)) |

---

## 大作业

### 公共基础

| 课程 | 简介 | Link | 备注 |
| -- | -- | -- | -- |
| 线性规划 | 课程报告 | [Investment-Problem-LP](https://github.com/CloudMagician/Investment-Problem-LP) |  |
| 基础物理实验 | 实验报告 | [jlu-physics-lab-report](https://github.com/userElaina/jlu-physics-lab-report) |  |
| 空间解析几何 | 几何计算机交叉应用 | [analytic-geometry](https://github.com/userElaina/analytic-geometry) |  |
| _计算思维_ | _课前展示 (实验)_ | [_convnext_2024ci_](https://gitee.com/c1rno/convnext_2024ci) | _基于 convnext 的图像分类, 含 PPT_ |

### 程序设计入门

#### 大学计算机基础

| 简介 | Link |
| -- | -- |
| Unity 游戏 | [2D-Adventure](https://github.com/Superbia-zyb/2D-Adventure) |
| 多个项目 | [JLUprojects](https://github.com/JLUprojects) |

#### 程序设计基础

| 简介 | Link |
| -- | -- |
| 酒水管理系统 | [drink_manage](https://github.com/3223v/drink_manage) |
| 基于 EasyX 实现的酒水管理系统 | [2022-JLU-SE-Cpracticum](https://github.com/sssn-tech/2022-JLU-SE-Cpracticum) |
| 日常作业 | [ProgramDesignHomework](https://github.com/Yesterday17/ProgramDesignHomework) |
| 学生成绩管理系统 | [achievement](https://github.com/EugeneJie/achievement) |
| Fruit-Market | [FruitMarket](https://github.com/yang-er/FruitMarket) |
| C 语言实验 | [CCIMS](https://github.com/liuweiky/CCIMS) |
| 超星 OJ 作业 | [chaoxing-oj](https://github.com/Stardust-Coy/JLU2020chaoxing-oj) |
| 中国大学 MOOC 作业 | [MOOC-oj](https://github.com/Stardust-Coy/JLU2020-MOOC-oj) |
| 基于QT的学生成绩管理系统 | [ScoreManagementSystem]([yuzujr/ScoreManagementSystem](https://github.com/yuzujr/ScoreManagementSystem)) |

#### 程序设计综合课

| 简介 | Link |
| -- | -- |
| 中心点计算 | [GraphCalculate](https://github.com/yang-er/GraphCalculate) |
| KingZ 人机对战游戏 | [KingZ-game](https://github.com/userElaina/KingZ-game); [Depend](https://github.com/userElaina/fastgui) |
| RISC-V 解释器 | [RiscvSimulator](https://github.com/YuhangQ/RiscvSimulator) |
| C++ 实现 CNN | [simpleCnnFramework](https://github.com/Sherlock-coder/simpleCnnFramework) |
| Gomoku 人机五子棋 | [Gomoku](https://github.com/jiafeng5513/Gomoku) |
| Python 实现 ANN | [Easy_Neural_Network](https://github.com/XuanchenLi/Easy_Neural_Network) |
| SoftwareCC | [SoftwareCC](https://github.com/WNJXYK/JLU_SoftwareCC) |

### 数据结构与算法

| 简介 | Link | 备注 |
| -- | -- | -- |
| 简单的作业 | [data-structrue](https://github.com/userElaina/data-structrue) |  |
| 哈夫曼-压缩软件 | [naive-Huffman](https://github.com/userElaina/naive-Huffman) |  |
| 六度分离假说 | [Keven-Bacon](https://github.com/userElaina/Keven-Bacon) |  |
| 上机题解 | [data_structure](https://github.com/zjpzhao/JLU_data_structure) |  |
| Nogo 不围棋 (0) | [NoGo-AIBot](https://github.com/Superbia-zyb/NoGo-AIBot) | Botzone |
| Nogo 不围棋 (1) | [nogo](https://github.com/Subsegment/nogo) | Botzone |
| Snake 贪吃蛇 | [Snake-AIBot](https://github.com/Superbia-zyb/Snake-AIBot) | Botzone |
| 机票管理系统 | [Server](https://github.com/KveinAxel/TicketManageSystem); [FrontEnd](https://github.com/KveinAxel/TicketManageSystemFrontEnd) |  |
| 新闻区块链 (0) | [Server](https://github.com/KveinAxel/NewsBlockChain); [DNS](https://github.com/KveinAxel/NewsBlockChainDNS); [FrontEnd](https://github.com/KveinAxel/NewsBlockChainFrontEnd) |  |
| 新闻区块链 (1) | [NewsBlockchain](https://github.com/kaaass/NewsBlockchain) |  |
| Python 区块项目 | [PythonBlockChain](https://github.com/caochuxue/PythonBlockChain) |  |
| 红黑树 | [datastruct](https://github.com/ZuoTiJia/datastruct) |  |
| 飞机订票系统 (0) | [Iplane](https://github.com/CloudMagician/Iplane) |  |
| 飞机订票系统 (1) | [AirlineSystem](https://github.com/liuweiky/AirlineSystem); [fork](https://github.com/lixiaoyu0611/AirlineSystem) |  |
| 课设 | [flight_vue_django](https://github.com/icespite/flight_vue_django) |  |
| Assignment | [DataStructureAssignment](https://github.com/kaaass/DataStructureAssignment) |  |
| OJ 题目代码 | [C-OJ](https://github.com/Yurzi/Jlu-C-OJ) |  |
| 实验和考试 | [DataStructure-2017](https://github.com/liuweiky/JLU-CCST_DataStructure-2017) |  |
| Tetris2 | [Tetris2](https://github.com/Kisechan/Tetris2) | Botzone |
| 笔记和资料 | [Data_Structure_and_Algorithm]([jlu005807/Data_Structure_and_Algorithm](https://github.com/jlu005807/Data_Structure_and_Algorithm)) | 不仅仅包含数据结构的内容同时还有算法设计与分析的笔记 |

### 面向对象与 Java

#### 面向对象 / C++

| 简介 | Link | 备注 |
| -- | -- | -- |
| 每周练习 | [JLUOOPClassWork](https://github.com/Yesterday17/JLUOOPClassWork) |  |
| ChatMFC | [ChatMFC](https://github.com/yang-er/ChatMFC) |  |
| 语音信号时域分析 | [Signal-Analysis](https://github.com/yycloudywind/Signal-Analysis) |  |
| 灰度图像直方图统计 | [Grayscale_histogram](https://github.com/yycloudywind/Grayscale_histogram) |  |
| 图书管理系统 | [Library](https://github.com/yycloudywind/Library) |  |
| 超市管理系统 | [SuperMarket](https://github.com/yycloudywind/SuperMarket) |  |
| 商城 (0) | [E-commerce](https://github.com/hhhhlkf/E-commerce) |  |
| 商城 (1) | [XMall](https://github.com/XuanchenLi/XMall) |  |
| 商城 (2) | [Qt-ShoppingMall](https://github.com/OceanPresentChao/Qt-ShoppingMall) |  |
| 即时通讯系统 | [C-2020](https://github.com/Nicer0815/JLU-C-2020) |  |
| 课程设计 | [olshop](https://github.com/Yurzi/jlu_olshop) |  |
| CPP 课设 | [QQProject](https://github.com/ExTNT/QQProject) |  |
| 电商系统 | [Shop](https://github.com/Kisechan/oop_practicum) | Golang 完成, 适用软院卓班 |
| CPP笔记 | [Cpp](https://github.com/jlu005807/Cpp) | 包含基础cpp以及一些进阶的cpp知识 |

#### Java

| 简介 | Link | 备注 |
| -- | -- | -- |
| 练习 | [JavaExperiment](https://github.com/yang-er/JavaExperiment) |  |
| 书店 | [BookStore](https://github.com/EugeneJie/BookStore) |  |
| 书吧 | [BookBar](https://github.com/zzk72/web_backend) | Spring Boot |
| 网盘 | [Cvarpe](https://github.com/kvrmnks/Cvarpe) |  |
| Pet-shop | [javaClassDesign](https://github.com/Rosenberg37/javaClassDesign) |  |
| 租赁系统 | [iRentalSystem](https://github.com/AQiu-2003/iRentalSystem) |  |
| Experiment | [JavaExp](https://github.com/liuweiky/JavaExp) |  |
| Java 实训 | [MYSSM](https://github.com/Nicer0815/MYSSM) |  |
| 订餐系统 | [takeout-ordering-system](https://github.com/Kisechan/takeout-ordering-system) |  |
| 图书管理系统 | [BookSystem](https://github.com/jlu005807/BookSystem) | |

#### JavaEE

| 简介 | Link | 备注 |
| -- | -- | -- |
| 模拟 ai 对话 (0) | [ChatJavaEE](https://github.com/OceanPresentChao/ChatJavaEE) | TomEE |
| 模拟 ai 对话 (1) | [J2EChat_back](https://github.com/XuanchenLi/J2EChat); [J2EChat_front](https://github.com/XuanchenLi/J2EChat_front) |  |

### Web 开发

> 网页程序设计.

| 简介 | Link |
| -- | -- |
| 小小书屋 (0) | [Gosling_Book_Bar](https://github.com/XuanchenLi/Gosling_Book_Bar) |
| 小小书屋 (1) | [admin](https://github.com/OceanPresentChao/CarillionBookstore-admin); *[client](https://gitee.com/linexus/carillonbookstore)*; [backend](https://github.com/Yurzi/carillion_bookstore_backend) |

### 计算机组成原理与体系结构

| 简介          | Link                                                         |
| ------------- | ------------------------------------------------------------ |
| 笔记          | [计算机组成原理](https://jlu005807.github.io/docs.ozy/docs/计算机组成原理/) |
| 五级流水线CPU | [CPU](https://github.com/jlu005807/CPU)                      |

### 操作系统

| 简介 | Link | 备注 |
| -- | -- | -- |
| 反馈排队算法 (0) | [oslab](https://github.com/userElaina/oslab) | Python 3 |
| 反馈排队算法 (1) | [Visual-MLFQ](https://github.com/OceanPresentChao/Visual-MLFQ) | Vue |
| 反馈排队算法 (2) | [python-mlfq](https://github.com/sssn-tech/cpu-scheduler-mlfq) | Python + tkinter GUI |
| Banker Algorithm | [OSClassDesign](https://github.com/Rosenberg37/operatingSystemClassDesign) |  |
| 死锁判断 | [visualize_deadlock_graph](https://github.com/XuanchenLi/visualize_deadlock_graph) |  |
| 磁盘调度 | [disk_scheduling](https://github.com/hhhhlkf/disk_scheduling) |  |
| 实验 | [OS-Experiment](https://github.com/CloudMagician/Operating-System-Experiment) |  |
| 临界区进程互斥 | [OsExp](https://github.com/Nicer0815/OsExp) |  |
| Experiment | [OSExp](https://github.com/liuweiky/OSExp) |  |
| 笔记和实验 | [Operating_System](https://github.com/jlu005807/Operating_System) | |

### 网络

| 课程 | 简介 | Link |
| -- | -- | -- |
| 计算机网络 | 文件传输服务器 | [cs-network-proj](https://github.com/kaaass/cs-network-proj) |
| 计算机网络 | SpanTree | [SpanTree](https://github.com/Rosenberg37/SpanTree) |
| 计算机网络 | RSTP-Lab | [RSTP-Lab](https://github.com/TechCiel/RSTP-Lab) |
| 计算机网络 | FTP 服务器 | [socketlab](https://github.com/hhhhlkf/socketLab) |
| 计算机网络 | lab | [NetLab](https://github.com/XuanchenLi/NetLab) |
| 网络程序设计 | ChatSystem | [ChatSystem](https://github.com/SAGIRI-kawaii/ChatSystem) |
| Linux | linux-notes | [linux-notes](https://github.com/userElaina/linux-notes) |
| Linux | rsap2p | [rsap2p](https://github.com/userElaina/rsap2p) |
| 笔记 |                | [Computer_Networking · docs.ozy](https://jlu005807.github.io/docs.ozy/docs/Computer_Networking/) |

### 数据库与系统软件

| 课程 | 简介 | Link | 备注 |
| -- | -- | -- | -- |
| 数据库 | simple-db | [simple_db](https://github.com/DctorWei1314/simple_db) |  |
| 数据库 | 实验 | [MySQL-Experiment](https://github.com/CloudMagician/MySQL-Experiment) |  |
| 数据库 | InvoDB (engine) | [InvoDB](https://github.com/YuhangQ/InvoDB) |  |
| 数据库 | 花瓣网 | ~~[main (因安全问题删库)](https://github.com/haotian-T/database)~~; [make](https://github.com/haotian-T/make_database) |  |
| 数据库与 Web 智能 | 信息抽取 & 情感分析 | [DMWIS-IE-EA](https://github.com/RidongHan/JLU-DMWIS-IE-EA) |  |
| 系统软件综合实践 | redbase | [redbase](https://github.com/hhhhlkf/redbase) |  |
| 系统软件综合实践 | 数据库引擎 (CS346)(0) | [DbEngine](https://github.com/yang-er/DbEngine) |  |
| 系统软件综合实践 | 数据库引擎 (CS346)(1) | [DBCourse](https://github.com/XuanchenLi/DBCourse) |  |
| 系统软件综合实践 | 数据库引擎 (CS346)(2) | [db-engine](https://github.com/Kisechan/db-engine) | Rust 实现, 适用软院卓班 |
| 基于 Android/Gradle 的学生选课系统 | 基于SQLite的数据库系统 | [Embedded_system_design](https://github.com/jlu005807/Embedded_system_design/tree/master/Course_Design/android) | 嵌入式课程系统设计 |
| 基于 Swift/Xcode/SQLite 的 iOS学生选课系统 | 基于SQLite的数据库系统 | [Embedded_system_design](https://github.com/jlu005807/Embedded_system_design/tree/master/Course_Design/android) | 嵌入式课程系统设计 |

### 编译原理

| 简介 | Link | 备注 |
| -- | -- | -- |
| 课设 | [Course-design](https://github.com/byylkcsj/Course-design-of-compiling-principle) | 含实验报告 |

<details>
<summary><strong>SNL Compiler 实现 (14 个)</strong></summary>

| 实现 | Link | 备注 |
| -- | -- | -- |
| SNL Compiler (0) | [snl-compiler-design](https://github.com/waynelee-lwc/2119-snl-compiler-design) |  |
| SNL Compiler (1) | [JLU-SNL-COMPILER](https://github.com/HanLi05869/JLU-SNL-COMPILER) |  |
| SNL Compiler (2) | [SNL-Complier](https://github.com/CloudMagician/SNL-Complier) |  |
| SNL Compiler (3) | [SNL-Complier](https://github.com/YouthLin/SNL-Compiler) |  |
| SNL Compiler (4) | [SNL_Compiler](https://github.com/mytlx/SNL_Compiler) | [参考](https://github.com/YouthLin/SNL-Compiler) |
| SNL Compiler (5) | [SNL_Compiler](https://github.com/badmonkey7/SNL_Compiler) |  |
| SNL Compiler (6) | [snl](https://github.com/icespite/snl) | [参考](https://github.com/badmonkey7/SNL_Compiler) |
| SNL Compiler (7) | [snl_compiler](https://github.com/kaaass/snl_compiler) |  |
| SNL Compiler (8) | [SNLCompiler](https://github.com/SAGIRI-kawaii/SNLCompiler) |  |
| SNL Compiler (9) | [SNL-compiler](https://github.com/ztmail723/JLU-SNL-compiler) |  |
| SNL Compiler (a) | [SNL-Compiler](https://github.com/Yoriko-007/SNL-Compiler) |  |
| SNL Compiler (b) | [snlc-rust](https://github.com/Yurzi/snlc-rust) |  |
| SNL Compiler (c) | [SNLC](https://github.com/XuanchenLi/SNLC) |  |
| SNL Compiler (d) | [SNLCompiler](https://github.com/liuweiky/SNLCompiler) |  |

</details>

### 图形与游戏

| 课程 | 简介 | Link | 备注 |
| -- | -- | -- | -- |
| 计算机图形学 | 图形学基础小实验 | [CGwork0218](https://github.com/jiafeng5513/CGwork0218) | MFC |
| 计算机图形学 | 图形学基础小实验 | [JLU_CG_LAB](https://github.com/GGN-2015/JLU_CG_LAB) | MFC |
| 计算机图形学 | 实验 | [MFC_EXP](https://github.com/CloudMagician/MFC_EXP) | MFC |
| 计算机图形学 | Experiment | [Exp](https://github.com/liuweiky/ComputerGraphicsExp) |  |
| 计算机图形学 | 软件学院图形学大作业 | [cg](https://github.com/Kisechan/cg) |  |
| 游戏编程 | 2D 游戏设计 | [SlimeFight](https://github.com/NatsukiKoki/SlimeFight) |  |
| OpenGL | 绘制旋转的雪花 | [spin-snow](https://github.com/Yurzi/spin-snow) |  |

### 硬件与底层

#### 微机 / 嵌入式 / 汇编

| 简介 | Link |
| -- | -- |
| MIPS | [mips](https://github.com/userElaina/mips) |
| MIPS | [mips-design](https://github.com/geekifan/mips-design) |
| MIPS | [MIPS-Pipeline](https://github.com/HanLi05869/MIPS-Pipeline) |
| MIPS | [MIPS-Lite4-Tomasulo](https://github.com/GGN-2015/MIPS-Lite4-Tomasulo) |
| Lab | [MicrocomputerLab](https://github.com/userElaina/MicrocomputerLab) |
| Experiment | [M-Experiment](https://github.com/waynelee-lwc/Microcomputer-Experiment) |
| x86 (I32) 汇编 | [x86-asm-homework](https://github.com/userElaina/x86-asm-homework) |
| 高铁信息牌 | [s3c2440-homework](https://github.com/userElaina/s3c2440-homework) |
| Bad Apple | [Bad-Apple-4-s3c2440](https://github.com/userElaina/Bad-Apple-4-s3c2440) |
| 商品条形码识别 | [Barcode](https://github.com/qjksxy/Barcode) |
| Experiment | [M-InterfaceExp](https://github.com/liuweiky/MicrocomputerInterfaceExp) |
| 嵌入式系统设计 | [嵌入式系统设计](https://jlu005807.github.io/docs.ozy/docs/嵌入式系统设计/) |

#### 数字逻辑与 MCU

| 课程 | 简介 | Link |
| -- | -- | -- |
| 模拟与数字逻辑电路 | 汽车尾灯控制电路 | [digital-logic-circuit-assignment](https://github.com/GGN-2015/digital-logic-circuit-assignment-jlu) |
| MCU | Experiment | [MCU_Exp](https://github.com/liuweiky/MCU_Exp) |

### AI 与数据科学

| 课程 | 简介 | Link |
| -- | -- | -- |
| 机器学习与 Python | 作业及考试 | [ML-and-Py](https://github.com/userElaina/ML-and-Py) |
| 机器学习与 Python | ML-and-Py | [MLAndPython2023](https://github.com/GGN-2015/MachineLearningAndPython2023) |
| 大数据技术与应用 | 作业 | [big-data-homework-FE](https://github.com/waynelee-lwc/big-data-homework-FE) |
| 人工智能 | FeatureSelection | [FeatureSelection](https://github.com/WNJXYK/JLU_FeatureSelection) |
| 人工智能 | Kaggle 竞赛选做 | [kaggle](https://github.com/sssn-tech/kaggle) |

### 平台开发与异构计算

| 课程 | 简介 | Link |
| -- | -- | -- |
| iOS | dev assignment | [Facet](https://github.com/liuweiky/iOS-Dev_Facet) |
| C# 程序设计 | PlaneBombGame | [PlaneBombGame](https://github.com/fengxin-zhxx/PlaneBombGame) |
| .NET | 作业 | [dotnetspider_homework](https://github.com/ZYGming/dotnetspider_homework) |
| GPGPU 异构高性能计算 | FFT | [CUDA-FFT](https://github.com/HanLi05869/CUDA-FFT) |

### 软件工程与设计模式

| 课程 | 简介 | Link | 备注 |
| -- | -- | -- | -- |
| 软件工程 | software-project-html | [software_project_html](https://github.com/DctorWei1314/software_project_html) |  |
| 软件工程 | Business_Process | [frontend](https://github.com/RelaxDegree/Business_Process_System); [backend](https://github.com/XuanchenLi/business_management_system_backend) |  |
| 软件工程 | DocAuth | [frontend](https://github.com/OceanPresentChao/DocAuth-frontend); [backend](https://github.com/Yurzi/DocAuth-backend) |  |
| 软件工程 | CourseSys | [frontend](https://github.com/liuweiky/CourseSys); [backend](https://github.com/liuweiky/course_sys_backend) |  |
| 软件工程 | blog engine (0) | [whisper](https://github.com/TechCiel/whisper) |  |
| 软件工程 | blog engine (1) | [SE-Project-2019](https://github.com/Gwzlchn/SE-Project-2019) |  |
| 软件工程 | acme 管理系统 | [ACME-Web](https://github.com/TheOneImmortal/ACME-Web) |  |
| 设计模式 | 课程作业代码 | [DesignPattern](https://github.com/yang-er/DesignPattern) |  |
| 设计模式 | 实验 | [DP-Experiment](https://github.com/CloudMagician/Design-Pattern-Experiment) |  |
| 软件分布式开发 | DB | [数据库组](https://github.com/dsd-db) |  |
| 软件分布式开发 | Server (0) | [Server 组](https://github.com/PigeonholeDSD) |  |
| 软件分布式开发 | Server (1) | [Server](https://github.com/zwh2119/dsd-server); [Embedded](https://github.com/zwh2119/Embedded-Server) |  |
| 软件分布式开发 | all | [jlu_dsd](https://github.com/WNJXYK/JLU_DSD) |  |
| 软件系统综合开发实践 | B/S 端 | [ssmbuld](https://github.com/Nicer0815/ssmbuld) |  |
| 软件系统综合开发实践 | C/S 端 | [ssmClient](https://github.com/Nicer0815/ssmClient) |  |
| 软件系统综合开发实践 | B/S 端 | [学生宿舍管理系统](https://github.com/ExTNT/student_dormitory) | PostgreSQL + Go + Vue |

### 综合实践与毕设

| 课程 | 简介 | Link | 备注 |
| -- | -- | -- | -- |
| 企业实训 | 绘图与数据分析 | [plt-draw-homework](https://github.com/userElaina/plt-draw-homework) |  |
| 企业实训 | 微信小程序 | [我的音乐台](https://github.com/GGN-2015/WxMiniMusic) |  |
| 企业实训 | Qt 点餐系统 | [点餐系统](https://github.com/Kisechan/ordering-system) |  |
| 企业实训 | 环境数据信息平台（Qt） | [Natural-Monitor-Brain](https://github.com/yuzujr/Natural-Monitor-Brain) | 物联网的QT企业实训 |
| 生产实习 (通信工程) | CAN 总线模拟实验 | [mcs51_can_sdcc](https://github.com/Islatri/mcs51_can_sdcc) | 通信工程生产实习 |
| 毕业设计 | Qt CNN 辅助设计系统 | [GraduationProject](https://github.com/jiafeng5513/GraduationProject) | Qt |
| Others | 处理风控的后端系统 | [JLU-BBTS9](https://github.com/JLU-bytedance-backend/JLU-bytedance-backend-techtrainingcamp-security-9) |  |
| Others | Cat-and-Dog | [ML-Cat-Dog](https://github.com/XuanLaoYee/ML-Cat-Dog) |  |
| Others | 测距软件 | [jluNewCamera](https://github.com/jiafeng5513/jluNewCamera) | MFC + OpenCV |
| 智能终端与边缘计算 | 基于小米AIOT开发板的智能家居模拟 | [Smart_Home](https://github.com/jlu005807/Smart_Home) |  |

---

## 反馈

- 有 **Commit** 权限的开发者可以直接进行修改.
- **[PR](https://github.com/userElaina/Outlast-JLU-DLC/pulls)** (非常建议)
- **[Issue](https://github.com/userElaina/Outlast-JLU-DLC/issues)** (建议)
- **Email** (建议): [jlucn@pm.me](mailto:jlucn@pm.me)
- **Telegram** (建议): [@userElaina](https://t.me/userElaina) [@GGN_2015](https://t.me/GGN_2015)
- **QQ** (不建议): 1072674074

## 名词解释

- **正常网络**: 指能正常访问 [Google](https://www.google.com/), [Wikipedia](https://www.wikipedia.org/) 等的网络.
- **校园网**: 指我校校园网, 可直接访问 [图书馆](https://lib.jlu.edu.cn/) 等校内网站. (与外面推销的 `校园手机卡` 无关.)

## Star History

[![Star History Chart](https://api.star-history.com/svg?repos=userElaina/Open-JLU&type=date&legend=top-left)](https://www.star-history.com/#userElaina/Open-JLU&type=date&legend=top-left)
