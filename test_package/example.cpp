#include <iostream>
#include "krypto\Hex.h"

int main() {
	Hex h;
	h.dodaj("Napis");
	std::cout << h.pobierz().c_str();
}
