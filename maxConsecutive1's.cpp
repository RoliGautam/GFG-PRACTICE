//find the length of maximum consecutive 1's in a binary array...

#include<bits/stdc++.h>
using namespace std;

int maxLengthOfConsecutive1(int arr[], int n){
     int res = 0;
     int count = 0;
     for(int i = 0; i<n; i++){
         if(arr[i] != 0){
         count++;
           res = max(res, count);
         }else{
          count = 0;
         }
    }  
  return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }
   cout<<maxLengthOfConsecutive1(arr,n);
  return 0;
}
