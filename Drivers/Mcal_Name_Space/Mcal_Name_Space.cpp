/*
 * Mcal_Name_Space.cpp
 *
 *  Created on: Apr 4, 2024
 *      Author: admin
 */
#include <cstdint>
#include "stm32f4xx.h"
#include "Mcal_Name_Space.hpp"

namespace mcal
{
    namespace reg
	{
        /* port */
        std::uint32_t porta = (const uint32_t)&GPIOA->ODR;
        std::uint32_t portb = (const uint32_t)&GPIOB->ODR;
        std::uint32_t portc = (const uint32_t)&GPIOC->ODR;
        std::uint32_t portd = (const uint32_t)&GPIOD->ODR;
        std::uint32_t porte = (const uint32_t)&GPIOE->ODR;
        std::uint32_t porth = (const uint32_t)&GPIOH->ODR;

	}
}

