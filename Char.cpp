#include "Char.h";
#include <cmath>;

Character::Character(unsigned str,
					 unsigned dex, 
					 unsigned con,
					 unsigned _int,
					 unsigned wis, 
					 unsigned cha,
					 long _exp = 0){
	setStr(str);
	setDex(dex);
	setCon(con);
	setInt(_int);
	setWis(wis);
	setCha(cha);
	
	setExp(_exp);
}

int Character::calculateModifier(int statVal) {
	return (int) floor((statVal - 10) / 2);
}

int Character::getPassiveWis() {
	return 10 + getWisModifier();
}

int Character::getStrModifier() {
	return calculateModifier(uSTR);
}
int Character::getDexModifier() {
	return calculateModifier(uDEX);
}
int Character::getConModifier() {
	return calculateModifier(uCON);
}
int Character::getIntModifier() {
	return calculateModifier(uINT);
}
int Character::getWisModifier() {
	return calculateModifier(uWIS);
}
int Character::getChaModifier() {
	return calculateModifier(uCHA);
} 

long Character::getExp() {
	return lEXP;
}

void Character::setStr(int val) {
	uSTR = val;
}
void Character::setDex(int val) {
	uDEX = val;
}
void Character::setCon(int val) {
	uCON = val;
}
void Character::setInt(int val) {
	uINT = val;
}
void Character::setWis(int val) {
	uWIS = val;
}
void Character::setCha(int val) {
	uCHA = val;
}

void Character::setExp(long exp) {
	lEXP = exp;
}
void Character::addExp(long add_exp) {
	lEXP += add_exp;
}

