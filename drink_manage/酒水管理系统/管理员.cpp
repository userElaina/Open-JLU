#include"sdu.h"
void adminmeue()
{
	cleanscreen();
	int num;
	printf("*************************************************\n");
	printf("*\t\t酒水后台管理系统\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t请选择功能列表\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t1.查看库存\t\t\t*\n");
	printf("*\t\t2.查询用户信息\t\t\t*\n");
	printf("*\t\t3.您有%d条订单请求\t\t*\n", ordersnum);
	printf("*\t\t4.查看销售信息\t\t\t*\n");
	printf("*\t\t5.退出系统\t\t\t*\n");
	printf("*************************************************\n");
	printf("\n");
	while (1)
	{
		scanf("%d", &num);
		getchar();
		switch (num)
		{
		case 1:
			inventory();
			break;
		case 2:
			usermation();
			break;
		case 3:
			checkorder();
			break;
		case 4:
			checksold();
			break;
		case 5:
			welcome();
		}
	}
}

void inventory()
{
	cleanscreen();
	printf("*************************************************\n");
	printf("*\t\t酒水库存管理\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t请选择列表\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t1.啤酒\t\t\t*\n");
	printf("*\t\t2.白酒\t\t\t*\n");
	printf("*\t\t3.饮品\t\t\t*\n");
	printf("*************************************************\n");
	int num;
	scanf("%d", &num); getchar();
	while (num != 1 && num != 2 && num != 3)
	{
		scanf("%d", &num); getchar();
	}
	if (num == 1)//啤酒库存
	{
		bef* p = beerp->next;
		printf("********************************************************************************************\n");
		printf(" **\t\t\t\t\t\t啤酒\t\t\t\t\t**\n");
		printf("********************************************************************************************\n");
		printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "酒精度(%Vol)", "规格(瓶)", "数量(箱)", "价格");
		for (int i = 0; i < beernum; i++)
		{
			printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p->name, p->capacity, p->alcohol, p->specs, p->num, p->value);
			p = p->next;
		}
		printf("\n\n");
		printf("\t1.添加酒水\t\t2.修改\t\t3.删除\t\t4.退出\n");
		int n;
		while (1)
		{
			scanf("%d", &n);
			getchar();
			switch (n)
			{
			case 1:
				addbeer();
				break;
			case 2:
				changebeer();
				break;
			case 3:
				delbeer();
				break;
			case 4:
				adminmeue();
				break;
			}
		}
	}
	if (num == 2)//白酒库存
	{
		lef* p = liquorp->next;
		printf("********************************************************************************************\n");
		printf(" **\t\t\t\t\t\t白酒\t\t\t\t\t**\n");
		printf("********************************************************************************************\n");
		printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "酒精度(%Vol)", "规格(瓶)", "数量(箱)", "价格");
		for (int i = 0; i < liquornum; i++)
		{
			printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p->name, p->capacity, p->alcohol, p->specs, p->num, p->value);
			p = p->next;
		}
		printf("\n\n");
		printf("\t1.添加酒水\t\t2.修改\t\t3.删除\t\t4.退出\n");
		int n;
		while (1)
		{
			scanf("%d", &n);
			getchar();
			switch (n)
			{
			case 1:
				addliquor();
				break;
			case 2:
				changeliquor();
				break;
			case 3:
				delliquor();
				break;
			case 4:
				adminmeue();
				break;
			}
		}
	}
	if (num == 3)//饮品库存
	{

		def* p = drinksp->next;
		printf("********************************************************************************************\n");
		printf(" **\t\t\t\t\t\t饮品\t\t\t\t\t**\n");
		printf("********************************************************************************************\n");
		printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "规格(瓶)", "数量(箱)", "价格");
		for (int i = 0; i < drinksnum; i++)
		{
			printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p->name, p->capacity, p->specs, p->num, p->value);
			p = p->next;
		}
		printf("\n\n");
		printf("\t1.添加酒水\t\t2.修改\t\t3.删除\t\t4.退出\n");
		int n;
		while (1)
		{
			scanf("%d", &n);
			getchar();
			switch (n)
			{
			case 1:
				adddrinks();
				break;
			case 2:
				changedrinks();
				break;
			case 3:
				deldrinks();
				break;
			case 4:
				adminmeue();
				break;
			}
		}
	}
}

void addbeer()//添加啤酒信息
{
	bef* p = beerp;
	while (p->next) p = p->next;
	p->next = (bef*)malloc(sizeof(bef)); p = p->next; p->next = 0;
	printf("请输入酒类名称     容量     酒精度     规格     数量    价格\n");
	scanf("%s%d%d%d%d%d", p->name, &p->capacity, &p->alcohol, &p->specs, &p->num, &p->value); getchar();
	printf("添加成功\n"); beernum++;
	p->soldout = 0;
	filesave();
	printf("1.继续添加          2.返回");
	int num;
	while (1)
	{
		scanf("%d", &num);
		getchar();
		switch (num)
		{
		case 1:
			addbeer();
			break;
		case 2:
			adminmeue();
			break;
		}
	}
}

void addliquor()//添加白酒信息
{
	lef* p = liquorp;
	while (p->next) p = p->next;
	p->next = (lef*)malloc(sizeof(lef)); p = p->next; p->next = 0;
	printf("请输入酒类名称     容量     酒精度     规格     数量    价格\n");
	scanf("%s%d%d%d%d%d", p->name, &p->capacity, &p->alcohol, &p->specs, &p->num, &p->value); getchar();
	printf("添加成功\n"); liquornum++;
	p->soldout = 0;
	filesave();
	printf("1.继续添加          2.返回");
	int num;
	while (1)
	{
		scanf("%d", &num);
		getchar();
		switch (num)
		{
		case 1:
			addliquor();
			break;
		case 2:
			adminmeue();
			break;
		}
	}
}

void adddrinks()//添加饮品信息
{
	def* p = drinksp;
	while (p->next) p = p->next;
	p->next = (def*)malloc(sizeof(def)); p = p->next; p->next = 0;
	printf("请输入酒类名称     容量       规格     数量    价格\n");
	scanf("%s%d%d%d%d", p->name, &p->capacity, &p->specs, &p->num, &p->value); getchar();
	printf("添加成功\n"); drinksnum++;
	p->soldout = 0;
	filesave();
	printf("1.继续添加          2.返回");
	int num;
	while (1)
	{
		scanf("%d", &num);
		getchar();
		switch (num)
		{
		case 1:
			adddrinks();
			break;
		case 2:
			adminmeue();
			break;
		}
	}
}

void changebeer()//修改啤酒信息
{
	printf("请输入需要修改的酒水编号");
	int num;
	scanf("%d", &num); getchar();
	bef* p = beerp;
	while (num--) p = p->next;
	printf("请输入修改后的数量");
	scanf("%d", &p->num);
	printf("请输入修改后的价格");
	scanf("%d", &p->value);
	printf("修改成功");
	filesave();
	Sleep(1000);
	inventory();
}

void changeliquor()//修改白酒信息
{
	printf("请输入需要修改的酒水编号");
	int num;
	scanf("%d", &num); getchar();
	lef* p = liquorp;
	while (num--) p = p->next;
	printf("请输入修改后的数量");
	scanf("%d", &p->num);
	printf("请输入修改后的价格");
	scanf("%d", &p->value);
	printf("修改成功");
	filesave();
	Sleep(1000);
	inventory();
}

void changedrinks()//修改饮品信息
{
	printf("请输入需要修改的酒水编号");
	int num;
	scanf("%d", &num); getchar();
	def* p = drinksp;
	while (num--) p = p->next;
	printf("请输入修改后的数量");
	scanf("%d", &p->num);
	printf("请输入修改后的价格");
	scanf("%d", &p->value);
	printf("修改成功");
	filesave();
	Sleep(1000);
	inventory();
}

void delbeer()//删除啤酒
{
	printf("请输入需要删除的酒水编号");
	int num;
	scanf("%d", &num); getchar();
	bef* p = beerp;
	while (num > beernum);
	{
		printf("请重新输入\n");
		scanf("%d", &num); getchar();
	}
	for (int i = 0; i < num - 1; i++)
		p = p->next;
	p->next = p->next->next;
	printf("删除成功");
	beernum--;
	filesave();
	Sleep(1000);
	inventory();
}

void delliquor()
{
	printf("请输入需要删除的酒水编号");
	int num;
	scanf("%d", &num); getchar();
	lef* p = liquorp;
	while (num > liquornum);
	{
		printf("请重新输入\n");
		scanf("%d", &num); getchar();
	}
	for (int i = 0; i < num - 1; i++)
		p = p->next;
	p->next = p->next->next;
	printf("删除成功");
	liquornum--;
	filesave();
	Sleep(1000);
	inventory();
}

void deldrinks()
{
	printf("请输入需要删除的酒水编号");
	int num;
	scanf("%d", &num); getchar();
	def* p = drinksp;
	while (num > drinksnum);
	{
		printf("请重新输入\n");
		scanf("%d", &num); getchar();
	}
	for (int i = 0; i < num - 1; i++)
		p = p->next;
	p->next = p->next->next;
	printf("删除成功");
	drinksnum--;
	filesave();
	Sleep(1000);
	inventory();
}

void usermation()//用户信息查看
{
	cleanscreen();
	sef* p = userp;
	printf("*************************************************\n");
	printf("*\t\t用户信息管理\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t请选择用户\t\t\t*\n");
	printf("*************************************************\n");
	printf("用户名\t\t\t消费金额\n");
	for (int i = 0, number = 0; i < usernum; i++)//查看用户
	{
		p = p->next; number++;
		if (p->vip == 0)
			printf("%d.普通用户%s\t\t%d\n", number, p->usname, p->bill);
		else if (p->vip == 1) printf("%d.会员用户%s\t\t%d\n", number, p->usname, p->bill);
		else printf("%d.至尊会员用户%s\t%d\n", number, p->usname, p->bill);
	}
	int num;
	scanf("%d", &num); getchar();
	while (num > usernum)
	{
		scanf("%d", &num); getchar();
	}
	sef* p0 = userp->next;
	for (int i = 1; i < num; i++) p0 = p0->next;
	printf("****************************************************\n");
	for (int i = 1; i < p0->ordernum; i++)//查看用户订单
	{
		int beernum = 0, liquornum = 0, drinksnum = 0;
		for (int j = 0; j < 20; j++)
		{
			if (p0->orders[i].beer[j]) beernum++;
			if (p0->orders[i].liquor[j]) liquornum++;
			if (p0->orders[i].drinks[j]) drinksnum++;
		}
		printf("%d.%s用户购买了%d种啤酒%d种白酒%d种饮品\t共计金额%d元\n", i, p0->usname, beernum, liquornum, drinksnum, p0->orders[i].sumsell);
	}
	printf("请输入要查询的订单编号\n");
	int n; scanf("%d", &n); getchar();
	while (n > p0->ordernum)
	{
		scanf("%d", &n); getchar();
	}
	int i, number = 0;
	printf("***************************************************************\n");
	for (i = 0; i < 20; i++)//查看用户具体订单
	{
		bef* p = beerp->next;
		if (p0->orders[n].beer[i])
		{
			number++;
			for (int j = 0; j < i - 1; j++) p = p->next;
			printf("%d.%-20s\t%dml\t%d°\t%d\t%d件\t%d元\t\n", number, p->name, p->capacity, p->alcohol, p->specs, p0->orders[n].beer[i], p0->orders[n].beer[i] * p->value);
		}
	}
	for (i = 0; i < 20; i++)
	{
		lef* p1 = liquorp->next;
		if (p0->orders[n].liquor[i])
		{
			number++;
			for (int j = 0; j < i - 1; j++) p1 = p1->next;
			printf("%d.%-20s\t%dml\t%d°\t%d\t%d件\t%d元\t\n", number, p1->name, p1->capacity, p1->alcohol, p1->specs, p0->orders[n].liquor[i], p0->orders[n].liquor[i] * p1->value);
		}
	}
	for (i = 0; i < 20; i++)
	{
		def* p2 = drinksp->next;
		if (p0->orders[n].drinks[i])
		{
			number++;
			for (int j = 0; j < i - 1; j++) p2 = p2->next;
			printf("%d.%-20s\t%dml\t%d\t%d件\t%d元\t\n", number, p2->name, p2->capacity, p2->specs, p0->orders[n].drinks[i], p0->orders[n].drinks[i] * p2->value);
		}
	}
	printf("\n1.继续查看       2.退出");
	int nm; scanf("%d", &nm); getchar();
	while (nm != 1 && nm != 2) { scanf("%d", &nm); getchar(); }
	if (nm == 1) usermation();
	else adminmeue();
}

void checkorder()//查看新订单
{
	cleanscreen();
	printf("*************************************************\n");
	printf("*\t\t您有%d条订单请求\t\t*\n", ordersnum);
	printf("*************************************************\n");
	sef* p = userp->next;
	int n = 1;
	for (int i = 0; i < usernum; i++)
	{
		for (int num = 1; num < p->ordernum; num++)
		{
			int beernum = 0, liquornum = 0, drinksnum = 0;
			if (p->orders[num].flag == 1)
			{
				p->orders[num].flag = 0;
				for (int j = 1; j < 20; j++)
				{
					if (p->orders[num].beer[j]) beernum++;
					if (p->orders[num].liquor[j]) liquornum++;
					if (p->orders[num].drinks[j]) drinksnum++;
				}
				printf("%d.%s用户购买了%d种啤酒%d种白酒%d种饮品\t共计金额%d元\n", n++, p->usname, beernum, liquornum, drinksnum, p->orders[num].sumsell);
				printf("***************************************************************\n");
				sef* pp = p;
				int number = 0;
				int i;
				for (i = 0; i < 20; i++)
				{
					bef* p = beerp->next;
					if (pp->orders[num].beer[i])
					{
						number++;
						for (int j = 0; j < i - 1; j++) p = p->next;
						printf("%d.%-20s\t%dml\t%d°\t%d\t%d件\t%d元\t\n", number, p->name, p->capacity, p->alcohol, p->specs, pp->orders[num].beer[i], pp->orders[num].beer[i] * p->value);
					}
				}
				for (i = 0; i < 20; i++)
				{
					lef* p1 = liquorp->next;
					if (pp->orders[num].liquor[i])
					{
						number++;
						for (int j = 0; j < i - 1; j++) p1 = p1->next;
						printf("%d.%-20s\t%dml\t%d°\t%d\t%d件\t%d元\t\n", number, p1->name, p1->capacity, p1->alcohol, p1->specs, pp->orders[num].liquor[i], pp->orders[num].liquor[i] * p1->value);
					}
				}
				for (i = 0; i < 20; i++)
				{
					def* p2 = drinksp->next;
					if (pp->orders[num].drinks[i])
					{
						number++;
						for (int j = 0; j < i - 1; j++) p2 = p2->next;
						printf("%d.%-20s\t%dml\t%d\t%d件\t%d元\t\n", number, p2->name, p2->capacity, p2->specs, pp->orders[num].drinks[i], pp->orders[num].drinks[i] * p2->value);
					}
				}
				printf("***************************************************************\n\n");
			}
		}
		p = p->next;
	}
	ordersnum=0;
	printf("输入0退出\n");
	int num;
	scanf("%d", &num); getchar();
	while(num!=0)
	{
		scanf("%d", &num); getchar;
	}
	if(num==0) adminmeue();
		
}

void checksold()
{
	cleanscreen();
	printf("*************************************************\n");
	printf("*\t\t请选择查看模式\t\t\t*\n");
	printf("*************************************************\n");
	printf("*\t\t1.按销量排序\t\t\t*\n");
	printf("*\t\t2.按销售额排序\t\t\t*\n");
	printf("*************************************************\n");
	int num;
	scanf("%d", &num); getchar();
	while (num != 1 && num != 2)
	{
		scanf("%d", &num); getchar();
	}
	if (num == 1)
	{
		if (beernum)
		{
			bef* p = beerp->next;
			bef* p1[20];
			int n = 0;
			while (p)
			{
				if (p->soldout)
					p1[n] = p, n++;
				p = p->next;
			}
			for (int i = 0; i < n - 1; i++)
				for (int j = 0; j < n - i - 1; j++)
					if (p1[j]->soldout < p1[j + 1]->soldout)
					{
						bef* t = p1[j];
						p1[j] = p1[j + 1];
						p1[j + 1] = t;
					}
			printf("********************************************************************************************\n");
			printf(" **\t\t\t\t\t啤酒\t\t\t\t\t**\n");
			printf("********************************************************************************************\n");
			printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "规格(瓶)", "售出数量(箱)", "价格");
			for (int i = 0; i < n; i++)
				printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p1[i]->name, p1[i]->capacity, p1[i]->specs, p1[i]->soldout, p1[i]->value);
		}
		if (liquornum)
		{
			lef* p = liquorp->next;
			lef* p1[20];
			int n = 0;
			while (p)
			{
				if (p->soldout)
					p1[n] = p, n++;
				p = p->next;
			}
			for (int i = 0; i < n - 1; i++)
				for (int j = 0; j < n - i - 1; j++)
					if (p1[j]->soldout < p1[j + 1]->soldout)
					{
						lef* t = p1[j];
						p1[j] = p1[j + 1];
						p1[j + 1] = t;
					}
			printf("********************************************************************************************\n");
			printf(" **\t\t\t\t\t白酒\t\t\t\t\t**\n");
			printf("********************************************************************************************\n");
			printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "规格(瓶)", "售出数量(箱)", "价格");
			for (int i = 0; i < n; i++)
				printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p1[i]->name, p1[i]->capacity, p1[i]->specs, p1[i]->soldout, p1[i]->value);
		}
		if (drinksnum)
		{
			def* p = drinksp->next;
			def* p1[20];
			int n = 0;
			while (p)
			{
				if (p->soldout)
					p1[n] = p, n++;
				p = p->next;
			}
			for (int i = 0; i < n - 1; i++)
				for (int j = 0; j < n - i - 1; j++)
					if (p1[j]->soldout < p1[j + 1]->soldout)
					{
						def* t = p1[j];
						p1[j] = p1[j + 1];
						p1[j + 1] = t;
					}
			printf("********************************************************************************************\n");
			printf(" **\t\t\t\t\t饮品\t\t\t\t\t**\n");
			printf("********************************************************************************************\n");
			printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "规格(瓶)", "售出数量(箱)", "价格");
			for (int i = 0; i < n; i++)
				printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p1[i]->name, p1[i]->capacity, p1[i]->specs, p1[i]->soldout, p1[i]->value);
		}
	}
	if (num == 2)
	{
		if (beernum)
		{
			bef* p = beerp->next;
			bef* p1[20];
			int n = 0;
			while (p)
			{
				if (p->soldout)
					p1[n] = p, n++;
				p = p->next;
			}
			for (int i = 0; i < n - 1; i++)
				for (int j = 0; j < n - i - 1; j++)
					if (p1[j]->soldout * p1[j]->value < p1[j + 1]->soldout * p1[j+1]->value)
					{
						bef* t = p1[j];
						p1[j] = p1[j + 1];
						p1[j + 1] = t;
					}
			printf("********************************************************************************************\n");
			printf(" **\t\t\t\t\t啤酒\t\t\t\t\t**\n");
			printf("********************************************************************************************\n");
			printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "规格(瓶)", "售出数量(箱)", "销售额");
			for (int i = 0; i < n; i++)
				printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p1[i]->name, p1[i]->capacity, p1[i]->specs, p1[i]->soldout, p1[i]->soldout * p1[i]->value);
		}
		if (liquornum)
		{
			lef* p = liquorp->next;
			lef* p1[20];
			int n = 0;
			while (p)
			{
				if (p->soldout)
					p1[n] = p, n++;
				p = p->next;
			}
			for (int i = 0; i < n - 1; i++)
				for (int j = 0; j < n - i - 1; j++)
					if (p1[j]->soldout * p1[j]->value < p1[j + 1]->soldout * p1[j+1]->value)
					{
						lef* t = p1[j];
						p1[j] = p1[j + 1];
						p1[j + 1] = t;
					}
			printf("********************************************************************************************\n");
			printf(" **\t\t\t\t\t白酒\t\t\t\t\t**\n");
			printf("********************************************************************************************\n");
			printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "规格(瓶)", "售出数量(箱)", "销售额");
			for (int i = 0; i < n; i++)
				printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p1[i]->name, p1[i]->capacity, p1[i]->specs, p1[i]->soldout, p1[i]->soldout * p1[i]->value);
		}
		if (drinksnum)
		{
			def* p = drinksp->next;
			def* p1[20];
			int n = 0;
			while (p)
			{
				if (p->soldout)
					p1[n] = p, n++;
				p = p->next;
			}
			for (int i = 0; i < n - 1; i++)
				for (int j = 0; j < n - i - 1; j++)
					if (p1[j]->soldout * p1[j]->value < p1[j + 1]->soldout * p1[j+1]->value)
					{
						def* t = p1[j];
						p1[j] = p1[j + 1];
						p1[j + 1] = t;
					}
			printf("********************************************************************************************\n");
			printf(" **\t\t\t\t\t饮品\t\t\t\t\t**\n");
			printf("********************************************************************************************\n");
			printf("%-20s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "商品名称", "容量(ml)", "规格(瓶)", "售出数量(箱)", "销售额");
			for (int i = 0; i < n; i++)
				printf("%d.%-20s\t%-10d\t%-10d\t%-10d\t%-10d\t\n", i + 1, p1[i]->name, p1[i]->capacity, p1[i]->specs, p1[i]->soldout, p1[i]->soldout * p1[i]->value);
		}
	}
	filesave();
	printf("\n输入0退出");
	scanf("%d", &num); getchar();
	if (num == 0) adminmeue();
}