#ifndef BASE_ENTITY_H
#define BASE_ENTITY_H
/*
* 数据类基类
*/
class BaseEntity
{
protected:
    BaseEntity();
    ~BaseEntity();
    void  update();
private:
    char id[64];
    char create_data[16];
    char update_data[16];
};


#endif // !BASE_ENTITY_H