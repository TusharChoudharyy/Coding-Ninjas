#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int sum=0;
    for(int i=0; i<=N; i++){
        if(i%2==0){
            sum = sum + i;
        }
    }
    cout<<sum;
}
