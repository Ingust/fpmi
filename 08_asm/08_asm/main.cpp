#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	__asm
	{
		mov eax, b
		add a, eax
	}
	cout<<a<<endl;
	return 0;
}