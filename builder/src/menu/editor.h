#ifndef MENU_EDITOR_H_
#define MENU_EDITOR_H_

#include <memory>

namespace menu
{

class Editor
{
public:
	Editor();
	virtual ~Editor();

	virtual void getInfo() = 0;
};

using EditorPtr = std::shared_ptr<Editor>;

} /* namespace menu */

#endif /* MENU_EDITOR_H_ */
