#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	#define ll unsigned long long
	ll NthPower(ll n , ll mid){
	    ll ans = 1;
	    for(ll i=0;i<n;i++){
	        ans*= mid;
	    }
	    
	    return ans;
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    ll start = 1;
	    
	    ll end = 30;
	    
	    while(start<=end){
	        int mid = (start +end)/2;
	        if(NthPower(n , mid) == m){
	            return mid;
	        }
	        else if(NthPower(n , mid) > m){
	            end = mid-1;
	        }
	        else{
	            start = mid+1;
	        }
	    }
	    
	    
	    return -1;
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends
