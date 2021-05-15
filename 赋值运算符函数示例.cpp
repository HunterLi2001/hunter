//赋值运算符函数主要解决在对象整体赋值时，造成指针指向同一个地址，从而在析构时删除一个不存在的指针变量的问题（指针悬挂）
#include <iostream>
#include <string>
using namespace std;
class A 
{
	//...
public:
	A& operator=(const A& s);
	//...
};
A::A& operator=(const A& s)
{
	if (this == &s)
		return *this;
	delete ptr;
	ptr = new char[strlen(s.ptr) + 1];
	strcpy(ptr, s.ptr);
	//...(其他非指针类变量直接赋值)
	return *this;
}
int main()
{
	A x(/*...*/), y;
	y = x;//此时调用赋值运算符函数
}