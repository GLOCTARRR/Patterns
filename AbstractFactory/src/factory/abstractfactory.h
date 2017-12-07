#ifndef FACTORY_ABSTRACTFACTORY_H_
#define FACTORY_ABSTRACTFACTORY_H_

#include "../elements/button.h"
#include "../elements/editline.h"
#include "../elements/combobox.h"

namespace factory
{

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual elements::Button* createButton() = 0;
	virtual elements::EditLine* createEditLine() = 0;
	virtual elements::ComboBox* createComboBox() = 0;


};

} /* namespace elements */

#endif /* FACTORY_ABSTRACTFACTORY_H_ */
