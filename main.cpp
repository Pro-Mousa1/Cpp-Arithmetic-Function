#include <iostream>
using namespace std;
float  Area(int b,int h);
int main(){
    int base,height;
    float area;

    cout<<"Enter base"<<endl;
    cin>>base;
    cout<<"Enter height"<<endl;
    cin>>height;
    area= Area(base,height);
    cout<<"The area of the triangle is "<<area<<endl;
    return 0;
}
float Area(int b, int h){
    float a;
    a=0.5*b*h;
    return a;
}
