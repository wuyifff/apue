/**
 * @file 测试fgets和fputs
 *
 * apue示例程序 - fgetsfputs.c
 *
 * @author Steve & r00tk1t
 *
 */ 
#include "apue.h"

int main(void)
{
	char	buf[MAXLINE];

	while (fgets(buf, MAXLINE, stdin) != NULL)
		if (fputs(buf, stdout) == EOF)
			err_sys("output error");

	if (ferror(stdin))
		err_sys("input error");

	return 0;
}