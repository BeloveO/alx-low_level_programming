#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry Point
 *
 * Return: Always 1 (success)
 */
int main(void)
{
const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
syscall(SYS_write, 2, msg, sizeof(msg));
return (1);
}
