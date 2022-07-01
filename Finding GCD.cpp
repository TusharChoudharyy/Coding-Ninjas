#include <iostream>
using namespace std;

int main() {
	int a,b,hcf;
	cout<<"enter your numbers:"<<endl;
	cin>>a>>b;
	if(a>b)
	{
		swap(a,b);
	}
	for(int i=1; i<=b;++i)
	{
	if(a%i==0 && b%i==0)
	{
		hcf=i;
	}
	}
	cout<<"hcf is"<<endl;
	cout<<hcf;
}
