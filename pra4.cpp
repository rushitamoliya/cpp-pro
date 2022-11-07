#include<iostream>
using namespace std;
int main()
{
	int i,n,fact=1;
	cout<<"enter number";
	cin>>n;
	cout<<endl<<n<<endl;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		cout<<"factorial "<<fact<<endl ;
		
	}
			
	return 0;
}
