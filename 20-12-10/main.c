//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    return 0;
//}
//#include "stdio.h"
//#include "string.h"
//
//struct STUDENT//不是变量但是变量类型
//{
//	char sid[11];//学号10位，多一位保存结束码
//	char sName[9];//最多4个汉字
//	char sSex[3];
//	int nAge;
//
//};
////结构体
//
//void showStu(const struct STUDENT *pStu){//不利用指针也可以，利用指针可以提高效率
//	printf("%13s%11s%4s%4d\n",pStu->sid,pStu->sName,pStu->sSex,pStu->nAge);
//	//对象用 "." ,指针用 "->"
//}
//
//void inStu(struct STUDENT *pStu){//输入必须利用指针
//	printf("请输入学号姓名性别年龄（中间利用空格隔开）：\n");
//	scanf("%s%s%s%d",pStu->sid,pStu->sName,pStu->sSex,&pStu->nAge);
//	//由于sid等数组本来就表示地址，所以无需“&”，但是年龄为整型
//
//}
//
//void outForStuArray(struct STUDENT aStu[], int nSize){
//
//	for(int i = 0; i < nSize; i++){
//		showStu(&aStu[i]);
//	}
//}
//
//void inForStuArray(struct STUDENT aStu[], int nSize){
//	for(int i = 0; i < nSize; i++){
//		inStu(&aStu[i]);
//	}
//}
//
//int main()
//{
//	/*
//	//定义了一个结构体变量；
//	STUDENT stu1;
//
//	//手动输入
//	stu1.nAge = 18;
//	//stu1.sid = "2019111379";地址常量赋值给地址变量，所以错误
//	strcpy(stu1.sid,"2019111379");
//	strcpy(stu1.sName,"张三");
//	strcpy(stu1.sSex,"男");
//
//	showStu(&stu1);
//
//	STUDENT stu2;
//
//	inStu(&stu2);
//
//	showStu(&stu2);
//
//	STUDENT aStu[3];
//	for(int i = 0; i < 3; i++){
//		inStu(&aStu[i]);
//
//	}
//	for(int i = 0; i < 3; i++){
//		showStu(&aStu[i]);
//
//	}
//	*/
//	struct STUDENT aStu[3];
//	int size = 3;
//	inForStuArray(aStu, size);
//	outForStuArray(aStu, size);
//	return 0;
//}
#include<stdio.h>
int main()
{
    printf("%d",-3%2);
    return 0;
}
