// C++ program to find maximum circular
// subarray sum of size k

#include <bits/stdc++.h>
using namespace std;

// Function to calculate
// maximum sum
void maxCircularSum(int arr[], int n, int k)
{
	// k must be greater
	if (n < k) {
		cout << "Invalid";
		return;
	}

	int sum = 0, start = 0, end = k - 1;

	// calculate the sum of first k elements.
	for (int i = 0; i < k; i++) {
		sum += arr[i];
	}

	int ans = sum;

	for (int i = k; i < n + k; i++) {

		// add current element to sum
		// and subtract the first element
		// of the previous window.
		sum += arr[i % n] - arr[(i - k) % n];

		if (sum > ans) {
			ans = sum;
			start = (i - k + 1) % n;
			end = i % n;
		}
	}

	cout << "max circular sum = "
		<< ans << endl;
	cout << "start index = " << start
		<< "\nend index = " << end << endl;
}

// Driver Code
int main()
{
	int arr[] = { 5,2,1,4,5,1,2,3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 4;

	maxCircularSum(arr, n, k);
	return 0;
}
