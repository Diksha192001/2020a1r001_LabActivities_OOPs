#include<iostream>
using namespace std;
class complex{
    int real, imag;
    public: void input(){
        cout<<"Enter the real part for first number: ";
        cin>>real;
        cout<<"Enter the imaginary part for the first number: ";
        cin>>imag;

    }
    void input_val(){
        cout<<"\nEnter the real part for second number: ";
        cin>>real;
        cout<<"Enter the imaginary part for the second number: ";
        cin>>imag;
    }
    complex add(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void display(){
        cout<<"\n"<<"The resulting complex number is: ";
        cout<<real<<"+"<<imag<<"i";
    }
};
int main(){
    complex c1, c2, c3;
    c1.input();
    c2.input_val();
    c3=c1.add(c2);
    c3.display();
}