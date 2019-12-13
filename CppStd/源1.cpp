#include<stdio.h>

void mai0n() {
	//num在栈区，只有栈区会自动回收释放
	//局部const常量在栈区，而不在静态区(静态区会一直存在)
	const int num = 10;//num就是一个常量
	//num = 11; //error const本质，限定一个变量不能直接赋值

	//间接改变常量值
	const int* p = &num;//定义一个指针指向一个常量，存储num的地址
	int* pv = (int*)p;//对指向常量的指针进行强制转换
	*pv = 8;//对指针指向内容赋值

	printf("%d", num); //8

}