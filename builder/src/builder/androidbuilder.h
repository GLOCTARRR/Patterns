#ifndef BUILDER_ANDROIDBUILDER_H_
#define BUILDER_ANDROIDBUILDER_H_

#include "builder.h"

namespace builder
{

class AndroidBuilder: public Builder
{
public:
	AndroidBuilder();
	virtual ~AndroidBuilder();

	void createMenu() override;
	void createButtonOk() override ;
	void creatButtonCancel() override;
	void createEditor() override;
	menu::MenuPtr getMenu() override;
};

using AndroidBuilderPtr = std::shared_ptr<AndroidBuilder>;

} /* namespace builder */

#endif /* BUILDER_ANDROIDBUILDER_H_ */
