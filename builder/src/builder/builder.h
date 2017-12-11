#ifndef BUILDER_BUILDER_H_
#define BUILDER_BUILDER_H_

#include "../menu/menu.h"

namespace builder
{

class Builder
{
public:
	Builder();
	virtual ~Builder() = 0;
	virtual void createMenu() = 0;
	virtual void createButtonOk() = 0;
	virtual void creatButtonCancel() = 0;
	virtual void createEditor() = 0;
	virtual menu::MenuPtr getMenu() = 0;


protected:
	 menu::MenuPtr menu_;
};

using BuilderPtr = std::shared_ptr<Builder>;

} /* namespace builder */

#endif /* BUILDER_BUILDER_H_ */
