#include <iostream>
using namespace std;
class sample1
{
protected:
    float x, y, sum, diff;

public:
    void add()
    {
        sum = x + y;
        cout << "Sum = " << sum << endl;
    }
    void difference()
    {
        diff = x - y;
        cout << "Difference = " << diff << endl;
    }
};
class sample2 : public sample1
{
protected:
    float mul, div;

public:
    sample2(float x1, float y1)
    {
        x = x1;
        y = y1;
    }
    void multiplication()
    {
        mul = x * y;
        cout << "Product is = " << mul << endl;
    }
    void division()
    {
        div = x / y;
        cout << "Division = " << div << endl;
    }
};
int main()
{
    sample2 s2(8.0, 3.0);
    s2.add();
    s2.difference();
    s2.multiplication();
    s2.division();
    return 0;
}