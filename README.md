# Rise of Nations Remastered Edition

## 项目简介

Rise of Nations Remastered Edition) 是一个《国家的崛起：重制版》 的逆向项目，用于实现游戏功能的扩展和修改。该项目基于 FuDiMoGeLin29 的原始 HookAsm 实现，旨在为游戏爱好者和开发者提供一个强大的工具，用于研究和修改游戏行为。

## 功能特性

- **内存钩子系统**：通过汇编注入技术实现对游戏函数的钩子，支持函数替换和行为修改
- **反汇编与汇编生成**：使用 Capstone 和 AsmJit/AsmTK 库实现指令的反汇编和动态生成
- **游戏功能扩展**：提供对游戏核心功能的访问和修改能力
- **内存操作工具**：包括寄存器操作、内存分配和保护等功能
- **浮点数寄存器支持**：通过 FXSAVE/FXRSTOR 指令实现浮点数寄存器的保存和恢复

## 技术栈

- **C++**：主要开发语言
- **Capstone**：反汇编库
- **AsmJit/AsmTK**：汇编生成库
- **Windows API**：内存操作和进程管理
- **Visual Studio**：开发环境

## 环境要求

- Windows 7/8/10/11
- Visual Studio 2019 或更高版本
- .NET Framework 4.0 或更高版本
- 《国家的崛起：重制版》游戏

## 安装步骤

1. **克隆仓库**：


2. **打开解决方案**：
   - 使用 Visual Studio 打开 `Rise of Nations Remastered Edition.sln` 解决方案文件

3. **构建项目**：
   - 在 Visual Studio 中选择 "Release" 配置
   - 点击 "生成" -> "生成解决方案"

4. **安装钩子**：
   - 将生成的 DLL 文件复制到游戏目录
   - 使用适当的注入工具将 DLL 注入到游戏进程


## 核心 API

### HookAsm 核心函数

- `HookBegin`：安装内存钩子
- `HookStop`：移除内存钩子
- `HookFunctionBegin`：安装函数钩子
- `HookFunctionStop`：移除函数钩子
- `HookDisAsm`：反汇编指定地址的指令
- `Asm_Cmp`：使用汇编比较两个值并返回标志位
- `Asm_Test`：使用汇编测试两个值并返回标志位
- `Asm_Ret`：生成 RET 指令
- `Asm_Mov_Esp_And_Jmp`：生成修改 ESP 并跳转到指定地址的指令
- `Asm_Fxsave`：保存浮点数寄存器
- `Asm_Fxrstor`：恢复浮点数寄存器

### 游戏功能 API

项目包含对游戏中大量函数的钩子定义，包括：
- 领袖（Leader）相关函数
- 领袖数据（LeaderData）相关函数
- 领袖输出（LeaderOut）相关函数
- 场景功能（ScenarioFuncSet）相关函数

## 贡献指南

我们欢迎社区贡献！如果您想为项目做出贡献，请遵循以下步骤：

1. **Fork 仓库**：在 GitHub 上 fork 本仓库
2. **创建分支**：为您的功能或修复创建一个新分支
3. **实现更改**：在您的分支中实现功能或修复
4. **提交 PR**：提交拉取请求，描述您的更改

## 许可证

本项目基于 MIT 许可证开源。详见 [LICENSE.txt](LICENSE.txt) 文件。

## 免责声明

本项目仅供学习和研究目的使用。使用本项目可能违反游戏的最终用户许可协议 (EULA)。请在使用前仔细阅读游戏的 EULA，并自行承担使用风险。

## 鸣谢

- **FuDiMoGeLin29**：原始 HookAsm 实现
- **Capstone Team**：提供反汇编库
- **AsmJit Team**：提供汇编生成库
- **所有贡献者**：感谢您的支持和贡献

---

**注意**：本项目是一个社区驱动的开源项目，与官方游戏开发者无关。