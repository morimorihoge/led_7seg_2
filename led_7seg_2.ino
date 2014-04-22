int IO_DIGIT_1A = 13;
int IO_DIGIT_1B = 12;
int IO_DIGIT_1C = 11;
int IO_DIGIT_1D = 10;
int IO_DIGIT_1E = 9;
int IO_DIGIT_1F = 8;
int IO_DIGIT_1G = 7;
int IO_DIGIT_2A = 6;
int IO_DIGIT_2B = 5;
int IO_DIGIT_2C = 4;
int IO_DIGIT_2D = 3;
int IO_DIGIT_2E = 2;
int IO_DIGIT_2F = 1;
int IO_DIGIT_2G = 0;


int IO_DIGIT_1_PORTS[] = {
  IO_DIGIT_1A,
  IO_DIGIT_1B,
  IO_DIGIT_1C,
  IO_DIGIT_1D,
  IO_DIGIT_1E,
  IO_DIGIT_1F,
  IO_DIGIT_1G,
};

int IO_DIGIT_2_PORTS[] = {
  IO_DIGIT_2A,
  IO_DIGIT_2B,
  IO_DIGIT_2C,
  IO_DIGIT_2D,
  IO_DIGIT_2E,
  IO_DIGIT_2F,
  IO_DIGIT_2G,
};

int LED_ON = LOW;
int LED_OFF = HIGH;

int IO_DIGIT_1_PORT_COUNT = 7;
int IO_DIGIT_2_PORT_COUNT = 7;

void setup() {
  for(int i = 0;i < IO_DIGIT_1_PORT_COUNT;i++){
    pinMode(IO_DIGIT_1_PORTS[i], OUTPUT);
  }
  for(int i = 0;i < IO_DIGIT_2_PORT_COUNT;i++){
    pinMode(IO_DIGIT_2_PORTS[i], OUTPUT);
  }
}

void loop() {
  for(int i = 0;i < IO_DIGIT_1_PORT_COUNT;i++){
    delay(300);
    digitalWrite(IO_DIGIT_1_PORTS[i], LED_ON);
  }
  for(int i = 0;i < IO_DIGIT_2_PORT_COUNT;i++){
    delay(300);
    digitalWrite(IO_DIGIT_2_PORTS[i], LED_ON);
  }

  delay(300);
  for(int i = 0;i < IO_DIGIT_1_PORT_COUNT;i++){
    digitalWrite(IO_DIGIT_1_PORTS[i], LED_OFF);
  }
  for(int i = 0;i < IO_DIGIT_2_PORT_COUNT;i++){
    digitalWrite(IO_DIGIT_2_PORTS[i], LED_OFF);
  }
  
}
