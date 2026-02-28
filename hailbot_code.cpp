// --- SETTINGS ---
// Change this to increase/decrease run distance (30000 = 30 seconds)
unsigned long motorRunTime = 30000; 
// ----------------

int val = 0;
int previous_value = 0;
bool run_if = false; // CHANGED: Start as false so it doesn't run immediately

void setup() {
  Serial.begin(9600);

  pinMode(4, INPUT);  // Rain sensor
  pinMode(6, OUTPUT); // Motor A
  pinMode(7, OUTPUT); // Motor B
  pinMode(3, OUTPUT); // LED
  pinMode(5, OUTPUT); // BUZZER

  // --- NEW LOGIC TO STOP STARTUP MOVEMENT ---
  // Read the sensor right now so we know the current weather
  val = digitalRead(4);
  
  // "Memorize" this state so we don't think it's a new change
  previous_value = val;
  
  // Force the flag to false so loop() doesn't trigger immediately
  run_if = false; 
  // ------------------------------------------
}

void loop() {
  val = digitalRead(4); 
  Serial.println(val); 
  delay(100); 

  // Check if weather changed
  if (val != previous_value) {
    run_if = true; // ONLY set to true if there is a CHANGE
  }

  if (run_if == true) {
    
    // --- NO RAIN DETECTED (Value 1) ---
    if (val == 1) {
      Serial.println("No Rain - Opening/Moving A");
      digitalWrite(7, HIGH);
      digitalWrite(6, LOW);
      
      delay(motorRunTime); // Uses your time setting

      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      run_if = false;
    }
    
    // --- RAIN DETECTED (Value 0) ---
    else if (val == 0) {
      Serial.println("Rain - Closing/Moving B");
      digitalWrite(7, LOW); 
      digitalWrite(6, HIGH);
      digitalWrite(3, HIGH); // LED
      digitalWrite(5, HIGH); // Buzzer

      delay(motorRunTime); // Uses your time setting

      digitalWrite(6, LOW); 
      digitalWrite(3, LOW); 
      digitalWrite(5, LOW);
      run_if = false;
    }
  }
  
  previous_value = val;
}