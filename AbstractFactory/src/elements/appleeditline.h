#ifndef ELEMENTS_APPLEEDITLINE_H_
#define ELEMENTS_APPLEEDITLINE_H_

#include "editline.h"

#include <iostream>

namespace elements
{

class AppleEditLine: public EditLine
{
public:
	AppleEditLine();
	virtual ~AppleEditLine();

	void info() override;
};

} /* namespace elements */

#endif /* ELEMENTS_APPLEEDITLINE_H_ */
