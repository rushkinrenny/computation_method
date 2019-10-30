#include<iostream>
#include<math.h>
using namespace std;

double y(double x){
return 1/(1+x*x);
}
double simpson_1_by_3(int  a, int b,double n){
double s=y(a)+y(b),h=(b-a)/n;
for(int i=1;i<n;i++){
    if((a+i)%2!=0)
        s+=4*(y(a+i));
    else
        s+=2*(y(a+i));
}
return ((h/3)*s);
}
int main()
{
    int  a,b;
    double n;
    cout<<"fuction is 1/(1 + x*x)\n";
    cout<<"Enter limit of integration (a to b) :\na = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"Enter interval n (It should be multiple of 2 )";
    cin>>n;
    cout<<"result = "<<simpson_1_by_3(a,b,n);
    return 0;
}
