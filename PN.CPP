#include<iostream.h>
#include<conio.h>
void main(){
    int x,number,y = 0,temp = 0;
    clrscr();
    cout<<"Enter any number: ";
    cin>>x;
    x=number;
    while(number>0) {
        x=number%10;
        number=number/10;
        temp=temp*10+x;
    }
    if(temp==y) {
        cout<<"Not Palindrome";
    } else {
        cout<<"Number is Palindrome";
    }
    getch();
}