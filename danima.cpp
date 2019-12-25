/*#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
 long int sere = 0, dima = 0;
 int n, i;
 cin >> n;
 int arr[n];
 int* point = (int*)malloc(n*sizeof(int));
 
 for(i = 0; i < n; i++)
 {
      cin >> arr[i];
      point[i] = arr[i];
 }
 
sort(point, point+n, greater<int>());
 
 
for(i = 0; i < n; i+=2)
sere += point[i];

for(i = 1; i < n; i+=2)
dima += point[i];

cout << " sere = " << sere << "dima = " << dima << endl;
     
} 



#include <iostream>
using namespace std;
int main()
{
     int n, i, k, j;
     cin >> n;
     int arr[n];
     long int sere = 0, dima = 0;
     
     for(i = 0; i < n; i++)
     cin >> arr[i];

     if(arr[0] < arr[n-1])
          k = n-1;
     else
          k = 0;
     
     if(k == n-1)
         {
              if(arr[0] < arr[n-2])
              j = n-2;
              else
              j = 0;
         }
     
     if(k == 0)
     {
          if(arr[1] < arr[n-1])
          j = n-1;
          else
          j = 1;
     }
     
     
     cout << k << " " << j << endl;
     
     if(k == 0 && j == n-1)
     {
          for(i = 0; i <= n/2; i++)
          sere += arr[i];
          for(j = n-1; j >= n/2; j--)
          dima += arr[j];
     }
     
    else if(k == n-1 && j == 0)
     {
           for(k = n-1; k >= n/2; k--)
             sere += arr[k];
           for(j = 0; j <= n/2; i++)
             dima += arr[j];
     }
     
     else if(k == n-1 && j == n-2)
     {
          for(k = n-1; k >=0; k-=2)
          sere += arr[k];
          for(j = n-2; j >=1; j-=2)
          dima += arr[j];
     }
     
     else if(k = 0 && j == 1)
     {
          for(k = 0; k < n; k+=2)
          sere += arr[k];
          for(j = 1; j <= n-2; j+=2)
          dima += arr[j];
          
     }


 cout << "sere = " << sere << "dima = " << dima << endl;   
} */



#include <iostream>
using namespace std;

long int dima = 0;
long int sere = 0;
int check(int *point,int n)
{
     int k = 0;
     int l = n;
     
     while()
     {
          sere += max(point[k], point[l]);
          
          cout << sere << endl;
          cout << dima << endl;
     }
     
     return sere;
}


int main()
{
    int n;     
    long int sere, sum = 0;
    cin >>n;
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
         cin >> arr[i];
    }
    
    long int ret_val = check(arr,n-1);
    
    cout << ret_val << endl;
    
    
}
