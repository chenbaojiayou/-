#include "workerManager.h"

WorkerManager::WorkerManager()
{
    
}

//展示菜单
void WorkerManager::Show_Menu(){
    cout<<"**********************************"<<endl;
    cout<<"******* 欢迎使用职工管理系统!******"<<endl;
    cout<<"********* 0.退出管理程序 *********"<<endl;
    cout<<"********* 1.新增职工 *************"<<endl;
    cout<<"********* 2.显示职工信息 ********"<<endl;
    cout<<"********* 3.修改职工信息 *********"<<endl;
    cout<<"********* 4.删除职工 *************"<<endl;
    cout<<"********* 5.查找职工信息 *********"<<endl;
    cout<<"********* 6.按照编号排序 *********"<<endl;
    cout<<"********* 7.清空所有文档 *********"<<endl;
    cout<<"**********************************"<<endl;
    cout<<endl;
}
WorkerManager::~WorkerManager()
{

}