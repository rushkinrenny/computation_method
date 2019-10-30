#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double t_val,approx_val;
    cout<<fixed<<setprecision(7);
    cout<<"Enter true value and approximate value :\ntrue value = ";
    cin>>t_val;
    cout<<"approximate value = ";
    cin>>approx_val;
    double abs_error=fabs(t_val-approx_val);
    cout<<"absolute error   = "<< abs_error;
    cout<<"\nrelative error   = "<<abs_error/t_val;
    cout<<"\npercentage error = "<<(abs_error/t_val)*100;
}
