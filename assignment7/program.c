#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* ptr1;
	FILE* ptr2;
	char ch;

	ptr1 = fopen("test.txt", "r");
	ptr2 = fopen("print.txt", "a");
	if (NULL == ptr1) {
		printf("file can't be opened \n");
	}
	
        if (NULL == ptr2) {
                printf("file can't be opened \n");
        }

	//printf("content of this file are \n");

	while((ch = fgetc(ptr1))!=EOF)
	{
		//printf("%c", ch);
		if(ch==' ')
		{
			fputc(' ', ptr2);
			continue;
		}
		ch=(char)(ch-32);
		fputc(ch, ptr2);
	}
	
	fclose(ptr1);
	fclose(ptr2);
	ptr2 = fopen("print.txt", "r");
        if (NULL == ptr2) {
                printf("file can't be opened \n");
        }
	

        printf("content of this file are \n");

        while((ch = fgetc(ptr2))!=EOF)
        {
                printf("%c", ch);
        }
	printf("\n");
	fclose(ptr2);
	return 0;
}

