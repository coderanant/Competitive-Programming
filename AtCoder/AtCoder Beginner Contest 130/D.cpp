// CPP program to count 
// subarrays having sum 
// less than k. 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find number 
// of subarrays having sum 
// less than k. 
#define int long long
int countSubarrays(int arr[], 
				int n, int k) 
{ 
	int start = 0, end = 0, 
		count = 0, sum = arr[0]; 

	while (start < n && end < n) { 

		// If sum is less than k, 
		// move end by one position. 
		// Update count and sum 
		// accordingly. 
		if (sum < k) { 
			end++; 

			if (end >= start) 
				count += end - start; 

			// For last element, 
			// end may become n 
			if (end < n) 
				sum += arr[end]; 
		} 

		// If sum is greater than or 
		// equal to k, subtract 
		// arr[start] from sum and 
		// decrease sliding window by 
		// moving start by one position 
		else { 
			sum -= arr[start]; 
			start++; 
		} 
	} 

	return count; 
} 

// Driver Code 
int32_t main() 
{ 
	#ifndef ONLINE_JUDGE
		freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
		freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
	#endif
	int n,k;
	cin>>n>>k;
	
	int array[n];
	for(int i=0;i<n;i++)
		cin>>array[i];
	int size = sizeof(array) / sizeof(array[0]); 
	cout << (n*(n+1))/2-countSubarrays(array, size, k); 
} 
