#ifndef MENU_MENU_H_
#define MENU_MENU_H_

#include "button.h"
#include "editor.h"

namespace menu
{

class Menu
{
public:
	Menu();
	virtual ~Menu();

	ButtonPtr getButtonOk() const;
	ButtonPtr getButtonCancel() const;
	EditorPtr getEditor() const;

	void setButtonOk( ButtonPtr buttonOkptr);
	void setButtonCancel( ButtonPtr buttonCancelPtr);
	void setEditor( EditorPtr editorPtr);
	void getInfo();

private:
	ButtonPtr buttonOkPtr_;
	ButtonPtr buttonCancelPtr_;
	EditorPtr editotrPtr_;

};

using MenuPtr = std::shared_ptr<Menu>;

} /* namespace menu */

#endif /* MENU_MENU_H_ */
