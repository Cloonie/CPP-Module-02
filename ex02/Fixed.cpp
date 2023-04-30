#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed constructor called." << std::endl;
	_value = 0;
}

Fixed::Fixed(const int _int)
{
	std::cout << "Fixed constructor called." << std::endl;
	_value = _int << _bits;
}

Fixed::Fixed(const float _float)
{
	std::cout << "Fixed constructor called." << std::endl;
	_value = roundf(_float * (float)(1 << _bits));
}


Fixed::Fixed(const Fixed& other)
{
	std::cout << "Fixed copy constructor called." << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Fixed assignment operator called." << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called." << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return _value;
}

void Fixed::setRawBits( int const raw )
{
	_value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)_value / (float)(1 << _bits));
}

int Fixed::toInt( void ) const
{
	return (_value >> _bits);
}

std::ostream &operator<<( std::ostream &out, const Fixed &insert ) {
    out << insert.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator++(void)
{
	++_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	_value++;
	return old;
}

Fixed Fixed::operator--(void)
{
	--_value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	_value--;
	return old;
}


Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.toFloat() <= b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() <= b.toFloat())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.toFloat() >= b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() >= b.toFloat())
		return (a);
	return (b);
}
