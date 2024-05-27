#include <stdio.h>
int main()
{

    long long int eyes, mouths, bodies, min, count = 0;
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

    if (eyes > mouths && bodies > mouths)
    {
        min = mouths;
    }
    else if (mouths > bodies && eyes > bodies)
    {
        min = bodies;
    }
    else
    {
        min = eyes;
    }

    if (min > 0)
    {
        bodies = bodies - min;
        eyes = eyes - min;
        mouths = mouths - min;
        count = min;
    }

    if (eyes >= 2 && bodies >= 1)
    {
        long long int e = eyes / 2;

        if (bodies > e)
        {
            bodies -= e;
            eyes -= e * 2;
            count += e;
        }
        else if (e > bodies)
        {
            eyes -= bodies * 2;
            count += bodies;
            bodies -= bodies;
        }
    }

       if (eyes >= 1 && mouths >= 1 && bodies >= 1)
    {
        long long int rest_min = 0;
        if (eyes > mouths && bodies > mouths)
        {
            rest_min = mouths;
            count += rest_min;
            eyes -= rest_min;
            bodies -= rest_min;
            mouths -= mouths;
        }
        else if (mouths > bodies && eyes > bodies)
        {
            rest_min = bodies;
            count += rest_min;
            eyes -= rest_min;
            mouths -= rest_min;
            bodies -= bodies;
        }
        else
        {
            rest_min = eyes;
            count += rest_min;
            mouths -= rest_min;
            bodies -= rest_min;
            eyes -= eyes;
        }
    }

    printf("%lld\n", count);

    return 0;
}
