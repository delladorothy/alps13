int main(void){
    int hour, minute;

    scanf("%d", &hour);
    scanf("%d", &minute);

    if(minute < 30){
        if(hour==0){
            hour = 24;
        }
        hour--;
        minute+=30;
    }
    else{
        minute-=30;
    }

    printf("%d %d", hour, minute);
    return 0;
}