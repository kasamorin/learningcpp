#ifndef ADD_H
#define ADD_H
// 若在不同文件夹内有同文件名头文件，则需要更复杂的命名来进行头文件保护

int add(int x,int y);
int getValue();

#endif

// 尽量不要在头文件中包含函数定义，只放向前声明
// 在现代C++中，许多编译器可以使用 #pragma once 来进行头文件保护，如：
/*
#pragma once

int add(int x,int y);

*/
// 但这并不被所有编译器接受，因此建议使用传统头文件保护