/*****************실습 3-1**********************
void setup(){
  pinMode(13,OUTPUT);
}

void loop(){
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}

설명{
  pinMode(pin,mode);
    pin : 아두이노 디지털 핀 번호
    mode : OUTPUT, INPUT
  digitalWrite(pin, value);
    pin : 아두이노 디지털 핀 번호
    value : HIGH, 1 또는 LOW,0
  delay(ms);
    단위 : ms
    1sec = 1000ms
}

작동 내용{
13번 핀이 1초 간격으로 점멸하는 프로그램이다.
}
***********************************************/

/****************실습 3-4**********************
int{
  int ledPin = 13;
}

void setup(){
  pinMode(ledPin,OUTPUT);
}

void loop(){
  digitalWrite(ledPin,HIGH);
  delay(500);
  digitalWrite(ledPin,LOW);
  delay(500);
}

설명{
  int var = val;
    var : int 변수 이름
    val : 그 변수에 할당한 값
  pinMode(pin,mode);
    pin : 아두이노 디지털 핀 번호
    mode : OUTPUT, INPUT
  digitalWrite(pin, value);
    pin : 아두이노 디지털 핀 번호
    value : HIGH, 1 또는 LOW,0
  delay(ms);
    단위 : ms
    1sec = 1000ms
}

작동 내용{
ledPin이 0.5초 간격으로 점멸하는 프로그램이다.
}
***********************************************/

/****************실습 3-6**********************
int{
  int ledPin = 13;
  int delayPeriod = 500;
}

void setup(){
  pinMode(ledPin,OUTPUT);
}

void loop(){
  digitalWrite(ledPin,HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin,LOW);
  delay(delayPeriod);
  delayPeriod = delayPeriod+100;
}

설명{
  int var = val;
    var : int 변수 이름
    val : 그 변수에 할당한 값
  pinMode(pin,mode);
    pin : 아두이노 디지털 핀 번호
    mode : OUTPUT, INPUT
  digitalWrite(pin, value);
    pin : 아두이노 디지털 핀 번호
    value : HIGH, 1 또는 LOW,0
  delay(ms);
    단위 : ms
    1sec = 1000ms
}

작동 내용{
ledPin이 점멸할 때마다 0.1초씩 지연 시간이 늘어나는 프로그램이다.
}
***********************************************/

/****************실습 4-1**********************
int {
  int D13 = 13;
  int D12 = 12;
  int BlinkTime = 200;
  int DelayTime = 500;
}

void setup(){
  pinMode(D13,OUTPUT);
  pinMode(D12,OUTPUT);
}

void loop(){
  digitalWrite(D13,HIGH);
  delay(BlinkTime);
  digitalWrite(D13,LOW);
  delay(DelayTime);
  digitalWrite(D12,HIGH);
  delay(BlinkTime);
  digitalWrite(D12,LOW);
  delay(DelayTime);
}

설명{
  int var = val;
    var : int 변수 이름
    val : 그 변수에 할당한 값
  pinMode(pin,mode);
    pin : 아두이노 디지털 핀 번호
    mode : OUTPUT, INPUT
  digitalWrite(pin, value);
    pin : 아두이노 디지털 핀 번호
    value : HIGH, 1 또는 LOW,0
  delay(ms);
    단위 : ms
    1sec = 1000ms
}

작동 내용{
D13과 D12가 번갈아가며 BlinkTime과 DelayTime만큼 점멸하는 프로그램이다.
}
***********************************************/

/****************실습 4-2**********************
int{
  int ledPin1 = 13;
  int ledPin2 = 12;
  int delayPeriod = 500;
}

void setup(){
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
}

void loop(){
  digitalWrite(ledPin1,HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin1,LOW);
  delay(delayPeriod);
  digitalWrite(ledPin2,HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin2,LOW);
  delay(delayPeriod);
  delayPeriod = delayPeriod+100;
}

설명{
  int var = val;
    var : int 변수 이름
    val : 그 변수에 할당한 값
  pinMode(pin,mode);
    pin : 아두이노 디지털 핀 번호
    mode : OUTPUT, INPUT
  digitalWrite(pin, value);
    pin : 아두이노 디지털 핀 번호
    value : HIGH, 1 또는 LOW,0
  delay(ms);
    단위 : ms
    1sec = 1000ms
}

작동 내용{
ledPin1과 ledPin2가 번갈아가며 점멸할 때마다 0.1초씩 지연 시간이 늘어나는 프로그램이다.
}
***********************************************/

/****************실습 4-3**********************
int{
  int ledPin1 = 13;
  int delayPeriod = 500;
}

void setup(){
  pinMode(ledPin1,OUTPUT);
}

void loop(){
  digitalWrite(ledPin1,HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin1,LOW);
  delay(delayPeriod);
  delayPeriod = delayPeriod+100;
  if(delayPeriod >= 3000)
  {
    delayPeriod=500;
  }
}

설명{
  int var = val;
    var : int 변수 이름
    val : 그 변수에 할당한 값
  pinMode(pin,mode);
    pin : 아두이노 디지털 핀 번호
    mode : OUTPUT, INPUT
  digitalWrite(pin, value);
    pin : 아두이노 디지털 핀 번호
    value : HIGH, 1 또는 LOW,0
  delay(ms);
    단위 : ms
    1sec = 1000ms
  if (condition)
    {
      문;
    }
    condition : 부울 식 i.e., true 또는 false
    문 : condition의 값에 따라 실행될 프로그램문
}

작동 내용{
ledPin1가 점멸할 때마다 0.1초씩 지연 시간이 늘어나고, 지연 시간이 3초 보다 클 시 0.5초로 초기화 하는 조건 프로그램.
}
***********************************************/

/****************실습 4-4**********************
int{
  int ledPin1 = 13;
  int delayPeriod = 200;
}

void setup(){
  pinMode(ledPin1,OUTPUT);
}

void loop(){
  for(int i=0; i<20; i++)
  {
    digitalWrite(ledPin,HIGH);
    delay(delayPeriod);
    digitalWrite(ledPin,LOW);
    delay(delayPeriod);
  }
  delay(3000);
}

설명{
  int var = val;
    var : int 변수 이름
    val : 그 변수에 할당한 값
  pinMode(pin,mode);
    pin : 아두이노 디지털 핀 번호
    mode : OUTPUT, INPUT
  digitalWrite(pin, value);
    pin : 아두이노 디지털 핀 번호
    value : HIGH, 1 또는 LOW,0
  delay(ms);
    단위 : ms
    1sec = 1000ms
  for (초기화; 조건; 증가)
    {
	    문 ;
    }
}

작동 내용{
ledPin1을 0.2초씩 20회 점멸한 뒤 3초 동안 멈췄다가 다시 반복되는 반복 프로그램.
}
***********************************************/

/****************실습 4-5**********************
int{
  int ledPin1 = 13;
  int delayPeriod = 200;
  int count = 0;
}

void setup(){
  pinMode(ledPin1,OUTPUT);
}

void loop(){
  digitalWrite(ledPin1,HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin1,LOW);
  delay(delayPeriod);
  count++;
  if(count == 20)
  {
    count = 0;
    delay(3000);
  }
}

설명{
  int var = val;
    var : int 변수 이름
    val : 그 변수에 할당한 값
  pinMode(pin,mode);
    pin : 아두이노 디지털 핀 번호
    mode : OUTPUT, INPUT
  digitalWrite(pin, value);
    pin : 아두이노 디지털 핀 번호
    value : HIGH, 1 또는 LOW,0
  delay(ms);
    단위 : ms
    1sec = 1000ms
  if (condition)
    {
      문;
    }
    condition : 부울 식 i.e., true 또는 false
    문 : condition의 값에 따라 실행될 프로그램문
}

작동 내용{
ledPin1을 0.2초씩 20회 점멸한 뒤 3초 동안 멈췄다가 다시 반복되는 조건 프로그램.
}
***********************************************/

/****************실습 4-6**********************
int{
  int ledPin1 = 13;
  int delayPeriod = 250;
}

void setup(){
  pinMode(ledPin1,OUTPUT);
}

void loop(){
  for (int i=0; i<20; i++){
    flash();
  }
  delay(3000);
}

void flash(){
  digitalWrite(ledPin1,HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin1,LOW);
  delay(delayPeriod);
}

설명{
  int var = val;
    var : int 변수 이름
    val : 그 변수에 할당한 값
  pinMode(pin,mode);
    pin : 아두이노 디지털 핀 번호
    mode : OUTPUT, INPUT
  digitalWrite(pin, value);
    pin : 아두이노 디지털 핀 번호
    value : HIGH, 1 또는 LOW,0
  delay(ms);
    단위 : ms
    1sec = 1000ms
  for (초기화; 조건; 증가)
    {
	    문 ;
    }
  flash();
    void flash에 있는 함수를 불러와 실행
}

작동 내용{
ledPin1을 0.2초씩 20회 점멸한 뒤 3초 동안 멈췄다가 다시 반복되는 반복 프로그램.
}
***********************************************/