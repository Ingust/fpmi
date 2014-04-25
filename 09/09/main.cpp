#include <iostream>

using namespace std;

int main()
{
	int a;
	cin>>a;
	__asm
	{
		mov eax, a
		mov ebx, eax
		dec eax
		and eax, ebx
		mov a, eax
	}
	if(!a)
	cout<<"it is"<<endl;
	if(a)
	cout<<"it isn't"<<endl;
	return 0;
}