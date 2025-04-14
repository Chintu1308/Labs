#include<stdio.h>
int main(){
    int p, bs, nob, totalme;
    printf("Total memory: ");
    scanf("%d", &totalme);
    printf("Enter no.of processes: ");
    scanf("%d", &p);
    printf("Enter size of each block: ");
    scanf("%d", &bs);
    nob = totalme / bs;
    int process[p];
    printf("Enter memory required for each process: ");
    for(int i = 0; i < p; i++){
        scanf("%d", &process[i]);
    }
    int tif = 0, tef = 0, cnt = 0;
    tef = totalme - (bs * nob);
    printf("No. of Blocks available in memory %d\n", nob);
    printf("PROCESS\tMEMORY REQUIRED\tALLOCATED\tINTERNAL FRAGMENTATION\n");
    int i;
    for(i = 0; i < p && cnt < nob; i++){
        if(process[i] <= bs){
            printf("%d\t%d\t\tYES\t\t%d", i + 1, process[i], bs - process[i]);
            tif += bs - process[i];
            cnt++;
        } else {
            printf("%d\t%d\t\tNO", i + 1, process[i]);
        }
        printf("\n");
    }
    if(i < p){
        printf("Memory full, remaining processes cannot be accomodated\n");
    }
    printf("Total internal fragmentation: %d\n", tif);
    printf("Total external fragmentation: %d\n", tef);
    return 0;
}