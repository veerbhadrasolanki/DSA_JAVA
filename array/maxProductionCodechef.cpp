#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d, x, y, z,firstMax, secondMax;
	    cin>>d;
	    cin>>x;
	    cin>>y;
	    cin>>z;
	    firstMax = x * 7;
	    secondMax = (y * d) + (z *( 7 - d ));
	    int result = std::max(firstMax, secondMax);
	    cout<<result;
	}
	return 0;
}

