#include "menu.h"

namespace menu
{

Menu::Menu()
{

}

Menu::~Menu()
{

}

ButtonPtr Menu::getButtonOk() const
{
	return buttonOkPtr_;
}

ButtonPtr Menu::getButtonCancel() const
{
	return buttonCancelPtr_;
}


EditorPtr Menu::getEditor() const
{
	return editotrPtr_;
}

void Menu::setButtonOk( ButtonPtr buttonOkptr)
{
	buttonOkPtr_ = buttonOkptr;
}

void Menu::setButtonCancel( ButtonPtr buttonCancelPtr)
{
	buttonCancelPtr_ = buttonCancelPtr;
}

void Menu::setEditor( EditorPtr editorPtr)
{
	editotrPtr_ = editorPtr;
}

void Menu::getInfo()
{
	buttonOkPtr_->getInfo();
	buttonCancelPtr_->getInfo();
	editotrPtr_->getInfo();
}

} /* namespace menu */
