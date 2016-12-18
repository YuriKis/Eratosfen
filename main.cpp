#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
	arr[1] = 0;

	int p = arr[2];
	bool b_exit = false;

	while (b_exit == false)
	{
		for (int i = 2 * p; i < n; i = i + p)
		{
			arr[i] = 0;
		}

		for (int i = p+1; i < n; i++)
		{
			if (arr[i] > p)
			{
				b_exit = false;
				p = arr[i];
				break;
			}
			else
			{
				b_exit = true;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << endl;
		}
	}
}
