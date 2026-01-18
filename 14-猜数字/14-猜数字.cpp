#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;


int main()
{
    cout << "猜数字" << endl;
    srand((int)time(0));
    int number = rand() % 10 + 1;
    //cout << number << endl;
    cout << "我心里想了一个1-10的数，你猜猜是多少？" << endl;
    bool flag = false;
    for (int i=0;i < 5;i++)
    {
        int num;
        cin >> num;
        if (num == number)
        {
            cout << "恭喜你猜对了！" << endl;
            flag = true;
            break;
        }
        else if (num > number)
        {
        cout << "猜大了哦，你还有" << 4 - i << "次机会" << endl;
        continue;
        }
        else
        {
            cout << "猜小了哦，你还有" << 4 - i << "次机会" << endl;
            continue;
        }
        
    }

    if (flag)
    {
        cout << "游戏胜利" << endl;
    }
    else
    {
        cout << "游戏失败" << endl;
    }

    return 0;
}
