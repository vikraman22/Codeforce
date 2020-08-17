#include <iostream>
#include <math.h>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
      int n, m, count = 0;
      long int demon_sum = 0;
      cin >> n >> m;
      long int arr[n];
      for(int i = 0; i < n; i++)
      {
            cin >> arr[i];
            if(arr[i] < 0)
            {
                  demon_sum += abs(arr[i]);
                  count++;
            }
            
            
            
      }   
       sort(arr, arr+n);
       
       for(int i = count; i <= count+(n-m); i++)
            {
                  demon_sum -= arr[i];
            } 
      
      cout << demon_sum;
}
