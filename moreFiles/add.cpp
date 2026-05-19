#include<iostream>
#define DONGBEI

#ifdef DONGBEI //从这里开始编译
int add(int x,int y)
{
    return x + y;
}
#endif //到这里结束编译

#ifndef YUJIE // 从这里开始不编译
int test(int x,int y)
{
    return x * y;
}
#endif // 到这里结束不编译