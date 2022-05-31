#include<iostream>
using namespace std;
class B;
class A
{
  private:
    int numA;
  public:
  	void input()
  	{
  		cout<<"Enter the First Number : ";
		cin>>numA;	
	}
    friend int add(A, B);
};
class B
{
  private:
    int numB;
  public:
  	void input()
  	{
  		cout<<"Enter the Second Number : ";
		cin>>numB;	
	}
    friend int add(A , B);
};
int add(A objectA, B objectB)
{
  return (objectA.numA + objectB.numB);
}
int main()
{
 	int c;
  	A objectA;
 	B objectB;
     cout<<"\t\tSUM OF TWO NUMBERS\n";
  	objectA.input();
  	objectB.input();
  	c = add(objectA,objectB);
  	cout<<"\nThe Sum of the two numbers is : "<<c;
  	return 0;
}