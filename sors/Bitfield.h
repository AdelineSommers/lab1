#pragma once

#include <iostream>
#include <stdlib.h>

typedef unsigned int TELEM;
class TBitField {
private:
	int BitLen;
	TELEM* pMem;
	int MemLen;
	int GetMemIndex(const int n) const;
	TELEM GetMemMask(const int n)const;
public:
	TBitField(int len);
	TBitField(const TBitField& bf);
	~TBitField();
	int GetLength(void) const;
	void SetBit(const int n);
	void ClrBit(const int n);
	int GetBit(const int n) const;
	int operator==(const TBitField& bf);
	TBitField& operator = (const TBitField& bf);
	TBitField operator | (const TBitField& bf);
	TBitField operator & (const TBitField& bf);
	TBitField operator ~ (void);
	friend std::istream& operator>>(std::istream& istr, TBitField& bf);
	friend std::ostream& operator<<(std::ostream& ostr, const TBitField& bf);
};