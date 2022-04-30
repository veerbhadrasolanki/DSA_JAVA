#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    for(int i=0; i<n; i++){
    	if(a[i]!=2){
            int pos = i;
            for(int j=pos; j<n; j++){
                if(a[j]==2)
                {
                    int temp = a[j];
                    a[j] = a[pos];
                    a[pos] = temp;
                }
            }
        }
        if(a[i]!=1){
            int pos = i;
            for(int j=pos; j<n; j++){
                if(a[j]==1)
                {
                    int temp = a[j];
                    a[j] = a[pos];
                    a[pos] = temp;
                }
            }
        }
        if(a[i]!=0){
            int pos = i;
            for(int j=pos; j<n; j++){
                if(a[j]==0)
                {
                    int temp = a[j];
                    a[j] = a[pos];
                    a[pos] = temp;
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    	cout<<a[i]<<" ";
}

int main(){
	int a[] = {0, 2, 1, 2, 0, 2, 1, 0, 2, 0};
	int n = 10;
	sort012(a, n);
	return 0;
}
