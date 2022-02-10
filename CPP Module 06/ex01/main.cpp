#include <iostream>
#include <stdint.h>

struct Data
{
	std::string info;
};

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	Data data;
	data.info = "Hello world!";
	uintptr_t raw = serialize(&data);
	Data *ptr = deserialize(raw);
	std::cout << "Data address: " << &data << std::endl;
	std::cout << "After deserialize: " << ptr << std::endl;
	std::cout << ptr->info << std::endl;
	return 0;
}
