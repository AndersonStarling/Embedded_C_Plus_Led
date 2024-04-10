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
	virtual ~Led_Base();
	virtual void toggle(void) = 0;

protected:
	bool led_on;
    Led_Base();

private:
	Led_Base(const Led_Base&) = delete;
	const Led_Base& operator=(const Led_Base&) = delete;

};

#endif /* LED_BASE_LEDBASE_HPP_ */
