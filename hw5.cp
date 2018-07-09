#include <iostream>
#include <string>
using namespace std;

bool InputID(char ID[11])
{
	if (strlen(ID) == 10)
		return 1;
	else
		return 0;
}

bool CheckID(char ID[11])
{
	int sum = 0, a[11] = {0};

	if (ID[0] == 'A')
	sum = sum + 1 + 0 * 9;
	else if (ID[0] == 'B')
	sum = sum + 1 + 1 * 9;
	else if (ID[0] == 'C')
	sum = sum + 1 + 2 * 9;
	else if (ID[0] == 'D')
	sum = sum + 1 + 3 * 9;
	else if (ID[0] == 'E')
	sum = sum + 1 + 4 * 9;
	else if (ID[0] == 'F')
	sum = sum + 1 + 5 * 9;
	else if (ID[0] == 'G')
	sum = sum + 1 + 6 * 9;
	else if (ID[0] == 'H')
	sum = sum + 1 + 7 * 9;
	else if (ID[0] == 'I')
	sum = sum + 3 + 4 * 9;
	else if (ID[0] == 'J')
	sum = sum + 1 + 8 * 9;
	else if (ID[0] == 'K')
	sum = sum + 1 + 9 * 9;
	else if (ID[0] == 'L')
	sum = sum + 2 + 0 * 9;
	else if (ID[0] == 'M')
	sum = sum + 2 + 1 * 9;
	else if (ID[0] == 'N')
	sum = sum + 2 + 2 * 9;
	else if (ID[0] == 'O')
	sum = sum + 3 + 5 * 9;
	else if (ID[0] == 'P')
	sum = sum + 2 + 3 * 9;
	else if (ID[0] == 'Q')
	sum = sum + 2 + 4 * 9;
	else if (ID[0] == 'R')
	sum = sum + 2 + 5 * 9;
	else if (ID[0] == 'S')
	sum = sum + 2 + 6 * 9;
	else if (ID[0] == 'T')
	sum = sum + 2 + 7 * 9;
	else if (ID[0] == 'U')
	sum = sum + 2 + 8 * 9;
	else if (ID[0] == 'V')
	sum = sum + 2 + 9 * 9;
	else if (ID[0] == 'X')
	sum = sum + 3 + 0 * 9;
	else if (ID[0] == 'Y')
	sum = sum + 3 + 1 * 9;

	int num = 8;
	for (int i = 1; i < 9; i++)
	{
		a[i] = ID[i] - '0';
		a[i] = a[i] * num;
		num--;
	}
	a[9] = ID[9] - '0';
	for (int i = 1; i < 9; i++)
	{
		sum = sum + a[i];
	}

	if (a[9] == 0 && sum % 10 == 0)
	{
		return 1;
	}
	else
	{
		if (a[9] == (10 - (sum % 10)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

int main()
{
	char ID[11];
	while (true)
	{
		char YesNo;
		int sum = 0;
		cout << "Please input your ID number:";
		cin >> ID; //input A123456789

		InputID(ID); //判斷輸入長度是否正確

		if (InputID(ID) == 1) //CheckID(ID); //判斷輸入身分證是否正確
		{
			if (CheckID(ID) == 1)
			{
				cout << "The ID is right!" << endl << "again?(y/n)";
				cin >> YesNo;
				if (YesNo == 'n')
					break;
			}
			else
			{
				cout << "The ID is error!" << endl << "again?(y/n)";
				cin >> YesNo;
				if (YesNo == 'n')
					break;
				else
				{
					while (YesNo != 'y')
					{
						cout << "again?(y/n)";
						cin >> YesNo;
					}
				}
			}
		}
		else
		{
			cout << "Input error!" << endl << "again?(y/n)";
			cin >> YesNo;
			if (YesNo == 'n')
				break;
			else
			{
				while (YesNo != 'y')
				{
					cout << "again?(y/n)";
					cin >> YesNo;
				}
			}
		}
	}

	system("pause");
	return 0;
}