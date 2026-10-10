#include <iostream>

//引用的本质在c++是一个指针常量

void func(int& ref) {
	ref = 100; //ref是引用，转换为*ref = 100
}

int main() {
	int a = 10;
	std::cout << "a: " << a << std::endl;
	int& ref = a; //int& ref = a == int * const ref = &a
	std::cout << "ref: " << ref << std::endl;
	ref = 20; //内部发现ref为引用，转换为*ref = 20
	std::cout << "a: " << a << std::endl;
	std::cout << "ref: " << ref << std::endl;
	func(a);
	std::cout << "a: " << a << std::endl;
	std::cout << "ref: " << ref << std::endl;
}
