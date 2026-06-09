#include "add.h" // 在源代码中包含文件自己的头文件
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h> // 引入第三方日志记录器
#include<iostream>
#define DONGBEI

#ifdef DONGBEI //从这里开始编译
int add(int x,int y)
{
    /* std::clog << "add() called\n"; // 写入日志 类似与std::cerr 通过标准错误流 */
    PLOGD << "add() called\n";
    return x + y;
}

int getValue()
{
    PLOGD << "getValue() called\n";
    return 4;
}
#endif //到这里结束编译

#ifndef YUJIE // 从这里开始不编译
int test(int x,int y)
{
    PLOGD << "test() called";
    return x * y;
}
#endif // 到这里结束不编译

#if 0 //从这里开始不编译，如果是 if 1，则从这里开始编译
    std::cout << "公益直播请勿刷礼物\n";
#endif