#include <stdio.h>
main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		if((ch>'a'&&ch<'z')||(ch>='A'&&ch<='Z'))
		{
			ch+=3;
			if((ch>'Z'&&ch<'a')||(ch>'z'))
				ch-=26;
		}
		printf("%c",ch);
	}
}
