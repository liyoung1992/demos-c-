#include "singletonmain.h"

//SingletonMain SingletonMain::m_pInstance = nullptr;

SingletonMain *SingletonMain::m_pInstance = NULL;
SingletonMain::GC SingletonMain::m_pGc;
int SingletonMain::m_pNum = 0;
mutex SingletonMain::m_mutex;

SingletonMain::SingletonMain()
{

}
//获取单例对象
SingletonMain* SingletonMain::getInstance()
{
    if (m_pInstance == nullptr) {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (m_pInstance == nullptr) {
            m_pInstance = new SingletonMain;
            m_pNum ++;
        }
    }
    return m_pInstance;
}

int SingletonMain::getSingletonNum()
{
    return m_pNum;
}
