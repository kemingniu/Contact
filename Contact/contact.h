//#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define NAME_MAX 40
#define SEX_MAX 20
#define TEL_MAX 20
#define ADDR_MAX 40
#define PEO_MAX 1000
typedef struct People {
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}*peo;

typedef struct Contact {
	int count;
	struct People people[PEO_MAX];
}*pCon;
void Init_peo(pCon pcon);
void add_peo(pCon pcon);
void show_peo(pCon pcon);
void del_peo(pCon pcon);
void modify_peo(pCon pcon);
void show_peo(pCon pcon);
void clear_peo(pCon pcon);
void find_peo(pCon pcon);
void sort_peo(pCon pcon);
#endif
