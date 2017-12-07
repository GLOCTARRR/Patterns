#include "program.h"

namespace abstractfactory
{

Program::Program()
{

}

Program::~Program()
{

}

void Program::createMenu( factory::AbstractFactory* abstractFactory)
{
	menu_.setButton( abstractFactory->createButton());
	menu_.setComboBox( abstractFactory->createComboBox());
	menu_.setEditLine( abstractFactory->createEditLine());
}

void Program::showMenu()
{
	menu_.getButton()->info();
	menu_.getComboBox()->info();
	menu_.getEditLine()->info();
}

} /* namespace abstractfactory */
