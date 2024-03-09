/*


        PROJECT TITLE:DIGITAL VOTING SYSTEM IN NEPAL...
	NAME:SABIN KUMAR CHAUDHARY
	PHONE NO:9861999186
	STUDENT ID:ACE078BEI039
	FACULTY:ELECTRONIC,COMMUNICATION AND INFORMATION[BEI]
	DATE OF SUBMISSION:2079-05-12
	PROJECT:C PROGRAMMING PROJECT FOR FIRST SEMEMSTER(BATCH-2078)
	LECTURER:PRERNA kAWAUNJU..
	
	
*/


#include<stdio.h>
#include<conio.h>
int NEPALI_CONGRESS =0,LOKTANTRIK_SAMAJWADI_PARTY =0, NEPAL_SAMAJWADI_PARTY=0, COMMUNIST_PARTY_OF_NEPAL=0;
void electionResult()
{
    int wonByVote;
    if (NEPALI_CONGRESS > LOKTANTRIK_SAMAJWADI_PARTY && NEPALI_CONGRESS > NEPAL_SAMAJWADI_PARTY && NEPALI_CONGRESS > COMMUNIST_PARTY_OF_NEPAL)
    {
        printf("\n***NEPALI CONGRESS  won the election***\n\n");
        printf("Total vote of NEPALI CONGRESS  : %d\n",NEPALI_CONGRESS );
        wonByVote=NEPALI_CONGRESS - LOKTANTRIK_SAMAJWADI_PARTY ;
        printf("NEPALI CONGRESS  won by %d votes to LOKTANTRIK SAMAJWADI PARTY \n",wonByVote);
        wonByVote=NEPALI_CONGRESS -NEPAL_SAMAJWADI_PARTY;
        printf("NEPALI CONGRESS  won by %d votes to NEPAL SAMAJWADI PARTY\n",wonByVote);
        wonByVote=NEPALI_CONGRESS -COMMUNIST_PARTY_OF_NEPAL;
        printf("NEPALI CONGRESS  won by %d votes to COMMUNIST PARTY OF NEPAL(MAOIST CENTRE)\n",wonByVote);
    }
    else if (LOKTANTRIK_SAMAJWADI_PARTY  > NEPAL_SAMAJWADI_PARTY && LOKTANTRIK_SAMAJWADI_PARTY  > COMMUNIST_PARTY_OF_NEPAL)
    {
        printf("\n***LOKTANTRIK SAMAJWADI PARTY  won the election***\n\n");
        printf("Total vote of LOKTANTRIK SAMAJWADI PARTY  : %d\n",LOKTANTRIK_SAMAJWADI_PARTY );
        wonByVote=LOKTANTRIK_SAMAJWADI_PARTY -NEPALI_CONGRESS ;
        printf("LOKTANTRIK SAMAJWADI PARTY  won by %d votes to NEPALI CONGRESS \n",wonByVote);
        wonByVote=LOKTANTRIK_SAMAJWADI_PARTY -NEPAL_SAMAJWADI_PARTY;
        printf("LOKTANTRIK SAMAJWADI PARTY  won by %d votes to NEPAL SAMAJWADI PARTY\n",wonByVote);
        wonByVote=LOKTANTRIK_SAMAJWADI_PARTY - COMMUNIST_PARTY_OF_NEPAL;
        printf("LOKTANTRIK SAMAJWADI PARTY  won by %d votes to COMMUNIST PARTY OF NEPAL(MAOIST CENTRE)\n",wonByVote);
    }
    else if (NEPAL_SAMAJWADI_PARTY > COMMUNIST_PARTY_OF_NEPAL)
    {
        printf("\n***NEPAL SAMAJWADI PARTY won the election***\n\n");
        printf("Total vote of NEPAL SAMAJWADI PARTY : %d\n",NEPAL_SAMAJWADI_PARTY);
        wonByVote=NEPAL_SAMAJWADI_PARTY-LOKTANTRIK_SAMAJWADI_PARTY ;
        printf("NEPAL SAMAJWADI PARTY won by %d votes to LOKTANTRIK SAMAJWADI PARTY \n",wonByVote);
        wonByVote=NEPAL_SAMAJWADI_PARTY-NEPALI_CONGRESS ;
        printf("NEPAL SAMAJWADI PARTY won by %d votes to NEPALI CONGRESS \n",wonByVote);
        wonByVote=NEPAL_SAMAJWADI_PARTY-COMMUNIST_PARTY_OF_NEPAL;
        printf("NEPAL SAMAJWADI PARTY won by %d votes to COMMUNIST PARTY OF NEPAL(MAOIST CENTRE)\n",wonByVote);
    }
    else if(NEPALI_CONGRESS  == LOKTANTRIK_SAMAJWADI_PARTY  && NEPALI_CONGRESS  == NEPAL_SAMAJWADI_PARTY && NEPALI_CONGRESS  == COMMUNIST_PARTY_OF_NEPAL)
    {
        printf("\n****NO ONE WON THE ELECTION!!!!****\n\n");
        printf("NAME OF PARTY:- NEPALI CONGRESS    LOKTANTRIK SAMAJWADI PARTY    NEPAL SAMAJWADI PARTY   COMMUNIST PARTY OF NEPAL(MAOIST CENTRE)\n\n");
        printf("TOTAL VOTE   :-       %d                      %d                           %d                              %d\n",NEPALI_CONGRESS ,LOKTANTRIK_SAMAJWADI_PARTY ,NEPAL_SAMAJWADI_PARTY,COMMUNIST_PARTY_OF_NEPAL);
    }
    else 
    {
        printf("\n***COMMUNIST PARTY OF NEPAL(MAOIST CENTRE) won the election***\n\n");
        printf("Total vote of COMMUNIST PARTY OF NEPAL(MAOIST CENTRE) : %d\n",COMMUNIST_PARTY_OF_NEPAL);
        wonByVote=COMMUNIST_PARTY_OF_NEPAL-LOKTANTRIK_SAMAJWADI_PARTY ;
        printf("COMMUNIST PARTY OF NEPAL(MAOIST CENTRE) won by %d votes to LOKTANTRIK SAMAJWADI PARTY \n",wonByVote);
        wonByVote=COMMUNIST_PARTY_OF_NEPAL - NEPAL_SAMAJWADI_PARTY;
        printf("COMMUNIST PARTY OF NEPAL(MAOIST CENTRE) won by %d votes to NEPAL SAMAJWADI PARTY\n",wonByVote);
        wonByVote=COMMUNIST_PARTY_OF_NEPAL-NEPALI_CONGRESS ;
        printf("COMMUNIST PARTY OF NEPAL(MAOIST CENTRE) won by %d votes to NEPALI CONGRESS \n",wonByVote);
    }
}
void calculateVote(int vote)
{
	
    switch (vote)
    {
    case 1:
        NEPALI_CONGRESS +=1;
        break;
    case 2:
        LOKTANTRIK_SAMAJWADI_PARTY +=1;
        break;
    case 3:
        NEPAL_SAMAJWADI_PARTY+=1;
        break;
    case 4:
        COMMUNIST_PARTY_OF_NEPAL+=1;
        break;
    }
}
int main()
{
    int choose;
      
        printf("\n\n\n");
        printf("                      AFFILIATED TO TRIBHUVAN UNIVERSITY[IOE]                     \n");
        printf("                   ADVANCED COLLEDE OF ENGINEERING AND MANAGEMENT                 \n");
        printf("                                 KALANKI,KATHMANDU                                \n\n");
        printf("............................PROGRAMMER CHAUDHARY SABIN...........................\n");
        printf("           ........PROJECT TITLE:-DIGITAL VOTING SYSTEM IN NEPAL........          \n\n");
        printf("*******************Welcome to the simple voting system project*******************\n\n");
        printf("                ........NATIONAL ELECTION COMMISSION........                      \n");
        printf("                         ..........NEPAL........                                  \n");
        printf("*********************************************************************************\n");
        printf("| 1.NEPALI CONGRESS                 | 2.LOKTANTRIK SAMAJWADI PARTY              |\n");
        printf("*********************************************************************************\n");
        printf("| 3.NEPAL SAMAJWADI PARTY           | 4.COMMUNIST PARTY OF NEPAL(MAOIST CENTRE) |\n");
        printf("*********************************************************************************\n\n");
    do
    {    
        printf("Press 1 to vote NEPALI CONGRESS\n");
        printf("Press 2 to vote LOKTANTRIK SAMAJWADI PARTY\n");
        printf("Press 3 to vote NEPAL SAMAJWADI PARTY\n");
        printf("Press 4 to vote COMMUNIST PARTY OF NEPAL(MAOIST CENTRE)\n");
        printf("Press 5 to show election result\n");
        printf("Please choose number for voting: ");
        scanf("%d", &choose);
        if (choose==5)
        {
            electionResult();
        }else
        {
            calculateVote(choose);            
        } 
        printf("\n");
    } while (choose != 5);
    getch();
    return 0;
}
