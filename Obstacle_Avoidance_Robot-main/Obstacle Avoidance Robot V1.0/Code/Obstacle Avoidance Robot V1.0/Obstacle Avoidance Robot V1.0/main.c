

#include "APP/app.h"


int main(void)
{
	
  app_Init();
 start_stage();
 while(1){
 
  CAR_set_rotation_dir();
  //LCD_GoTo(1,4);
  //LCD_Write_String("end");
  /*
    uint8_t mode=17;
    keypad_get_value(&mode);
    //
    if (mode==0) 
	{
	 LCD_GoTo(1,4);
	 LCD_Write_String("state1");	
 }
     if (mode==1)
     {
	     LCD_GoTo(1,4);
	     LCD_Write_String("state2");
     }
	     if (mode==2)
	     {
		     LCD_GoTo(1,4);
		     LCD_Write_String("state3");
	     }
		     if (mode==3)
		     {
			     LCD_GoTo(1,4);
			     LCD_Write_String("state4");
		     }
			 */
}
}
  

  
  
  
  

