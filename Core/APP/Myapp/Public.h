#ifndef __PUBLIC_H_
#define __PUBLIC_H_

/* Public define-------------------------------------------------------------*/

//����ö������ -> TRUE/FALSEλ
typedef enum 
{
  FALSE = 0U, 
  TRUE = !FALSE
} FlagStatus_t;

typedef enum 
{
  FAILED = 0U, 
  PASSED = !FAILED
} TestStatus_t;

typedef struct
{
	void (*pwm_set)(uint32_t,TIM_TypeDef* ,void(*Callback)(uint32_t,TIM_TypeDef* ));  
  void (*HAL_delay_us)(__IO uint32_t delay);
}Public_t;


/* extern variables-----------------------------------------------------------*/
extern Public_t public;
extern void set_freq(uint32_t freq_MHz ,TIM_TypeDef* TIMx);
extern void set_dutycircle(uint32_t dutycycle,TIM_TypeDef* TIMx);

//����ṹ������
/*******Ԥ����궨��*******/
//#define Monitor_Run_Code   //�������м���� 
//#define Hardware_TEST      //Ӳ������

#endif
/********************************************************
  End Of File
********************************************************/
