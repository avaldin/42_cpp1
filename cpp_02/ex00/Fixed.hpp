#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed
{
public:

	// constructor / destructor
	Fixed();
	Fixed(Fixed &fixed);
	~Fixed();

	// operator
	Fixed	&operator=(const Fixed &fixed);

	// methods
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					value;
	static const int	fractionalBits = 8;
};


#endif
