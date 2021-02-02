#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
//创建一个空洞文件
int main(){
	
	char *buf="i am a Empty file";	
	char *buf1="Empty file ending";	
	int fd =open("file",O_RDWR|O_CREAT,777);
	
	if(fd == -1)
		perror("open");
	//先在文件中写入内容
	write(fd,buf,strlen(buf));
	if(lseek(fd,100,SEEK_SET) == -1)	//偏移距离文件开始1010处
		perror("lseek");
	write(fd,buf1,strlen(buf1));		//空洞文件并不占用磁盘区，只是记录在内核中
	close(fd);
	return 0;
}
