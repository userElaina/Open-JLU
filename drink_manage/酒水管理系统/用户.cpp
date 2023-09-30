#include"sdu.h"
void userlogin()
{
	cleanscreen();
	char name[20],password[15];
	printf("请输入用户名(输入0退出)\n");
	scanf("%s",name);getchar();
	sef* p=userp->next;
	bool flag=false;
	while(1)
	{
		if (strcmp(name, "0") == 0) welcome();
		p = userp->next;
		for(int i=0;i<usernum;i++)
		{
			if(strcmp(p->usname,name)==0)
			{
				flag=true;
				break;
			}
			p=p->next;
		}
		if(flag) break;
		else {
			printf("不存在此用户名，请重新输入(输入0退出)\n");
			scanf("%s",name);getchar();
		}
	}
	printf("请输入密码(输入0退出)\n");
	scanf("%s",password);getchar();
	if (strcmp(name, "0") == 0) welcome();
	while(strcmp(p->password1,password)!=0)
	{
		printf("密码错误，请重新输入(输入0退出)\n");
		scanf("%s",password);getchar();
		if (strcmp(password, "0") == 0) welcome();
	}
	printf("登录成功\n");
	if(p->ordernum==0) p->ordernum=1;
	Sleep(1000);
	usermeue(p);
}
void userregesiter()
{
	cleanscreen();
	sef* p = userp;
	while (p->next) p = p->next;
	p->next = (sef*)malloc(sizeof(sef));//建立用户新链表
	p = p->next;
	p->next = 0;
	char name[20];
	printf("请输入用户名（仅包含英文和数字）\n");
	scanf("%s", name); getchar();
	while (1)
	{
		bool flag = false;              //判断用户名是否规范
		while (!flag)
		{
			int k = strlen(name);
			for (int i = 0; i < k; i++)
			{
				if (!isalnum(name[i]))
				{
					printf("用户名不规范，请重新输入\n");
					break;
				}
				if (i == k - 1)flag = true;
			}
			if (flag == true) break;
			else scanf("%s", name); getchar();
		}
		sef* p0 = userp->next;
		int i;
		for (i = 0; i < usernum; i++)
		{
			if (strcmp(p0->usname, name) == 0)//判断用户名是否重复
			{
				printf("用户名重复，请重新输入\n");
				scanf("%s", name); getchar();
				break;
			}
			p0 = p0->next;
		}
		if (i >= usernum) break;
	}
	strcpy(p->usname, name);
	char password[15];
	printf("请输入密码\n");
	scanf("%s", password); getchar();
	strcpy(p->password1, password);
	printf("请再次输入以确认密码\n");
	scanf("%s", password); getchar();
	while (strcmp(password, p->password1) != 0)
	{
		printf("两次密码不一致，请再次输入\n");
		scanf("%s", password); getchar();
	}
	printf("您已成功注册\n");
	//初始化用户信息
	p->vip = 0; usernum++; p->bill = 0; p->ordernum = 1;
	for (int i = 0; i < 100; i++)
	{
		p->orders[i].sumsell = 0;
		for (int j = 0; j < 20; j++)
		{
			p->orders[i].beer[j] = 0;
			p->orders[i].liquor[j] = 0;
			p->orders[i].drinks[j] = 0;
		}
	}
	Sleep(1000);
	filesave();
	welcome();
}

void changepassword(sef* head)
{
	cleanscreen();
	printf("请输入原密码(输入0退出)\n");
	char password[15];
	scanf("%s", password); getchar();
	while (strcmp(password, head->password1) != 0)//判断密码是否正确
	{
		if (strcmp(password, "0") == 0) usermeue(head);
		printf("密码错误，请重新输入(输入0退出)\n");
		scanf("%s", password); getchar();
	}
	printf("请输入新密码(输入0退出)\n");
	scanf("%s", head->password1); getchar();
	if (strcmp(password, "0") == 0) usermeue(head);
	printf("修改密码成功");
	filesave();
	Sleep(1000);
	usermeue(head);
}

void usermeue(sef* head)
{
	cleanscreen();
	int num;
	printf("*************************************************\n");
	if (head->vip == 0)
		printf("*\t\t尊敬的用户%s\t\t\t*\n", head->usname);
	else if (head->vip == 1)
		printf("*\t\t尊敬的会员%s\t\t*\n", head->usname);
	else printf("*\t\t尊敬的至尊会员%s\t\t*\n", head->usname);
	printf("*************************************************\n");
	printf("*\t\t请选择功能列表\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t1.酒水订购\t\t\t*\n");
	printf("*\t\t2.查询订单\t\t\t*\n");
	printf("*\t\t3.退货换货\t\t\t*\n");
	printf("*\t\t4.修改密码\t\t\t*\n");
	printf("*\t\t5.退出系统\t\t\t*\n");
	printf("*\t\t6.注销账号\t\t\t*\n");
	printf("*************************************************\n");
	printf("\n");
	while (1)
	{
		scanf("%d", &num);
		getchar();
		switch (num)
		{
		case 1:
			userbuy(head);
			break;
		case 2:
			usercheck(head);
			break;
		case 3:
			userchange(head);
			break;
		case 4:
			changepassword(head);
			break;
		case 5:
			welcome();
		case 6:
			deleteuser(head);
			break;
		}
	}
}

void userbuy(sef* head)
{
	cleanscreen();
	printf("*************************************************\n");
	printf("*\t\t酒水订购菜单\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t请选择列表\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t1.啤酒    \t\t\t*\n");
	printf("*\t\t2.白酒    \t\t\t*\n");
	printf("*\t\t3.饮品    \t\t\t*\n");
	printf("*\t\t4.提交订单\t\t\t*\n");
	printf("*************************************************\n");
	printf("本次订单共计%d元\n", head->orders[head->ordernum].sumsell);
	int num;
	scanf("%d", &num); getchar();
	while (num > 4)
	{
		scanf("%d", &num); getchar();
	}
	if (num == 1)//啤酒购买界面
	{
		bef* p = beerp->next;
		printf("********************************************************************************************\n");
		printf(" **\t\t\t\t\t\t啤酒\t\t\t\t\t**\n");
		printf("********************************************************************************************\n");
		printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "酒精度(%Vol)", "规格(瓶)", "价格");
		for (int i = 0; i < beernum; i++)
		{
			printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p->name, p->capacity, p->alcohol, p->specs, p->value);
			p = p->next;
		}
		printf("\n\n");
		while (1)
		{
			printf("请输入您要购买的酒水编号(输入0退出)\n");
			int num;
			scanf("%d", &num); getchar();
			while (num > beernum)
			{
				scanf("%d", &num); getchar();
			}
			bef* p1 = beerp;
			if (num == 0) userbuy(head);
			printf("请输入购买数量\n");
			int n;
			scanf("%d", &n); getchar();
			for (int i = 0; i < num; i++) p1 = p1->next;
			while (p1->num < n)
			{
				printf("库存不足，请重新输入\n");
				scanf("%d", &n), getchar();
			}
			p1->num = p1->num - n;//酒水减少相应数量
			p1->soldout += n;//酒水出售量
			head->orders[head->ordernum].beer[num] += n;//记录酒水数量
			if (head->vip == 0)
				head->orders[head->ordernum].sumsell += p1->value * n;//记录订单金额
			else if (head->vip == 1)
				head->orders[head->ordernum].sumsell += p1->value * n * 0.9;
			else head->orders[head->ordernum].sumsell += p1->value * n * 0.8;
			filesave();
		}
	}
	if (num == 2)//白酒购买界面
	{
		lef* p = liquorp->next;
		printf("********************************************************************************************\n");
		printf(" **\t\t\t\t\t\t白酒\t\t\t\t\t**\n");
		printf("********************************************************************************************\n");
		printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "酒精度(%Vol)", "规格(瓶)", "价格");
		for (int i = 0; i < liquornum; i++)
		{
			printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p->name, p->capacity, p->alcohol, p->specs, p->value);
			p = p->next;
		}
		printf("\n\n");
		while (1)
		{
			printf("请输入您要购买的酒水编号(输入0退出)\n");
			int num;
			scanf("%d", &num); getchar();
			while (num > liquornum)
			{
				scanf("%d", &num); getchar();
			}
			lef* p1 = liquorp;
			if (num == 0) userbuy(head);
			printf("请输入购买数量\n");
			int n;
			scanf("%d", &n); getchar();
			for (int i = 0; i < num; i++) p1 = p1->next;
			while (p1->num < n)
			{
				printf("库存不足，请重新输入\n");
				scanf("%d", &n), getchar();
			}
			p1->num = p1->num - n;
			p1->soldout += n;
			head->orders[head->ordernum].liquor[num] += n;
			if (head->vip == 0)
				head->orders[head->ordernum].sumsell += p1->value * n;
			else if (head->vip == 1)
				head->orders[head->ordernum].sumsell += p1->value * n * 0.9;
			else head->orders[head->ordernum].sumsell += p1->value * n * 0.8;
			filesave();
		}
	}
	if (num == 3)
	{
		def* p = drinksp->next;
		printf("********************************************************************************************\n");
		printf(" **\t\t\t\t\t\t饮品\t\t\t\t\t**\n");
		printf("********************************************************************************************\n");
		printf("%-20s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "规格(瓶)", "价格");
		for (int i = 0; i < drinksnum; i++)
		{
			printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t\n", i + 1, p->name, p->capacity, p->specs, p->value);
			p = p->next;
		}
		printf("\n\n");
		while (1)
		{
			printf("请输入您要购买的酒水编号(输入0退出)\n");
			int num;
			scanf("%d", &num); getchar();
			while (num > drinksnum)
			{
				scanf("%d", &num); getchar();
			}
			def* p1 = drinksp;
			if (num == 0) userbuy(head);
			printf("请输入购买数量\n");
			int n;
			scanf("%d", &n); getchar();
			for (int i = 0; i < num; i++) p1 = p1->next;
			while (p1->num < n)
			{
				printf("库存不足，请重新输入\n");
				scanf("%d", &n), getchar();
			}
			p1->num = p1->num - n;
			p1->soldout += n;
			head->orders[head->ordernum].drinks[num] += n;
			if (head->vip == 0)
				head->orders[head->ordernum].sumsell += p1->value * n;
			else if (head->vip == 1)
				head->orders[head->ordernum].sumsell += p1->value * n * 0.9;
			else head->orders[head->ordernum].sumsell += p1->value * n * 0.8;
			filesave();
		}
	}
	if (num == 4)
	{
		head->bill += head->orders[head->ordernum].sumsell;//用户购买总金额
		head->orders[head->ordernum].flag = 1;//初始订单未查看
		head->ordernum++;//用户订单加1
		ordersnum++;//新订单加1
		if (head->bill >= 1000000) head->vip = 1;//判断用户等级
		if (head->bill >= 10000000) head->vip = 2;
		filesave();
		usermeue(head);
	}
}

void usercheck(sef* head)
{
	cleanscreen();
	printf("*************************************************\n");
	printf("*\t\t您有%d笔订单\t\t\t*\n", head->ordernum - 1);
	printf("*************************************************\n");
	printf("*\t\t请选择具体查看的订单编号\t\t*\n");
	printf("*************************************************\n");
	for (int i = 1; i < head->ordernum; i++)
	{
		int beernum = 0, liquornum = 0, drinksnum = 0;
		for (int j = 0; j < 20; j++)
		{
			if (head->orders[i].beer[j]) beernum++;
			if (head->orders[i].liquor[j]) liquornum++;
			if (head->orders[i].drinks[j]) drinksnum++;
		}
		printf("%d.您购买了%d种啤酒%d种白酒%d种饮品\t共计金额%d元\n", i, beernum, liquornum, drinksnum, head->orders[i].sumsell);
	}
	printf("*\t\t输入0退出\t\t\t*\n");
	printf("*************************************************\n");
	int num;
	scanf("%d", &num); getchar();
	if (num == 0) usermeue(head);
	while (num > head->ordernum)
	{
		scanf("%d", &num); getchar();
	}
	int i, number = 0;
	printf("***********************************************************\n");
	//输出具体订单
	for (i = 0; i < 20; i++)
	{
		bef* p = beerp->next;
		if (head->orders[num].beer[i])
		{
			number++;
			for (int j = 0; j < i - 1; j++) p = p->next;
			printf("%d.%-20s\t%dml\t%d°\t%d瓶\t%d件\t%d元\t\n", number, p->name, p->capacity, p->alcohol, p->specs, head->orders[num].beer[i], head->orders[num].beer[i] * p->value);
		}
	}
	for (i = 0; i < 20; i++)
	{
		lef* p1 = liquorp->next;
		if (head->orders[num].liquor[i])
		{
			number++;
			for (int j = 0; j < i - 1; j++) p1 = p1->next;
			printf("%d.%-20s\t%dml\t%d°\t%d瓶\t%d件\t%d元\t\n", number, p1->name, p1->capacity, p1->alcohol, p1->specs, head->orders[num].liquor[i], head->orders[num].liquor[i] * p1->value);
		}
	}
	for (i = 0; i < 20; i++)
	{
		def* p2 = drinksp->next;
		if (head->orders[num].drinks[i])
		{
			number++;
			for (int j = 0; j < i - 1; j++) p2 = p2->next;
			printf("%d.%-20s\t%dml\t%d瓶\t%d件\t%d元\t\n", number, p2->name, p2->capacity, p2->specs, head->orders[num].drinks[i], head->orders[num].drinks[i] * p2->value);
		}
	}
	printf("\n1.继续查看       2.退出");
	int n; scanf("%d", &n); getchar();
	while (n != 1 && n != 2) { scanf("%d", &n); getchar(); }
	if (n == 1) usercheck(head);
	else usermeue(head);
}

void userchange(sef* head)
{
	cleanscreen();
	printf("请输入需要退换货的名称(输入0退出)\n");
	char name[30];
	bool flag = false;
	scanf("%s", name); getchar();
	if (strcmp(name, "0") == 0) usermeue(head);
	for (int i = 1; i < head->ordernum; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			if (head->orders[i].beer[j])
			{
				bef* p = beerp->next;
				for (int k = 1; k < j; k++) p = p->next;
				if (strcmp(name, p->name) == 0)
				{
					flag = true;
					printf("请输入退换货数量\n");
					int num;
					scanf("%d", &num); getchar();
					while (num > head->orders[i].beer[j])
					{
						printf("超过您购买的数量，请重新输入\n");
						scanf("%d", &num); getchar();
					}
					head->orders[i].beer[j] -= num;
					filesave();
					printf("退换货成功");
					Sleep(1000);
					usermeue(head);
				}
			}
			if (head->orders[i].liquor[j])
			{
				lef* p = liquorp->next;
				for (int k = 1; k < j; k++) p = p->next;
				if (strcmp(name, p->name) == 0)
				{
					flag = true;
					printf("请输入退换货数量\n");
					int num;
					scanf("%d", &num); getchar();
					while (num > head->orders[i].liquor[j])
					{
						printf("超过您购买的数量，请重新输入\n");
						scanf("%d", &num); getchar();
					}
					head->orders[i].liquor[j] -= num;
					filesave();
					printf("退换货成功");
					Sleep(1000);
					usermeue(head);
				}
			}
			if (head->orders[i].drinks[j])
			{
				def* p = drinksp->next;
				for (int k = 1; k < j; k++) p = p->next;
				if (strcmp(name, p->name) == 0)
				{
					flag = true;
					printf("请输入退换货数量\n");
					int num;
					scanf("%d", &num); getchar();
					while (num > head->orders[i].drinks[j])
					{
						printf("超过您购买的数量，请重新输入\n");
						scanf("%d", &num); getchar();
					}
					head->orders[i].drinks[j] -= num;
					filesave();
					printf("退换货成功");
					Sleep(1000);
					usermeue(head);
				}
			}
		}
		if (!flag) printf("未找到此商品");
		Sleep(1000);
		usermeue(head);
	}
}

void deleteuser(sef* head)
{
	printf("请输入密码(输入0退出)\n");
	char password[30];
	scanf("%s", password); getchar();
	while (strcmp(password, head->password1) != 0)
	{
		if (strcmp(password, "0") == 0) usermeue(head);
		printf("密码错误，请重新输入(输入0退出)\n");
		scanf("%s", password); getchar();
	}
	sef* p = userp;
	while (p->next != head) p = p->next;
	p->next = p->next->next;
	delete(head);
	filesave();
	printf("注销成功");
	Sleep(1000);
	welcome();
}