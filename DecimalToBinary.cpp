/*Convert decimal to binary*/
#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    int decimal,rem=0;
    string str="";
    cout<<"Enter Decimal number : ";
    cin>>decimal;
    while(decimal!=0){
        rem=decimal%2;
        if(rem==1)
        str="1"+str;
        else
        str="0"+str;
        decimal/=2;
    }
    cout<<"Decimal to binary is : "<<str;
    getch();
}
