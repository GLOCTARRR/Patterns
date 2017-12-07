#ifndef ELEMENTS_BUTTON_H_
#define ELEMENTS_BUTTON_H_

#include <iostream>

namespace elements
{

class Button
{

public:
	Button();
	virtual ~Button();

	virtual void info() = 0;

};

} /* namespace elements */

#endif /* ELEMENTS_BUTTON_H_ */
