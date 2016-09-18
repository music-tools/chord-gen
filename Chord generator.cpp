#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	bool triad,qua,fiv;
	int x;
	char c;
	
	while (c=getchar()!='Z')
	{
	//Init
	triad=0;
	qua=0;
	fiv=0;
	
	//NOTE NAME
	x=rand()%12;//14 different notes
	switch (x)
	{
		case 0:
			{
				printf("B");
				break;
			}
		case 1:
			{
                printf("C");
                break;
			}
		case 2:
			{
                printf("Db");
                break;
			}
		case 3:
			{
                printf("D");
                break;
			}
		case 4:
			{
                printf("Eb");
                break;
			}
		case 5:
			{
                printf("E");
                break;
			}
		case 6:
			{
                printf("F");
                break;
			}
		case 7:
			{
                printf("Gb");
                break;
			}
		case 8:
			{
                printf("G");
                break;
			}
		case 9:
			{
                printf("Ab");
                break;
			}
		case 10:
			{
                printf("A");
                break;
			}
		case 11:
			{
                printf("Bb");
                break;
			}
	}
	//NUMBER OF NOTES(3,4,5)
	x=rand()%3;
	switch (x)
	{
		case 0:
			{
				triad=1;
				break;
			}
		case 1:
			{
				qua=1;
				break;
			}
		case 2:
			{
				fiv=1;
				break;
			}
	}
	//CHORD QUALITY
	if (triad==1)//maj,min,dim,aug,sus4
	{
		x=rand()%5;
		switch (x)
		{
			case 0:
				{
					printf("");
					break;
				}
			case 1:
				{
                    printf("m");
					break;
				}
			case 2:
				{
                    printf("dim");
					break;
				}
			case 3:
				{
                    printf("aug");
					break;
				}
			case 4:
				{
                    printf("sus4");
					break;
				}
		}
	}
	else if (qua==1)//maj7,min7,maj6,min6,dom7,dim7,m7b5,7+,minmaj7,7sus4,7b5,7#5,maj7+
	{
        x=rand()%13;
		switch (x)
		{
			case 0:
				{
					printf("maj7");
					break;
				}
			case 1:
				{
                    printf("min7");
					break;
				}
			case 2:
				{
                    printf("maj6");
					break;
				}
			case 3:
				{
                    printf("min6");
					break;
				}
			case 4:
				{
                    printf("7");
					break;
				}
			case 5:
				{
					printf("dim7");
					break;
				}
			case 6:
				{
                    printf("m7b5");
					break;
				}
			case 7:
				{
                    printf("7+");
					break;
				}
			case 8:
				{
                    printf("minmaj7");
					break;
				}
			case 9:
				{
                    printf("7sus4");
					break;
				}
			case 10:
				{
                    printf("7b5");
					break;
				}
			case 11:
				{
                    printf("7#5");
					break;
				}
			case 12:
				{
                    printf("maj7+");
					break;
				}
		}
	}
	else//maj9,min9,dom9,7b9,7#9,maj9#11
	{
        x=rand()%6;
		switch (x)
		{
			case 0:
				{
					printf("maj9");
					break;
				}
			case 1:
				{
                    printf("min9");
					break;
				}
			case 2:
				{
                    printf("9");
					break;
				}
			case 3:
				{
                    printf("7b9");
					break;
				}
			case 4:
				{
                    printf("7#9");
					break;
				}
			case 5:
				{
                    printf("maj9#11");
					break;
				}
		}
	}
	
    }
}
