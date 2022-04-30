#include<bits/stdc++.h>
using namespace std;

void sort012(int *a, int n);

int main(){
	int n = 5;
	int a[] = {0, 1, 2, 1, 0};
	sort012(a, n);
	return 0;
}

void sort012(int *a, int n){
	int count0 = 0;
	int count1 = 0;
	int count2 = 0;
	int i=0;
    while(i<n){
    	if(a[i]==0)
    		count0++;
    	if(a[i]==1)
    		count1++;
    	if(a[i]==2)
    		count2++;
		i++;
	}
	int j=0;
	while(count0){
			a[j]=0;
			count0--;
			j++;
		}
	while(count1){
			a[j]=1;
			count1--;
			j++;
		}
    while(count2){
			a[j]=2;
			count2--;
			j++;
		}
}
