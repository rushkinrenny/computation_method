#include<iostream>
#include<math.h>
using namespace std;
int c[10],e[10],s=0;
double f(double x){
double val=0;
    for(int i=0;i<s;i++)
        val+=c[i]*(pow(x,e[i]));
    return val;
}

double bisectionMethod(double a, double b){
double c,f0,f1,f2;
if(f(a)*f(b)>=0){
    cout<<"you assumed wrong value of a and b";
    return 0;
}
do{
    f0=f(a);  //f0 is value of function at a
    f1=f(b);  //f1 is value of function at b
    c=(a+b)/2;
    f2=f(c);   //f2 is value of function at c
    if(f0*f2<0)
        b=c;
    else
        a=c;
    cout<<"Root = "<<c<<endl;
}while(fabs(f2)>0.001);  //when function value at any root is less than 0.001 then stop
return c;
}



int main(){
    double a,b;
char choice;
do{
    if(s==10)
        break;
    cout<<"Enter coefficient : ";
    cin>>c[s];
    cout<<"Enter exponent : ";
    cin>>e[s];
    s++;
    cout<<"Enter more term (y/n) : ";
    cin>>choice;
}while(choice=='Y' || choice=='y');
cout<<"f(x) = ";
for(int i=0;i<s;i++){
    cout<<c[i]<<"x^"<<e[i]<<" ";
    if(i<s-1 && c[i+1]>=0)
        cout<<"+ ";
}

cout<<"\n";
cout<<"Enter assumed value of roots (a and b) :\n";
cin>>a>>b;
cout<<"\n\n";
cout<<"approximate root is : "<<bisectionMethod(a,b);
return 0;
}








