#include <iostream>
using namespace std;
class sample
{
    int p;
    int r;
    int t;
    int SI;
    int total;

public:
    sample(int p1, int r1, int t1)
    {
        p = p1;
        r = r1;
        t = t1;
    }
    void displaySI()
    {
        SI = (p * r * t) / 100;
        cout << SI << endl;
    }
    void displayAmt()
    {
        total = p + SI;
        cout << total;
    }
};
int main()
{
    sample s(2, 4, 3);
    s.displaySI();
    s.displayAmt();
    return 0;
}