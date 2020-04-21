//提示用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小。
//程序中应计算文件的下载时间。注意，这里1字节等于8位。
//使用float类型，并用/作为除号。
//程序要以下面的格式打印 3个变量的值（下载速度、文件大小和下载时间），显示小数点后面两位数字：
//At 18.12 megabits per second, a file of 2.20 megabytes 
//downloads in 0.97 seconds.
#include <stdio.h>
int main(void)
{
	float speed, size, time;
	
	printf("输入下载速度（Mb/s）和文件大小（MB）:");
	scanf("%f %f",&speed,&size);
	time = size/(speed/8);
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",speed,size);
	printf("downloads in %.2f seconds.\n",time);
	
	return 0;
}
