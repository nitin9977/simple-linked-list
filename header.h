#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <errno.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include<pthread.h>
#pragma once
typedef struct tree
{
struct tree *left;
int num;
struct tree *right;
}TREE;

typedef struct st
{
int num;
struct st *next;
}ST;

//	TREE *parent=NULL;
/*
#ifndef parent
	#define parent
		TREE *parent=NULL;
#endif
*/
