//�������캯����Ҫ������Ѿ����ڵĶ����ʼ���¶���ʱ����ɵ�ָ��ָ��ͬһ����ַ���Ӷ����ָ���������������
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
	//...(�����ָ�����ֱ�Ӹ�ֵ)
}
int main()
{
	A a;
	A b = a;//��ʱ���ÿ������캯��
}