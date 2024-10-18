#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;
#include "workerManager.h"

int main()
{

   //实例化管理对象
   WorkerManager wm;


   //调用展示菜单成员函数
   wm.Show_Menu();


    system("pause");


    return 0;
}