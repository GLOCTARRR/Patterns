#ifndef SRC_MODEL_AUTOMOBILE_H_
#define SRC_MODEL_AUTOMOBILE_H_

namespace automobile
{

class Automobile
{
public:
	virtual Automobile* clone() = 0;
	virtual void info() = 0;
	virtual ~Automobile(){};
};

} /* namespace automobile */

#endif /* SRC_MODEL_AUTOMOBILE_H_ */
