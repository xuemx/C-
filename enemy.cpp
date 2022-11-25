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
    int x = rand() % (Res::GetInstance()->GetWidth("����") / 100) * 100;
    int y = -1 * 150;
     enemy.push_back(new Element(x,y,"�л�",1,3));
}

list<Element*>& Enemy::GetEnemy()
{
    // TODO: �ڴ˴����� return ���
    return enemy;
}

