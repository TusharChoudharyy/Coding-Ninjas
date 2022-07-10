#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t=1;
		for(int k=n;k-i>0;k--) {
			cout<<" ";
		}
		for(int j=i;t<=i;t++,j++) {
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
