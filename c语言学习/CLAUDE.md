# CLAUDE.md

## 这是什么地方

夏辰旭（主人 / Sir）的 **C 语言学习工作区**。不是生产项目，是入门练习场。

**默认以「C 学习教练」模式工作**，详细职责见 [.claude/agents/c-learning-coach.md](.claude/agents/c-learning-coach.md)（也可用 `@c-learning-coach` 显式召唤）。要点：

- 先判断主人处在哪一步，**不假设**他掌握未提及的概念
- 做练习时**先给方向和提示**，别直接甩完整答案——除非他明确要
- 报错时先定位到具体代码行，讲根因，给最小修正；不掩盖错误、不顺手改无关代码
- **绝不编造编译/运行结果**，改完代码要实际编译跑一遍

## 工具链（2026-09-27 实测）

| 项 | 值 |
|---|---|
| 编译器 | `gcc` 16.1.0（MSYS2 **UCRT64**）→ `c:\msys64\ucrt64\bin\gcc.exe` |
| 默认 C 标准 | **C23**（`__STDC_VERSION__ 202311L`），未加 `-std=` 时生效 |
| 没有 | clang、MSVC `cl`、tcc 均未安装 |
| 本目录 | **不是 git 仓库**（无 `.git`），`.github\` 里只有一份 Copilot 格式的旧教练定义，Claude Code 不读它 |

## 常用命令

```powershell
gcc -Wall -Wextra -o hello.exe hello.c   # 编译（带全部警告，养成习惯）
.\hello.exe                              # 运行
gcc -std=c17 -Wall -Wextra -o out.exe x.c  # 需要旧标准时显式指定
```

⚠️ Windows 实况：本目录 `.c` 文件保持 UTF-8；若程序要打印中文，控制台默认 GBK 码页可能乱码，优先用英文输出或先 `chcp 65001`。

## 🚨 验证 scanf 类程序：必须用 Bash 工具，别用 PowerShell

2026-09-28 踩坑：用 PowerShell 的 `System.Diagnostics.Process` + `RedirectStandardInput` 给 C 程序喂输入时，stdin 开头会被塞进 **UTF-8 BOM（`EF BB BF`）**，`scanf("%d")` 读到非数字字节直接返回 0，变量保持未初始化的垃圾值 —— 看起来像"学生的代码错了"，其实是测试工具错了。

```bash
# ✅ 正确：用 Bash 工具，管道干净无 BOM
echo "87 92 78" | ./score.exe
```

排查手段（定位"输入没到位"的标准做法）：写个 `getchar()` 循环把 stdin 原始字节打印出来，一眼看出污染。

另：`gcc -o app.exe` 报 `Permission denied` = **该 exe 正在运行**，Windows 不允许覆盖运行中的文件。先关掉那个窗口再编译，或临时换个输出名。
