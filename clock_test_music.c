
#include<stdio.h>
#include<windows.h>
#define LENTH 300
struct music
{
    unsigned tune;
    unsigned tone;
    unsigned hold;
};
typedef struct music* song;
static int size;
void init(song S,int *I);
void play(song S);
int record(void);
void play_adv(song S);
song test(void);
song test_adv(void);
song happy(void);
song star_adv(void);
song sky(void); 

int main()
{
    char c;
    printf("*******��Ŀ********\n"
            "[1].������\n"
            "[2].С����\n"
            "[0].��������\n"
            "******************\n");
    do{
    printf("\n");
    switch(record())
    {
    	case 0: puts("--���Է�����--"); play(test());break;
        case 1: puts("--������--"); play(happy());break;
        case 2: puts("--С����--"); play_adv(star_adv());break;
        case 3: puts("--���֮��--"); play(sky());break;
        
        default: puts("--�߼����Է���--"); play_adv(test_adv());
    }
    printf("Ҫ������(q�˳�)?");
    c=getch();
    }while(c!='q');
    puts("\n--����--\n");
    return 0;
}
void init(song S,int *I)
{
    int i;
    for(i=0;i<size;i++)
    {
        S[i].tune=I[i]/100;
        S[i].hold=I[i]%10;
        S[i].tone=(I[i]-S[i].tune*100)/10;
    }
}
void play(song S)
{
    int i;
    unsigned pitch[3][7]={

    {262,294,330,349,392,440,494},
    {523,587,659,698,784,880,988},
    {1046,1175,1318,1397,1568,1760,1967}
    };
    for(i=0;i<size;i++)
    {
        
        Beep(pitch[S[i].tune-1][S[i].tone-1],S[i].hold*LENTH);
        putchar('*');
    }
    puts("\n�������\n");
    size=0;
}
int record(void)
{
    int select;
    printf("������ѡ�����Ŀ:");
    while(!scanf("%d",&select))
    {
        printf("����������!\n");
        getchar();
    }
    return select;
}
void play_adv(song S)
{
    
    int i;
    unsigned pitch[4][7]={
    
    {131,147,165,175,196,220,247},
    {262,294,330,349,392,440,494},
    {523,587,659,698,784,880,988},
    {1046,1175,1318,1397,1568,1760,1967}
    };
    for(i=0;i<size;i++)
    {
        Beep(pitch[S[i].tune-1][S[i].tone-1],S[i].hold);
        putchar('*');
    }
    puts("\n�������\n");
    size=0;
}
song test(void)
{
    
    static struct music test[21];
    int n[21]={
    112,122,132,142,152,162,173,
    212,222,232,242,252,262,273,
    312,322,332,342,352,362,373
    };

    size=21;
    init(test,n);

    return test;
}
song test_adv(void)
{
    
    static struct music test[]={
      {1,1,300},{1,2,300},{1,3,300},{1,4,300},{1,5,300},{1,6,300},{1,7,600},
      {2,1,300},{2,2,300},{2,3,300},{2,4,300},{2,5,300},{2,6,300},{2,7,600},
      {3,1,300},{3,2,300},{3,3,300},{3,4,300},{3,5,300},{3,6,300},{3,7,600},
      {4,1,300},{4,2,300},{4,3,300},{4,4,300},{4,5,300},{4,6,300},{4,7,600}
    };
   
    size=sizeof(test)/sizeof(struct music);
    
    return test;
}
song happy(void)
{
    static struct music happy[62];
    int n[62]={
    232,232,242,252,252,242,232,222,212,212,222,232,232,222,223,
    232,232,242,252,252,242,232,222,212,212,222,232,222,212,213,
    222,222,232,212,222,231,241,231,212,222,232,242,231,211,212,222,253,
    232,232,242,252,252,242,232,222,212,212,222,232,222,211,213
    };
    size=62;
    init(happy,n);
    return happy;
}
song star_adv(void)
{
    static struct music star[]={
      {3,1,500},{3,1,500},{3,5,500},{3,5,500},{3,6,500},{3,6,500},{3,5,1000},
      {3,4,500},{3,4,500},{3,3,500},{3,3,500},{3,2,500},{3,2,500},{3,1,1000},
      {3,5,500},{3,5,500},{3,4,500},{3,4,500},{3,3,500},{3,3,500},{3,2,1000},
      {3,5,500},{3,5,500},{3,4,500},{3,4,500},{3,3,500},{3,3,500},{3,2,1000},
      {3,1,500},{3,1,500},{3,5,500},{3,5,500},{3,6,500},{3,6,500},{3,5,1000},
      {3,4,500},{3,4,500},{3,3,500},{3,3,500},{3,2,500},{3,2,500},{3,1,1000}
    };
    size=sizeof(star)/sizeof(struct music);
    return star;
}

song sky(void)
{
    static struct music sky[118];
    int n[117]={
    261,271,312,271,312,332,272,231,231,    262,251,262,312,252,232,242,231,241,312,
    232,311,311,311,272,241,241,272,272,261,271,    312,271,312,332,272,231,231,262,251,262,312,
    252,221,231,242,311,271,271,311,312,321,321,331,311,312,    311,271,261,261,272,252,262,311,321,332,321,332,352,
    322,251,251,312,271,312,332,332,    261,271,312,272,321,321,312,251,252,342,332,322,312,
    332,332,362,352,352,331,321,312,311,    322,311,321,322,352,332,332,362,352,
    331,321,312,311,322,311,321,322,272,262
    };
    size=117;
    init(sky,n);
    return sky;
}

song mate(void)
{
    static struct music mate[98];
    int n[98]={
    251,251,251,251,231,241,252,272,261,261,261,261,241,261,252,252,
    251,251,251,251,271,261,251,241,242,241,241,241,241,231,221,
    212,212,251,251,251,251,231,241,252,272,261,261,261,261,241,261,252,252,
    251,251,251,251,271,261,251,241,242,241,241,241,241,231,221,212,212,
    311,311,311,311,251,261,312,332,321,321,321,321,311,271,
    262,262,271,271,271,271,271,311,322,252,271,271,311,321,311,271,312,312
    };
    size=98;
    init(mate,n);
    return mate;
}


