#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

int  search(pCon pcon, char *name)
{
	int i = 0;
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(name, pcon->people[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Init_peo(pCon pcon)
{

	int count = sizeof(pcon->count);
	pcon->count = 0;
	memset(pcon->people, 0, count);
}

void add_peo(pCon pcon) {
	if (pcon->count == PEO_MAX)
	{
		printf("ÈËÊýÒÑÂú\n");
		return;
	}
	printf("please input the name:");
	scanf("%s", (pcon->people[pcon->count]).name);
	printf("please input sex:");
	scanf("%s", (pcon->people[pcon->count]).sex);
	printf("please input age:");
	scanf("%d", &(pcon->people[pcon->count]).age);
	printf("please input telphonenumber:");
	scanf("%s", (pcon->people[pcon->count]).tel);
	printf("please input address:");
	scanf("%s", (pcon->people[pcon->count]).addr);
	pcon->count++;
	printf("add success\n");
}

void show_peo(pCon pcon)
{
	int i = 0;
	printf("%10s%4s%5s%12s%10s\n", "NAME", "SEX", "AGE", "TELEPHONNUMBER", "ADDRESS");
	for (i = 0; i < pcon->count; i++)
	{
		printf("%10s%4s%5d%12s%10s\n", pcon->people[i].name, pcon->people[i].sex, pcon->people[i].age, pcon->people[i].tel, pcon->people[i].addr);
		//if the formal aren't right,maybe will stop the program
	}
}

void del_peo(pCon pcon)
{
	int i = 0;
	int j = 0;
	char name[10] = { 0 };
	if (pcon->count == 0)
	{
		printf("not delete\n");
		return;
	}
	printf("please input the specially name\n");
	scanf("%s", name);
	//find
	//	int ret = search( pcon,name);
	//	if(ret == -1){
	//		printf("not exit\n");
	//		return ;
	//	}
	for (i = 0; i<pcon->count; i++)
	{
		if (strcmp(name, pcon->people[i].name) == 0)
			break;
	}
	for (j = i; j < pcon->count - 1; j++)
	{
		pcon->people[j] = pcon->people[j + 1];
	}
	pcon->count--;
	printf("delete success!!!\n");


}

void clear_peo(pCon pcon)

{
	pcon->count = 0;
	printf("qingkong success!\n");
}

void find_peo(pCon pcon)
{

	char name[10];
	printf("please input want to find name\n");
	scanf("%s", name);
	//int i = search(pcon,name);
	// 	if(i == -1)
	// 	{
	// 		printf("not find\n");
	//		 return ; 
	//	 }
	//	 else
	//	 {
	//	 	
	//	 	printf("%10s%4s%5s%12s%10s", pcon->people[i].name, pcon->people[i].sex, pcon->people[i].age, pcon->people[i].tel, pcon->people[i].addr);
	//	 }
	int i = 0;
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(name, pcon->people[i].name) == 0)
		{
			printf("%10s%4s%5s%12s%10s\n", pcon->people[i].name, pcon->people[i].sex, pcon->people[i].age, pcon->people[i].tel, pcon->people[i].addr);
		}
	}
	printf("not find\n");
}



void modify_peo(pCon pcon)
{

	int i = 0;
	char name[10];
	printf("please input eant to modify name\n");
	scanf("%s", name);
	i = search(pcon, name);
	if (i == -1)
	{
		printf("not exsit\n");
		return;
	}
	else
	{
		printf("please input the name:");
		scanf("%s", pcon->people[i].name);
		printf("please input sex:");
		scanf("%s", pcon->people[i].sex);
		printf("please input age:");
		scanf("%d", pcon->people[i].age);
		printf("please input telphonenumber:");
		scanf("%s", pcon->people[i].tel);
		printf("please input address:");
		scanf("%s", pcon->people[i].addr);
	}

}

void sort_peo(pCon pcon)
{
	int i, j;
	for (i = 0; i< pcon->count - 1; i++)
	{
		for (j = i; j<pcon->count - i - 1; j++)
		{
			if (strcmp(pcon->people[j].name, pcon->people[j + 1].name)>0)
			{
				struct People tmp = pcon->people[j];
				pcon->people[j] = pcon->people[j + 1];
				pcon->people[j + 1] = tmp;
			}
		}
	}
}