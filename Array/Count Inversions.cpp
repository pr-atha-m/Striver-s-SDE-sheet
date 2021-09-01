// the idea here is to use merge sort
// while merging we will count all the instances in which arr[i] > arr[j]  for j>i
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    #define ll long long
    ll count = 0;
    void mergeSort(ll arr[] , ll N  , ll l , ll mid , ll r){
        ll n1 = mid-l+1;
        ll n2 = r-mid;
        
        ll left[n1];
        ll right[n2];
        for(ll i=0;i<n1;i++){
            left[i] = arr[i+l];
        }
        for(ll i=0;i<n2;i++){
            right[i] = arr[i+mid+1];
        }
        
        
        ll i=0;
        ll j=0;
        ll k=l;
        while(i<n1 && j<n2){
            
            if(left[i]>right[j]){
                arr[k++] = right[j++];
                count+= (n1-i);
            }
            
            else{
                arr[k++] = left[i++];
                
            }
            
        }
        
        while(i<n1){
            arr[k++] = left[i++];
        }
        
        while(j<n2){
            arr[k++] = right[j++];
        }
        
        
        
    }
    long long int inversionCount(long long arr[], long long N)
    {
        merge(arr , N , 0  , N-1);
        return count;
    }
    
    void merge(ll arr[] , ll N , ll l , ll r){
        
        if(r>l){
            ll mid = l + (r-l)/2;
            merge(arr , N , l , mid);
            merge(arr , N , mid+1, r);
            mergeSort(arr , N , l , mid , r);
        }
    }

};
