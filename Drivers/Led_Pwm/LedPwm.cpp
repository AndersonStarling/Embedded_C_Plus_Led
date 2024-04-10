/*
 * LedPwm.cpp
 *
 *  Created on: Apr 10, 2024
 *      Author: admin
 */
#include <cstdint>
#include "LedBase.hpp"
#include "Pwm.h"
#include "LedPwm.h"

Led_Pwm::Led_Pwm()
{
	my_pwm.setDutyCycle(0);
}

Led_Pwm::~Led_Pwm()
{
	my_pwm.setDutyCycle(0);
}

void Led_Pwm::toggle(void)
{
    my_pwm.setDutyCycle(Led_Base::led_on ? 0 : 100);
}

