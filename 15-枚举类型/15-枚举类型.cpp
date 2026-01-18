#include <string.h>
#include <iostream>
using namespace std;

//enum WeekDay 
//{
//	Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
//};

enum HeroType {
	Master,Soldier,Assassin,Tank
};

int main()
{

	//WeekDay day = Sunday;
	//cout << day << endl;

	//int heroType = 1;//1法师 2战士 3刺客 4坦克
	HeroType heroType = Assassin;
	heroType = Tank;
	if (heroType == Master) {
		cout << "这个英雄是法师" << endl;
	}

	return 0;
}

