#ifndef PROGRAM_H_
#define PROGRAM_H_

#include "menu.h"
#include "factory/abstractfactory.h"

namespace abstractfactory
{

class Program
{
public:
	Program();
	virtual ~Program();
	void createMenu(factory::AbstractFactory* abstractFactory);
	void showMenu();
private:
	Menu menu_;


};

} /* namespace abstractfactory */

#endif /* PROGRAM_H_ */
