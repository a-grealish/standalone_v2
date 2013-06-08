#ifndef __payment_control_h
#define __payment_control_h

#include "stm32f0xx.h"
#include <RTL.h>
#include <stdio.h>

//Task Parameters
extern OS_TID payment_control_t;
#define PAYMENT_CONTROL_STK_SIZE 32
extern U64 payment_control_stk[PAYMENT_CONTROL_STK_SIZE];

//Public Definitions

//Public Functions
__task void payment_control (void);

//Public Variables

#endif