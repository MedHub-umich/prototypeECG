// ADC
int adcin    = A5;
int adcvalue = 0;
float mv_per_lsb = 3600.0F/1024.0F; // 10-bit ADC with 3.6V input range

// GPIO - for timing

void setup() {
  Serial.begin(115200);
}

void loop() {
  // set timing gpio pin high
  
  
  // Get a fresh ADC value
  adcvalue = analogRead(adcin);

  // Display the results
  //Serial.print(adcvalue);
  //Serial.print(" [");
  Serial.print((float)adcvalue * mv_per_lsb);
  Serial.print('\n');

  delay(2);
}
