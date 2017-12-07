#ifndef ELEMENTS_EDITLINE_H_
#define ELEMENTS_EDITLINE_H_

namespace elements
{

class EditLine
{
public:
	EditLine();
	virtual ~EditLine();

	virtual void info() = 0;
};

} /* namespace elements */

#endif /* ELEMENTS_EDITLINE_H_ */
