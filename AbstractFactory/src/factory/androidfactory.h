#ifndef FACTORY_ANDROIDFACTORY_H_
#define FACTORY_ANDROIDFACTORY_H_

#include "abstractfactory.h"
#include "../elements/androidbutton.h"
#include "../elements/androidcombobox.h"
#include "../elements/androideditline.h"

namespace factory
{

class AndroidFactory: public AbstractFactory
{
public:
	AndroidFactory();
	virtual ~AndroidFactory();

	elements::Button* createButton() override;
	elements::EditLine* createEditLine() override;
	elements::ComboBox* createComboBox() override;
};

} /* namespace factory */

#endif /* FACTORY_ANDROIDFACTORY_H_ */
