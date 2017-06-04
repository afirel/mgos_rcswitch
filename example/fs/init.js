load('api_timer.js');
load('api_rcswitch.js');

Timer.set(5000, true, function() {
  print("ON");
  RCSwitch.switchOn("11111", "00100");
}, null);

Timer.set(7000, true, function() {
  print("OFF");
  RCSwitch.switchOff("11111", "00100");
}, null);
