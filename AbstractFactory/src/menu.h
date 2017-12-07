#ifndef MENU_H_
#define MENU_H_

#include "elements/button.h"
#include "elements/editline.h"
#include "elements/combobox.h"

namespace abstractfactory
{

class Menu
{
public:
	Menu();
	virtual ~Menu();

	elements::Button* getButton();
	elements::ComboBox* getComboBox();
	elements::EditLine* getEditLine();


	void setButton( elements::Button*);
	void setComboBox( elements::ComboBox* );
	void setEditLine( elements::EditLine*);


public:
	elements::Button* button_;
	elements::ComboBox* comboBox_;
	elements::EditLine* editLine_;
};

} /* namespace abstractfactory */

#endif /* MENU_H_ */
