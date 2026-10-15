#include<iostream>

//函数重载遇到默认参数，导致歧意，发生报错
void func(int a, int b = 10) {
	std::cout << "这是func(int a, int b = 10)" << std::endl;
}

void func(int a) {
	std::cout << "这是func(int a)" << std::endl;
}

//函数重载遇到引用和常数引用。
void func2(int &a) {
	std::cout << "这是func2(int &a)" << std::endl;
}

void func2(const int &a) {
	std::cout << "这是func2(const int &a)" << std::endl;
}

int main() {
	int a = 10;
	//func(a);
	func(a, 10);
	func2(a);
	func2(10);
}
