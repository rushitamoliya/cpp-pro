#include<iostream>
using namespace std;
int main()
{
	char o;
	float num1,num2;
	cout<<"enter operator(+,-,*,/) ";
	cin>>o;
	cout<<"enter two number "<<endl;
	cin>>num1>>num2;
	switch(o)
	{
		case'+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;	
		case'-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2;
			break;
		case'*':
			cout<<num1<<"*"<<num2<<"="<<num1*num2;
			break;
		case'/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2;
			break;
		default:
			cout<<"operator is not correct";
			break;								
	}
	return 0;
	
}
