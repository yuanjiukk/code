#include <iostream>

class Person {
public:
    Person(int age)
    {
        //this指针指向 被调用的成员函数 所属的对象
        this->age = age;
    }

    //调用拷贝构造
    //Person PersonAddAge(Person& p) {
    //    this->age += p.age;

    //    //this是指向p2的指针，而*this指向的就是p2这个对象本体
    //    return *this;
    //}

    //返回本体用引用的方式返回
    Person& PersonAddAge(Person& p) {
        this->age += p.age;

        //this是指向p2的指针，而*this指向的就是p2这个对象本体
        return *this;
    }



    int age;
};

//1.解决名称冲突
void test01() {
    Person p1(18);
    std::cout << "p1的年龄为：" << p1.age << std::endl;
}


//2.返回对象本身用*this
void test02() {
    Person p1(10);

    Person p2(10);

    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    std::cout << "p2的年龄为：" << p2.age << std::endl;
}

int main() {
    //test01();
    test02();
}
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
