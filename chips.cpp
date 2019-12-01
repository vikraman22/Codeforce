#include <iostream>
using namespace std;

int main()
{
int n, i, k=0, m, a;

cin >> n;
int arr[n];
cin >> m;

for(i = 1; i <= n; i++)
{
     arr[k] = (i*(i+1))/2;
     k++;
}

k = 0;
while(arr[k] <= m)
{
     k++;
}

a = arr[k-1];

int y = a;

if(k < n)
cout << m-a;



else
{



}
cout << k;



return 0;
}
