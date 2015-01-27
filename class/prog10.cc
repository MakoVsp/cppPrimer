#include <iostream>
#include "Sales_item.h"

int main()
{
//	Sales_item book, book1;
//	std::cin >> book >> book1;
//	std::cout << book + book1 << std::endl;

//	Sales_item book;
//	while (std::cin >> book)
//	{
//		std::cout << book << std::endl;
//	}
	
	Sales_item book, book1;
	std::cin >> book >> book1;
	
	if (book.same_isbn(book1))
	{
		std::cout << book + book1 << std::endl;
	} else {
		std::cout << "Try ...." << std::endl;
	}

	return 0;
}
