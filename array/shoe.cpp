#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		    int arr[3];
		    for(int i = 0; i < 3; i++){
		        cin>>arr[i];
		    }
		    
		    int right = 0, left = 0;
		    
		    for(int j = 0; j < 3; j++){
		        if(arr[j] == 1){
		            right++;
		        }else{
		            left++;
		        }
		    }
		    
		    if(right >= 1 && left >= 1){
		        cout<<"1"<<endl;
		    }else{
		        cout<<"0"<<endl;
		    }
		}
	return 0;
}

