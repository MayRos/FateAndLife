#ifndef CHARACTER_ENTITY_H
#define CHARACTER_ENTITY_H
#include"entity_global.h"
#include"BaseEntity.h"
#include <string>

class ENTITY_EXPORT CharacterEntity:public BaseEntity
{
    std::string name;// 姓名
    int lucky;// 幸运度 
    int maxLife;// 最大生命 
    int ambition;// 野心 

public:
    CharacterEntity();
    ~CharacterEntity();
};


#endif // !CHARACTER_ENTITY_H

