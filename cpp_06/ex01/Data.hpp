#ifndef EX01_DATA_HPP
#define EX01_DATA_HPP

class Data
{
public:
	//constructor, destructor and operator
	Data();
	Data(int i);
	Data(Data const &copy);
	Data &operator=(const Data &copy);
	~Data();

	// getter and setter
	int getI() const;
	void setI(int i);

private:
	int	i;
};

#endif
