#define MAX 50
enum amplua {
	vratar,
	forvard
};

struct football
{
	char sname[MAX];
	amplua amplua;
	int age;
	int games;
	int balls;
};

void betterForvard(struct football *team, int player);

struct study
{
	char sName;
	int gruppa;
	int fiz;
	int inf;
	int hist;
};