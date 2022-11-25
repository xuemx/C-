#include "enemy.h"
#include"element.h"
#include"res.h"
void Enemy::DrawEnemy()
{
    for (auto v : enemy)
    {
        if (v->GetLive())
        {
            v->DrawElement(1);
        }
    }
}

void Enemy::MoveEnemy(int speed)
{
    for (auto v : enemy)
    {
        v->MoveElement(speed, point::Dir::Down);
    }
}

void Enemy::CreateEnemy()
{
    int x = rand() % (Res::GetInstance()->GetWidth("背景") / 100) * 100;
    int y = -1 * 150;
     enemy.push_back(new Element(x,y,"敌机",1,3));
}

list<Element*>& Enemy::GetEnemy()
{
    // TODO: 在此处插入 return 语句
    return enemy;
}

