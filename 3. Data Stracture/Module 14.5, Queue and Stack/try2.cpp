// C++ code for K largest elements in an array
#include <bits/stdc++.h>
using namespace std;

void kLargest(int arr[], int n, int k)
{
	// Sort the given array arr in reverse order.
	sort(arr, arr + n, greater<int>());

	// Print the first kth largest elements
	for (int i = 0; i < k; i++)
		cout << arr[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 2,2,3,3,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 1;
	kLargest(arr, n, k);
}

// This code is contributed by Aditya Kumar (adityakumar129)
