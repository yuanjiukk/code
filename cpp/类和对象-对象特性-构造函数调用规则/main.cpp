#include <iostream>

//默认情况下C++编译器至少给一个函数类提供3个函数
//1.默认构造函数，无参，函数体为空
//2.默认析构函数，有参，函数体为空
//3.默认拷贝构造函数，对属性进行值拷贝



class Person {
	public:
//		Person() {
//			std::cout << "Person的默认构造函数" << std::endl;
//		}

//		Person(int age) {
//			m_Age = age;
//			std::cout << "Person的有参构造函数" << std::endl;
//		}

		Person(const Person& p) {
			m_Age = p.m_Age;
			std::cout << "Person的拷贝构造函数" << std::endl;
		}

		~Person() {
			std::cout << "Person的析构函数" << std::endl;
		}

		int m_Age;
};

//1.如果用户定义有参构造函数，C++不再提供无参构造函数，但会提供默认拷贝构造函数
void test01() {
	Person p;
	Person p2(10);
	Person p3(p2);
}

//2.如果用户定义拷贝构造函数，C++不再提供其他构造函数
void test02() {
	Person p;
}

int main() {
	test01();
	test02();
}
