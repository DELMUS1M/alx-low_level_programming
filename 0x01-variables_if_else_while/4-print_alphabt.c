#include <stdio.h>
/**
 * main - entry point
 *
 */
int main(void)
{
		char a;

			for (a = 'a'; a <= 'z' ; a++)
			{
						if (a == 'q' || a == 'e')
						{
										continue;
						}
								putchar(a);
			}	putchar('\n');
				return (0);
}
