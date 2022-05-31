#include<iostream>
using namespace std;
class factorial{

    private : int i, number;
    int fact=1;
    public: void input(){
        cout<<"Enter the number whose factorial you want: ";
        cin>>number;

    }
    void display(){
        for(i=1; i<=number; i++){
            fact=fact*i;
        }
        cout<<"\nThe factorial of the given number is: "<<fact;

    }
};
int main(){
    factorial f;
    cout<<"\t\tFACTORIAL\n";
    f.input();
    f.display();
    return 0;
}