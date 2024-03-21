// @File		MCP23008.H		 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		BRAZIL
// @Date		20/03/24
//
//
// Copyright (C) 2024 JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
#ifndef MCP23016_H
#define MCP23016_H

#define MCP23016_SLA_W 0x40
#define MCP23016_SLA_R 0x41

#define MCP23016_GP0 0x00
#define MCP23016_GP1 0x01
#define MCP23016_OLAT0 0x02
#define MCP23016_OLAT1 0x03
#define MCP23016_IPOL0 0x04
#define MCP23016_IPOL1 0x05
#define MCP23016_IODIR0 0x06
#define MCP23016_IODIR1 0x07
#define MCP23016_INTCAP0 0x08
#define MCP23016_INTCAP1 0x09
#define MCP23016_IOCON0 0x0A
#define MCP23016_IOCON1 0x0B

void MCP23016_write(unsigned char address, unsigned char data)
{
    Wire_Start();
    Wire_Write(MCP23016_SLA_W);
    Wire_Write(address);
    Wire_Write(data);
    Wire_Stop();
}


#endif
