#ifndef REUSABLE_H_
#define REUSABLE_H_

#include <string>
#include <memory>

namespace pool
{

class Reusable
{
public:
	Reusable();
	virtual ~Reusable();

	void getInfo( std::string title);
};

using ReusablePtr = std::shared_ptr<Reusable>;

} /* namespace pool */

#endif /* REUSABLE_H_ */
