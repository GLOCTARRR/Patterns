#ifndef AUDIFACTORY_H_
#define AUDIFACTORY_H_

#include "automobile/audi.h"
#include "automobileFactory.h"

namespace fabric
{

class AudiFactory: public AutomobileFactory
{
public:
	AudiFactory();
	virtual ~AudiFactory();

	automobile::Automobile* createInstance() override;
};

} /* namespace fabric*/

#endif /* AUDIFACTORY_H_ */
