#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        vector<int>ans2;

        int arr[n], max=arr[0]; 
        for(int i=0;i<n; ++i) {
            cin>>arr[i];  
            ans.emplace_back(arr[i]);
            ans2.emplace_back(arr[i]);
        }
        vector<vector<int>>final;
        for(int i=0;i<n;i++){ 
            final.emplace_back(arr[i]);
            max = arr[i];
        }
        cout<<max<<endl;
    }
	return 0;
}

