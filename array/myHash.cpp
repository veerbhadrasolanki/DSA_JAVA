#include<bits/stdc++.h>
using namespace std;

struct myHash{
	int bucket;
	list<int> *table;
	myHash(int no){
		int bucket = no;
		table = new list<int>[bucket];
		int hash(){
			return key%buckt;
		}
	}	
	
};

int main(){
	struct myHash(7);
	return 0;
}
