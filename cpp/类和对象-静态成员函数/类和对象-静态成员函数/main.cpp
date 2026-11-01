//
//  main.cpp
//  类和对象-静态成员函数
//
//  Created by feng on 2026/10/30.
//

#include <iostream>

//静态成员函数
//所有对象共享一个函数
//静态成员对象只访问静态成员变量

class Person {
public:
    
    //静态成员函数
    static void func() {
        m_A = 100; //静态成员函数可以访问 静态成员变量
        //m_B = 200； 静态成员函数 不可以访问 非静态成员变量，无法区分到底是哪个对象的m_B
        std::cout << "static void func调用" << std::endl;
    }
    
    static int m_A; //静态成员变量
    int m_B; //非静态成员变量
    
    //静态成员函数也是有访问权限的
private:
    static void func2() {
        std::cout << "static void func2调用" << std::endl;
    }
};

int Person::m_A = 0;

//有两种访问方式
void test01() {
    //1、通过对象访问
    Person p;
    p.func();
    
    //2、通过类名访问
    Person::func();
    
    //Person::func2(); 类外访问不到私有成员函数
}

int main(int argc, const char * argv[]) {
    test01();
    return EXIT_SUCCESS;
}
