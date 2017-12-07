#ifndef FACTORY_APPLEFACTORY_H_
#define FACTORY_APPLEFACTORY_H_

#include "abstractfactory.h"
#include "../elements/applebutton.h"
#include "../elements/appleeditline.h"
#include "../elements/applecombobox.h"


namespace factory
{

class AppleFactory: public AbstractFactory
{
public:
	AppleFactory();
	virtual ~AppleFactory();

	elements::Button* createButton() override;
	elements::EditLine* createEditLine() override;
	elements::ComboBox* createComboBox() override;


};

} /* namespace factory */

#endif /* FACTORY_APPLEFACTORY_H_ */
