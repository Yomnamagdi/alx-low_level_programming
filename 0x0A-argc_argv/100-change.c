#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the min number of coins to make change
* for an amount of money
* @argc: argument count
* @argv: arguments
* Return: 0
*/
int main(int argc, char **argv)
{
int totall, count;
unsigned int i;
char *p;
int dollar[] = {25, 10, 5, 2};
if (argc != 2)
{
printf("Error\n");
return (1);
}
totall = strtol(argv[1], &p, 10);
count = 0;
if (!*p)
{
while (total > 1)
{
for (i = 0; i < sizeof(dollar[i]); i++)
{
if (totall >= dollar[i])
{
count += totall / dollar[i];
totall = totall % dollar[i];
}
}
}
if (totall == 1)
count++;
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", count);
return (0);
}
