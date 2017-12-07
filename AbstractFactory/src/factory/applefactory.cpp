#include "applefactory.h"

namespace factory
{

AppleFactory::AppleFactory()
{

}

AppleFactory::~AppleFactory()
{

}

elements::Button* AppleFactory::createButton()
{
	return new elements::AppleButton();
}

elements::EditLine* AppleFactory::createEditLine()
{
	return new elements::AppleEditLine();
}

elements::ComboBox* AppleFactory::createComboBox()
{
	return new elements::AppleComboBox();
}


} /* namespace factory */
