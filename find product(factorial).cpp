#include <iostream>
using namespace std;
int main() {
    int n;
    double factorial=1.0;
    cin >> n;
    cout << "Enter a +ve integer:"<<" "<<n<<endl;
    if (n<0){
        cout<<"NO FACTORIAL EXIST";
    	
    }
    else {
        for(int i=1;i<=n;++i) 
        {
            factorial=factorial*i;
        }
        cout<<"Factorial of= "<<n<<factorial;    
    }

    return 0;
}
