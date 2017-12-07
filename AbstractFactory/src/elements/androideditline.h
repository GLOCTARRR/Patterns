#ifndef ELEMENTS_ANDROIDEDITLINE_H_
#define ELEMENTS_ANDROIDEDITLINE_H_

#include "editline.h"

#include <iostream>

namespace elements
{

class AndroidEditLine: public EditLine
{
public:
	AndroidEditLine();
	virtual ~AndroidEditLine();

	void info() override;
};

} /* namespace elements */

#endif /* ELEMENTS_ANDROIDEDITLINE_H_ */
