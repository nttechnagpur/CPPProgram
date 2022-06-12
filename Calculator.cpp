#include<iostream>
using namespace std;
class Abc{
    int a,b,c;
public:
    void getdata(){
        cout<<"Enter Any Number";
        cin>>a>>b;
    }
    void add(){
        c=a+b;
        cout<<"\nAddition is "<<c;
    }
    void sub(){
        c=a-b;
        cout<<"\nSubtraction is "<<c;
    }
    void multi(){
        c=a*b;
        cout<<"\nMultiplication is "<<c;
    }
    void div(){
        c=a/b;
        cout<<"\nDivision is "<<c;
    }
};
int main(){
    Abc a1;
    a1.getdata();
    a1.add();
    a1.sub();
    a1.multi();
    a1.div();
    return 0;
}
