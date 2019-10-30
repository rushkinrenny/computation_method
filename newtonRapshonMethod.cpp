#include<iostream>
#include<math.h>
using namespace std;
int c[10],e[10],c_dash[10],e_dash[10],
s=0,s_dash=0;//size of function and its derivative
double f(double x){
double val=0;
for(int i=0;i<s;i++)
    val+=c[i]*(pow(x,e[i]));    //calculate value of function at x
return val;
}
void diff(){
for(int i=0;i<s;i++){
    if(e[i]!=0){
        c_dash[s_dash]=c[i]*e[i];     //provide derivative function
        e_dash[s_dash]=e[i]-1;
        s_dash++;
    }
}
}
double f_derivative(double x){
double val=0;
for(int i=0;i<s_dash;i++)
    val+=c_dash[i]*(pow(x,e_dash[i]));   //provide value of derivative function at x
    return val;
}
double newtonRapshon(double x0){
double x1,h;
h=f(x0)/f_derivative(x0);
x1= x0 - h;
if(fabs(f(x1))<0.001)
    return x1;
else {
        static int i=0;
cout<<++i<<" approximate root is : "<<x1<<endl;
    x0=x1;
    return newtonRapshon(x0);
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
    cout<<"Enter more term (y/n) : ";
    cin>>choice;
}while(choice=='y' || choice=='Y');
cout<<"\n\nF(x) = ";
for(int i=0;i<s;i++)
{
    cout<<c[i]<<"x^"<<e[i];
    if(i<s-1 && c[i+1]>=0)
        cout<<" +";

}
diff();
cout<<"\nF'(x) = ";
for(int i=0;i<s_dash;i++){
    cout<<c_dash[i]<<"x^"<<e_dash[i];
    if(i<s_dash-1 && c_dash[i+1]>=0)
        cout<<" +";
}
cout<<"\n";
cout<<"Enter assumed root (x0) : ";
double x0;
cin>>x0;
double val=newtonRapshon(x0);

cout<<"\nfinal approximate root is : "<< val<<endl;
return 0;
}
