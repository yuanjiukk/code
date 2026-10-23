#include <iostream>
#include "Cube.h"

int cS(Cube& c) {
	return (c.getL() * c.getW() + c.getL() * c.getH() + c.getW() * c.getH()) * 2;
}

int cV(Cube& c) {
	return c.getL() * c.getW() * c.getH();
}

int main() {
	Cube c;
	c.setL(10);
	c.setW(10);
	c.setH(10);
	std::cout << "成员函数计算的立方体的长为：" << c.getL() << std::endl;
	std::cout << "成员函数计算的立方体的宽为：" << c.getW() << std::endl;
	std::cout << "成员函数计算的立方体的高为：" << c.getH() << std::endl;
	std::cout << "成员函数计算的立方体的面积为：" << c.cS() << std::endl;
	std::cout << "成员函数计算的立方体的体积为：" << c.cV() << std::endl;
	std::cout << "全局函数计算的立方体的面积为：" << cS(c) << std::endl;
	std::cout << "全局函数计算的立方体的体积为：" << cV(c) << std::endl;

}
