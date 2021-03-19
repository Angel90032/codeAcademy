#include <stdio.h>
#include <stdlib.h>
#pragma once


typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t *next;
}node_t;

extern node_t *first;
extern node_t *last;

int write(int n);

int read(int *n);


/*jivko petrov strypes
aleksandyr aleksandrov python

srqda 17:30 python
nedelq 9-12:30 python
8:30 do 10:30 po 1 chas konsultaciq s jivko*/


