/**@file        $PACKAGE_NAME
* @brief        
* @details  
* @author       Created by markrenChina
* @date         2023/8/24
* @version      
**********************************************************************************
* @attention
* SDK版本：
* @par 修改日志:
* <table>
* <tr><th>Date          <th>Version     <th>Author          <th>Description
* <tr><td>2023/8/24       <td>            <td>markrenChina    <td>创建初始版本
* </table>
*
**********************************************************************************
*/
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
// Expect two strings not to be equal.
EXPECT_STRNE("hello", "world");
// Expect equality.
EXPECT_EQ(7 * 6, 42);
}