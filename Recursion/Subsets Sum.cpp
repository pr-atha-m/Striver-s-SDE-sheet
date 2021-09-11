#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void recursive_sum(vector<int> & v ,int i ,  int N , vector<int> &arr , int sum){
        if(i == N){
           // when i == N we push back the sum to our vector.
            v.push_back(sum);
            return;
        }
        // we have two options either we selecct arr[i] , or not in the sum.
        recursive_sum(v ,i+1 ,  N , arr , sum);
        recursive_sum(v , i+1 , N , arr , sum+arr[i]);
        
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> v;
        int sum = 0;
        recursive_sum(v ,0 ,  N , arr , sum);
        
        
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
