#include "Entity.h"

using namespace std;

int Entity::getEnergy() {
	return Entity::energy;
}
class simEntity(): public Entity