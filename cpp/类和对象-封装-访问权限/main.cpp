#include<iostream>
#include<string>

class Person {
public:
	std::string m_Name;
protected:
	std::string m_Cat;
private:
	int m_CartPasswd;
public:
	void func() {
		m_Name = "李四";
		m_Cat = "王五";
		m_CartPasswd = 12345;	
	}

	void print() {
		std::cout << "m_Name: " << m_Name << "\t" << "m_Cat: " << m_Cat << "\t" << "m_CartPasswd: " << m_CartPasswd << std::endl;
	}
};

int main() {
	Person haha;	
	haha.m_Name = "nihao";
	//haha.m_Cat = "nihao1"; 无法访问保护权限的成员
	//haha.m_CartPasswd = 123; 无法访问私有权限的成员
	haha.func();
	haha.print();
}
