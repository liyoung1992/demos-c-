#pragma once
#include <iostream>
#include <vector>

/// 厨师
class Cook {
public:
    void hot_dish() { std::cout << "炒菜" << std::endl; };
    void cold_dish() { std::cout << "凉菜" << std::endl; };
};
/// 命令类
class Command {
public:
    Command(Cook *cook) {
        m_pcook_ = cook;
    };
    virtual void exec_cmd() = 0;
protected:
    Cook* m_pcook_;
};
/// 热菜厨师命令
class HotDishCmd : public Command{
public:
    HotDishCmd(Cook* cook):Command(cook) {};
    virtual void exec_cmd() { m_pcook_->hot_dish(); };
};

///凉菜师傅命令
class ColdDishCmd :public Command {
public:
    ColdDishCmd(Cook *cook) :Command(cook) {};
    virtual void exec_cmd() { m_pcook_->cold_dish(); };
};

class Command;
/// 服务员
class Waiter {
public:
    void set_cmd(Command* cmd) {
        m_pcmd_list_.push_back(cmd);
        std::cout << "增加订单" << std::endl;
    };
    void notify() {
        std::vector<Command*>::iterator it;
        for (it = m_pcmd_list_.begin(); it != m_pcmd_list_.end(); ++it){
            (*it)->exec_cmd();
        }
    };
protected:
    std::vector<Command*> m_pcmd_list_;
};