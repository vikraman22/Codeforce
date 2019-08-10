#include <iostream>
using namespace std;
int main()
{
    int n, c, i;
    long int count = 0, lim = 0, rash = 0, l, k;
    cin >> n;
    cin >> c;
    int point[n], time1[n];
    for(i = 0; i < n; i++)
    cin >> point[i];
    for(i = 0; i < n; i++)
    cin >> time1[i];
    
    l = time1[0];
    k = time1[n-1];
   
    for(i = 0; i < n; i++)
    {
        count = point[i] - (c * l);
        if(count < 0)
        count = 0;
        lim += count;
        l += time1[i+1];
    }
    
    for(i = n-1; i >= 0; i--)
    {
        count = point[i] - (c * k);
        if(count < 0)
        count = 0;
        rash += count;
        k += time1[i-1];
    }
    
    if(lim > rash)
    cout << "Limak" << endl;
    else if(lim==rash)
    cout << "Tie" << endl;
    else 
    cout << "Radewoosh" << endl;
    return 0;
}
