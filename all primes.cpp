#include<bits/stdc++.h>
using namespace std;

int main(){
	int Number, isprime;
	cin>>Number;
	cout<<"Number:"<<Number<<endl;
	for(int i=2; i<=Number; i++){
		isprime=0;
		for(int j=2; j<=i/2; j++){
			if(i%j==0){
				isprime=1;
			}
		}
		if(isprime==0 && Number!=1){
			cout<<i<<" ";
		}
	}
}
