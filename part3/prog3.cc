#include <iostream>
#include <cctype>

using namespace std;

int main ()
{
//	string word;
	// 读入未知数目的string对象
//	while (cin >> word)
//	{
//		cout << word << endl;
//	}

	string line;
	// 读入未知行的string对象
	while (getline(cin, line))
	{
	//	cout << line << endl;
		if (!line.empty())
		{
			int nPunct = 0;
			cout << "size of input :" << line.size() << endl;
			cout << "|";
			for (int index = 0; index < line.size(); ++index)
			{
				cout << line[index] << "|" ;
				// 计算标点符号数
				if (ispunct(line[index]))
				{
					nPunct += 1;
				}
			}
			cout << endl;
			cout << "punct count = " << nPunct << endl;
		}
		else {
			cout << "empty..." << endl;
		}
	}

	return 0;
}
