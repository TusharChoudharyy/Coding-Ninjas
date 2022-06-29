//A + B > C, B + C > A and C + A > B
#include <iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    int triangle;
    cin>>side1;
    cin>>side2;
    cin>>side3;
    cout<<"value of sides:-"<<endl;
    cout<<"side1= "<<side1<<endl;
    cout<<"side2= "<<side2<<endl;
    cout<<"side3= "<<side3<<endl;
    //for a valid triangle sum of two sides should be greater than third sides
    if(side1+side2>side3 || side2+side3>side1 || side3+side1>side2){
        cout<<"YES";
        }
        else{
            cout<<"NO";
        }
}
