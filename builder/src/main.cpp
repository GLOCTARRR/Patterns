#include "builder/androidbuilder.h"
#include "builder/applebuilder.h"
#include "menu/menu.h"
#include "directory.h"

#include <iostream>

using namespace std;

int main() {
	builder::AndroidBuilderPtr  androidBuilder = builder::AndroidBuilderPtr( new builder::AndroidBuilder);
	builder::AppleBuilderPtr appleBuilder = builder::AppleBuilderPtr( new builder::AppleBuilder());
	directory::Directory directory;
	menu::MenuPtr menuAndroid = directory.createMenu( androidBuilder);
	menuAndroid->getInfo();
	menu::MenuPtr menuApple = directory.createMenu( appleBuilder);
	menuApple->getInfo();
	return 0;
}
