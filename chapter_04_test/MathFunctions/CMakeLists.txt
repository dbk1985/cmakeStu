# 设置所有源文件查询目录
aux_source_directory(. DIR_LIB_SRCS)
# 编译为库文件
add_library(MathFunctions ${DIR_LIB_SRCS})