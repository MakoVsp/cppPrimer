#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item totle, trans;
	
	if (std::cin >> totle)
	{
		while (std::cin >> trans)
		{
			if (totle.same_isbn(trans))
			{
				totle = totle + trans;
				std::cout << "same: " << totle << std::endl;
			} else {
				totle = trans;
				std::cout << "diff: " << totle << std::endl;
			}
		}
	} else {
		std::cout << "no input..." << std::endl;
	}

	return 0;
}


