#include<stdio.h>

int main()
{
    
    int kichunah;
    scanf("%d",&kichunah);

    for (int hehe=0;hehe<kichunah;hehe++)
    {
        int humm;
        scanf("%d",&humm);
        int accah[humm];
        for (int ehem=0;ehem<humm;ehem++)
        {
            scanf("%d",&accah[ehem]);
        }

        int huhu;
        scanf("%d",&huhu);

        int huh=0;
        for (int aha=0;aha<humm;aha++)
        {
            if (accah[aha]==huhu)
            {
                huh=1;
                break;
            }
        }
        if (huh)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

    return 0;

}
    //  Soorry SIR, exam khub bhalobhabe sesh korar jonno mood 100000% good!! ei jonno ektu ultapalta variable nichi!! 

    //  Maaf kore diben please!!!
