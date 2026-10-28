#include <iostream>

class Person {
public:
    //传统初始化方式初始化成员变量
    //Person(int age, int height, int power) {
    //    m_Age = age;
    //    m_Height = height;
    //    m_Power = power;
    //}

	//初始化列表方式初始化成员变量
    Person(int age, int height, int power): m_Age(age), m_Height(height), m_Power(power){}

    void showPerson() {
        std::cout << "年龄：" << m_Age << "\t" << "身高：" << m_Height << "\t" << "力量：" << m_Power;
    }
    int m_Age;
    int m_Height;
    int m_Power;
};

int main()
{
    Person p(11, 20, 31);
    p.showPerson();
    return 0;
}
