#include <stdio.h>
#define anzTuer 101
int main()
{
	int i, j, *zA,*zE;
	int zellen[anzTuer];
	zE=zellen+100;
	for (zA=zellen+1 ;zA<=zE; zA++)
		*zA = 0;

	for (i=2;i<anzTuer;i++)
		
		for (zA=zellen+i;zA<=zE;zA=zA+i)
		*zA =!(*zA);		

	i=1;
	for (zA=zellen+i ;zA<=zE; zA++, i++)
		if (!(*zA))	printf("Die %d-te Tuer ist offen.\n", i);
		
return 0;
}
