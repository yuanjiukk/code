#include <iostream>
//函数重载必须在一个作用域下
//函数的名称相同
//函数参数的类型不同，顺序不同，数量不同

void func()
{
	std::cout << "这是func" << std::endl;
}

void func(int a)
{
	std::cout << "这是func: int a" << std::endl;
}

void func(double a)
{
	std::cout << "这是func: double a" << std::endl;
}

void func(int a, double b) 
{
	std::cout << "这是func: int a, double b" << std::endl;
}

void func(double a, int b) {
	std::cout << "这是func: double a, int b" << std::endl;
}

//函数的返回值不能作为重载条件
//int func() 
//{
//	std::cout << "这是func: return 3" << std::endl;
//	return 3;
//}


int main() 
{
	func();
	func(1);
	func(2.3);
	func(1, 2.3);
	func(2.3, 1);
}
