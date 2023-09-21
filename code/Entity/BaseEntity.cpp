#include "BaseEntity.h"
#include <cstdlib>
#include <ctime>

int BaseEntity::GetGuidanceOfFate(int max)
{
    srand(time(time_t()));
    return rand()%max;
}

BaseEntity::BaseEntity()
{

}

BaseEntity::~BaseEntity()
{
}

void BaseEntity::update()
{
}
