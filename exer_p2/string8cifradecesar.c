// #include <stdio.h>

// int main()
// {
//     int n,i;
//     char str[1000];
//     scanf("%d",&n); //ele lê o enter e ele fica no buffer(estudar)//
//     getchar();
//     for(i=0;i<n;i++)
//     {
//         scanf("%[^\n]",str);
//         for(int j=0;str[j]!='\0';j++)
//         {
//             if((str[j]<78 && str[j]>=65)||(str[j]<110 && str[j]>=97))
//             {
//                str[j]=str[j]+13; 
//                printf("%c",str[j]);
//             }
//             else if((str[j]>=78&&str[j]<=90) || (str[j]>=110 && str[j]<=122))
//             {
//                 str[j]=str[j]-13;
//                 printf("%c",str[j]);
//             }
//             else
//             {
//                 printf("%c",str[j]);
//             }
            
//         }
//     }


#include <stdio.h>

int main()
{
    int n;
    scanf("%d ", &n);

    for(int i=0 ; i<n ; i++)
    {
        char str[1002] = {};

        fgets(str,1002,stdin);

        for(int j= 0 ; str[j]!='\0' ; j++)
        {
            if(str[j]>='A' && str[j]<='M')
            {
                str[j]=str[j]+13;
            }
            else if(str[j]>'M' && str[j]<='Z')
            {
                str[j]=str[j]-13;
            }
        printf("%c", str[j]);
        }
    }

    return 0;
}







//     return 0;
// }