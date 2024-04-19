/*
 * Peripheral_Access_Layer.h
 *
 *  Created on: Apr 15, 2024
 *      Author: admin
 */

#ifndef PERIPHERAL_ACCESS_LAYER_PERIPHERAL_ACCESS_LAYER_H_
#define PERIPHERAL_ACCESS_LAYER_PERIPHERAL_ACCESS_LAYER_H_

namespace Peripheral
{
    namespace Gpio
	{
        extern std::uint32_t GPIO_ARRAY[];

        /* Gpio base index */
        constexpr std::uint32_t GPIOA_INDEX = 0;
        constexpr std::uint32_t GPIOB_INDEX = 1;
        constexpr std::uint32_t GPIOC_INDEX = 2;
        constexpr std::uint32_t GPIOD_INDEX = 3;
        constexpr std::uint32_t GPIOE_INDEX = 4;
        constexpr std::uint32_t GPIOH_INDEX = 5;

		/* Gpio base address */
	    constexpr std::uint32_t GPIOA_BASE = 0x40020000;
	    constexpr std::uint32_t GPIOB_BASE = 0x40020400;
	    constexpr std::uint32_t GPIOC_BASE = 0x40020800;
	    constexpr std::uint32_t GPIOD_BASE = 0x40020C00;
	    constexpr std::uint32_t GPIOE_BASE = 0x40021000;
	    constexpr std::uint32_t GPIOH_BASE = 0x40021C00;

        /* Gpio register offset from base address */
		constexpr std::uint32_t GPIOX_MODER_OFFSET   = 0x00;
		constexpr std::uint32_t GPIOX_OTYPER_OFFSET  = 0x04;
		constexpr std::uint32_t GPIOX_OSPEEDR_OFFSET = 0x08;
		constexpr std::uint32_t GPIOX_PUPDR_OFFSET   = 0x00;
		constexpr std::uint32_t GPIOX_IDR_OFFSET     = 0x10;
		constexpr std::uint32_t GPIOX_ODR_OFFSET     = 0x14;
		constexpr std::uint32_t GPIOX_BSRR_OFFSET    = 0x18;
		constexpr std::uint32_t GPIOX_LCKR_OFFSET    = 0x1C;
		constexpr std::uint32_t GPIOX_AFRL_OFFSET    = 0x20;
		constexpr std::uint32_t GPIOX_AFRH_OFFSET    = 0x24;
	}
};

template<typename address_type,
         typename reg_type,
         const address_type address,
		 const reg_type value>
class register_access
{
    public:
	    static void reg_or(void)
	    {
	        *reinterpret_cast<volatile address_type*>(address) |= value;
	    }

	    static void reg_and(void)
	    {
	        *reinterpret_cast<volatile address_type*>(address) &= value;
	    }
};





#endif /* PERIPHERAL_ACCESS_LAYER_PERIPHERAL_ACCESS_LAYER_H_ */
