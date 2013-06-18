#include <unistd.h>
int main()
{
ioctl(tty_fd,KDSETLED, LED_NUM);
}
