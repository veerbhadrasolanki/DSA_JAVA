#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    if(n>2){
    int temp = arr[n-1];
    for(int i=n; i>0; i--){
        arr[n--] = arr[n];
    }
    arr[0] = temp;
    }
    if(n==2){
        int xTemp = arr[1];
        arr[1] = arr[0];
        arr[0] = xTemp;
    }
}

int main(){
	int n = 5;
	int arr[] = {1, 3, 4, 6, 5};
	rotate(arr, n);
	for(int i=0; i<n; i++){
    	cout<<arr[i]<<" ";
	}
	return 0;
}
