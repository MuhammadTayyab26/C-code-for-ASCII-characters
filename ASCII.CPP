#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a;
int b;
a=65;
while(a<=92)
{
cout<<"ASCII code "<<"\t"<<a<<" \t"<<char(a)<<endl;
a++;
}
cout<<endl;
b=102;
while(b<=165)
{
	cout<<"ascii is "<<"\t"<<b<<"\t"<<char(b)<<endl;
	b++;
}
getch();
return 0;
}
