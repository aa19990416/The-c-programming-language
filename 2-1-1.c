#include <stdio.h>
#include <limits.h>
/*��ܦU��ƫ��A�d��*/
main()
{
	//���Ÿ�����ƫ��A 
	printf("sig char min	= %d\n",	SCHAR_MIN);
	printf("sig char max	= %d\n",	SCHAR_MAX);
	printf("sig short min	= %d\n",	SHRT_MIN);
	printf("sig short max	= %d\n",	SHRT_MAX);
	printf("sig int min	= %d\n",	INT_MIN);
	printf("sig int max	= %d\n",	INT_MAX);
	printf("sig long min	= %d\n",	LONG_MIN);
	printf("sig long max	= %d\n",	LONG_MAX);
	//�L�Ÿ�����ƫ��A 
	printf("unsig char max	= %d\n",		UCHAR_MAX);
	printf("unsig short max = %d\n",		USHRT_MAX);
	printf("unsig int max	= %d\n",		UINT_MAX);
	printf("unsig long max	= %d\n",		ULONG_MAX);
	getchar();
} 
