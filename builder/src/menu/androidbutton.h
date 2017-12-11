#ifndef MENU_ANDROIDBUTTON_H_
#define MENU_ANDROIDBUTTON_H_

#include "button.h"

namespace menu
{

class AndroidButton: public Button
{
public:
	AndroidButton();
	virtual ~AndroidButton();

	void getInfo() override;
};

using AndroidButtonPtr = std::shared_ptr<AndroidButton>;

} /* namespace menu */

#endif /* MENU_ANDROIDBUTTON_H_ */
