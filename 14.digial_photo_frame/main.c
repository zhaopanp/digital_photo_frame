#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <config.h>
#include <draw.h>
#include <encoding_manager.h>
#include <fonts_manager.h>
#include <disp_manager.h>
#include <input_manager.h>
#include <string.h>


int main(int argc, char **argv)
{
	/* 一系列的初始化 */

	Page("main")->Run();
	return 0;
}

#modified