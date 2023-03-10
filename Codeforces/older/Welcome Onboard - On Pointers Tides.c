#include <stdio.h>

int main()
{
    int hours, minutes, time, closest;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    time = hours * 60 + minutes;

    /* Bound time entered by user between two successive departures,
    * then determine which one is closer.
    */
    if (time <= 480) /* 8:00 a.m. */
        closest = 480;
    else if (time <= 583) /* 9:43 a.m. */
        closest = (time - 480) <= (583 - time) ? 480 : 583;
    else if (time <= 679) /* 11:19 a.m. */
        closest = (time - 583) <= (679 - time) ? 583 : 679;
    else if (time <= 767) /* 12:47 p.m. */
        closest = (time - 679) <= (767 - time) ? 679 : 767;
    else if (time <= 840) /* 2:00 p.m. */
        closest = (time - 767) <= (840 - time) ? 767 : 840;
    else if (time <= 945) /* 3:45 p.m. */
        closest = (time - 840) <= (945 - time) ? 840 : 945;
    else if (time <= 1140) /* 7:00 p.m. */
        closest = (time - 945) <= (1140 - time) ? 945 : 1140;
    else /* 9:45 p.m. */
        closest = (time - 1140) <= (1305 - time) ? 1140 : 1305;

    // Display departure and arrival times.
    switch (closest) 
    {
        case 480:
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
            break;
        case 583:
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
            break;
        case 679:
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
            break;
        case 767:
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
            break;
        case 840:
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
            break;
        case 945:
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
            break;
        case 1140:
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
            break;
        case 1305:
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
            break;
    }

    return 0;
}