#include <iostream>

class Person {
public:
	Person() {
		std::cout << "Person的默认构造函数" << std::endl;
	}

	Person(const Person& p) {
		m_Age = p.m_Age;
		std::cout << "Person的拷贝构造函数" << std::endl;
	}

	~Person() {
		std::cout << "Person的析构函数" << std::endl;
	}

	int m_Age;
};

void test01(Person p) {
	std::cout << "test01内p的地址：" << (int*)&p << std::endl;
}

Person test02() {
	Person p2;	
	std::cout << "test02内的p2地址为：" << (int*)&p2 << std::endl;
	return p2;
}

void test03() {
	Person p3 = test02();
	std::cout << "p3: " << (int*)&p3 << std::endl;
}

int main() {
	// 1.使用一个已经创建完毕的对象来初始化一个新对象
	Person p;
	std::cout << (int*)&p << std::endl;
	Person p2(p);
	std::cout << (int*)&p2 << std::endl;
	std::cout << "p2" << std::endl;
	
	// 2.以值传递的方式给函数参数传值
	test01(p);
	std::cout << "test01" << std::endl;
	
	// 3.以值方式返回局部对象
	test03();
	std::cout << "test03" << std::endl;
	//注:这里在编译时要使用-fno-elide-constructors，c++17以上强制执行返回值优化（RVO）或移动语义（Move Semantics），防止编译器省略构造函数。
}
