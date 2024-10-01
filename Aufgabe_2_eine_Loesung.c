#include <stdio.h>

int main(){
  int zahlenWert = 711;
  int Zahlenwert_M=zahlenWert*100*100*100;
    
  for(int i = 1; i <= zahlenWert; i++){
   if(Zahlenwert_M%i!=0) continue;
   for(int x = i; x <= zahlenWert; x++){
     if(Zahlenwert_M%x!=0) continue;
     for(int y = x; y <= zahlenWert; y++){
       if (Zahlenwert_M%y!=0) continue;
       for(int z = y; z <= zahlenWert; z++){
         if(Zahlenwert_M%z==0)
         if(i+x+y+z==zahlenWert && i*x*y*z==Zahlenwert_M) {
           printf("\nDie Preise in ganzen Zahlen sind: ");
		   printf("%d, %d, %d, %d%",i,x,y,z);
           return 0;
         }
        }
      }
    }
  }
}

