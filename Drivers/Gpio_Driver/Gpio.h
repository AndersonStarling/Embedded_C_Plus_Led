/*
 * Gpio.h
 *
 *  Created on: Apr 15, 2024
 *      Author: admin
 */

#ifndef GPIO_DRIVER_GPIO_H_
#define GPIO_DRIVER_GPIO_H_

template<typename address_type,
         typename reg_type,
         const address_type gpio_base_address,
		 const reg_type bit_pos,
		 const reg_type output_mode>
class Gpio_Type
{
public:
	static void Set_Pin_Out()
	{
		Gpio_Set_Pin::reg_or();
	}

	static void Init_Pin_Out()
	{
		Gpio_Set_Mode_Clr::reg_clr();
		Gpio_Set_Mode::reg_or();
		Gpio_Set_Output_Mode::reg_or();
	}

private:
	typedef register_access<std::uint32_t, std::uint32_t, (gpio_base_address + Peripheral::Gpio::GPIOX_ODR_OFFSET), (1 << bit_pos)> Gpio_Set_Pin;
	typedef register_access<std::uint32_t, std::uint32_t, (gpio_base_address + Peripheral::Gpio::GPIOX_MODER_OFFSET), (1 << (bit_pos * Peripheral::Gpio::GPIO_MODER_X_BIT_MASK))> Gpio_Set_Mode;
	typedef register_access<std::uint32_t, std::uint32_t, (gpio_base_address + Peripheral::Gpio::GPIOX_MODER_OFFSET), (Peripheral::Gpio::GPIO_MODER_X_BIT_MASK << (bit_pos * Peripheral::Gpio::GPIO_MODER_X_BIT_MASK))> Gpio_Set_Mode_Clr;
	typedef register_access<std::uint32_t, std::uint32_t, (gpio_base_address + Peripheral::Gpio::GPIOX_OTYPER_OFFSET), (output_mode << bit_pos)> Gpio_Set_Output_Mode;
};

#endif /* GPIO_DRIVER_GPIO_H_ */
