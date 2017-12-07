#ifndef ELEMENTS_ANDROIDCOMBOBOX_H_
#define ELEMENTS_ANDROIDCOMBOBOX_H_

#include "combobox.h"

#include <iostream>

namespace elements
{

class AndroidComboBox: public ComboBox
{
public:
	AndroidComboBox();
	virtual ~AndroidComboBox();

	void info() override;
};

} /* namespace elements */

#endif /* ELEMENTS_ANDROIDCOMBOBOX_H_ */
