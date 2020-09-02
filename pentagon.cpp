#include <iostream>
using namespace std;
int main()
{
    int n;
    long int sum = 0;
    cin >> n;
    if(n==1)
        cout << n;
    else
    {
        for(int i = 1; i <= n-1; i++)
        {
            sum += 5*i;
        }
        cout << sum+1;
    }


}
