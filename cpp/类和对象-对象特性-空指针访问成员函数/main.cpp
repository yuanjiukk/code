#include <iostream>

//空指针可以访问成员函数，但是也要注意有没有用到this指针

// 如果用到this'指针，需要加以判断保证代码的健壮性

//空指针来调用成员函数
class Person
{
public:

    void showClassName() {
        std::cout << "This is Person class." << std::endl;
    }

    void showPersonAge() { 
        //报错的原因是因为传入的指针是NULL

        if (this == NULL) {
            return;
        }

        std::cout << "age = " << this->Age << std::endl;
    }

    int Age;
};

void test01() {
    Person* p = NULL;

    //p->showClassName();

    p->showPersonAge();
}


int main()
{
    test01();;
}

