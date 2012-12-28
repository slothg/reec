
#include "stdio.h"
#include "reec.h"
int TOKRegularExpressionEngineBooleanRun ( char* regular_expression , char* string , int level ) ;
int main(int argc , char** argv) {

	int a = TOKRegularExpressionEngineBooleanRun("<(6)^1>","768",RS_LEVEL_1);
	printf("%d",a) ;
	return 0 ;



}
