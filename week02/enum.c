
#include <stdio.h>

enum Status{LOW = 15, MEDIUM = 50, HIGH = 100};
enum Week{Mon = 1, Tue, Wed, Thu, Fri, Sat, Sun};

int main(){

    enum Status result = LOW;
    enum Week day = Sun;

    switch(day){
        
        case Mon:
            printf("Monday \n");
            break;
        case Tue:
            printf("Tuesday \n");
            break;
        case Wed:
            printf("Wednesday \n");
            break;
        case Thu:
            printf("Thursday \n");
            break;
        case Fri:
            printf("Friday \n");
            break;
        case Sat:
            printf("Saturday \n");
            break;
        case Sun:
            printf("Sunday \n");
            break;
        default:
            break;
    }

    switch(result){

        case LOW:
            printf("Battery level: %d %%", result);
            break;
        case MEDIUM:
            printf("Battery level: %d %%", result);
            break;
        case HIGH:
            printf("Battery level: %d %%", result);
            break;
        default:
            break;
    }
   



    return 0;
}