let RCSwitch = {
  configure: ffi('void rcswitch_configure(int, int, int, int)'),
  switchOn: ffi('void rcswitch_switch_on(char*, char*)'),
  switchOff: ffi('void rcswitch_switch_off(char*, char*)'),

  PIN: 5,
  PROTOCOL: 1,
  PULSE_LENGTH: 300,
  REPEAT_TRANSMIT: 15,
};

RCSwitch.configure(
  RCSwitch.PIN,
  RCSwitch.PROTOCOL,
  RCSwitch.PULSE_LENGTH,
  RCSwitch.REPEAT_TRANSMIT
);
