#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>



int main(){
	

	char buf[BUFSIZ];
	int n,fd,tol;
	//创建，打开文件
	fd = open("text",O_RDWR|O_CREAT,777);
	if(fd < 0)
		perror("open");

	//阻塞等待标准输入的数据
	while((fgets(buf,sizeof(buf),stdin)) !=EOF){
		
		tol = write(fd,buf,strlen(buf));
	}

	printf("has write %d\n ",tol);

	return 0;
}
