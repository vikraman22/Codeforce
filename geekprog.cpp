#include <iostream>
#include <malloc.h>
#include <string.h>
using namespace std;
int* func(int* arr1, int n)
{
int *num = (int*)malloc(sizeof(int)*n);
int k = 0;
int v = n;
for(int i = 0; i < n; i++)
{
    if(arr1[i] != 0)
    {
        num[k] = arr1[i];
        k++;
    }
    else
    {
        num[v-1] = 0;
        v--;
    }

}
  return num;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

   int* k = func(arr,n);

   long long int aksh = 0;
   int mol = 1;
   for(int i = n-1; i >=0; i--)
        {
            aksh += k[i]*mol;
            mol = mol * 10;
        }
        cout << aksh;


}
