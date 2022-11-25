#include "res.h"
map<string, IMAGE*> Res::img;  //��̬�������ⶨ��
int Res::GetWidth(string name)
{
    return img[name]->getwidth();
}

int Res::GetHeight(string name)
{
    return img[name]->getheight();
}

Res* Res::GetInstance()
{
    static Res* pres = new Res;
    return pres;
}

void Res::DrawIMG(int x, int y, string name)
{
    putimage(x, y, GetInstance()->img[name]);
}

void Res::DrawIMG(int x, int y, string name, int index)
{
    putimage(x, y, GetInstance()->img[name] + index, NOTSRCERASE);
    putimage(x, y, GetInstance()->img[name] + index+1, SRCINVERT);

}

Res::Res()
{
    //����
    img["����"] = new IMAGE;
    loadimage(img["����"], "res//background.jpg");
    
    //�ɻ�
    img["�ɻ�"] = new IMAGE[2];
    loadimage(img["�ɻ�"], "res//plane.jpg");
    loadimage(img["�ɻ�"]+1, "res//plane1.jpg");

    //�ӵ�
    img["�ӵ�"] = new IMAGE[2];
    loadimage(img["�ӵ�"], "res//bullet.jpg");
    loadimage(img["�ӵ�"] + 1, "res//bullet1.jpg");

    //�л�
    img["�л�"] = new IMAGE[2];
    loadimage(img["�л�"], "res//enemy.jpg");
    loadimage(img["�л�"] + 1, "res//enemy1.jpg");
}


