//#include <16F877A.h>
//#device adc=8

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES HS                       //High speed Osc (> 4mhz for PCM/PCH) (>10mhz for PCD)
#FUSES NOPUT                    //No Power Up Timer
#FUSES NOPROTECT                //Code not protected from reading
#FUSES NODEBUG                  //No Debug mode for ICD
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOCPD                    //No EE protection
#FUSES NOWRT                    //Program memory not write protected
//#FUSES RESERVED                 //Used to set the reserved FUSE bits

#use delay(clock=20000000)

// input
//Khai bao cac chan dk
#bit Close_Slide  = 0x05.0
#bit Open_Slide   = 0x05.1
#bit Close        = 0x05.2
#bit Open         = 0x05.3
#bit Semi_Open    = 0x05.4
#bit Stop         = 0x05.5

#bit SW_Close2       = 0x07.0
#bit SW_Close1       = 0x07.1
#bit SW_Mid          = 0x07.2
#bit SW_Open1        = 0x07.3
#bit SW_Open2        = 0x07.4
#bit SW_Emergency    = 0x07.5
#bit SW_Close_Slide       = 0x07.6
#bit SW_Open_Slide       = 0x07.7

#bit D0 = 0x08.0
#bit D1 = 0x08.1
#bit D2 = 0x08.2
#bit D3 = 0x08.3
#bit D4 = 0x08.4
#bit D5 = 0x08.5
#bit D6 = 0x08.6
#bit D7 = 0x08.7
#byte portD = 0x08

#bit E0  = 0x09.0 //chan e0
#bit E1  = 0x09.1 //chan e1
#bit E2  = 0x09.2 //chan e2

#byte trisa=0x85
#byte trisb=0x86
#byte trisc=0x87
#byte trisd=0x88
#byte trise=0x89

void xuat_E0()
{
   E0 = 0;
   delay_ms(5);
   E0 = 1;
}
void xuat_E1()
{
   E1 = 0;
   delay_ms(5);
   E1 = 1;
}
