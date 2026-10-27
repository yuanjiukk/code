#include <iostream>

//如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
class Person {
public:

	//无参（默认）构造函数
	Person() {
		std::cout << "Person的无参构造函数" << std::endl;
	}

	//有参构造函数
	Person(int age, int Height) {
		std::cout << "Person的有参构造函数" << std::endl;
		m_Age = age;
		m_Height = new int(Height);
	}

	//自己实现拷贝构造函数 解决浅拷贝带来的问题
	Person(const Person& p) {
		std::cout << "Person的拷贝构造函数应用" << std::endl;

		//浅拷贝操作
		m_Age = p.m_Age;
		//m_Height = *p.m_Height; 编译器默认实现就是这行代码

		//深拷贝操作
		m_Height = new int(*p.m_Height);
	}

	//析构函数
	~Person() {
		std::cout << "Person的析构函数" << std::endl;

		//析构代码 将堆区开放数据做释放操作
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
	}

	//成员属性
	int m_Age; //年龄
	int* m_Height; //身高
};

void test01() {
	Person p(10, 160);
	std::cout << "p.m_Age: " << p.m_Age << "\t" << "p.m_Height: " << *p.m_Height << std::endl;
	Person p2(p);
	std::cout << "p.m_Age: " << p.m_Age << "\t" << "p.m_Height: " << *p.m_Height << std::endl;
}
int main() {
	test01();
}
