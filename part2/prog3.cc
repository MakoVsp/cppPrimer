#include <iostream>
#include <string>
// class 与 struct 定义的类唯一区别就是默认的访问权限
//  class为private struct 为public
	
class A {
public:

private:
	std::string isbn;
	unsigned units_solds;
	double revenue;
};

struct B {

private:
	std::string isbn;
	unsigned units_solds;
	double revenue;
};

int main ()
{

	return 0;
}
