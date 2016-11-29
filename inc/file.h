#ifndef H_CORE
	#define H_CORE "core.h"
#endif
#include H_CORE
#include H_STDIO
#include H_STRING

#ifndef CONST_FILE_MODE_READ_EXIST_FILE
	#define CONST_FILE_MODE_READ_EXIST_FILE "r"
#endif

#ifndef CONST_FILE_MODE_WRITE_EMPTY_FILE
	#define CONST_FILE_MODE_WRITE_EMPTY_FILE "w"
#endif

FILE* fetchFile(const char *fileName, const char *mode);

void readExistFile(FILE *fp);
void writeExistFile(FILE *fp);