#include <iostream>
#include <string>
using namespace std;

struct  Position
{
    float x;
    float y;
    float z;

};

struct Enemy
{
    string enemyType;
    int hp;
    int attack;
    Position pos;

};

int main()
{
    /*Position enemy1Pos;

    enemy1Pos.x = 90;
    enemy1Pos.y = 12;
    enemy1Pos.z = 10;

    cout << enemy1Pos.x << endl;

    Position enemy2Pos = { 100,91,78 };
    cout << enemy2Pos.y << endl;*/

    //Enemy enemy1 = { "Asuka",91,78,{100,23,12} };
    //Enemy enemy2 = { "Hinji",78,91,{99,32,21} };

    //cout << enemy1.pos.y << endl;

    //auto x = 91;

    //int y = 91;
    //auto z = 91.78;
    //auto i = 1145.1;

    return 0;
}