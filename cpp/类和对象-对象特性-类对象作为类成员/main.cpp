#include <iostream>
#include <string>

class Phone {
public:
       	Phone(std::string phone): m_NPhone(phone) {
	        std::cout << "Phone类的初始化" << std::endl;
	}

	~Phone() {
		std::cout << "Phone类的析构" << std::endl;
	}

	std::string m_NPhone;
};

class Person {
public:
	Person(std::string name, std::string phone) : m_Name(name), m_Phone(phone) {
		std::cout << "Person类的初始化" << std::endl;
	}

	~Person() {
		std::cout << "Person类的析构" << std::endl;
	}

	void playPhone() {
		std::cout << m_Name << "拿着：" << m_Phone.m_NPhone << std::endl;
	}

	//属性
	std::string m_Name;
	Phone m_Phone;
};

				
void test01() {
	//当类中成员是其他类对象时，我们称该成员为 对象成员
	//构造的顺序是：先调用对象成员的构造，再调用本类构造
	//析构顺序与构造相反
	Person p("张三", "苹果MAX");
	p.playPhone();
}
				
int main() {
	test01();
}
