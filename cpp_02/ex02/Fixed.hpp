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
	bool operator>(Fixed fixed)const;
	bool operator<(Fixed fixed)const;
	bool operator>=(Fixed fixed)const;
	bool operator<=(Fixed fixed)const;
	bool operator==(Fixed fixed)const;
	bool operator!=(Fixed fixed)const;
	float operator+(Fixed fixed)const;
	float operator-(Fixed fixed)const;
	float operator*(Fixed fixed)const;
	float operator/(Fixed fixed)const;
	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	// methods
	int					getRawBits() const;
	void				setRawBits(int raw);
	float				toFloat() const;
	int					toInt() const;
	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);
	static Fixed 		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, const Fixed &b);

private:

	int					value;
	static const int	fractionalBits = 8;
};


#endif
