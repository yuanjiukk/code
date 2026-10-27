#include <iostream>

class Person {
public:

	Person() {
		std::cout << "Person的无参构造函数" << std::endl;
	}

	Person(int age, int Height) {
		std::cout << "Person的有参构造函数" << std::endl;
		m_Age = age;
		m_Height = new int(Height);
	}

	Person(const Person &p) {
		std::cout << "Person的拷贝构造函数应用" << std::endl;
		m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);
	}

	~Person() {
		std::cout << "Person的析构函数" << std::endl;
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
	}

	int m_Age;
	int* m_Height;
};

int main() {
	Person p(10, 160);
	Person p2(p);
	std::cout << "p.m_Age: " << p.m_Age << "p.m_Height: " << *p.m_Height << std::endl;
	std::cout << "p.m_Age: " << p.m_Age << "p.m_Height: " << *p.m_Height << std::endl;
}
