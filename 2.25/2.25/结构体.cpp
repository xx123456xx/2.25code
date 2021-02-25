#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////描述一个学生的一些数据
////名字
////年龄
////电话
////性别
////struct 结构体关键字 stu-结构体标签  struct stu-结构体类型
////1.创建结构体的方法
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[20];
//	char ses[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量
//int main()
//{
//	struct stu s;//创建一个局部变量
//	return 0;
//}
////2.第二种
//typedef struct stu//typedef 把该类型改名
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[20];
//	char ses[5];
//}Stu;///这是类型
//int main()
//{
//	//创建一个局部变量 
//	Stu s1={"张三",20,"15874536987","男"};//初始化
//	struct stu s2={"张英",25,"15874545987","女"};
//	return 0;
//}
//复杂结构体
//struct S 
//{
//int a;
//char c;
//char arr[20];
//double d;
//};
//struct T//结构体中包含结构体
//{
//	char ch[10];
//	struct S s;
//	char * pc;
//};
//
//int main()
//{
//	char arr[]="hello bit";
//	struct T t={"小玉子",{10,'a',"hello world",3.15},arr};
//	printf("%s\n",t.ch);
//	printf("%s\n",t.pc);
//	printf("%lf\n",t.s.d);
//	printf("%s\n",t.s.arr);
//	printf("%d\n",t.s.a);
//	return 0;
//}
//int main()//这样解释，arr既是数组的名也是数组首元素的地址，所以可以以%p和%s的形式打印
//{
//	char b='c';
//	char arr[]="hello bit";
//	char * pc;
//	char * pb;
//	pb=&b;
//	int a=10;
//	int * pa=&a;
//	pc=arr;
//	printf("%p\n",pc);
//	printf("%c\n",arr[1]);
//	printf("%c\n",b);
//}
//结构体传参:结构体传参的时候，要传结构体的地址
typedef struct stu//typedef 把该类型改名
{
	//成员变量
	char name[20];
	short age;
	char tele[20];
	char sex[5];
}Stu;
void Printf1(Stu s)
{
	printf("name: %s\n",s.name);
	printf("age: %d\n",s.age);
	printf("tele: %s\n",s.tele);
	printf("sex: %s\n",s.sex);
}
void Printf2(Stu * s)
{
	printf("name: %s\n",s->name);
	printf("age: %d\n",s->age);
	printf("tele: %s\n",s->tele);
	printf("sex: %s\n",s->sex);
}

int main()
{
	Stu s={"李四",18,"156496446615","女"};
	//打印结构体数据函数
	Printf1(s);//传结构体
	Printf2(&s);//传结构体地址
}