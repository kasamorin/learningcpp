#include "add.h"
#include <plog/Log.h> 
#include <plog/Initializers/RollingFileInitializer.h> // 第三方日志记录库
#include <iostream>
#define GUNMU
#define ENABLE_DEBUG

/*
要尽量提高编译器发现缺失include的概率，建议按以下顺序排列#includes：

    1.与当前cpp文件对应的h文件
    2.本项目中的其它头文件
    3.第三方库的头文件
    4.标准库的头文件

每个分组的头文件应按字母顺序排序（除非第三方库的文档有明确指示）。
*/

int main()
{
    plog::init(plog::debug, "Logfile.txt"); // 初始化plog并指定输出文件

    std::cout << "14 + 18 = " << add(14,18) << GUNMU'\n';
    std::cout << "段错误（核心已转存 [doge] ）" << '\n';
    std::cout << getValue() << '\n';
#ifdef ENABLE_DEBUG
std::cerr << "一种基础的调试方法，使用宏\n";
std::clog << "写入标准错误流的输出\n";
#endif
    return 0;
}