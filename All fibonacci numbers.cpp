#include<bits/stdc++.h>
using namespace std;

int main(){
	int num1=0, num2=1, N, num3;
	cin>>N;
	cout<<"N:"<<N<<endl;
	cout<<"All num between 1 to N: ";
	for(int i=0; i<=N; i++){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"Fibonacci series ";
	for(int j=0; j<N; ++j){
		num3 = num1 + num2;
		cout<<num3<<" ";
		num1 = num2;
		num2 = num3;
	}
}
