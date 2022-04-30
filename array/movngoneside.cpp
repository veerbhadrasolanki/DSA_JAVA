#include<bits/stdc++.h>
using namespace std;

void movng(int *a, int n);

int main(){
	int n = 9;
	int a[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
	movng(a, n);
	return 0;
}

void movng(int *a, int n){
	sort(a, a+n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
