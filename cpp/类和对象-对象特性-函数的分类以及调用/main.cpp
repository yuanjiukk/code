#include <iostream>

//构造函数分类
//按照参数分类，分为有参构造和无参构造 （无参构造又称默认构造函数）
//按照类型分类，分为普通构造和拷贝函数
class Person {
public:
	//1.构造函数
	//1.1无参（默认）构造函数
	Person() {
		std::cout << "Person类无参构造" << std::endl;
	}

	//1.2有参构造函数
	Person(int a) {
		m_Age = a;
		std::cout << "Person类有参构造" << std::endl;
	}

	//1.3拷贝构造函数
	Person(const Person& p) {
		m_Age = p.m_Age;
		std::cout << "Person类拷贝构造" << std::endl;
	}

	//析构函数
	~Person() {
		std::cout << "Person类析构函数实现" << std::endl;
	}

//private:
	int m_Age;
};

int main() {
	//Person p; //无参构造
	//调用有参构造函数
	//1.括号法(最常用)
	//Person p2(10); //有参构造
	//Person p3(p2);  //拷贝构造
	//注意1：调用有参构造函数不能加括号，如果加了编译器认为这是一个函数声明。
	//Person p2();
	
	//2.显式法
	//Person p2 = Person(10);
	//Person p3 = Person(p2);
	//Person(10)单独写就是匿名对象 当前行运行结束之，后马上析构
	//Person(10);
	//注意2：不能利用拷贝构造函数初始化匿名对象，编译器会认为是对象声明(括号法调用有参构造函数)。
	//Person(p);
	
	//3.隐式法
	Person p2 = 10; //等价于Person p = Person(10)。
	Person p3 = p;	//等价于Person p2 = Person(p)。
	return 0;
}
