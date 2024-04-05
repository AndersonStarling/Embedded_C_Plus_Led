/*
 * LedBase.h
 *
 *  Created on: Apr 3, 2024
 *      Author: admin
 */

#ifndef LED_BASE_LEDBASE_HPP_
#define LED_BASE_LEDBASE_HPP_

class Led_Base {
public:
	Led_Base(std::uint32_t port, const std::uint32_t bit_mask);
	virtual ~Led_Base();
	void toggle(void);

private:
    std::uint32_t port;
    const std::uint32_t bitValue;
};

#endif /* LED_BASE_LEDBASE_HPP_ */
