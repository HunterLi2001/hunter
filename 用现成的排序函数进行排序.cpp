#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	sort(a, a + 10, [](int a, int b) {return a > b; });
	for (auto j : a)
	{
		cout << j << endl;
	}
}
