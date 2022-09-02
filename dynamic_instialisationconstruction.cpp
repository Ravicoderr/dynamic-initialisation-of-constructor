#include <iostream>
using namespace std;
class bank
{
    int principal;
    int year;
    float rate;
    float returnvalue;

public:
    bank() {}
    bank(int p, int y, float r);
    bank(int p, int y, int r);
    void show();
};
bank::bank(int p, int y, float r)
{
     principal = p;
     year = y;
     rate = r;
     returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
bank::bank(int p, int y, int r)
{
     principal = p;
     year = y;
     rate = float(r) / 100;
     returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
void bank::show()
{
    cout << "the principal amount is " << principal
         << " the amount is submitted for years " << year << " the rate is "
         << rate << " the return value is " << returnvalue << endl;
}
int main()
{
    bank b1, b2, b3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p,y,r" << endl;
    cin >> p >> y >> r;
    b1 = bank(p, y, r);
    b1.show();

    cout << "enter the value of p,y,R" << endl;
    cin >> p >> y >> R;
    b2 = bank(p, y, R);
    b2.show();
    return 0;
}