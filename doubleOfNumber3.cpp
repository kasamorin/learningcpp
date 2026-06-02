// 在学习函数参数后再次编写
#include <iostream>

int getNumberFromUser()
{
    std::cout << "请输入一个整数: ";
    int input{};
    std::cin >> input;
    return input;
}

void printDouble(int inputNum) // inputNum 是函数参数，可在后续调用中赋值，如main中的printNumI(num)
{
    std::cout << "该数的两倍是: " << inputNum * 2 << '\n';
}

int main()
{
    /* int num{ getNumberFromUser() };
     * printDouble(num); // 给函数参数赋值num并执行函数
     * num仅仅使用一次，可进行简化，如下
     */
    printDouble( getNumberFromUser() ); // 更加简洁，但不易阅读，两种方法皆可
    return 0;
}