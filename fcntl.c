#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

//输出指定文件的状态
int main(int argc,char argv[2]){
	int fd,val;

	//指定输入格式
	if(atgc <2)
		printf("./a.out filename");
	fd = open(argv[1],O_RDONLY);
	if(fd == -1)
		perror("open");
	val = fcntl(fd,F_GETFL,0);
	if(val == -1)
		perror("fcntl");

	
	return 0;
}
