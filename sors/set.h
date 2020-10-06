#pragma once
#include "bitfield.h"

class TSet {
private:
	int MaxPower;
	TBitField BitField;
public:
	TSet(int mp);
	TSet(const TSet& s);
	TSet(const TBitField& bf);
	operator TBitField();
	int GetMaxPower(void) const;
	void InsElem(const int n);
	void DelElem(const int n);
	int IsMember(const int n) const;
	int operator==(const TSet& s);
	TSet& operator= (const TSet& s);
	TSet operator+ (const int n);
	TSet operator- (const int n);
	TSet operator+ (const TSet& s);
	TSet operator* (const TSet& s);
	TSet operator~(void);
	friend std::istream& operator>>(std::istream& istr, TSet& bf);
	friend std::ostream& operator<<(std::ostream& ostr, const TSet& bf);
};
