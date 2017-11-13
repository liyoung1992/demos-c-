// cmd.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "cook.h"


int main()
{
    Cook* cook = new Cook();
    Command* hot_cmd = new HotDishCmd(cook);
    Command* cold_cmd = new ColdDishCmd(cook);
    Waiter* good_waiter = new Waiter();

    ///点菜
    good_waiter->set_cmd(cold_cmd);
    good_waiter->set_cmd(hot_cmd);

    ///通知厨师
    good_waiter->notify();
    system("pause");
    return 0;
}

