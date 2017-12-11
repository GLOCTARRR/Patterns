#ifndef MENU_ANDROIDEDITOR_H_
#define MENU_ANDROIDEDITOR_H_

#include "editor.h"

namespace menu
{

class AndroidEditor: public Editor
{
public:
	AndroidEditor();
	virtual ~AndroidEditor();

	void getInfo() override;
};

using AndroidEditorPtr = std::shared_ptr<AndroidEditor>;

} /* namespace menu */

#endif /* MENU_ANDROIDEDITOR_H_ */
