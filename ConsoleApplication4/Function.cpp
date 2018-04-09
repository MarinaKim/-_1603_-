#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

#include"Header.h"
using namespace std;

void betterForvard(struct football *team, int player)
{
	struct football best;
	int max=0;
	for (int i = 0;i < player;i++)
	{
		if (team[i].balls > max)
			max = team[i].balls;
		best = team[i];
	}

	printf(" Better forvar %s %d", best.sname, best.balls);
	printf("\n");
}