/*
 * Pwm.h
 *
 *  Created on: Apr 10, 2024
 *      Author: admin
 */

#ifndef PWM_CLASS_PWM_H_
#define PWM_CLASS_PWM_H_


class Pwm {
private:
	std::uint32_t duty_cycle;
public:
	Pwm();
	virtual ~Pwm();
	uint32_t getDutyCycle(void);
	void setDutyCycle(std::uint32_t duty_cycle);
	void enable(void);
};

#endif /* PWM_CLASS_PWM_H_ */
