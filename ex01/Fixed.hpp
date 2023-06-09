#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

class Fixed
{
	private:

	public:
		int					_value;
		static const int	_bits = 8;
		Fixed();
		Fixed(const int _int);
		Fixed(const float _float);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<( std::ostream &out, const Fixed &insert );

#endif