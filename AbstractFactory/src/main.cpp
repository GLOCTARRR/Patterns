#include "program.h"
#include "factory/androidfactory.h"
#include "factory/applefactory.h"

#include <iostream>

int main() {
	abstractfactory::Program program;
	factory::AndroidFactory androidFactory;
	factory::AppleFactory appleFactory;

	program.createMenu( &androidFactory);
	program.showMenu();
	std::cout << "_____________________" << std::endl;
	program.createMenu( &appleFactory);
	program.showMenu();



	return 0;
}
