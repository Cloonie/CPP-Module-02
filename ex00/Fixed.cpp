#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed constructor called." << std::endl;
	_value = 0;
}

Fixed::Fixed(Fixed& other)
{
	std::cout << "Fixed copy constructor called." << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(Fixed& other)
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