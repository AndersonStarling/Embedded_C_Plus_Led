#include <cstdint>
#include "stm32f4xx.h"
#include "Mcal_Name_Space.hpp"
#include "LedBase.hpp"


//Led_Base::Led_Base(std::uint32_t port, std::uint32_t bit_mask) : port(port), bitValue(bit_mask)
//{
//    /* clear output bits */
//    *reinterpret_cast<volatile std::uint32_t *>(port) = 0;
//}
//
//Led_Base::~Led_Base()
//{
//    /* clear output bits */
//	*reinterpret_cast<volatile std::uint32_t *>(port) = 0;
//}
//
//void Led_Base::toggle(void)
//{
//	*reinterpret_cast<volatile std::uint32_t *>(port) ^= bitValue;
//}
