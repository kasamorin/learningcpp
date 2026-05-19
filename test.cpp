#include <iostream>

int main()
{
    std::cout << 114514 << '\n';
    std::cout << "Hello World!\n";

    int a {};
    int b {};
    std::cout << a << " " << b << '\n'; // 此处a，b用于演示列表初始化赋空值
    std::cout << "Please enter two numbers separated by a space: ";
    std::cin >> a >> b; //手动输入给a，b赋值，先a，回车后是b，只能数字
    std::cout << "You entered: " << a << " and " << b << '\n';

    int c {514};
    std::cout << c << 114 << '\n';
    
    int d;
    std::cout << d << '\n'; //演示UB，正式编写请勿产生UB
    std::cout << "Memony of int is " << sizeof(int) << '\n';
    d = {123};

    std::cout << (1 + 2)*(1 - 2) << '\n' << d;
    (2 * 3); //没赋值，虽然可行，但没意义
    return 0;
}