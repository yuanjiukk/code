#include <iostream>

class Person {
public:
	
	Person() {
		std::cout << "Person的无参构造函数应用" << std::endl;
	}

	//Person(const Person &p) {
	//	std::cout << "Person的拷贝构造函数应用" << std::endl;
	//	m_Age = p.m_Age;
	//	m_Height = new int(*p.Height);
	//}

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
	Person p;
	p.m_Age = 10;
	*p.m_Height = 160;
}
