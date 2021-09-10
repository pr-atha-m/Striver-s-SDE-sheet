#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool sortBy(Item &i1 , Item &i2){
        return (double) i1.value/i1.weight > (double) i2.value/i2.weight;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr , arr+n , sortBy);
        double profit = 0.0;
        for(int i=0;i<n;i++){
            if(W-arr[i].weight>=0){
                W = W - arr[i].weight;
                profit += arr[i].value;
            }
            else{
                
                double ans =  (double) arr[i].value/arr[i].weight;
                profit+= ans*W;
                break;
            }
        }
        
        
        return profit;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
