# mgos_rcswitch
Library wrapper for [rcswitch](https://github.com/sui77/rc-switch) for [Mongoose OS](https://mongoose-os.com/)

The wrapper allows to use the rcswitch library from Javascript. It exposes functions to control the state of wireless power sockets with DIP switches.

Note there's support for transmission only.

## Example

mos.yml:
```yml
name: mgos_rcswitch
arch: esp8266
version: 1.0
skeleton_version: 2017-05-18
sources:
  - src
  - ${mjs_path}/mjs.c
  - ${arduino_drivers_path}/Arduino
  - ${mgos_rcswitch_path}/src
filesystem:
  - fs
  - ${mjs_path}/mjs/lib/api_*.js
  - ${mongoose_os_path}/fw/mjs_api/api_*.js
  - ${mongoose_os_path}/fw/platforms/${arch}/mjs_api/api_*.js
  - ${mgos_rcswitch_path}/fs/api_rcswitch.js
modules:
  - origin: https://github.com/cesanta/mjs
  - origin: https://github.com/cesanta/arduino-drivers
  - origin: https://github.com/afirel/mgos_rcswitch
build_vars:
  MGOS_ENABLE_ARDUINO_API: 1
```

main.c:
```C
//...
#include "mgos_rcswitch.h"
//...
```

Javascript:
```javascript
load('api_rcswitch.js');

// Optionally, configure the switch (note the values below are defaults):
RCSwitch.configure(
  5 /* pin */,
  1 /* protocol */,
  300 /* pulse length */,
  15 /* repeat transmit */);
  
// Power on/off devices by their DIP id (group, device)
RCSwitch.switchOn("11111", "00100");
RCSwitch.switchOff("11111", "00100");
```

