#pragma once
#include <string>
/*	������� �������� ����� Creature �� ���������� �������:

   ��� (std::string);

   ������ (char);

   ���������� �������� (int);

   ���������� �����, ������� �� ������� ����� �� ����� ����� (int);

   ���������� ������, ������� �� ����� (int).

�������� ������ ����� �������� (�� ������ �� ������ ����������-���� ������). �������� ��� ��� ������:

   void reduceHealth(int) � ��������� �������� Creature �� ��������� ������������� ��������;

   bool isDead() � ���������� true, ���� �������� Creature ����� 0 ��� ������;

   void addGold(int) � ��������� ������ Creature-�.
*/
class Creature {
protected:
	std::string m_name;
	char m_symbol;
	int m_hp;
	int m_damage;
	int m_gold;
public:
	Creature(std::string name,
	char symbol,
	int hp,
	int damage,
	int gold):
		m_name(name),m_symbol{symbol},m_hp{hp},m_damage{damage},m_gold{gold}{}
	std::string getName() { return m_name; }
	int getHealth() { return m_hp; }
	char getSymbol() { return m_symbol; }
	int getDamage() { return m_damage; }
	int getGold() { return m_gold; }
	void reduceHealth(int );
	bool isDead();
	void addGold(int);
};
