//学习C++
#include <iostream>


int main()
{
    //int test = 114514; //可以在int时进行 （拷贝）初始化，不推荐
    //int example(1); //直接初始化
    //test = 114;
    int test1 {114}; //直接列表初始化
    int test2 = {514}; //使用拷贝列表初始化
    std::cout << test1 << test2 << std::endl;
    //std::endl在光标移动到控制台的下一行的同时刷新缓冲区，可能拖慢运行，推荐使用‘\n’
    
    //test = 514; //在变量赋值之后重新赋值
    //std::cout << test <<std::endl; //输出 514

    std::cout << "Hello World!" << std::endl;
    std::cout << "Dongbei\n";

    int test3 {}; //值列表初始化
    int test4 {};
    std::cout << test3 << " " << test4 << '\n'; //此处没有初始化，但后续进行了赋值
    std::cout << "Please enter two numbers separated by a space: ";
    std::cin >> test3 >> test4;
    std::cout << "You enterd " << test3 << " and " << test4 << '\n';

    std::cout << 114 << '\n';
    std::cout << 514 << test1 << '\n';

    int test5; 
    /*默认初始化或者说未初始化，推荐，在有大量变量时，
    每个变量都进行初始化十分缓慢，但需要在之后赋值，不
    然可能会产生意想不到的结果(出错)，如下*/
    std::cout << test5 << '\n';
    // 在C++ 26中，UB是错误行为

    std::cout << sizeof(int); //打印一个int占多少内存
    return 0;
}