#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1, 2, 2, 1, 3, 5, 4};
	int len = 7;
	int tmp[7];
	for(int i=0; i<len; i++){
		for(int j=1; j<len; j++){
			if(arr[i] == arr[j]){
				tmp[i]=arr[j];
			}	
		}
	}
	for(int i=0; i<len; i++)
		cout<<tmp[i];
	return 0;
}
