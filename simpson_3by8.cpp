#include<iostream>
using namespace std;
double y(double x){
return 1/(1+x*x);
}
double simpson_3by8(int a, int b, int n){
double s=y(a)+y(b);
double h=(b-a)/n;
for(int i=1;i<n;i++){
    if(i%3==0)
        s+=2*y(i);
    else
        s+=3*y(i);
}
return (3.0/8.0)*h*s;
}
int main(){
int a,b,n;
cout<<"function = 1/(1+x*x)\n";
cout<<"Enter limits :\na = ";
cin>>a;
cout<<"b = ";
cin>>b;
cout<<"Enter value of interval (n) = ";
cin>>n;
cout<<"result = "<<simpson_3by8(a,b,n);
return 0;
}
