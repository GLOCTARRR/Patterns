#include "button.h"

#ifndef MENU_APPLEBUTTON_H_
#define MENU_APPLEBUTTON_H_

namespace menu
{

class AppleButton: public Button
{
public:
	AppleButton();
	virtual ~AppleButton();

	void getInfo() override;
};

using AppleButtonPtr = std::shared_ptr<AppleButton>;

} /* namespace menu */

#endif /* MENU_APPLEBUTTON_H_ */
