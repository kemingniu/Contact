#define _CRT_SECURE_NO_WARNINGS
/*实现一个通讯录；
通讯录可以用来存储1000个人的信息，每个人的信息包括：
姓名、性别、年龄、电话、住址
提供方法：
1.	添加联系人信息
2.	删除指定联系人信息
3.	查找指定联系人信息
4.	修改指定联系人信息
5.	显示所有联系人信息
6.	清空所有联系人
7.	以名字排序所有联系人*/


#include"contact.h"

void menu() {
	printf("************************************\n");
	printf("* 1.add              2. del   ******\n");
	printf("* 3.find              4.modify******\n");
	printf("  5.show   6.clear 7.sort     ******\n");
	printf("************************************\n");
}
enum Option {
	action,
	add,
	del,
	find,
	modify,
	show,
	clear,
	sort
};

int main(void)
{



	struct Contact my_contact;
	Init_peo(&my_contact);
	int input = 0;
	do {
		menu();
		printf("输入你要操作的代码\n");
		scanf("%d", &input);
		switch (input) {
		case add:add_peo(&my_contact);
			break;
		case del:del_peo(&my_contact);
			break;
		case find:find_peo(&my_contact);
			break;
		case modify:modify_peo(&my_contact);
			break;
		case show:show_peo(&my_contact);
			break;
		case clear:clear_peo(&my_contact);
			break;
		case sort:sort_peo(&my_contact);
			break;
		default:
			printf("输入错误");
		}

	} while (1);


	return 0;
}