#include "menu.h"

namespace abstractfactory
{

Menu::Menu()
{

}

Menu::~Menu()
{
	delete button_;
	delete comboBox_;
	delete editLine_;
}

elements::Button* Menu::getButton()
{
	return button_;
}
elements::ComboBox* Menu::getComboBox()
{
	return comboBox_;
}

elements::EditLine* Menu::getEditLine()
{
	return editLine_;
}

void Menu::setButton( elements::Button* button)
{
	button_ = button;
}

void Menu::setComboBox( elements::ComboBox* comboBox)
{
	comboBox_ = comboBox;
}

void Menu::setEditLine( elements::EditLine* editLine)
{
	editLine_ = editLine;
}

} /* namespace abstractfactory */
