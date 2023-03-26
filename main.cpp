#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"inserire tre numeri reali"<<endl;
    cin >> a >> b >> c;
    cout<<"area triangolo="<< ((a*b)/2)<<endl;
    cout<<"area quadrato="<<a*a<<endl;
    cout<<"area rettangolo="<<a*b<<endl;
    cout<<"area trapezio="<<((a+b)*c)/2<<endl;
return 0;
}
