#include "Serializer.hpp"

// Constructor
Serializer::Serializer() {
}

Serializer::Serializer( Serializer const &src ) {
	*this = src;
}

// Destructor
Serializer::~Serializer() {
}

// Operator overloads
Serializer	&Serializer::operator=( Serializer const &rhs ) {
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

// Member functions
uintptr_t Serializer::serialize( Data* ptr ) {
	return reinterpret_cast<uintptr_t>( ptr );
}

Data* Serializer::deserialize( uintptr_t raw ) {
	return reinterpret_cast<Data*>( raw );
}

A* Serializer::uint2a( uintptr_t raw ){
	std::cout << "uintptr_t to A" << std::endl;
	return reinterpret_cast<A*>( raw );
}

B* Serializer::a2b( A* ptr){
	std::cout << "A to B" << std::endl;
	return reinterpret_cast<B*>( ptr );
}

C* Serializer::b2c( B* ptr){
	std::cout << "B to C" << std::endl;
	return reinterpret_cast<C*>( ptr );
}

D* Serializer::c2d( C* ptr){
	std::cout << "C to D" << std::endl;
	return reinterpret_cast<D*>( ptr );
}

E* Serializer::d2e( D* ptr){
	std::cout << "D to E" << std::endl;
	return reinterpret_cast<E*>( ptr );
}

Data* Serializer::e2data( E* ptr ){
	std::cout << "E to Data" << std::endl;
	return reinterpret_cast<Data*>( ptr );
}

Data* Serializer::TestingChain(uintptr_t raw)
{
	return e2data(d2e(c2d(b2c(a2b(uint2a(raw))))));
}
