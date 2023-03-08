#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int input[10];
int arr[10];
void func(int cur)
{
	if (cur == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; i++)
	{
		arr[cur] = input[i];
		func(cur + 1);
	}
}
int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}
	sort(input, input + n);
	func(0);
}