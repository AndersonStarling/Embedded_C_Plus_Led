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
		/* Gpio base address */
	    constexpr std::uint32_t Gpio_A_Base = 0x40020000;
	    constexpr std::uint32_t Gpio_B_Base = 0x40020400;
	    constexpr std::uint32_t Gpio_C_Base = 0x40020800;
	    constexpr std::uint32_t Gpio_D_Base = 0x40020C00;
	    constexpr std::uint32_t Gpio_E_Base = 0x40021000;
	    constexpr std::uint32_t Gpio_H_Base = 0x40021C00;

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

		/* Gpio bit mask */
		constexpr std::uint32_t GPIO_MODER_X_BIT_MASK = 0x2;
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

	    static void reg_clr(void)
	    {
	    	*reinterpret_cast<volatile address_type*>(address) &= ~value;
	    }
};





#endif /* PERIPHERAL_ACCESS_LAYER_PERIPHERAL_ACCESS_LAYER_H_ */
