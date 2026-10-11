#include <iostream>

//在C++中，函数的形参列表中的形参是可以有默认值的。
int func(int a, int b = 2, int c = 10, int d = 5) 
{
	return a + b + c + d;
}

//如果某个位置有默认值，那么这个位置从左往右，必须都要有默认值。
//如果函数声明有默认值，函数实现的时候就不能有默认值。
int func2(int a = 10, int b = 10);
int func2(int a, int b) 
{
	return a + b;	
}

int main() 
{
	std::cout << "func: " << func(20, 20) << std::endl;
	std::cout << "func2: " << func2(100) << std::endl;

}
