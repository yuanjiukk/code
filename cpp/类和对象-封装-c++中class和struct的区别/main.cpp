#include<iostream>

//class 和 struct的区别
//class对象的成员的默认权限为私密
//struct对象的成员的默认权限为公共

class C1 {
	int m_A; //默认权限是私有权限
};

struct C2 {
	int m_A; //默认权限是公共权限
};

int main()
{
	C1 a;
	struct C2 b;	
	// a.m_A = 10; //报错，访问权限是私有。
	b.m_A = 10; //成功运行，访问权限是公共。
	std::cout << "b.m_A = " << b.m_A << std::endl;
}
