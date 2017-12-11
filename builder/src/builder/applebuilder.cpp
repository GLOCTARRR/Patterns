#include "applebuilder.h"
#include "../menu/applebutton.h"
#include "../menu/appleeditor.h"

namespace builder
{

AppleBuilder::AppleBuilder()
{

}

AppleBuilder::~AppleBuilder()
{

}

void AppleBuilder::createMenu()
{
	menu_ = menu::MenuPtr( new menu::Menu());
}

void AppleBuilder::creatButtonCancel()
{
	menu_->setButtonCancel( menu::AppleButtonPtr( new menu::AppleButton()));
}

void AppleBuilder::createButtonOk()
{
	menu_->setButtonOk( menu::AppleButtonPtr( new menu::AppleButton()));
}

void AppleBuilder::createEditor()
{
	menu_->setEditor( menu::AppleEditorPtr( new menu::AppleEditor()));
}

menu::MenuPtr AppleBuilder::getMenu()
{
	return menu_;
}


} /* namespace builder */
