include <bits/stdc++.h>
using namespace std;
int main() {
	int b;
	char g;
	cin>>b>>g;
	float hra=0.20*b;
	float da=0.50*b;
	float allow;
	if (g=='A') allow=1700;
	else if (g=='B') allow = 1500;
	else allow = 1300;
	float pf=(0.11*b);
	float totalSalary=b+hra+da+allow-pf;
	cout<<llround(totalSalary)<<endl;
	return 0;
}
