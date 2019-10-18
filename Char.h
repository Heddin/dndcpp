#include <cstdlib>;

class Character{

public:
    Character(unsigned str,unsigned dex, unsigned con, unsigned _int, unsigned wis, unsigned cha, long _exp = 0);
	
	int getStrModifier();
	int getDexModifier();
	int getConModifier();
	int getIntModifier();
	int getWisModifier();
	int getChaModifier();
    int getPassiveWis();

	long getExp();

	void setStr(int val);
	void setDex(int val);
	void setCon(int val);
	void setInt(int val);
	void setWis(int val);
	void setCha(int val);

    void setExp(long exp);
    void addExp(long add_exp);

private:
    unsigned uSTR;
    unsigned uDEX;
    unsigned uCON;
    unsigned uINT;
    unsigned uWIS;
    unsigned uCHA;

    long lEXP = 0;

    int calculateModifier(int statVal);
};