#ifndef _SDU_H_
#define _SDU_H_
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<ctype.h>
extern int usernum;//定义用户编号
extern int beernum;//定义啤酒编号
extern int liquornum;//定义白酒编号
extern int drinksnum;//定义饮品编号
extern int ordersnum;//定义订单编号
//定义用户结构体链表
typedef struct User
{
	int vip;//定义用户等级，0为普通，1为VIP，2为至尊VIP
	char usname[20];//定义用户名
	char password1[15];//定义用户密码
	int ordernum;//定义订单编号
	struct
	{
		int flag;//定义订单查看状态
		int beer[20];
		int liquor[20];
		int drinks[20];
		int sumsell;
	}orders[100];//结构体数组表示订单
	int bill;
	struct User* next;
}sef;
extern sef user;
extern sef* userp;
//定义啤酒结构体链表
typedef struct Beer
{
	char name[30];//名称
	int capacity;//容量
	int alcohol;//酒精度
	int specs;//规格
	int num;//数量
	int value;//价格
	struct Beer* next;
	int soldout;//销量
}bef;
extern bef beer;
extern bef* beerp;
//定义白酒结构体链表
typedef struct Liquor
{
	char name[30];
	int capacity;
	int alcohol;
	int specs;
	int  num;
	int value;
	int soldout;
	struct Liquor* next;
}lef;
extern lef liquor;
extern lef* liquorp;
//定义饮品结构体链表
typedef struct Drinks
{
	char name[30];
	int capacity;
	int specs;
	int  num;
	int value;
	int soldout;
	struct Drinks* next;
}def;
extern def drinks;
extern def* drinksp;

void welcome();//开始界面
void filesave();//文件保存
void cleanscreen();//清屏
void userlogin();//用户登录
void userregesiter();//用户注册
void changepassword(sef* head);//用户修改密码
void usermeue(sef* head);//用户菜单
void userbuy(sef* head);//用户购买
void usercheck(sef* head);//用户查看订单
void userchange(sef* head);//用户退货换货
void deleteuser(sef* head);//注销账户
void adminmeue();//管理员菜单
void inventory();//管理员查看库存
void addbeer();//添加酒水信息
void addliquor();
void adddrinks();
void changebeer();//修改酒水信息
void changeliquor();
void changedrinks();
void delbeer();//删除酒水
void delliquor();
void deldrinks();
void usermation();//管理员查看用户信息
void checkorder();//管理员查看订单
void checksold();//管理员查看销售信息
#endif