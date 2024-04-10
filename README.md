# sysy-testsuit-collection (lvX)
SysY是C语言的一个子集。和课程实践的lv1~lv9一样，本仓库含有一个SysY测试集（lvX）。 LvX含有467个从各个来源收集的额外测试。对于每个测试用例，包含：
1. 一个`.c`文件
2. 一个`.out`文件，其中最后一行是程序应有的返回值。`.out`文件是由实践环境容器中的clang作为基准编译器生成的，并且由笔者自己写的sysy编译器交叉验证。
3. 一个可能的`.in`文件，作为对应可执行文件的测试输入。

## 注意事项 & 免责声明
1. 你的编译器需要支持Lv1到Lv9的所有功能，才可以通过所有测试点。你可以选择只测试Koopa前端。
2. 笔者自己写的sysy编译器可以通过其中所有测试用例，耗时不超过十分钟。**但是：**
这并不意味着所有测试用例的sysy程序都是合法的。即：测试用例中可能含有UB、数组越界等行为。**在一头扎进去调试前，请仔细甄别程序是否正确。**

## 使用方法
1. 启动在[实验环境](https://pku-minic.github.io/online-doc/#/misc-app-ref/environment)提供的容器。
2. 克隆本仓库并将`lvX`文件夹复制到容器中的`/opt/bin/testcases/`下
3. `autotest -koopa -s lvX ~/compiler` 或 `autotest -riscv -s lvX ~/compiler`

## 来源
收集自[北大编译实践在线文档](https://pku-minic.github.io/online-doc/#/misc-app-ref/environment?)中所提及的外部仓库
并在此基础上进行了改动：
1. 删除一些课程Lab不要求的内容，如-2147483648整型字面量。
2. 删除了部分不合法的sysy程序。
3. 删除了部分耗时过长的性能测试用例


生成.out文件使用的clang版本
```
clang -v

Ubuntu clang version 13.0.1-++20220120110924+75e33f71c2da-1~exp1~20220120231001.58
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
Found candidate GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/9
Selected GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/9
Candidate multilib: .;@m64
Selected multilib: .;@m64
```


![image](https://github.com/jokerwyt/sysy-testsuit-collection/assets/11886705/8d1c7da5-375a-4563-af6d-ca0635666180)

