#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

typedef struct data {
	int			n;
	char		c;
	bool		b;
	std::string	s;
}	Data;

typedef struct A {
	int n;
	char c;
	bool b;
	std::string s;
} A;

typedef struct B {
	float f;
	int n;
	bool b;
	std::string s;
} B;

typedef struct C {
	double d;
	bool b;
	std::string s;
	char c;
} C;

typedef struct D {
	char c;
	int n;
	std::string s;
	bool b;
} D;

typedef struct E {
	bool b;
	double d;
	char c;
	std::string s;
} E;

class Serializer
{
	public:
		// Constructor
		Serializer();
		Serializer( Serializer const &other );

		// Destructor
		~Serializer();

		// Operator overloads
		Serializer	&operator=( Serializer const &other );

		// Member functions
		static uintptr_t	serialize( Data* ptr );
		static Data*		deserialize( uintptr_t raw );

		// Chain Reaction
		static A*			uint2a(uintptr_t raw);
		static B*			a2b( A* ptr);
		static C*			b2c( B* ptr);
		static D*			c2d( C* ptr);
		static E*			d2e( D* ptr);
		static Data*		e2data( E* ptr );

		static Data*		TestingChain( uintptr_t raw );
};

#endif
