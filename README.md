This is a face detection/tracking demo using the Kendryte K210 chip, with the Standalone SDK. Excellent performance and low power consumption (about 150mA when running demo).

The demo uses the Maix M1 Dock, with a OV2640 camera and LCD. You can specify a OV5640 cam in the lib/board_config.h

The intial code (modified) from here:
https://github.com/kendryte/kendryte-standalone-demo/tree/develop/face_detect

Built with Visual Studio Code (platform IO extension).

In order to get this working, I had to copy the lib folder from:
https://github.com/kendryte/kendryte-standalone-sdk

into the (windows) User\platformio\packages\framework-kendryte-standalone-sdk\lib


Usage:

```c++
#include "imglib.h"

int main(void)
{
    cpu_ini();
    cam_ini();
    model_load();
    
    while (1)
    {
        run_model();

    }
}
```
