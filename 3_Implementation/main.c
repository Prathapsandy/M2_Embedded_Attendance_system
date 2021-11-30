#include<reg51.h>
#include<string.h>
sbit rs = P2^0;
sbit e = P2^1;
void init ();
void delay(int a)
{
  int i,j;
  for(i=0;i<a;i++)
  for(j=0;j<a;J++);
}
void lcd_cmd(int a)
{
  Pl=a;
  rs=0;
  e=1;
  delay(10);
  e=0;
}
void lcd_dat(int a)
{
   Pl=a;
  rs=0;
  e=1;
  delay(10);
  e=0;
}
void lcd_string(char *str)
{
  while(*str)
  {
    lcd_data(*str);
    delay(100);
    str++;
  }
}
void main()
{
  int i;
  unsigned char a2(15);
  lcd_cmd(0x38);
  lcd_cmd(0x0E);
  lcd_cmd(0x01);
  lcd_cmd(0x80);
  init();
    lcd_string("Welcome");
    lcd_cmd(0xC0);
    lcd_string("ID-please");
    lcd_cmd(0x01);
   while(l)
   {
     for(i=0;i<12;i++)
     {
        while(RI==0);
       a2[i]=SBUF;
       RI=0;
     }
     if(strcmp(a2,"14A456780A90")==0)
     {
       lcd_string("Deepak Welcome");
       lcd_cmd(0x01);
       lcd_string("Have a good day");
       lcd_cmd(0xc0);
       lcd_string("Enrolled");
       delay(200);
     }
     else if(strcmp(a2,"14A456780A91")==0)
     {
       lcd_string("Nitin Welcome");
       lcd_cmd(0x01);
       lcd_string("Have a good day");
       lcd_cmd(0xc0);
       lcd_string("Enrolled");
       delay(200);
     }
     else if(strcmp(a2,"14A456780A92")==0)
     {
        lcd_string("Damo Welcome");
       lcd_cmd(0x01);
       lcd_string("Have a good day");
       lcd_cmd(0xc0);
       lcd_string("Enrolled");
       delay(200);
     }
     else
       lcd-string("Wrong User ID");
       lcd_cmd(0x01);
   }
}
void init()
{ 
  EA=1;
  ES=1;
  TMOD = 0x20;
 
  
 
