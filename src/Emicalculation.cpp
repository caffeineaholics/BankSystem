#include <math.h>
#include <iostream>
using namespace std;
float emi_calculator(float p, float r, float t)
{
    float emi;

    r = r / (12 * 100); // one month interest
    t = t * 12; // one month period
    emi = (p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1);

    return (emi);
}

// Driver Program
int main()
{
    float principal, rate, time, emi;

    cout<<"Enter the Principal Amount"<<endl;
    cin>>principal;
    cout<<"Enter the Interest Rate "<<endl;
    cin>>rate;
    cout<<"Enter the Duration in years"<<endl;
    cin>>time;
    emi = emi_calculator(principal, rate, time);
    cout<<emi<<" Rs/month"<<endl;

    return 0;
}
