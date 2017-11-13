// cmd.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "cook.h"


int main()
{
    Cook* cook = new Cook();
    Command* hot_cmd = new HotDishCmd(cook);
    Command* cold_cmd = new ColdDishCmd(cook);
    Waiter* good_waiter = new Waiter();

    ///���
    good_waiter->set_cmd(cold_cmd);
    good_waiter->set_cmd(hot_cmd);

    ///֪ͨ��ʦ
    good_waiter->notify();
    system("pause");
    return 0;
}

