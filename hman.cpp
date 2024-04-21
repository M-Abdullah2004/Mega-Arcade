#include <stdio.h>
#include <string.h>
#include <windows.h>
char hint[100];
HANDLE aConsole = GetStdHandle(STD_OUTPUT_HANDLE);


void hangmanPrint(int i){			
        system("cls");          		
        switch (i){
        case 0:
        	SetConsoleTextAttribute(aConsole, 10);
        	printf("\t\t\t\t\t\t\t\t _                                             \n");
		    printf("\t\t\t\t\t\t\t\t| |                                            \n");
		    printf("\t\t\t\t\t\t\t\t| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n");
		    printf("\t\t\t\t\t\t\t\t| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n");
		    printf("\t\t\t\t\t\t\t\t| | | | (_| | | | | (_| | | | | | | (_| | | | | \n");
		    printf("\t\t\t\t\t\t\t\t|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
		    printf("\t\t\t\t\t\t\t\t                    __/ |                      \n");
		    printf("\t\t\t\t\t\t\t\t                   |___/  \n");
			printf("\n\n\n\t\t\t\t\t\t\t\t\tRemaining Lives: \3 \3 \3 \3 \3 \3  ");
			SetConsoleTextAttribute(aConsole, 12);
            printf("\t\t\t   ++----++\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t==========\n");
			SetConsoleTextAttribute(aConsole, 7);
			break;
        case 1:
        	SetConsoleTextAttribute(aConsole, 10);
            printf("\t\t\t\t\t\t\t\t _                                             \n");
		    printf("\t\t\t\t\t\t\t\t| |                                            \n");
		    printf("\t\t\t\t\t\t\t\t| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n");
		    printf("\t\t\t\t\t\t\t\t| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n");
		    printf("\t\t\t\t\t\t\t\t| | | | (_| | | | | (_| | | | | | | (_| | | | | \n");
		    printf("\t\t\t\t\t\t\t\t|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
		    printf("\t\t\t\t\t\t\t\t                    __/ |                      \n");
		    printf("\t\t\t\t\t\t\t\t                   |___/  \n");
			printf("\n\n\n\t\t\t\t\t\t\t\t\tRemaining Lives: \3 \3 \3 \3 \3 ");
			SetConsoleTextAttribute(aConsole, 12);
            printf("\t\t\t   ++----++\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   O     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t==========\n");
			SetConsoleTextAttribute(aConsole, 7);
			break;
        case 2:
        	SetConsoleTextAttribute(aConsole, 10);
        	printf("\t\t\t\t\t\t\t\t _                                             \n");
		    printf("\t\t\t\t\t\t\t\t| |                                            \n");
		    printf("\t\t\t\t\t\t\t\t| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n");
		    printf("\t\t\t\t\t\t\t\t| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n");
		    printf("\t\t\t\t\t\t\t\t| | | | (_| | | | | (_| | | | | | | (_| | | | | \n");
		    printf("\t\t\t\t\t\t\t\t|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
		    printf("\t\t\t\t\t\t\t\t                    __/ |                      \n");
		    printf("\t\t\t\t\t\t\t\t                   |___/  \n");
			printf("\n\n\n\t\t\t\t\t\t\t\t\tRemaining Lives: \3 \3 \3 \3  ");
			SetConsoleTextAttribute(aConsole, 12);
            printf("\t\t\t   ++----++\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   O     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t==========\n");
            SetConsoleTextAttribute(aConsole, 7);
			break;
        case 3:
        	SetConsoleTextAttribute(aConsole, 10);
            printf("\t\t\t\t\t\t\t\t _                                             \n");
		    printf("\t\t\t\t\t\t\t\t| |                                            \n");
		    printf("\t\t\t\t\t\t\t\t| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n");
		    printf("\t\t\t\t\t\t\t\t| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n");
		    printf("\t\t\t\t\t\t\t\t| | | | (_| | | | | (_| | | | | | | (_| | | | | \n");
		    printf("\t\t\t\t\t\t\t\t|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
		    printf("\t\t\t\t\t\t\t\t                    __/ |                      \n");
		    printf("\t\t\t\t\t\t\t\t                   |___/  \n");
			printf("\n\n\n\t\t\t\t\t\t\t\t\tRemaining Lives: \3 \3 \3  ");
			SetConsoleTextAttribute(aConsole, 12);
            printf("\t\t\t   ++----++\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   O     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  /|     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t==========\n");
			SetConsoleTextAttribute(aConsole, 7);
			break;
        case 4:
        	SetConsoleTextAttribute(aConsole, 10);
            printf("\t\t\t\t\t\t\t\t _                                             \n");
		    printf("\t\t\t\t\t\t\t\t| |                                            \n");
		    printf("\t\t\t\t\t\t\t\t| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n");
		    printf("\t\t\t\t\t\t\t\t| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n");
		    printf("\t\t\t\t\t\t\t\t| | | | (_| | | | | (_| | | | | | | (_| | | | | \n");
		    printf("\t\t\t\t\t\t\t\t|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
		    printf("\t\t\t\t\t\t\t\t                    __/ |                      \n");
		    printf("\t\t\t\t\t\t\t\t                   |___/  \n\n");
    		SetConsoleTextAttribute(aConsole, 7);
			printf("\t\t\t\t\t\t\t\t\t\tHint: %s", hint);
			SetConsoleTextAttribute(aConsole, 10);
			printf("\n\n\n\t\t\t\t\t\t\t\t\tRemaining Lives: \3 \3  ");
			SetConsoleTextAttribute(aConsole, 12);	
            printf("\t\t\t\t   ++----++\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   O     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  /|\\    ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t==========\n");
			SetConsoleTextAttribute(aConsole, 7);
			break;
        case 5:
        	SetConsoleTextAttribute(aConsole, 10);
            printf("\t\t\t\t\t\t\t\t _                                             \n");
		    printf("\t\t\t\t\t\t\t\t| |                                            \n");
		    printf("\t\t\t\t\t\t\t\t| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n");
		    printf("\t\t\t\t\t\t\t\t| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n");
		    printf("\t\t\t\t\t\t\t\t| | | | (_| | | | | (_| | | | | | | (_| | | | | \n");
		    printf("\t\t\t\t\t\t\t\t|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
		    printf("\t\t\t\t\t\t\t\t                    __/ |                      \n");
		    printf("\t\t\t\t\t\t\t\t                   |___/  \n\n");
    		SetConsoleTextAttribute(aConsole, 7);
			printf("\t\t\t\t\t\t\t\t\t\tHint: %s", hint);
			SetConsoleTextAttribute(aConsole, 10);
			printf("\n\n\n\t\t\t\t\t\t\t\t\tRemaining Lives: \3  ");
			SetConsoleTextAttribute(aConsole, 12);
            printf("\t\t\t\t   ++----++\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   O     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  /|\\    ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  /      ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t==========\n");
			SetConsoleTextAttribute(aConsole, 7);
			break;
        case 6:
            SetConsoleTextAttribute(aConsole, 10);
            printf("\t\t\t\t\t\t\t\t _                                             \n");
		    printf("\t\t\t\t\t\t\t\t| |                                            \n");
		    printf("\t\t\t\t\t\t\t\t| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n");
		    printf("\t\t\t\t\t\t\t\t| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n");
		    printf("\t\t\t\t\t\t\t\t| | | | (_| | | | | (_| | | | | | | (_| | | | | \n");
		    printf("\t\t\t\t\t\t\t\t|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
		    printf("\t\t\t\t\t\t\t\t                    __/ |                      \n");
		    printf("\t\t\t\t\t\t\t\t                   |___/  \n\n");
    		SetConsoleTextAttribute(aConsole, 7);
			printf("\t\t\t\t\t\t\t\t\t\tHint: %s", hint);
			SetConsoleTextAttribute(aConsole, 10);
			printf("\n\n\n\t\t\t\t\t\t\t\t\tRemaining Lives:   ");
			SetConsoleTextAttribute(aConsole, 12);
            printf("\t\t\t\t   ++----++\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   |     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   O     ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  /|\\    ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  / \\    ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ||\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t==========\n");
			SetConsoleTextAttribute(aConsole, 7);
			break;
}       }
void hangman(){
	char word[20];		
    char stars[20];			
    int counter = 0;			
    int len;				
    char ch;				
    int strikes=0;			
    int trigger = 0;			
    int wincounter=0;			
    int i;				

    //Ascii Art
    SetConsoleTextAttribute(aConsole, 10);
    printf("\t\t\t\t\t\t\t\t _                                             \n");
    printf("\t\t\t\t\t\t\t\t| |                                            \n");
    printf("\t\t\t\t\t\t\t\t| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n");
    printf("\t\t\t\t\t\t\t\t| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n");
    printf("\t\t\t\t\t\t\t\t| | | | (_| | | | | (_| | | | | | | (_| | | | | \n");
    printf("\t\t\t\t\t\t\t\t|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
    printf("\t\t\t\t\t\t\t\t                    __/ |                      \n");
    printf("\t\t\t\t\t\t\t\t                   |___/  \n");
	SetConsoleTextAttribute(aConsole, 7);
    printf("\n\n\t\t\t\t\t\t\t\t\t ENTER A WORD : ");		
    scanf("%s", &word);
    strlwr(word);
    printf("\n\n\t\t\t\t\t\t\t\t ENTER THE HINT(e.g A Country) : ");
   
	getchar();	
    gets(hint);
    len = strlen(word);			

    system("cls");						


    
    for(counter=0; counter<len; counter++)
    {
        stars[counter]='*';
    }


    stars[len]='\0';				


    
    for(counter = 0; counter<26; counter++)
    {

        if(wincounter==len)			    
        {
        	SetConsoleTextAttribute(aConsole, 14);
            printf("\n\t\t\t\t\t\t\t\t\t\tTHE WORD WAS: %s\n", word);
            SetConsoleTextAttribute(aConsole, 10);
            printf("\t\t\t\t\t\t\t\t\t\t    YOU WIN!\n");
            system("pause");
            SetConsoleTextAttribute(aConsole, 7);
            break;
        }

        hangmanPrint(strikes);			    	

        if(strikes==6)				    	
        {
        	SetConsoleTextAttribute(aConsole, 14);
            printf("\t\t\t\t\t\t\t\t\t\tTHE WORD WAS: %s\n\n", word);
            SetConsoleTextAttribute(aConsole, 12);
            printf("\t\t\t\t\t\t\t\t\t\t   YOU LOSE :(\n");
            SetConsoleTextAttribute(aConsole, 7);
            system("pause");
            break;
        }

        printf("\t\t\t\t\t\tWORD TO GUESS :  %s", stars);			

	printf("\n\n\t\t\t\t\t\tGUESS A LETTER: ");	
        scanf(" %c",&ch);
        if(ch>='A' && ch<='Z'){
        	ch+=32;
		}
        for(i=0; i<len; i++)            
        {
            if(word[i]==ch)
            {
                stars[i]=ch;		    		
                trigger++;			   
                wincounter++;		    		
            }
        }

        if(trigger==0)
        {
            strikes++;				    	
        }

        trigger = 0;				    
    }

    printf("\n\t\t\t\t\t\t\t\t\t     Press any key to exit.");

}

