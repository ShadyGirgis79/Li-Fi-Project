
#include "Timer.h"
#include "TM4c123gh6pm.h"


void Timer0A_Init(){
  SYSCTL_RCGCTIMER_R |= 0x01;   
  TIMER0_CTL_R = 0x00000000;    
  TIMER0_CFG_R = 0x00000000;    
  TIMER0_TAMR_R = 0x00000002;  
  TIMER0_TAILR_R = 0x000FFFFF;    
  TIMER0_ICR_R = 0x00000001;    
  TIMER0_IMR_R = 0x00000001;   
  TIMER0_CTL_R = 0x00000003;   
}