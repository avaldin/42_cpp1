#ifndef FIXED_HPP
#define FIXED_HPP
# include <ostream>


class Fixed
{
public:

	// constructor / destructor
	Fixed();
	Fixed(int intValue);
	Fixed(float floatValue);
	Fixed(const Fixed& fixed);
	~Fixed();

	// operator
	Fixed	&operator=(const Fixed &fixed);
	friend std::ostream	&operator<<(std::ostream& os, const Fixed &fixed);

	// methods
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					value;
	static const int	fractionalBits = 8;
};


#endif
