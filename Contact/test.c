#define _CRT_SECURE_NO_WARNINGS
/*ʵ��һ��ͨѶ¼��
ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
�������Ա����䡢�绰��סַ
�ṩ������
1.	�����ϵ����Ϣ
2.	ɾ��ָ����ϵ����Ϣ
3.	����ָ����ϵ����Ϣ
4.	�޸�ָ����ϵ����Ϣ
5.	��ʾ������ϵ����Ϣ
6.	���������ϵ��
7.	����������������ϵ��*/


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
		printf("������Ҫ�����Ĵ���\n");
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
			printf("�������");
		}

	} while (1);


	return 0;
}