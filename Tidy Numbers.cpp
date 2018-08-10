#include <iostream>
using namespace std;
int main()
{
	int in, testcase, firstdig, seconddig, thirddig;
	cout << "Enter No. of Test Cases that you want to continue" << endl;
	cin >> in;
	for (int i = 0;i < in;i++)
	{
		cout << "Enter Testcase Number" << endl;
		cin >> testcase;
		if (testcase > 0 && testcase < 10)
		{
			cout << "Case#" << i + 1 << ":" << testcase << endl;
		}
		else if (testcase > 9 && testcase < 100)
		{
			firstdig = testcase / 10;
			seconddig = testcase % 10;
			if (firstdig == seconddig || firstdig < seconddig)
			{
				cout << "Case#" << i + 1 << ":" << testcase << endl;
			}
			else if (seconddig < firstdig)
			{
				while (seconddig < firstdig)
				{
					testcase--;
					firstdig = testcase / 10;
					seconddig = testcase % 10;
				}
				cout << "Case#" << i + 1 << ":" << testcase << endl;
			}
		}
		else if (testcase > 99 && testcase < 1000)
		{
			firstdig = testcase / 100;
			seconddig = (testcase / 10) % 10;
			thirddig = (testcase % 100) % 10;
			if (firstdig <= seconddig&&seconddig <= thirddig)
			{
				cout << "Case#" << i + 1 << ":" << testcase << endl;
			}
			else if (firstdig <= seconddig&&thirddig != seconddig)
			{
				if (seconddig < thirddig)
				{
					cout << "Case#" << i + 1 << ":" << testcase << endl;
				}
				else if (seconddig > thirddig)
				{
					while (thirddig < seconddig)
					{
						testcase--;
						seconddig = (testcase / 10) % 10;
						thirddig = (testcase % 100) % 10;
					}
					cout << "Case#" << i + 1 << ":" << testcase << endl;
				}
				else if ((testcase = testcase - 1) == 99)
				{
					cout << "Case#" << i + 1 << ":" << testcase << endl;
				}
				else if (firstdig > seconddig)
				{
					while (firstdig > seconddig)
					{
						testcase--;
						firstdig = testcase / 100;
						seconddig = (testcase / 10) % 10;
					}
					cout << "Case#" << i + 1 << ":" << testcase << endl;
				}
			}
		}
		else if (testcase ==1000)
			{
				cout << "Case#" << i + 1 << ":" << testcase-1 << endl;
			}
	}
		system("Pause");
		return 0;

}
	
