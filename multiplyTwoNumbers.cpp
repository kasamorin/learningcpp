// 从用户获取两个整数并相乘
#include <iostream>

int getNumberFromUser()
{
    int input{};
    std::cout << "请输入一个整数: ";
    std::cin >> input;
    return input;
}

int multiplyTwoNumbers(int x,int y)
{
    int result{ x * y };
    return result;
}

void computeAndReturnResult()
{
    int output{ multiplyTwoNumbers(getNumberFromUser(),getNumberFromUser()) };
    std::cout << "两数相乘为: " << output << '\n';
}

int main()
{
    computeAndReturnResult();
    return 0;
}