#include <iostream>
using namespace std;

//void creatEnemy(int enemyType,int pos,string name)
//{
//    if (enemyType == 1)
//    {
//        cout << "生成敌人的第一个步骤 特定敌人类型" << enemyType << endl;
//    }
//    cout << "生成敌人的第二个步骤 设置位置" << pos << endl;
//    cout << "生成敌人的第三个步骤 敌人名字" << name << endl;
//}

//int creatEnemy(int enemyType,string name)
//{
//    if (enemyType == 1)
//    {
//        cout << "生成敌人的第一个步骤 特定敌人类型" << enemyType << endl;
//    }
//    cout << "生成敌人的第二个步骤 设置位置" << endl;
//    cout << "生成敌人的第三个步骤 敌人名字" << name << endl;
//    if (enemyType == 1)
//    {
//        return 90;
//    }
//    else
//    {
//        return 100;
//    }
//}

int plusFun(int ,int );

int main()
{
    /*int pos = creatEnemy(2,"Asuka");
    cout << "敌人位置为" << pos << endl;
    creatEnemy(1,"Hinji");*/

    int a = 10, b = 200;
    int res = plusFun(a, b);
    cout << res << endl;

    return 0;
}
int plusFun(int arg1, int arg2)
{
    return arg1 + arg2;
}
