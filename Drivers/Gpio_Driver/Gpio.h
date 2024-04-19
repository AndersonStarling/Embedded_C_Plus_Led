/*
 * Gpio.h
 *
 *  Created on: Apr 15, 2024
 *      Author: admin
 */

#ifndef GPIO_DRIVER_GPIO_H_
#define GPIO_DRIVER_GPIO_H_

class Gpio_Type
{
public:
	Gpio_Type();
	virtual ~Gpio_Type();
	void Set_Pin(std::uint32_t Pin);

private:
    std::uint32_t Gpio_Base_Index;

};

#endif /* GPIO_DRIVER_GPIO_H_ */
