/*
 * LedPort.h
 *
 *  Created on: Apr 8, 2024
 *      Author: admin
 */

#ifndef LED_PORT_LEDPORT_H_
#define LED_PORT_LEDPORT_H_

class Led_Port : public Led_Base
{
public:
	Led_Port(std::uint32_t port, std::uint32_t bit);

	virtual ~Led_Port();
	virtual void toggle(void);

private:
	std::uint32_t port;
	std::uint32_t bit;
};

#endif /* LED_PORT_LEDPORT_H_ */
