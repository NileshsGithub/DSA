#include <iostream>
using namespace std;

 int reverseInteger(int n){
    int ans = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if (ans > INT16_MAX / 10 || ans < INT16_MIN / 10)
        {
            return 0;  
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans;
}

int main()
{
    reverseInteger(6777);
    
}