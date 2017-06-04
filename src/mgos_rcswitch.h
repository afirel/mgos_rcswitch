void rcswitch_configure(int pin, int protocol, int pulse_length, int repeat_transmit);
void rcswitch_send(int value);
void rcswitch_switch_on(const char* group, const char* device);
void rcswitch_switch_off(const char* group, const char* device);
