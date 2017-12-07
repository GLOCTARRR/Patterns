#include "androidfactory.h"

namespace factory
{

AndroidFactory::AndroidFactory()
{

}

AndroidFactory::~AndroidFactory()
{

}

elements::Button* AndroidFactory::createButton()
{
	return new elements::AndriodButton();
}

elements::EditLine* AndroidFactory::createEditLine()
{
	return new elements::AndroidEditLine();
}

elements::ComboBox* AndroidFactory::createComboBox()
{
	return new elements::AndroidComboBox();
}

} /* namespace factory */
