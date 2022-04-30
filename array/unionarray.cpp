#include<bits/stdc++.h>
#include <vector> 
using namespace std;

void unin(int a[], int n, int b[], int m);

int check(vector<int> c, int *x, int n){
        int size = c.size();
        for(int i=0; i<size; i++){
            if(c[i]==x[n]){
                return false;
            }
        }
        return true;
    }

int main(){
	int n = 6, m = 3;	
	int a[n] = {85, 1, 2, 7, 54, 6};
	int b[m] = {85, 5 , 3};
	unin(a, n, b, m);
	return 0;
}

void unin(int a[], int n, int b[], int m){
		int i=0, j=0;
        vector<int> c;
        while(i<n && j<m){
            if(a[i]==b[j]){ 
                int result = check(c, a, i);
                if(result == true){
                c.push_back(a[i]);
                i++;
                j++;
                }
            }
            else if(a[i]>b[j]){
                int result = check(c, a, i);
                if(result == true){
                c.push_back(a[i]);
                i++;
                }
            }
            else{
                int result = check(c, a, i);
                if(result == true){
                c.push_back(b[j]);
                j++;
                }
            }
        }
        while(i<n){
            int result = check(c, a, i);
            if(result == true){
                c.push_back(a[i]);
                i++;
            }
        }
        while(j<m){
            int result = check(c, a, i);
            if(result == true){
                c.push_back(b[j]);
                j++;
            }
        }
	  int k = c.size();
	  cout<<k;
}
