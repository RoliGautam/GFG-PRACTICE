//Question : https://practice.geeksforgeeks.org/problems/third-largest-element/1/?track=amazon-arrays&batchId=192
 int thirdLargest(int a[], int n)
    {
        if(n<=2){
            return -1;
        }
      int first = a[0];
      int second = INT_MIN;
      int third = INT_MIN;
     
      for(int i = 1; i<n; i++){
          if(a[i]>first){
              third = second;
              second = first; 
              first = a[i];
          }else if(a[i]>second){
              third = second;
              second = a[i];
          }else if(a[i]>third){
              third = a[i];
          }
      }
    
     
      
      return third;
    }
