//��ֵ�����������Ҫ����ڶ������帳ֵʱ�����ָ��ָ��ͬһ����ַ���Ӷ�������ʱɾ��һ�������ڵ�ָ����������⣨ָ�����ң�
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
	//...(������ָ�������ֱ�Ӹ�ֵ)
	return *this;
}
int main()
{
	A x(/*...*/), y;
	y = x;//��ʱ���ø�ֵ���������
}