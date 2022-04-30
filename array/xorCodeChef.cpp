#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int p, k;
		cin>>k;
		cin>>p;
		int arr[k];
		for(int i=0; i<k; i++){
			cin>>arr[k];
		}
		int i=0;
		for(int j=0; j<p; j++){
			int x = arr[i]^pow(2,p);
			if(x==0){
				arr[i]=0;
				i++;
			}
			else{
				break;
			}
			
		}
	}
	return 0;
}
