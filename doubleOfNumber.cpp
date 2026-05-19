// 将用户输入的数字翻倍
#include <iostream>

int main()
{
    int num {};
    std::cout << "请输入一个整数并回车：" ;
    std::cin >> num;
    std::cout << "该数的两倍是" << num * 2 << '\n';;
    return 0;
}