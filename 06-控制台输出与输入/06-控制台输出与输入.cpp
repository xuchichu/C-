#include <iostream>
using namespace std;

int RunCalculator()
{
	int operator1;
	cout << "请您输入第一个数:" << endl;
	cin >> operator1;

	int operator2;
	cout << "请您输入第二个数:" << endl;
	cin >> operator2;
	int res = operator1 + operator2;
	cout << "两数和为：" << res << endl;

	cout << "您还要继续计算吗？(y/n)" << endl;
	char c;
	cin >> c;
	if (c == 'y')
	{
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	cout << "加法计算器" << endl;
	while(1){
		bool flag = RunCalculator();
		if (flag == true)
		{
			continue;
		}
		else {
			break;
		}
	}
}
