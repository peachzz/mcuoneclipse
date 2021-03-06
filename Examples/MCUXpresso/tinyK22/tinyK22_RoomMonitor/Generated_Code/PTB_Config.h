/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PTB_Config.h
**     Project     : tinyK22_SGP30
**     Processor   : MK22FN512VLH12
**     Component   : Init_GPIO
**     Version     : Component 01.006, Driver 01.06, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-10-04, 18:14, # CodeGen: 49
**     Abstract    :
**          This file implements the GPIO (PTB) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : PTB
**          Device                                         : PTB
**          Settings                                       : 
**            Clock gate                                   : <Automatic>
**            Pin 0                                        : Do not initialize
**            Pin 1                                        : Do not initialize
**            Pin 2                                        : Do not initialize
**            Pin 3                                        : Do not initialize
**            Pin 16                                       : Do not initialize
**            Pin 17                                       : Do not initialize
**            Pin 18                                       : Do not initialize
**            Pin 19                                       : Initialize
**              Pin direction                              : Input
**              Output value                               : 0
**              Open drain                                 : <Automatic>
**              Pull resistor                              : Enabled
**              Pull selection                             : Pull Up
**              Slew rate                                  : <Automatic>
**              Drive strength                             : <Automatic>
**              Interrupt/DMA request                      : <Automatic>
**              Passive filter                             : <Automatic>
**              Lock                                       : <Automatic>
**          Pin selection/routing                          : 
**            Pin 0                                        : Disabled
**            Pin 1                                        : Disabled
**            Pin 2                                        : Disabled
**            Pin 3                                        : Disabled
**            Pin 16                                       : Disabled
**            Pin 17                                       : Disabled
**            Pin 18                                       : Disabled
**            Pin 19                                       : Disabled
**          Interrupts                                     : 
**            Port interrupt                               : Enabled
**              Interrupt                                  : INT_PORTB
**              Interrupt request                          : <Automatic>
**              Interrupt priority                         : <Automatic>
**              ISR Name                                   : 
**          Initialization                                 : 
**            Call Init method                             : yes
**            Utilize after reset values                   : default
**     Contents    :
**         Init - void PTB_Init(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file PTB_Config.h                                                  
** @version 01.06
** @brief
**          This file implements the GPIO (PTB) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup PTB_Config_module PTB_Config module documentation
**  @{
*/         

#ifndef PTB_Config_H_
#define PTB_Config_H_

/* MODULE PTB. */

/* GPIOB_PSOR: PTSO&=~0x00080000 */
#define GPIOB_PSOR_VALUE     0x00U
#define GPIOB_PSOR_MASK      0x00080000U
/* GPIOB_PCOR: PTCO|=0x00080000 */
#define GPIOB_PCOR_VALUE     0x00080000U
#define GPIOB_PCOR_MASK      0x00080000U
/* GPIOB_PDDR: PDD&=~0x00080000 */
#define GPIOB_PDDR_VALUE     0x00U
#define GPIOB_PDDR_MASK      0x00080000U



#define PTB_AUTOINIT

/* END PTB. */
#endif /* #ifndef __PTB_Config_H_ */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
