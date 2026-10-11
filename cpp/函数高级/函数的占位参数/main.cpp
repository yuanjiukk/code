#nclude <iostream>

//C++中函数的形参列表里可以有占位参数，用来占位，调用函数时必须填补该位置

//函数占位，占位参数也可以有默认参数
void func(int a, int)
{
	std::cout << "this is func" << std::endl;
}

void func2(int a, int = 10)
{
	std::cout << "this is func2" << std::endl;
}

int main()
{
	func(10, 10);
	func2(10);
}
