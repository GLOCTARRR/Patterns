#include "androidbuilder.h"
#include "../menu/androidbutton.h"
#include "../menu/androideditor.h"

namespace builder
{

AndroidBuilder::AndroidBuilder()
{

}

AndroidBuilder::~AndroidBuilder()
{

}

void AndroidBuilder::createMenu()
{
	menu_ = menu::MenuPtr( new menu::Menu());
}

void AndroidBuilder::creatButtonCancel()
{
	menu_->setButtonCancel( menu::AndroidButtonPtr( new menu::AndroidButton()));
}

void AndroidBuilder::createButtonOk()
{
	menu_->setButtonOk( menu::AndroidButtonPtr( new menu::AndroidButton()));
}

void AndroidBuilder::createEditor()
{
	menu_->setEditor( menu::AndroidEditorPtr( new menu::AndroidEditor()));
}

menu::MenuPtr AndroidBuilder::getMenu()
{
	return menu_;
}



} /* namespace builder */
