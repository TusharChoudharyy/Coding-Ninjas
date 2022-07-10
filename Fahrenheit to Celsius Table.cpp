#include<bits/stdc++.h>
using namespace std;
int main(){
    int S, E, W;
    cin>>S>>E>>W;
    int c;

    while(S<=E){
        c = 5*(S-32)/9;
        cout<<S<<" "<<c<<endl;
        S = S + W;
    }
}
