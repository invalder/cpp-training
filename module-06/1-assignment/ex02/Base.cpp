#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base() {
}

Base *Base::generate( void ) {
	std::srand(std::time(0));
	int i = std::rand() % 3;

	switch (i) {
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void Base::identify( Base *p ) {
	if (dynamic_cast<A *>(p))
		std::cout << "This class is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "This class is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "This class is C" << std::endl;
}

void Base::identify( Base &p ) {
	try {
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "This class is A" << std::endl;
	}
	catch (std::bad_cast &e) {
		try {
			B &b = dynamic_cast<B &>(p);
			(void) b;
			std::cout << "This class is B" << std::endl;
		}
		catch (std::bad_cast &e) {
			try {
				C &c = dynamic_cast<C &>(p);
				(void) c;
				std::cout << "This class is C" << std::endl;
			}
			catch (std::bad_cast &e) {
				std::cout << "Unknown class type" << std::endl;
			}
		}
	}
}
