#ifndef CHARACTER_ENTITY_H
#define CHARACTER_ENTITY_H
#include"entity_global.h"
#include"BaseEntity.h"
#include <string>

class ENTITY_EXPORT CharacterEntity:public BaseEntity
{
    std::string name;// ����
    int lucky;// ���˶� 
    int maxLife;// ������� 
    int ambition;// Ұ�� 

public:
    CharacterEntity();
    ~CharacterEntity();
};


#endif // !CHARACTER_ENTITY_H

