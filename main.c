// @File		MAIN.C		 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		BRAZIL
// @Date		17/03/24
//
//
// Copyright (C) 2024 JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
#include "utils.h"
#include "wire.h"
#include "mcp23016.h"

void main(void)
{
    __delay_ms(500);   
    
    Pic18f2520_init();
    
    Wire_Init();            
    
    // PINS CONFIGURED AS OUTPUT
    MCP23016_write(MCP23016_IODIR0, 0x00);
    MCP23016_write(MCP23016_IODIR1, 0x00);
    
    // DATA
    MCP23016_write(MCP23016_GP0, 0x07);
    MCP23016_write(MCP23016_GP0, 0xFF);

    while(1);
    
    return;
}
