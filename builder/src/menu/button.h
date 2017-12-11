#ifndef MENU_BUTTON_H_
#define MENU_BUTTON_H_

#include <memory>

namespace menu
{

class Button
{
public:
	Button();
	virtual ~Button();

	virtual void getInfo() = 0;
};


using ButtonPtr = std::shared_ptr<Button>;
} /* namespace menu */

#endif /* MENU_BUTTON_H_ */
