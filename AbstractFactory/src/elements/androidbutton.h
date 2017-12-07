#ifndef ELEMENTS_ANDROIDBUTTON_H_
#define ELEMENTS_ANDROIDBUTTON_H_

#include "button.h"

#include <iostream>

namespace elements
{

class AndriodButton: public Button
{
public:
	AndriodButton();
	virtual ~AndriodButton();

	void info() override;
};

} /* namespace elements */

#endif /* ELEMENTS_ANDROIDBUTTON_H_ */
