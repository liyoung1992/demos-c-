#pragma once
#include <iostream>
#include <vector>

/// ��ʦ
class Cook {
public:
    void hot_dish() { std::cout << "����" << std::endl; };
    void cold_dish() { std::cout << "����" << std::endl; };
};
/// ������
class Command {
public:
    Command(Cook *cook) {
        m_pcook_ = cook;
    };
    virtual void exec_cmd() = 0;
protected:
    Cook* m_pcook_;
};
/// �Ȳ˳�ʦ����
class HotDishCmd : public Command{
public:
    HotDishCmd(Cook* cook):Command(cook) {};
    virtual void exec_cmd() { m_pcook_->hot_dish(); };
};

///����ʦ������
class ColdDishCmd :public Command {
public:
    ColdDishCmd(Cook *cook) :Command(cook) {};
    virtual void exec_cmd() { m_pcook_->cold_dish(); };
};

class Command;
/// ����Ա
class Waiter {
public:
    void set_cmd(Command* cmd) {
        m_pcmd_list_.push_back(cmd);
        std::cout << "���Ӷ���" << std::endl;
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