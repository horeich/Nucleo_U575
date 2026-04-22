// Copyright 2023 Andreas Reichle (HOREICH UG)

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Nucleo.hpp"
#include "tmp117.hpp"

static mbed::DigitalIn unused[] = {
	// PA_5, PA_6, PA_7, PA_10, PB_0, PB_1, PB_4, PB_5, PB_10, PB_11, PB_12, PB_13, PB_14,
	// PC_13, PC_12, PC_5, PC_4, PC_1, PC_0, PC_2, PH_0, PH_1
	// TODO
};

using namespace std::chrono_literals;

int main()
{
	// for (size_t ix = 0; ix < sizeof(unused) / sizeof(unused[0]); ix++)
	// {
	// 	unused[ix].mode(PullDown);
	// }
	Nucleo::Init();

	 printf("TMP117 test start\n");

    // Adjust pins to your board wiring
    TMP117 sensor(I2C_SDA, I2C_SCL, 400000);

    while (true)
    {
        float temp = sensor.read_temperature();
        printf("Temperature: %.2f C\n", temp);

        ThisThread::sleep_for(1s);
    }

	return 1;
}