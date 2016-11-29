#ifndef H_FILE
	#define H_FILE "file.h"
#endif
#include H_FILE

FILE* fetchFile(const char *fileName, const char *mode)
{
	FILE *fp;
	fp = fopen(fileName, mode);
}

void readExistFile(FILE *fp)
{
	char c;
	if(fp == NULL)
	{
		perror("open file error.\n");
	}
	else
	{
		while(1)
		{
			c = fgetc(fp);
			if(feof(fp))
			{
				break;
			}
			printf("%c", c);
		}
		printf("\n");
		fclose(fp);	
	}
	
}

int main(int argc, char const *argv[])
{
	if(argc > 1)
	{
		const char* fileName = argv[1];
		printf("the filename is : %s\n", fileName );
		readExistFile(fetchFile(fileName, CONST_FILE_MODE_READ_EXIST_FILE));
	}
	return 0;
}