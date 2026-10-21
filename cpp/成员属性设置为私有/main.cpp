#include<iostream>
#include<string>

//1、可以自己控制读写权限
//2、对于写权限，可以检测数据的有效性

class Person {
public:
	//行为
	//写入姓名
	void writeN(const std::string& name){
		m_Name = name;
	}
	//读姓名
	std::string& getN(){
		return m_Name;
	}

	//写入年龄
	void writeA(const int& age) {
		if(age < 0 || age > 150) {
			std::cout << "m_Age输入有误" << std::endl;
			return ;
		}
		m_Age = age;
	}
	//读出年龄
	int& getA() {
		return m_Age;
	}
	//写入偶像
	void writeI(const std::string& idol) {
		m_Idol = idol;
	}	


private:
	std::string m_Name; //姓名 可读可写

	int m_Age = 18; //年龄 可读可写（写入数据必须在0~150岁之间）

	std::string m_Idol; //偶像 只写

};

int main() {
	Person b;
	//b.m_Name = "haha";
	b.writeN("haha");
	std::cout << "b.m_Name: "<< b.getN() << std::endl;
	//b.m_Age = 18;
	std::cout << "修改前b.m_Age: "<< b.getA() << std::endl;
	b.writeA(10);
	std::cout << "修改后b.m_Age: "<< b.getA() << std::endl;
	//b.m_Idol = "华新";
	b.writeI("华新");
}
