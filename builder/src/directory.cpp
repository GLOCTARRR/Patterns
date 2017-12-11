#include "directory.h"

namespace directory {


Directory::Directory()
{

}

Directory::~Directory()
{

}

menu::MenuPtr Directory::createMenu( builder::BuilderPtr builder)
{
	builder->createMenu();
	builder->creatButtonCancel();
	builder->createButtonOk();
	builder->createEditor();
	return builder->getMenu();
}

} /* namespace directory */
