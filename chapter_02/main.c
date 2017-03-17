#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 获取CMakeLists中的配置文件“cmakeStuConfig.h.in”中的定义
#include "cmakeStuConfig.h"

int main(int argc, char const *argv[])
{
	if (argc < 2){
		fprintf(stdout,"%s Version %d.%d\n",argv[0],CmakeStu_VERSION_MAJOR,CmakeStu_VERSION_MINOR);
    	return 1;
    }
  	double inputValue = atof(argv[1]);
  	double outputValue = sqrt(inputValue);
 	fprintf(stdout,"The square root of %g is %g\n",inputValue, outputValue);
  	return 0;
}