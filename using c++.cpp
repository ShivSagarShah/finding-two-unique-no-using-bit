#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], xorr = 0;
        // xor of all elements
        // If one unique number is there then question will be finished with
        // the "for loop".
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            xorr = xorr ^ a[i];
        }
        // position of first set bit in xorr
        // means first 1 from right
        int ans = xorr, pos = 0;
        while (ans)
        {
            if (ans & 1)
            {
                break;
            }
            pos++;
            ans = ans >> 1;
        }
        int mask = 1 << pos;
        // finding 1st number
        int num1 = 0, num2;
        for (int i = 0; i < n; i++)
        {
            if (mask & a[i])
            {
                num1 = num1 ^ a[i];
            }
        }
        num2 = num1 ^ xorr;
        if (num1<num2)
        {
            cout<<num1<<" "<<num2;
        }
        else
        {
            cout<<num2<<" "<<num1;
        }
    
    return 0;
}
