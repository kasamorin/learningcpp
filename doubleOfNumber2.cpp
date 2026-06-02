//学习函数第二节后再次制作将用户输入的数字翻倍程序
#include <iostream>

int getNumberFromUser()
{
    std::cout << "请输入一个整数: ";
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    //int num{ getNumberFromUser() };
    //std::cout << "你输入的数字的两倍是: "<< num * 2 << '\n';
    // 重复使用函数制作两数相乘程序
    int num1{ getNumberFromUser() };
    int num2{ getNumberFromUser() };
    std::cout << "两数相乘得: " << num1 * num2 << '\n';
    return 0;
}