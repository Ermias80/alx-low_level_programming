#include <unistd.h>
#include <string.h>
#include <sys/syscall.h>
int main(void)
{
 write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
return 1;
}

