#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		int x;
		int j = 1;
		stack<int>trunks;
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			if (x == j)
			{
				j++;
			}
			else
			{
				while (!trunks.empty() && trunks.top() == j)
				{
					trunks.pop();
					j++;
				}
				trunks.push(x);
			}

		}
		while (!trunks.empty())
		{
			if (trunks.top() == j)
			{
				j++;
			}
			else
			{
				break;
			}
			trunks.pop();
		}

		if (trunks.empty())
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}
