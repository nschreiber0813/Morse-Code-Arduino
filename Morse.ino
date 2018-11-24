const int led = 13;
void setup(){
     pinMode(led, OUTPUT);
}
 
void loop(){
H();
Dot();
E();
Dot();
L();
Dot();
L();
Dot();
O();
Dash();
}
 
void Dot(){
digitalWrite(led, HIGH);
delay(250);
digitalWrite(led, LOW);
delay(1000);
}
 
void Dash(){
digitalWrite(led, HIGH);
delay(500);
digitalWrite(led , LOW);
delay(1000);
}
 
void A(){
Dot();
Dash();
}
void B(){
Dash();
Dot();
Dot();
Dot();
}
void C(){
Dash();
Dot();
Dash();
Dot();
}
void D(){
Dash();
Dot();
Dot();
}
void E(){
Dot();
}
void F(){
Dot();
Dot();
Dash();
Dot();
}
void G(){
Dash();
Dash();
Dot();
}
void H(){
Dot();
Dot();
Dot();
Dot();
}
void I(){
Dot();
Dot();
}
void J(){
Dot();
Dash();
Dash();
Dash();
}
void K(){
Dash();
Dot();
Dash();
}
void L(){
Dot();
Dash();
Dot();
Dot();
}
void M(){
Dash();
Dash();
}
void N(){
Dash();
Dot();
}
void O(){
Dash();
Dash();
Dash();
}
void P(){
Dot();
Dash();
Dash();
Dot();
}
void Q(){
Dash();
Dot();
Dash();
Dash();
}
void R(){
Dot();
Dash();
Dot();
}
void S(){
Dot();
Dot();
Dot();
}
void T(){
Dash();
}
void U(){
Dot();
Dot();
Dash();
}
void V(){
Dot();
Dot();
Dot();
Dash();
}
void W(){
Dot();
Dot();
Dash();
}
void X(){
Dash();
Dot();
Dot();
Dash();
}
void Y(){
Dash();
Dot();
Dash();
Dash();
}
void Z(){
Dash();
Dash();
Dot();
Dot();
}
