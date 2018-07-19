//Code meant for Arduino Mega that will be lauching the Firework Display

const byte interruptPin = 2; // This pin will interrupt the code in case of an emegency 
volatile byte state = LOW;

const int ReceivingPin = 3; // This pin will turn on the relays with a HIGH signal 
        
int SignalState = 0; // Set SignalState to zero

//LED indicators
const int Interrupt = 4; //Once the interrupt is initiated this will blink on and off endlessly
const int LED = 5;

// For all the relays to be hooked up to the corresponding pins on the mega
//************************************Module 1************************************
const int a = 22;
const int b = 23;
const int c = 24;
const int d = 25;
const int e = 26;
const int f = 27;
const int g = 28;
const int h = 29;
//************************************Module 2************************************
const int i = 30;
const int j = 31;
const int k = 32;
const int l = 33;
const int m = 34;
const int n = 35;
const int o = 36;
const int p = 37;
//************************************Module 3************************************
const int q = 38;
const int r = 39;
const int s = 40;
const int t = 41;
const int u = 42;
const int v = 43;
const int w = 44;
const int x = 45;
//************************************Module 4************************************
const int y = 46;
const int z = 47;
const int A = 48;
const int B = 49;
const int C = 50;
const int D = 51;
const int E = 52;
const int F = 53;
//************************************Module 5************************************
const int G = 6;
const int H = 7;
const int I = 8;
const int J = 9;
const int K = 10;
const int L = 11;
const int M = 12;
const int N = 13;
//************************************Module 6************************************
const int O = 14;
const int P = 15;
const int Q = 16;
const int R = 17;
const int S = 18;
const int T = 19;
const int U = 20;
const int V = 21;

const int LOD = 7000; // Long delay constant 
const int SHD = 500; // Short delay constant for after every firework shot off
const int LSHD = 200; // Short delay constant for turning all the relays low after the fire DON'T CHANGE

void setup() {
  
  pinMode(ReceivingPin, INPUT);// Turns Receiving pin=3 into an input 
  pinMode(LED, OUTPUT);
//************************************Module 1************************************
  pinMode(a, OUTPUT); // Turns all the pins into an output signal 
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
//************************************Module 2************************************
  pinMode(i, OUTPUT);
  pinMode(j, OUTPUT);
  pinMode(k, OUTPUT);
  pinMode(l, OUTPUT);
  pinMode(m, OUTPUT);
  pinMode(n, OUTPUT);
  pinMode(o, OUTPUT);
  pinMode(p, OUTPUT);
//************************************Module 3************************************  
  pinMode(q, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(s, OUTPUT);
  pinMode(t, OUTPUT);
  pinMode(u, OUTPUT);
  pinMode(v, OUTPUT);
  pinMode(w, OUTPUT);
  pinMode(x, OUTPUT);
//************************************Module 4************************************  
  pinMode(y, OUTPUT);
  pinMode(z, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
//************************************Module 5************************************  
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(I, OUTPUT);
  pinMode(J, OUTPUT);
  pinMode(K, OUTPUT);
  pinMode(L, OUTPUT);
  pinMode(M, OUTPUT);
  pinMode(N, OUTPUT);
//************************************Module 6************************************  
  pinMode(O, OUTPUT);
  pinMode(P, OUTPUT);
  pinMode(Q, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(S, OUTPUT);
  pinMode(T, OUTPUT);
  pinMode(U, OUTPUT);
  pinMode(V, OUTPUT);
    
  pinMode(Interrupt, OUTPUT); // Turns pin 4 into an output 
 attachInterrupt(digitalPinToInterrupt(interruptPin), notify, HIGH); // This sets pin 2 as an inturrpt if a signal is sent
  //attachInterrupt(0, notify, HIGH); // This sets pin 2 as an inturrpt if a signal is sent
 
   digitalWrite(ReceivingPin,LOW); // Turns pin 3 to initial low 
}

void loop() {
  
    delay(10); // To allow the signal become standy before reading the value 
  SignalState = digitalRead(ReceivingPin); // This reads the signal from Recieving pin = 3 and stores it into SignalState 
    delay(5); // Gives 5 mili second of read time 
  
  if (SignalState == HIGH) {
  digitalWrite(LED, HIGH); // This is were the LED will turn on before the relays start pin = 5
    
    delay(1000);
    delay(3000);
//************************************Module 1************************************
  // 1 set
  digitalWrite(a, HIGH);   
    delay(SHD);
  digitalWrite(a, LOW);   
    delay(LOD);
  // 2 set
  digitalWrite(b, HIGH);
    delay(SHD);
  digitalWrite(c, HIGH);
      delay(LSHD);
  digitalWrite(b, LOW); 
  digitalWrite(c, LOW);
    delay(LOD);
   //set 3
  digitalWrite(d, HIGH);
    delay(SHD);
  digitalWrite(f, LOW);
  digitalWrite(e, HIGH);
    delay(SHD);
   digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
      delay(LSHD);
  digitalWrite(d, LOW);  
    delay(LOD);
  //set 4 
  digitalWrite(g, HIGH);
    delay(SHD);
  digitalWrite(g, LOW);
  digitalWrite(h, HIGH);
    delay(SHD);
  digitalWrite(h, LOW);              
//************************************Module 2************************************
  digitalWrite(i, HIGH);   
    delay(SHD);
  digitalWrite(i, LOW);
  digitalWrite(j, HIGH);
    delay(LSHD);  
  digitalWrite(j, LOW);
    delay(LOD);
  //set 5
  digitalWrite(k, HIGH);
  digitalWrite(l, HIGH);
    delay(SHD);
  digitalWrite(k, LOW); 
  digitalWrite(l, LOW);
  digitalWrite(m, HIGH);
  digitalWrite(n, HIGH);
      delay(LSHD);
  digitalWrite(m, LOW); 
  digitalWrite(n, LOW);
    delay(LOD);
  //set 6 
  digitalWrite(o, HIGH);
        delay(LSHD);
  digitalWrite(o,LOW);
    delay(LOD);
  //set 7
  digitalWrite(p, HIGH);   
//************************************Module 3************************************
  delay(SHD);
  digitalWrite(p, LOW);
  digitalWrite(q, HIGH);   
  delay(SHD);
  digitalWrite(q, LOW);
  digitalWrite(r, HIGH);
      delay(LSHD);
  digitalWrite(r, LOW);
    delay(LOD);
  //set 8 
  digitalWrite(s, HIGH);
    delay(SHD);
  digitalWrite(s, LOW);
  digitalWrite(t, HIGH);
      delay(LSHD);
  digitalWrite(t, LOW);
    delay(LOD);
  //set 9
  digitalWrite(u, HIGH);
    delay(SHD);
  digitalWrite(u, LOW);
  digitalWrite(v, HIGH);
    delay(SHD);
  digitalWrite(v, LOW);
  digitalWrite(w, HIGH);
    delay(SHD);
  digitalWrite(w, LOW);
  digitalWrite(x, HIGH);
      delay(LSHD); 
//************************************Module 4************************************
  digitalWrite(x, LOW);
    delay(LOD);
  //set 10
  digitalWrite(y, HIGH);
  delay(SHD);  
  digitalWrite(y, LOW); 
  digitalWrite(z, HIGH);
  delay(SHD);
  digitalWrite(z, LOW);
  digitalWrite(A, HIGH);
      delay(LSHD);
  digitalWrite(A, LOW);
    delay(LOD);
  //set 11
  digitalWrite(B, HIGH);
  delay(SHD);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  delay(SHD);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(SHD);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  delay(SHD);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  delay(LSHD); 
  digitalWrite(F, LOW);
  delay(LOD);
//************************************Module 5************************************
  //set 12
  digitalWrite(G, HIGH);   
  delay(SHD);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
  delay(SHD);
  digitalWrite(H, LOW);
  digitalWrite(I, HIGH);
  delay(SHD);
  digitalWrite(I, LOW);
  digitalWrite(J, HIGH);
  delay(SHD);
  digitalWrite(J, LOW);
  digitalWrite(K, HIGH);
  delay(SHD);
  digitalWrite(K, LOW);
  digitalWrite(L, HIGH);
  delay(LSHD);
  digitalWrite(L, LOW);
  delay(LOD);
  //set 13
  digitalWrite(M, HIGH);
  delay(SHD);
  digitalWrite(M, LOW);
  digitalWrite(N, HIGH);
  delay(SHD);
  digitalWrite(N, LOW);
//************************************Module 6************************************
  digitalWrite(O, HIGH);
  delay(SHD);
  digitalWrite(O, LOW);   
  digitalWrite(P, HIGH);
  delay(SHD);
  digitalWrite(P, LOW);
  digitalWrite(Q, HIGH);
  delay(LSHD);
  digitalWrite(Q, LOW);
  delay(LOD);
  // set 14
  digitalWrite(R, HIGH);
  delay(SHD);
  digitalWrite(R, LOW);
  digitalWrite(S, HIGH);
  delay(SHD);
  digitalWrite(S, LOW);
  digitalWrite(T, HIGH);
  delay(SHD);
  digitalWrite(T, LOW);
  digitalWrite(U, HIGH);
  delay(SHD);
  digitalWrite(U, LOW);
  digitalWrite(V, HIGH);
  delay(LSHD);
  digitalWrite(V, LOW);
  delay(LOD);
  }
}

void notify()
{
  while(1){
  digitalWrite(LED, LOW);
  digitalWrite(Interrupt, HIGH);   // turn the LED on (HIGH is the voltage level)
   delayMicroseconds(16383);
   delayMicroseconds(16383);
   delayMicroseconds(16383);
   delayMicroseconds(16383);
  digitalWrite(Interrupt, LOW);    // turn the LED off by making the voltage LOW
   delayMicroseconds(16383);
   delayMicroseconds(16383);
   delayMicroseconds(16383);
   delayMicroseconds(16383);
  } 
}

