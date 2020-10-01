/*Convert binary to decimal*/
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){
    int binary,rem=0,i=0,result=0;
    cout<<"Enter Binary number : ";
    cin>>binary;
    while(binary!=0){
        rem=binary%10;
        binary=binary/10;
        result=result+rem*pow(2,i);
        i++;
    }
    cout<<"Binary to decimal is:"<<result; // Binary number (base 2) convert into decimal number (base 10).
    getch();

}
