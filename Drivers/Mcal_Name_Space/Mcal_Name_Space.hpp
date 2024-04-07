/*
 * Mcal_Name_Space.h
 *
 *  Created on: Apr 4, 2024
 *      Author: admin
 */

#ifndef MCAL_NAME_SPACE_MCAL_NAME_SPACE_HPP_
#define MCAL_NAME_SPACE_MCAL_NAME_SPACE_HPP_

namespace mcal
{
    namespace reg
	{
        /* port */
        extern std::uint32_t porta;
        extern std::uint32_t portb;
        extern std::uint32_t portc;
        extern std::uint32_t portd;
        extern std::uint32_t porte;
        extern std::uint32_t porth;

        /* bit set */
        constexpr std::uint32_t bitset0  = (uint32_t)(0b0000'0000'0000'0000'0000'0000'0000'0001);
        constexpr std::uint32_t bitset1  = (uint32_t)(0b0000'0000'0000'0000'0000'0000'0000'0010);
        constexpr std::uint32_t bitset2  = (uint32_t)(0b0000'0000'0000'0000'0000'0000'0000'0100);
        constexpr std::uint32_t bitset3  = (uint32_t)(0b0000'0000'0000'0000'0000'0000'0000'1000);
        constexpr std::uint32_t bitset4  = (uint32_t)(0b0000'0000'0000'0000'0000'0000'0001'0000);
        constexpr std::uint32_t bitset5  = (uint32_t)(0b0000'0000'0000'0000'0000'0000'0010'0000);
        constexpr std::uint32_t bitset6  = (uint32_t)(0b0000'0000'0000'0000'0000'0000'0100'0000);
        constexpr std::uint32_t bitset7  = (uint32_t)(0b0000'0000'0000'0000'0000'0000'1000'0000);
        constexpr std::uint32_t bitset8  = (uint32_t)(0b0000'0000'0000'0000'0000'0001'0000'0000);
        constexpr std::uint32_t bitset9  = (uint32_t)(0b0000'0000'0000'0000'0000'0010'0000'0000);
        constexpr std::uint32_t bitset10 = (uint32_t)(0b0000'0000'0000'0000'0000'0100'0000'0000);
        constexpr std::uint32_t bitset11 = (uint32_t)(0b0000'0000'0000'0000'0000'1000'0000'0000);
        constexpr std::uint32_t bitset12 = (uint32_t)(0b0000'0000'0000'0000'0001'0000'0000'0000);
        constexpr std::uint32_t bitset13 = (uint32_t)(0b0000'0000'0000'0000'0010'0000'0000'0000);
        constexpr std::uint32_t bitset14 = (uint32_t)(0b0000'0000'0000'0000'0100'0000'0000'0000);
        constexpr std::uint32_t bitset15 = (uint32_t)(0b0000'0000'0000'0000'1000'0000'0000'0000);

	}
}





#endif /* MCAL_NAME_SPACE_MCAL_NAME_SPACE_HPP_ */
