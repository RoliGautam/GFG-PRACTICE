// Question : https://practice.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1/?track=amazon-arrays&batchId=192#

int minDist(int arr[], int n, int x, int y) {
        // code here
    int previousInd = -1, min_distance = INT_MAX;
     
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            if( previousInd != -1 && arr[i] != arr[previousInd]){
                min_distance = min(min_distance , i-previousInd);
            }
        previousInd=i;
        }
    }
    if(min_distance==INT_MAX){
        return -1;
    }
 
    return min_distance;
    }
