#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        #define ll long long int
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            // please refer shell sort for better understanding of this
            // aproach.
            // https://www.geeksforgeeks.org/shellsort/
            ll gap = ceil((float)(n+m)/2);
            int i = 0 , j = gap;
            while(gap>0){
                // swapping elements within first array        
                for(i=0;i+gap<n;i++){
                    if(arr1[i]>arr1[i+gap]){
                        swap(arr1[i] , arr1[i+gap]);
                    }
                }
                
                // swapping elements between first and second array
                
                for(j= gap>=n ? gap-n:0;j<m && i<n;j++ , i++){
                    if(arr1[i]>arr2[j]){
                        swap(arr1[i] , arr2[j]);
                    }
                }
                
                if(j<m){
                // swapping elements within second array
                    for(j =0;j+gap<m;j++){
                       if(arr2[j]>arr2[j+gap]){
                           swap(arr2[j] , arr2[j+gap]);
                       }
                    }
                }
  
                if(gap == 1){
                    // to break the loop , because due to ceil loop will never 
                    // terminate.
                    break;
                }
                gap = ceil((float) gap/2);
            }
            
            
            
        } 
};
