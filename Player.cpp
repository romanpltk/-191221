#include "Player.h"
void Player::levelUp() {
	m_level++;
	m_damage++;
}
bool Player::hasWon() { return m_level == 20; }
