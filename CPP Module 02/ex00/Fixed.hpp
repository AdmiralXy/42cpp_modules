#ifndef INC_42CPP_MODULES_FIXED_H
#define INC_42CPP_MODULES_FIXED_H

#include <iostream>

class Fixed
{
private:
	int value;
	static const int fractional_bits;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
