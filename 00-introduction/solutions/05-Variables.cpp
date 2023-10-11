#include <iostream>

int main()
{
	const char*	name		= "Alex";
	const char*	FN			= "45485";
	int			birthYear	= 1999;

	std::cout << name << "\n"
		<< FN << "\n" <<
		2023 - birthYear << "\n";

	return 0;
}
