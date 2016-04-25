#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <linux/i2c.h>
#include <linux/fcntl.h>

 int main() 
{
    int fd;
    char buf[] = "this is a example for character devices driver by yoyoba!";	//写入memdev设备的内容
    char buf_read[4096];	//memdev设备的内容读入到该buf中
     if ((fd = open("/dev/memdev", O_RDWR)) == -1)	//打开memdev设备
	printf("open memdev WRONG！\n");
    
    else
	printf("open memdev SUCCESS!\n");
     printf("buf is %s\n", buf);
     write(fd, buf, sizeof(buf));	//把buf中的内容写入memdev设备
     lseek(fd, 0, SEEK_SET);	//把文件指针重新定位到文件开始的位置
     read(fd, buf_read, sizeof(buf));	//把memdev设备中的内容读入到buf_read中
     printf("buf_read is %s\n", buf_read);
     return 0;
}
