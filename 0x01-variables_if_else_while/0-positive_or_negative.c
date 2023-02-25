#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -Entry point
 *Description: "Check four numbers if its negative,zero or positive"
 *Return: Alway 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
        }
	prinft("%d is positive\n", n);
	}
	else if (n == 0)
	}
         prinft("%d is zero\n", n);
	}
        else{
	printf("%d is negative\n", n);
	}
        return (0);


}

