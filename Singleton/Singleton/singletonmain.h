#ifndef SINGLETONMAIN_H
#define SINGLETONMAIN_H
#include <iostream>
#include <mutex>


using namespace std;

class SingletonMain;

class SingletonMain
{
    //构造函数为私有
private:
    SingletonMain();

public:
    static SingletonMain* getInstance();
    int getSingletonNum();

private:
    static SingletonMain *m_pInstance;
    static mutex m_mutex;  // 锁
    static int m_pNum;

    // 它的唯一工作就是在析构函数中删除SingletonMain的实例
     class GC
     {
     public:
         ~GC()
         {
             cout << "delete....";
             if (SingletonMain::m_pInstance)
                 delete SingletonMain::m_pInstance;
         }
     };
    // 定义一个静态成员，在程序结束时，系统会调用它的析构函数
     static GC m_pGc;
};

#endif // SINGLETONMAIN_H
