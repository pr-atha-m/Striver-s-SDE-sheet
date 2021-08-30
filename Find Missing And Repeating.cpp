#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int repeating = 0;
        // using the absolute value of every element as an index and make the
        //value at this index as negative to mark it visited
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]>0){
                 arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
               
                
            }
            else{
                // if index is aldready marked as negative then this is the repeating
                // element
                repeating = abs(arr[i]);
            }
        }
        
        int  missing = 0;
        // the index which is not marked as negative is the missing element.
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                missing = i+1;
                break;
            }
        }
        
        int *ans = new int(2);
        ans[0] = repeating;
        ans[1] = missing;
        return ans;
        
        
        
        
    }
};
