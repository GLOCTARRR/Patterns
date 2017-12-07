#ifndef ELEMENTS_APPLEBUTTON_H_
#define ELEMENTS_APPLEBUTTON_H_

#include "button.h"

#include <iostream>

namespace elements
{

class AppleButton: public Button
{

public:
	AppleButton();
	virtual ~AppleButton();

	void info() override;
};

} /* namespace elements */

#endif /* ELEMENTS_APPLEBUTTON_H_ */
