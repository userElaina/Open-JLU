#include"sdu.h"
int usernum;
int beernum;
int liquornum;
int drinksnum;
int ordersnum;
char adminpassword[5] = { 'd','l','s' };//管理员密码
sef user;
sef* userp = &user;
bef beer;
bef* beerp = &beer;
lef liquor;
lef* liquorp = &liquor;
def drinks;
def* drinksp = &drinks;
void welcome() {
	cleanscreen();
	printf("*************************************************\n");
	printf("*\t\t欢迎使用酒水管理系统\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t请选择功能列表\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t1.用户登录\t\t\t*\n");
	printf("*\t\t2.用户注册\t\t\t*\n");
	printf("*\t\t3.后台管理\t\t\t*\n");
	printf("*************************************************\n");
	printf("\n");
	int num;
	while (1) {
		scanf("%d", &num);
		getchar();
		switch (num) {
		case 1:
			userlogin();
			break;
		case 2:
			userregesiter();
			break;
		case 3:
			printf("请输入管理员密码(输入0退出)\n");
			char password[20];
			scanf("%s", password); getchar();
			while (strcmp(adminpassword, password) != 0)
			{
				if (strcmp(password, "0")==0) welcome();
				printf("密码错误，请重新输入(输入0退出)\n");
				scanf("%s", password); getchar();
			}
			adminmeue();
			break;
		}
	}
}
void cleanscreen() {
	system("cls");
}
void filesave()
{
	FILE* fp;
	fopen_s(&fp, "data.txt", "wb");
	fwrite(&usernum, 4, 1, fp);//写入用户数量
	fwrite(&beernum, 4, 1, fp);//写入啤酒数量
	fwrite(&liquornum, 4, 1, fp);//写入白酒数量
	fwrite(&drinksnum, 4, 1, fp);//写入饮品数量
	fwrite(&ordersnum, 4, 1, fp);//写入订单数量
	sef* p = userp->next;
	while (p)
		fwrite(p, sizeof(sef), 1, fp), p = p->next;//写入用户信息
	bef* p1 = beerp->next;
	while (p1)
		fwrite(p1, sizeof(bef), 1, fp), p1 = p1->next;//写入啤酒信息
	lef* p2 = liquorp->next;
	while (p2)
		fwrite(p2, sizeof(lef), 1, fp), p2 = p2->next;//写入白酒信息
	def* p3 = drinksp->next;
	while (p3)
		fwrite(p3, sizeof(def), 1, fp), p3 = p3->next;//写入饮品信息
	fclose(fp);
}
int main()
{
	FILE* fp;
	fopen_s(&fp, "data.txt", "rb");
	fread(&usernum, 4, 1, fp);//读入用户数量
	fread(&beernum, 4, 1, fp);//读入啤酒数量
	fread(&liquornum, 4, 1, fp);//读入白酒数量
	fread(&drinksnum, 4, 1, fp);//读入饮品数量
	fread(&ordersnum, 4, 1, fp);//读入新订单数量
	sef* p = userp;
	for (int i = 0; i < usernum; i++)
	{
		p->next = (sef*)malloc(sizeof(sef));
		p = p->next;
		fread(p, sizeof(sef), 1, fp);//读入用户信息
	}
	p->next = 0;
	bef* p1 = beerp;
	for (int i = 0; i < beernum; i++)
	{
		p1->next = (bef*)malloc(sizeof(bef));
		p1 = p1->next;
		fread(p1, sizeof(bef), 1, fp);//读入啤酒信息
	}
	p1->next = 0;
	lef* p2 = liquorp;
	for (int i = 0; i < liquornum; i++)
	{
		p2->next = (lef*)malloc(sizeof(lef));
		p2 = p2->next;
		fread(p2, sizeof(lef), 1, fp);//读入白酒信息
	}
	p2->next = 0;
	def* p3 = drinksp;
	for (int i = 0; i < drinksnum; i++)
	{
		p3->next = (def*)malloc(sizeof(def));
		p3 = p3->next;
		fread(p3, sizeof(def), 1, fp);//读入饮品信息
	}
	p3->next = 0;
	fclose(fp);
	welcome();
	return 0;
}