#include<bits/stdc++.h>
using namespace std;

void checkLeader(int arr[], int n){
	int temp[n];
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]<=arr[j]){
				break;
			}else{
				cout<<arr[i];
			}
		}
	}
}

int main(){
	int a[] = {7, 10, 4, 3, 6, 5, 2};
	int n = 7;
	checkLeader(a, n);
	return 0;
}
