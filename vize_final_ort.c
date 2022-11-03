#include <stdio.h>
// klavyeden vize ve final notları girilir ve ortalama hesaplanır,
// dersten geçti mi kaldı mı ekrana yazdırılır 

int main() 

{
 
  int vize,final;
            
  printf("vize notunuzu girin: ");
  scanf("%d",&vize);
   
  printf("final notunuzu girin: ");
  scanf("%d",&final); 
  
  double ort = vize*0.4 + final*0.6;
  
   if(ort>=85 && ort<=100)
   {
    printf("%.2lf ortalama ile AA ile gectiniz.",ort);
   }
    
   else if(ort>=75 && ort<=84)
   {
    printf("%.2lf ortalama ile BA ile gectiniz.",ort);
   }    
    
   else if(ort>=67 && ort<=74)
   {
    printf("%.2lf ortalama ile BB ile gectiniz.",ort);
   }
             
   else if(ort>=55  && ort<=66)
   {
    printf("%.2lf ortalama ile CB ile gectiniz.",ort);
   }
             
   else if(ort>=49 && ort<=54)
   {
    printf("%.2lf ortalama ile CC ile gectiniz.",ort);
   }
             
   else
   {
    printf("%.2lf ortalama ile FF ile kaldiniz.",ort);
   }
 
   return 0;

}
