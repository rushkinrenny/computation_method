#include<iostream>
#include<math.h>
using namespace std;
int g_exp[10],h_exp[10],g_coef[10],h_coef[10],g=0,h=0;
double y(double x){
    double g_val=0,h_val=0;
for(int i=0;i<g;i++){
    g_val+=g_coef[i]*(pow(x,g_exp[i]));
}
for(int i=0;i<h;i++){
    h_val+=h_coef[i]*(pow(x,h_exp[i]));
}
return g_val/h_val;
}
double trapezoidal(double  a, double b, double n){
    double s = y(a)+y(b);
for (int i=1;i<n;i++){
    s+=2*y(a+i);
}
return 0.5*s;

}
int main(){
char choice;
cout<<"Integration in the form of f(x) = g(x)/h(x)\nfor g(x) :\n";

do{ if(g==10)
    break;
    cout<<"Enter coefficient :";
    cin>>g_coef[g];
    cout<<"Enter exponent :";
    cin>>g_exp[g];
    g++;
    cout<<"Enter more term (y/n): ";
    cin>>choice;
}while(choice == 'Y' || choice == 'y');
cout<<"for h(x):\n";
do{ if(h==10)
    break;
    cout<<"Enter coefficient :";
    cin>>h_coef[h];
    cout<<"Enter exponent :";
    cin>>h_exp[h];
    h++;
    cout<<"Enter more term (y/n): ";
    cin>>choice;
}while(choice == 'Y' || choice == 'y');
//print function
cout<<"f(x) = ";
for(int i=0;i<g;i++){
    cout<<g_coef[i]<<"x^"<<g_exp[i];
    if(i<g-1 && g_coef[i+1]>0)
        cout<<" +";
}
cout<<"/";
for(int i=0;i<h;i++){
    cout<<h_coef[i]<<"x^"<<h_exp[i];
    if(i<h-1 && h_coef[i+1]>0)
        cout<<" +";
}
double a,b,n;
cout<<"\nEnter integration limit (a to b )\na = ";
cin>>a;
cout<<"b = ";
cin>>b;
n=b-a;
cout<<trapezoidal(a,b,n);

return 0;
}

