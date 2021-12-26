#ifndef INC_42CPP_MODULES_FIXED_H
#define INC_42CPP_MODULES_FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int fractional_bits;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
	static Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
