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
   if (side1 == side2 && side2 == side3){
    cout << "it's equilateral" << endl;
}

else if (side1 != side2 || side2 != side3){
    cout << "it's scalene" << endl;
}
}
