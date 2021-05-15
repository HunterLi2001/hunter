//拷贝构造函数主要解决用已经存在的对象初始化新对象时，造成的指针指向同一个地址，从而造成指针悬挂问题的问题
#include <iostream>
using namespace std;
class A 
{
	//...
public:
	A(const A& p);
	//...
};
A::A& (const A& p)
{
	ptr = new ptr[strlen(p.name) + 1];
	strcpy(name, p.name);
	//...(其余非指针对象直接赋值)
}
int main()
{
	A a;
	A b = a;//此时调用拷贝构造函数
}