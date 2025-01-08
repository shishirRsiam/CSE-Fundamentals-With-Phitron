#include<stdio.h>
int main()
{
    long long int eyes,face,body;
    scanf("%lld %lld %lld", &eyes, &face, &body);
    long long int min;

    if (eyes<face && eyes<body)
    {
        min = eyes;
    }
    else if(face<eyes && face<body)
    {
        min=face;
    }
    else 
    {
        min=body;
    }

    long long int one=eyes-min; 
    long long int two=face-min; 
    long long int three=body-min; 
    long long int four=one/2;
    long long int five=three/2;
    if (four<=five || four<=three)
    {
        long long int six=one/2;
        long long int statue=six+min;
        printf("%lld",statue);
    }
    else 
    {
        printf("%lld",body);
    }

    return 0;
}
