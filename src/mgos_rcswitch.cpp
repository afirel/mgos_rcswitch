#include "RCSwitch.h"

RCSwitch rcswitch = RCSwitch();

extern "C" {
  void rcswitch_configure(int pin, int protocol, int pulse_length, int repeat_transmit) {
    rcswitch.enableTransmit(pin);
    rcswitch.setProtocol(protocol);
    rcswitch.setPulseLength(pulse_length);
    rcswitch.setRepeatTransmit(repeat_transmit);
  }

  void rcswitch_switch_on(const char* group, const char* device) {
    rcswitch.switchOn(group, device);
  }

  void rcswitch_switch_off(const char* group, const char* device) {
    rcswitch.switchOff(group, device);
  }
}
