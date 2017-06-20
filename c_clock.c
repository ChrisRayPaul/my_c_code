#include <stdio.h>
#include <stdbool.h> 
#include <Windows.h>  
  
void Alarm() 
{    int i; 
     for( i = 0; i < 10; i++)     
     {              
          printf("%s","\a");     
     } 
} 
int main() 
{     
    while(true)     
    {               
        SYSTEMTIME stLocal;        
        GetLocalTime(&stLocal);                  
		       
        if(11 == stLocal.wHour)         
        {             
            Alarm();            
            break;         

        }         
		Alarm();                  
        Sleep(1000);    
     }      
   return 1; 
}
