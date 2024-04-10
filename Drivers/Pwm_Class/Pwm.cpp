/*
 * Pwm.cpp
 *
 *  Created on: Apr 10, 2024
 *      Author: admin
 */

#include <cstdint>
#include "Pwm.h"


void Pwm::enable(void)
{

}

uint32_t Pwm::getDutyCycle(void)
{
    return this->duty_cycle;
}

void Pwm::setDutyCycle(std::uint32_t duty_cycle)
{
    this->duty_cycle = duty_cycle;
}

Pwm::Pwm()
{
	this->setDutyCycle(50);
	this->enable();
}

Pwm::~Pwm()
{
	this->setDutyCycle(0);
    this->enable();
}

