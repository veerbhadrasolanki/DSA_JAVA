#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        int min = arr[0];
        for(int i = 1; i<n;i++){
            cin>>arr[i];
            if(arr[i]<min){
                min  = arr[i];
            }
        }
        int oor = 0;
        for(int i = 0; i<n;i++){
            cin>>arr[i];
            if(arr[i]<min){
                arr[i]^=min;
                oor|=arr[i];
            }
        }
        cout<<min<<"\t"<<oor<<endl;
    }
	return 0;
}
