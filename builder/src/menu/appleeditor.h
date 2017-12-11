#ifndef MENU_APPLEEDITOR_H_
#define MENU_APPLEEDITOR_H_

#include "editor.h"

namespace menu
{

class AppleEditor: public Editor
{
public:
	AppleEditor();
	virtual ~AppleEditor();

	void getInfo() override;
};

using AppleEditorPtr = std::shared_ptr<AppleEditor>;

} /* namespace menu */

#endif /* MENU_APPLEEDITOR_H_ */
