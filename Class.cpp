#include<iostream>
using namespace std;
class Abc{ //Class
    int a,b,c; // Private
public: // Public
    // Getting Data
    void getdata(){
        cout<<"Enter Any Two Numbers: ";
        cin>>a>>b;
    }
    // Display Data
    void display(){
        c=a+b;
        cout<<"Addition "<<c<<"\n";
    }
};
// Main Function
int main(){
    Abc a1; // Object
    a1.getdata();
    a1.display();
    return 0;
}
