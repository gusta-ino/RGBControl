int led = 4;
int brilho = 0;
int fade = 5;

void setup() {
 pinMode(led,OUTPUT);
 Serial.begin(115200);
 
}

void loop() {
 analogWrite(led, brilho);

 brilho = brilho + fade;
 if(fade == 255)
 {
  fade = -fade;
  Serial.println("passou");
  }
  delay(100);
  Serial.println(brilho);
}
