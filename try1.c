#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n,k,j;
	cin >> n;
	cin >> k;
	cin >> j;
	int arr[n];
	for(int i=0 ; i < n ; i++)
		cin >> arr[i];
	arr[n]=0;
	int c = arr[j-1];
	for (int d = j-1; d < n ; d++)
        arr[d] = arr[d+1];
	sort(arr, arr+n);
    for(int f=1;f<k;f++)
    c+=arr[f];
	cout << c;
	return 0;
}