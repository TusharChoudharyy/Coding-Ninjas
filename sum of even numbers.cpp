#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    cout<<N<<endl;
    int sum=0;
    for(int i=1; i<=N;i++){
        if(i%2==0){
            sum=sum+i;
        }
        cout<<"sum of even numbers are= "<<sum<<endl;
    }
}
