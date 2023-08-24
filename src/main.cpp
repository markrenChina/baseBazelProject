/**@file        $PACKAGE_NAME
* @brief        
* @details  
* @author       Created by markrenChina
* @date         2023/8/23
* @version      
**********************************************************************************
* @attention
* SDK版本：
* @par 修改日志:
* <table>
* <tr><th>Date          <th>Version     <th>Author          <th>Description
* <tr><td>2023/8/23       <td>            <td>markrenChina    <td>创建初始版本
* </table>
*
**********************************************************************************
*/
#include <iostream>
#include <glog/logging.h>
#include <gflags/gflags.h>


int main(int argc, char* argv[]){
    gflags::ParseCommandLineFlags(&argc,&argv, true);
    google::InitGoogleLogging(argv[0]);
    atexit(google::ShutdownGoogleLogging);
    LOG(ERROR) << "hello world";
//    std::cout<< "hello world" << std::endl;
}