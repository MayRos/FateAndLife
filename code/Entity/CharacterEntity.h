#ifndef CHARACTER_ENTITY_H
#define CHARACTER_ENTITY_H
#include"entity_global.h"

class ENTITY_EXPORT CharacterEntity
{
    int lucky;// ���˶� 
    int maxLife;// ������� 
    int ambition;// Ұ�� 

public:
    CharacterEntity();
    ~CharacterEntity();
};


#endif // !CHARACTER_ENTITY_H

