/*
 * LedPwm.h
 *
 *  Created on: Apr 10, 2024
 *      Author: admin
 */

#ifndef LED_PWM_LEDPWM_H_
#define LED_PWM_LEDPWM_H_

class Led_Pwm : public Led_Base
{
public:
	Led_Pwm();
	virtual ~Led_Pwm();
    void toggle();

private:
	Pwm my_pwm;
};

#endif /* LED_PWM_LEDPWM_H_ */
