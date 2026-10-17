#include<iostream>

const double Pi = 3.14;

class Circle {
//权限
public:
	//属性
	//圆的半径
	int m_r;
	//行为
	//计算圆的周长
	double calcuC() {
		return 2 * Pi * m_r;	
	}
};

int main() {
	Circle a;
	a.m_r = 10;
	std::cout << "圆的周长为：" <<  a.calcuC() << std::endl;	
}
