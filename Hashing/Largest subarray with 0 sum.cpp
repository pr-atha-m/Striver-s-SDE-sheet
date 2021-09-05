int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int , int> mp;
    int sum = 0;
    int max1 = 0;
    for(int i=0;i<n;i++){
        sum+= A[i];
        if(sum == 0){
            max1 = max(max1 , i+1);
        }
        
        if(mp.find(sum)!=mp.end()){
            max1 = max(max1 , i-mp[sum]);
            
        }
        if(mp.find(sum)==mp.end()){
             mp[sum] = i;
        }
    }
    
    return max1;
}
