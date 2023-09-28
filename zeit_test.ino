long startTime;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  startTime = millis();
}

void loop() {
  // Get the current time
  long currentTime = millis();

  // Calculate the elapsed time
  long elapsedTime = currentTime - startTime;

  // Print the elapsed time in milliseconds
  Serial.print("Elapsed Time (ms): ");
  Serial.println(elapsedTime);
    delay(1000);
}