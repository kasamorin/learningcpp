// 学习C++ 函数
#include <iostream>

void doPrint() // 用户自定义函数 doPrint(),void 函数不会不会向调用方返回值
{
    std::cout << "In doPrint()\n";
}

void doAgain()
{
    doPrint();
    std::cout << "In doAgain()\n";
    //return; // void函数末尾不需要添加return,也不能返回值
}
/* 使用int作为函数时，需要存在return，如不存在，如下
 *❯ g++ fanctionLearn.cpp
 *fanctionLearn.cpp: In function ‘int doAgain()’:
 *fanctionLearn.cpp:13:1: 警告：在有返回值的函数中未发现 return 语句 [-Wreturn-type]
 *   13 | }
 *      | ^
 */


/* 此处定义了一个变量(已注释)，但在函数中没有使用，编译时编译器会警告。
 *此处有一个未命名参数，如果后续调用且赋予函数参数，则不能直接删除
 *，因为这会导致函数调用提供比可接受更多的参数。*/
int returnThree(/*int*/) 
{
    std::cout << "test";
    return 3;
}

/* 通常用以oo结尾的三字母无意义词和“bar”，“baz”等作为“元语法变量”
 *，元语法变量通常也被称为占位符名称 */
int foo(int x,int y)
{
    return x + y;
}

int main()
{
    std::cout << "Starting main()\n";

    doPrint(); // 执行doPrint函数
    doPrint(); // 重复执行测试
    doAgain();
    std::cout << returnThree() << '\n';
    std::cout << returnThree() * 3 << '\n';
    returnThree(); std::cout << '\n'; // 返回3，但返回值被忽略
    std::cout << foo(foo(100,14),returnThree()) << '\n'; 
    /*返回test117，test为returnThree所带。
    这里还可以嵌套带函数参数的函数(包括其本身)，此处不再演示*/

    std::cout << "Ending main() " << '\n';
    return 0;
}