cmake_minimum_required (VERSION 2.6)
project (cmakeStu)

# 设置c文件的搜索位置
aux_source_directory(. DIR_SRCS)

# 是否使用库
option(USE_SYSTEM "Use provided math implementation" ON)

if (USE_SYSTEM)
	include_directories("${PROJECT_SOURCE_DIR}/MathFunctions")
	add_subdirectory(MathFunctions)
	set(EXTER_LIBS ${EXTER_LIBS} MathFunctions)
endif(USE_SYSTEM)

add_executable(cmakeStu ${DIR_SRCS})
target_link_libraries(cmakeStu ${EXTER_LIBS})

# 开启测试
enable_testing()