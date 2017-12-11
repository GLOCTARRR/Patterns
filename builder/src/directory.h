#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include "builder/builder.h"
#include "menu/menu.h"

namespace directory
{

class Directory
{
public:
	Directory();
	virtual ~Directory();

	menu::MenuPtr createMenu( builder::BuilderPtr);
};

} /* namespace directory */

#endif /* DIRECTORY_H_ */
