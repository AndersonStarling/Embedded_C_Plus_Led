/*
 * LedPort.cpp
 *
 *  Created on: Apr 8, 2024
 *      Author: admin
 */

#include <cstdint>
#include "LedBase.hpp"
#include "LedPort.h"


void Led_Port::toggle(void)
{
	*reinterpret_cast<volatile std::uint32_t *>(port) ^= bit;
}

Led_Port::Led_Port(std::uint32_t port, std::uint32_t bit) : port(port), bit(bit)
{
	/* clear output bits */
	*reinterpret_cast<volatile std::uint32_t *>(port) = 0;
}


Led_Port::~Led_Port() {
    /* clear output bits */
	*reinterpret_cast<volatile std::uint32_t *>(port) = 0;
}

