

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int	main(void)
{
	Data		*data = new Data(5);
	uintptr_t	iPtr;

	iPtr = Serializer::serialize(data);
	std::cout << "adresse of data is : " << data << " and is uintptr is " << iPtr << std::endl;
	std::cout << "adresse of deserialized serialized data is " << Serializer::deserialize(Serializer::serialize(data)) << std::endl;
	delete (data);
}