# NewScript

NewScript 是一套从零开始自己实现的一门全新的 类JavaScript 语法的轻量级脚本解释器、编译器、调试器。

作为解释器，它支持各种复杂的JavaScript脚本语法（如函数、Lambda表达式、if / else、for、while、do / while、

try / catch?控制流等）；支持函数任意嵌套定义，及自由指定全局变量及局部变量作用域；支持任意外部接口扩展。

    同时，其已实现 JIT?即时编译加速能力，执行过程中边解释边编译，重复执行相同语句将不再重新编译而是

直接调用内部已经编译好的二进制指令，大大加快了脚本语言的执行效率。

    同时作为编译器，它也支持将目标脚本全编译为汇编语言或者二进制流，支持直接存入磁盘并直接加载运行。

在编译过程中，支持同时采用源码混淆功能将源代码进行混淆加密。

    同时，目前 NewScript 也提供了简单的调试接口，方便开发者编写源码级调试器。


项目地址：

    https://github.com/tankaishuai/NewScript

    https://blog.csdn.net/tan_kaishuai/article/details/114174819



本文主要简要介绍一下基本用法及原理。


一、命令行 command_shell NewScript.exe 的使用：

直接不带参数运行，进入交互式 shell。 如下：


命令： eval:target_file_path 可以直接用来执行 JavaScript 脚本，或者执行编译后生成的二进制文件（或者汇编脚本）。

       compile:target_file_path 用于编译目标 JavaScript 脚本， 然后会在同级目录下生成一个 .asm（汇编） 文件与 .bin （二进制，与汇编文件对应）文件。

例如，编译如下脚本：

后，生成：

发布时仅仅只需要发布已经编译好的 .bin （二进制）文件即可。

以非交互式命令行直接运行，如下：

    NewScript.exe "/q eval:target_file_path"? ? ? ? ? ? ? ? ?运行指定的 js 脚本，或者运行已经编译好的汇编文件或者二进制流。

    NewScript.exe "/q compile:target_file_path"? ? ? ? ? ?编译指定的 js 脚本，生成编译好的 .asm 汇编文件 与 .bin 二进制流。


二、SDK的使用

    目前 NewScript SDK （eval64_sdk.h） 开放了如下接口：

（1）执行文本，或者执行文件：


（2）编译文本，或者编译文件：


（3）注册函数，或者运算符重载：



例如，我们重新实现 != 运算符，可以如下做：

__int64 my_not_equals (const __int64 *start_args, size_t num_args) {

    if( num_args != 2 )

        throw "bad func args";

    return (start_args[0] != start_args[1]);

}

eval64_register_v2( eval_struct, "!=",? my_not_equals);


（未完待续……）
