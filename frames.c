#include <stdio.h>
#include <string.h>
char frames[1024];
int main()
{
    int n, len, i;
    char buffer[256], length[10];
    printf("Enter number of frames tobe sent\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the frame :");
        scanf("%s", buffer);
        printf("The length of the buffer is %d\n", strlen(buffer));
        len = strlen(buffer);
        sprintf(length,"%d",len);
        strcat(frames, length);
        strcat(frames, buffer);
    }
    printf("The final message to be sent is: ");
    for (int i = 0; frames[i] != '\0'; i++)
    {
        printf("%c", frames[i]);
    }
    printf("\n");
    reciever();
}
void reciever()
{
    int framelen, i = 0, lpvar;
    char leninchar;
    while (frames[i] != 0)
    {
        leninchar = frames[i];
        framelen = (int)leninchar - (int)'0';
        printf("\nRecieved frames are:\n");
        i++;
        lpvar = i + framelen;

        while (i < lpvar)
        {
            printf("%c ", frames[i++]);
        }
        printf("\n");
    }
}