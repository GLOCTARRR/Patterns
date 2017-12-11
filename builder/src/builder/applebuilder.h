#ifndef BUILDER_APPLEBUILDER_H_
#define BUILDER_APPLEBUILDER_H_

#include "builder.h"

namespace builder
{

class AppleBuilder: public Builder
{
public:
	AppleBuilder();
	virtual ~AppleBuilder();

	void createMenu() override;
	void createButtonOk() override;
	void creatButtonCancel() override;
	void createEditor() override;
	menu::MenuPtr getMenu() override;


};

using AppleBuilderPtr = std::shared_ptr<AppleBuilder>;

} /* namespace builder */

#endif /* BUILDER_APPLEBUILDER_H_ */
