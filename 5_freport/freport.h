#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<getopt.h>
#include<dirent.h>
#include<string.h>
#include<sys/stat.h>
#include<time.h>
#include<sys/time.h>

struct mynode
{
	long int inode;
	struct mynode* next;
};

struct mynode *hashlist[100];

int A_pr_attb( char *fullname, struct stat *buf, struct timespec *now, int opt );
int B_s_pr_huge( char *fullname, struct stat *buf, struct timespec *now, int opt );
int B_a_pr_acced( char *fullname, struct stat *buf, struct timespec *now, int opt );

int traverse( char *pathname, int myfun(), struct timespec *now, int opt, const char* startpoint );

int hashcheck(long int inode);