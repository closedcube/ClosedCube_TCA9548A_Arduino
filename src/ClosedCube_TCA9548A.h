/*

Arduino library for Arduino library for Texas Instruments TCA9548A 8-Channel I2C Switch/Multiplexer
version 2020.1.9

---

Copyright (c) 2019-2020, ClosedCube
All rights reserved.

Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, 
   this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, 
   this list of conditions and the following disclaimer in the documentation and/or 
   other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors 
   may be used to endorse or promote products derived from this software
   without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; 
OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef CLOSEDCUBE_TCA9548A_H
#define CLOSEDCUBE_TCA9548A_H

#include <Arduino.h>

#define TCA9548A_MAX_CHANNELS 8

namespace ClosedCube 
{

    namespace Wired 
    {

        class TCA9548A 
        {

            public:
                TCA9548A();
                TCA9548A(uint8_t address);

                void address(uint8_t address);

                uint8_t getChannel();

                uint8_t selectChannel(uint8_t channel);
                uint8_t nextChannel();

            private:
                uint8_t _address;
                uint8_t _currentChannel;

        };
        
    }
}

#endif //CLOSEDCUBE_TCA9548A_H
