//Question: https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?track=amazon-arrays&batchId=192

int findPlaceAndAdd(int n){
    int placeValue = 1;
    int res = 0;
    if(n==0){
        res = res+5*placeValue;
    }
    while(n>0){
        if(n%10 == 0){
            res = res+5*placeValue;
        }
        n = n/10;
        placeValue = placeValue*10;
    }

    return res;
}

int convertFive(int n) {
    // Your code here
   n = n+findPlaceAndAdd(n);
   return n;
}
