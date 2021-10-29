#include <stdio.h>

int main(){
    char homework , chore;
    printf("Have you completed your homework? (Y / N):");
    scanf(" %c" , &homework);
    printf("Have you completed your chores?(Y / N):");
    scanf(" %c" , &chore);
    int homework_status = homework == ('Y');
    int chore_status = chore == ('Y');
    int sleep = (homework == chore);
    
    if ((homework == 'N') && (chore == 'N')){
        printf("Finish your homework and chores.\n");
        _Exit;
    }
    else if (sleep == 1){
        printf("You can sleep.\n");
    }
    else if (homework_status == 0)
    {
        printf("Finish your homework.\n");
    }
    else if (chore_status == 0)
    {
        printf("Finish your chores.\n");
}

}