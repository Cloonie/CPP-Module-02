#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	// Fixed abc(Fixed(5) * Fixed(4));

	// std::cout << abc << std::endl;
	// std::cout << abc._value << std::endl;
	// std::cout << ++abc << std::endl;
	// std::cout << abc._value << std::endl;

	return 0;
}