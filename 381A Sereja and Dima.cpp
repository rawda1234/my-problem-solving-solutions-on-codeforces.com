#include <iostream>
#include<algorithm>
using namespace std;
int arr[10001];
int main()
{

	int n = 0;
	int sum1 = 0, sum2 = 0;
	cin >> n; 
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = (n - 1); i >= 0; i -= 2)
	{
		sum1 += arr[i];  
	}
	for (int i = (n - 2); i >= 0; i -= 2)
	{
		sum2 += arr[i];
	}
	cout << sum1 << " " << sum2 << endl;
	return 0;
}
