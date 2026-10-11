#include <iostream>

void funcPrint(const int& val)
{
	//val += 100;  //报错，设定打印函数值不能更改。
	std::cout << "a: " << val << std::endl;
}

int main()
{
	int a = 10;
	// int& ref = 10; //报错，必须给一个变量
	const int& ref = 10; //不报错，int temp = 10,const int& ref = temp;
	std::cout << "ref: " << ref << std::endl;
	//ref = 20; //报错
	//ref = a;
	//让形参不被修改
	a = 20;
	funcPrint(a);
}
