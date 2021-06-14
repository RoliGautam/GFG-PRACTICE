 // Question: https://practice.geeksforgeeks.org/problems/max-and-second-max/1/?track=amazon-arrays&batchId=192#
v
ector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        vector<int>v;
         for(int i = 0; i<sizeOfArray; i++){
             if(arr[i]>max){
                 max2 = max;
                 max = arr[i];
             }
             if(arr[i]>max2 && arr[i]<max){
              max2 = arr[i];
             }
            if(max == max2 || max2 == INT_MIN){
              max2 = -1;
             }
         }
        v.push_back(max);
        v.push_back(max2);
        return v;
    }
};
