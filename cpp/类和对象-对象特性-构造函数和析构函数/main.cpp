#include <iostream>

class Person {
public:
	//1.构造函数
	//没有返回值 不写void
	//函数名与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象的时候，构造函数会自动调用，而且只调用一次
	Person() {
		std::cout << "构造函数调用" << std::endl;
	}

	//2.析构函数
	//没有返回值 不写void
	//函数名与类名相同 在名称前加~
	//析构函数不可以有参数，不可以发生重载
	//对象在销毁前会自动调用析构函数，而且只会调用一次
	~Person() {
		std::cout << "析构函数调用" << std::endl;
	}
};

int main() {
	Person k;
}
