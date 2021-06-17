//find the maximum profit to buy and sell

#include <bit/stdc++.h>
using namespace std;
int stockButAndSell(int arr[], int n){
    int profit = 0;
    for(int i = 1; i<n; i++){
        if(arr[i]>arr[i-1]){
            profit += arr[i] - arr[i-1];
        }
    }
    return profit;
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i<n; i++){
       cin>>arr[i];
   }
   cout<<stockButAndSell(arr, n);
    return 0;
}


I/P : 1 5 3 8 12
O/P : 13
Explanation : we buy on the first day(1) and then sell it on second day(5), so pofit will be 5-1 = 4
              Again we buy on third day(3) and sell it on fifth day(12), so profit will be 12-3 = 9
              Hence total profit will be 4+9 = 13;

Time Complexity : O(n)
Space Complexity : O(1)  
