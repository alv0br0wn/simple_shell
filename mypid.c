#include "main.h"
/**
 * main - is the main function
 * Return: 0 (successful)
 */

int main(void)
{
	pid_t cpid, papid;

	cpid = getpid();
	papid = getppid();

	printf("Your current process id is: %d\n", cpid);
	printf("The parent process id is: %d\n", papid);

	return (0);
}
