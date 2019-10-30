/*
  The secant method is used to find the root of an equation f(x) = 0.
  It is started from two distinct estimates x1 and x2 for the root.
  It is an iterative procedure involving linear interpolation to a root.
  The iteration stops if the difference between two intermediate values is less than convergence factor.
  General Formula :-
  Xn+1 = Xn-1 * F(Xn) – Xn-1 * F(Xn-1)/F(Xn)-F(Xn-1)
  Where  n=1,2,3,…..

*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int c[10],e[10],s=0;
double f(double x){
float val=0;
for(int i=0;i<s;i++)
    val+=c[i]*(pow(x,e[i]));
    return val;
}
double secantMethod(double x0, double x1){
    cout<<fixed<<setprecision(6);
double x2=(x0*f(x1) - x1*f(x0))/(f(x1)-f(x0));
if(fabs(f(x2))<0.0001)
    return x2;
else{
        static int i=0;
    cout<<++i<<"approximate roots = "<<x2<<endl;
    x0=x1;
    x1=x2;
    return secantMethod(x0,x1);
}
}
int main(){
char choice;
do{
    if(s==10)
        break;
    cout<<"Enter coefficient : ";
    cin>>c[s];
    cout<<"Enter exponent : ";
    cin>>e[s];
    s++;
    cout<<"Enter more(y/n) :";
    cin>>choice;
}while(choice == 'Y' || choice == 'y');
cout<<"f(x) = ";
for(int i=0;i<s;i++){
    cout<<c[i]<<"x^"<<e[i]<<" ";
    if(i<s-1 && c[i+1]>=0)
        cout<<"+ ";
}
double x0,x1;
cout<<"\nEnter assumed interval in which roots lie :\nx0 = ";
cin>>x0;
cout<<"x1 = ";
cin>>x1;
if(f(x0)*f(x1)<0)
    cout<<"\nApproximate root is "<<secantMethod(x0,x1);
else
    cout<<"assumed wrong value of x0 and x1 ";

}

