/*
 * Gpio.cpp
 *
 *  Created on: Apr 15, 2024
 *      Author: admin
 */
#include <cstdint>
#include "Peripheral_Access_Layer.h"
#include "Gpio.h"

Gpio_Type::Gpio_Type() {
	// TODO Auto-generated constructor stub

}

Gpio_Type::~Gpio_Type() {
	// TODO Auto-generated destructor stub
}

void Gpio_Type::Set_Pin(std::uint32_t Pin)
{
	register_access<std::uint32_t, std::uint32_t, Peripheral::Gpio::GPIO_ARRAY[Gpio_Base_Index] + Peripheral::Gpio::GPIOX_ODR_OFFSET, (1 << Pin)>::reg_or();
}

