#ifndef ELEMENTS_APPLECOMBOBOX_H_
#define ELEMENTS_APPLECOMBOBOX_H_

#include "combobox.h"

#include <iostream>

namespace elements
{

class AppleComboBox: public ComboBox
{
public:
	AppleComboBox();
	virtual ~AppleComboBox();

	void info() override;
};

} /* namespace elements */

#endif /* ELEMENTS_APPLECOMBOBOX_H_ */
