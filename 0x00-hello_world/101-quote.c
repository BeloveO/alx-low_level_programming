#include <unistd.h>
/**
 * main - Entry Point
 *
 * Return: Always 1 (success)
 */
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 59);
return (1);
}
