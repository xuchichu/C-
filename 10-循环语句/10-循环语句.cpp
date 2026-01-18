#include <iostream>
using namespace std;

int main()
{

    //cout << "生成一个敌人" << endl;

  /*  int i = 1;
    while (i<=10)
    {
        cout << "生成一个敌人" << i << endl;
        i++;
        
    }*/

    //int i = 1;
    //do
    //{
    //    cout << "生成一个敌人" << i << endl;
    //    i++;

    //} while (i <= 10);

    //for (int i = 1; i <= 10; i++)
    //{
    //    cout << "生成一个敌人" << i << endl;
    //}
   
    int i = 1;
    while (i < 10)
    {
        cout << "生成一个敌人" << i << endl;
        i++;
        if (i > 5)
        {
            break;
        }
    }

}
