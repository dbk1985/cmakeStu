cmake_minimum_required (VERSION 2.6)
project (cmakeStu)

#定义版本号
set(CmakeStu_VERSION_MAJOR 1)
set(CmakeStu_VERSION_MINOR 0)

#配置一个头文件来将cmake的一些配置传递到源代码中使用
configure_file(
	"${PROJECT_SOURCE_DIR}/cmakeStuConfig.h.in"
	"${PROJECT_BINARY_DIR}/cmakeStuConfig.h"
	)

#添加包含的头文件的二进制树结构搜索目录以便我们可以找到这个头文件‘cmakeStuConfig.h’
include_directories("${PROJECT_BINARY_DIR}")

#添加可执行程序
add_executable(cmakeStu main.c)