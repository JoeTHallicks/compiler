#include <stdio.h>

int main(void) 
{

int a;
register int _by, _sign;for (a = 1; _by = 1, _sign=(_by == 0 ? 1 : _by/abs(_by)), (a-(13))*_sign <= 0 ;a+= _by)
{if (!(a ==7))
{
printf("%d",a );
printf("\n");
}

}
a = 0;
do
{a = a +1;
if (!(a ==6 && a !=8))
{
printf("%d",a );
printf("\n");
}
} while(a <14);
a = 0;
while (a <12) 
{

printf("%d",a );
a = a +1;

}
printf("\n");

}
