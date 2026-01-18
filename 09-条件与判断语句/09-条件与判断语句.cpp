#include <iostream>
using namespace std;

int main()
{
    /*if (true) 
    {
        cout << "if语句" << endl;
    }*/

   /* bool isDead = !true;

    if (isDead == false)
    {
        cout << "游戏已结束" << endl;

    }
    else if (isDead == true)
    {
        cout << "游戏继续" << endl;
    }
    else {
        cout << "游戏报错" << endl;

    }*/

    /*int vip = 0;
    if (vip == 1)
    {
        cout << "9折" << endl;
    }
    else if (vip == 2)
    {
        cout << "5折" << endl;
    }
    else if (vip == 3)
    {
        cout << "3折" << endl;
    }
    else
    {
        cout << "不打折" << endl;
    }*/

    //int vip = 4;
    //switch (vip)
    //{
    //case 1:
    //    cout << "9折" << endl; break;
    //case 2:
    //    cout << "5折" << endl; break;
    //case 3:
    //    cout << "3折" << endl; break;
    //case 4:
    //case 5:
    //case 6:
    //    cout << "1折" << endl;
    //    break;
    //default:
    //    cout << "不打折" << endl;
    //    break;

    //}

    int money = 99;
    if (money > 0 && money <= 100)
    {
        cout << "vip1" << endl;
    }
    else if (money > 100 && money <= 1000)
    {
        cout << "vip2" << endl;
    }
    else if (money > 1000 && money <= 2000)
    {
        cout << "vip3" << endl;
    }

    //cout << "if语句执行后" << endl;
    return 0;
}

