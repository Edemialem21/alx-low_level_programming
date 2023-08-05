#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check - checks char is number or not
 * @a: input string in the form of string
 * Return: int value of the input string if it is an integer
 **/

int check(char *a)
{
	int sum = 0;
	while (*a)
	{
		if (*a < '0' || *a > '9')
			return (-1);
		sum = sum * 10 + (*a - '0');
		a++;
	}
	return (sum);
}
/**
 * main - main entry point
 * @argc: argument length
 * @argv: argumrent vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
        int i, sum, x;

        i = 1;
        sum = 0;
        while (i < argc)
        {
                x = check(argv[i]);
                if (x == -1)
                {
                        printf("Error\n");
                        return (1);
                }
                sum = sum + x;
		i++;
        }
        printf("%d\n", sum);
        return (0);
}
