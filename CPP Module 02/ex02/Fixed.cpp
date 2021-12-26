#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const int value)
{
	this->value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * pow(2, fractional_bits));
}

Fixed::~Fixed()
{

}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->value = fixed.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return this->getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++()
{
	++value;
	return *this;
}

Fixed &Fixed::operator--()
{
	--value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	++value;
	return old;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	--value;
	return old;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

float Fixed::toFloat(void) const
{
	return value / pow(2, fractional_bits);
}

int Fixed::toInt(void) const
{
	return value >> fractional_bits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
