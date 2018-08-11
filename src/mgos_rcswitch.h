void rcswitch_configure(int pin, int protocol, int pulse_length, int repeat_transmit);
void rcswitch_switch_on(const char* group, const char* device);
void rcswitch_switch_off(const char* group, const char* device);
void rcswitch_send(unsigned long code, unsigned int length);
void rcswitch_sendWord(const char* sCodeWord);