#include <iostream>
#include "Creature.h"
using namespace std;
/*class Fruit {
protected:
	 string m_color;
	 string m_name;
public:
	Fruit(string name, string color) :
		m_name(name), m_color(color)
	{

	}
	string getName() { return m_name; }
	string getColor() { return m_color; }



};
class Apple : public Fruit {
public:
	Apple(string color,string name="apple"):
		Fruit(name,color){}

};
class Banana :public Fruit {
public:
	Banana(string color = "yellow", string name = "banana") :
		Fruit(name, color) {}

};
class  GrannySmith: public Apple{
public:
	GrannySmith(string color="green", string name = "GrannySmith apple") :
		Apple(color,name) {}
		—начала создайте класс Creature со следующими членами:

   им€ (std::string);

   символ (char);

   количество здоровь€ (int);

   количество урона, которое он наносит врагу во врем€ атаки (int);

   количество золота, которое он имеет (int).

—оздайте полный набор геттеров (по одному на каждую переменную-член класса). ƒобавьте еще три метода:

   void reduceHealth(int) Ч уменьшает здоровье Creature на указанное целочисленное значение;

   bool isDead() Ч возвращает true, если здоровье Creature равно 0 или меньше;

   void addGold(int) Ч добавл€ет золото Creature-у.

—ледующий код:



ƒолжен выдавать следующий результат:

The orc has 3 health and is carrying 15 gold.

};*/
int main()
{
	/*Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";*/


	Creature o("orc", 'o', 4, 2, 10);
	o.addGold(5);
	o.reduceHealth(1);
	std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.";

	return 0;
}