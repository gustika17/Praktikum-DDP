#include <stdio.h>
using namespace std;

main(){
     int x;
     int y;
     
     scanf("%d",&x);
     scanf("%d",&y);
     if(x>y){
          printf("%d lebih besar daripada %d\n\n",x,y);
     }else if(x==y){
          printf("%d sama besar dengan %d\n\n",x,y);
     }else{
          printf("%d lebih kecil daripada %d\n\n",x,y);
     }

     return 0;
}

