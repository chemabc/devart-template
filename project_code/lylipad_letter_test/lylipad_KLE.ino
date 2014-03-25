//Pin connected to ROW1
int row1Pin = 5;
//Pin connected to ROW2
int row2Pin = 6;
//Pin connected to ROW3
int row3Pin = 7;
//Pin connected to ROW4
int row4Pin = 8;
//Pin connected to ROW5
int row5Pin = 9 ;
//Pin connected to ROW6
int row6Pin = 10;
//Pin connected to ROW7
int row7Pin = 11;

//Pin connected to COL1
int col1Pin = 4;
//Pin connected to COL2
int col2Pin = 3;
//Pin connected to COL3
int col3Pin = 2;
//Pin connected to COL4
int col4Pin = 13;
//Pin connected to COL5
int col5Pin = 12;

int delayms = 5;
int delaymsBetweenLetters = 1000;

boolean col1RowsValues[7] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW}; // LOW == false | HIGH == true
boolean col2RowsValues[7] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW};
boolean col3RowsValues[7] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW};
boolean col4RowsValues[7] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW};
boolean col5RowsValues[7] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW};

//char FRASE[] = "1";
char FRASE[] = "KIT LIBERTAD EXPRESION";
int lengthFrase = 29;
int countCharFrase = 0;

void setup() {
  //Start Serial for debuging purposes	
  Serial.begin(9600);
  //set pins to output because they are addressed in the main loop
  pinMode(col1Pin, OUTPUT);
  pinMode(col2Pin, OUTPUT);
  pinMode(col3Pin, OUTPUT);
  pinMode(col4Pin, OUTPUT);
  pinMode(col5Pin, OUTPUT);
  
  pinMode(row1Pin, OUTPUT);
  pinMode(row2Pin, OUTPUT);
  pinMode(row3Pin, OUTPUT);
  pinMode(row4Pin, OUTPUT);
  pinMode(row5Pin, OUTPUT);
  pinMode(row6Pin, OUTPUT);
  pinMode(row7Pin, OUTPUT);
  
  resetCols();
  delay(1000);
}

void loop() {

  resetCols();
  updateLetter(FRASE[countCharFrase]);
  
  for(int i=0; i<10; i++){ // repeat 10 times = stays 10*delayms = 500ms
    digitalWrite(col1Pin, LOW);   // turn the col on (LOW is the voltage level)
    digitalWrite(row1Pin, col1RowsValues[0]);
    digitalWrite(row2Pin, col1RowsValues[1]);
    digitalWrite(row3Pin, col1RowsValues[2]);
    digitalWrite(row4Pin, col1RowsValues[3]);
    digitalWrite(row5Pin, col1RowsValues[4]);
    digitalWrite(row6Pin, col1RowsValues[5]);
    digitalWrite(row7Pin, col1RowsValues[6]);
    delay(delayms);
    digitalWrite(col1Pin, HIGH); // reset col 1
    
    digitalWrite(col2Pin, LOW);
    digitalWrite(row1Pin, col2RowsValues[0]);
    digitalWrite(row2Pin, col2RowsValues[1]);
    digitalWrite(row3Pin, col2RowsValues[2]);
    digitalWrite(row4Pin, col2RowsValues[3]);
    digitalWrite(row5Pin, col2RowsValues[4]);
    digitalWrite(row6Pin, col2RowsValues[5]);
    digitalWrite(row7Pin, col2RowsValues[6]);
    delay(delayms);
    digitalWrite(col2Pin, HIGH); // reset col 2
  
    digitalWrite(col3Pin, LOW);
    digitalWrite(row1Pin, col3RowsValues[0]);
    digitalWrite(row2Pin, col3RowsValues[1]);
    digitalWrite(row3Pin, col3RowsValues[2]);
    digitalWrite(row4Pin, col3RowsValues[3]);
    digitalWrite(row5Pin, col3RowsValues[4]);
    digitalWrite(row6Pin, col3RowsValues[5]);
    digitalWrite(row7Pin, col3RowsValues[6]);
    delay(delayms);
    digitalWrite(col3Pin, HIGH); // reset col 3
    
    digitalWrite(col4Pin, LOW);
    digitalWrite(row1Pin, col4RowsValues[0]);
    digitalWrite(row2Pin, col4RowsValues[1]);
    digitalWrite(row3Pin, col4RowsValues[2]);
    digitalWrite(row4Pin, col4RowsValues[3]);
    digitalWrite(row5Pin, col4RowsValues[4]);
    digitalWrite(row6Pin, col4RowsValues[5]);
    digitalWrite(row7Pin, col4RowsValues[6]);
    delay(delayms);
    digitalWrite(col4Pin, HIGH); // reset col 4
    
    digitalWrite(col5Pin, LOW);
    digitalWrite(row1Pin, col5RowsValues[0]);
    digitalWrite(row2Pin, col5RowsValues[1]);
    digitalWrite(row3Pin, col5RowsValues[2]);
    digitalWrite(row4Pin, col5RowsValues[3]);
    digitalWrite(row5Pin, col5RowsValues[4]);
    digitalWrite(row6Pin, col5RowsValues[5]);
    digitalWrite(row7Pin, col5RowsValues[6]);
    delay(delayms);
    digitalWrite(col5Pin, HIGH); // reset col 5
  }
    
  countCharFrase++;
  if(countCharFrase >= lengthFrase){
    countCharFrase = 0;
  }
}

void resetCols(){
  digitalWrite(col1Pin, HIGH);
  digitalWrite(col2Pin, HIGH);
  digitalWrite(col3Pin, HIGH);
  digitalWrite(col4Pin, HIGH);
  digitalWrite(col5Pin, HIGH); 
}

void updateLetter(char c){
  
  if(c == '1'){
    // 1 LED test
    col1RowsValues[0] = true;
    col1RowsValues[1] = false;
    col1RowsValues[2] = false;
    col1RowsValues[3] = false;
    col1RowsValues[4] = false;
    col1RowsValues[5] = false;
    col1RowsValues[6] = false;
    
    col2RowsValues[0] = false;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = false;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = false;
    
    col3RowsValues[0] = false;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = false;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = false;
    
    col4RowsValues[0] = false;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = false;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = false;
    col5RowsValues[2] = false;
    col5RowsValues[3] = false;
    col5RowsValues[4] = false;
    col5RowsValues[5] = false;
    col5RowsValues[6] = false;
  }
  else if(c == '0'){
    // ALL 35 LEDS
    col1RowsValues[0] = true;
    col1RowsValues[1] = true;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = true;
    col2RowsValues[1] = true;
    col2RowsValues[2] = true;
    col2RowsValues[3] = true;
    col2RowsValues[4] = true;
    col2RowsValues[5] = true;
    col2RowsValues[6] = true;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = true;
    col3RowsValues[2] = true;
    col3RowsValues[3] = true;
    col3RowsValues[4] = true;
    col3RowsValues[5] = true;
    col3RowsValues[6] = true;
    
    col4RowsValues[0] = true;
    col4RowsValues[1] = true;
    col4RowsValues[2] = true;
    col4RowsValues[3] = true;
    col4RowsValues[4] = true;
    col4RowsValues[5] = true;
    col4RowsValues[6] = true;
    
    col5RowsValues[0] = true;
    col5RowsValues[1] = true;
    col5RowsValues[2] = true;
    col5RowsValues[3] = true;
    col5RowsValues[4] = true;
    col5RowsValues[5] = true;
    col5RowsValues[6] = true;
  }
  else if(c == 'A'){
    // LETRA A
    col1RowsValues[0] = false;
    col1RowsValues[1] = false;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = false;
    col2RowsValues[1] = true;
    col2RowsValues[2] = false;
    col2RowsValues[3] = false;
    col2RowsValues[4] = true;
    col2RowsValues[5] = false;
    col2RowsValues[6] = false;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = false;
    col3RowsValues[4] = true;
    col3RowsValues[5] = false;
    col3RowsValues[6] = false;
    
    col4RowsValues[0] = false;
    col4RowsValues[1] = true;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = true;
    col4RowsValues[5] = false;
    col4RowsValues[6] = false;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = false;
    col5RowsValues[2] = true;
    col5RowsValues[3] = true;
    col5RowsValues[4] = true;
    col5RowsValues[5] = true;
    col5RowsValues[6] = true;
  }
  else if(c == 'B'){
    // LETRA B
    col1RowsValues[0] = true;
    col1RowsValues[1] = false;
    col1RowsValues[2] = false;
    col1RowsValues[3] = false;
    col1RowsValues[4] = false;
    col1RowsValues[5] = false;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = true;
    col2RowsValues[1] = true;
    col2RowsValues[2] = true;
    col2RowsValues[3] = true;
    col2RowsValues[4] = true;
    col2RowsValues[5] = true;
    col2RowsValues[6] = true;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = true;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = true;
    
    col4RowsValues[0] = true;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = true;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = true;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = true;
    col5RowsValues[2] = true;
    col5RowsValues[3] = false;
    col5RowsValues[4] = true;
    col5RowsValues[5] = true;
    col5RowsValues[6] = false;
  }
  else if(c == 'C'){
    // LETRA C
    col1RowsValues[0] = false;
    col1RowsValues[1] = true;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = false;
    
    col2RowsValues[0] = true;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = false;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = true;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = false;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = true;
    
    col4RowsValues[0] = true;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = true;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = true;
    col5RowsValues[2] = false;
    col5RowsValues[3] = false;
    col5RowsValues[4] = false;
    col5RowsValues[5] = true;
    col5RowsValues[6] = false;
  }
  else if(c == 'D'){
    // LETRA D
    col1RowsValues[0] = true;
    col1RowsValues[1] = false;
    col1RowsValues[2] = false;
    col1RowsValues[3] = false;
    col1RowsValues[4] = false;
    col1RowsValues[5] = false;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = true;
    col2RowsValues[1] = true;
    col2RowsValues[2] = true;
    col2RowsValues[3] = true;
    col2RowsValues[4] = true;
    col2RowsValues[5] = true;
    col2RowsValues[6] = true;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = false;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = true;
    
    col4RowsValues[0] = true;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = true;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = true;
    col5RowsValues[2] = true;
    col5RowsValues[3] = true;
    col5RowsValues[4] = true;
    col5RowsValues[5] = true;
    col5RowsValues[6] = false;
  }
  else if(c == 'E'){
    // LETRA E
    col1RowsValues[0] = true;
    col1RowsValues[1] = true;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = true;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = true;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = true;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = true;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = true;
    
    col4RowsValues[0] = true;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = true;
    
    col5RowsValues[0] = true;
    col5RowsValues[1] = false;
    col5RowsValues[2] = false;
    col5RowsValues[3] = false;
    col5RowsValues[4] = false;
    col5RowsValues[5] = false;
    col5RowsValues[6] = true;
  }
  else if(c == 'H'){
    // LETRA H
    col1RowsValues[0] = true;
    col1RowsValues[1] = true;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = false;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = true;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = false;
    
    col3RowsValues[0] = false;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = true;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = false;
    
    col4RowsValues[0] = false;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = true;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = false;
    
    col5RowsValues[0] = true;
    col5RowsValues[1] = true;
    col5RowsValues[2] = true;
    col5RowsValues[3] = true;
    col5RowsValues[4] = true;
    col5RowsValues[5] = true;
    col5RowsValues[6] = true;
  }
  else if(c == 'I'){
    // LETRA I
    col1RowsValues[0] = false;
    col1RowsValues[1] = false;
    col1RowsValues[2] = false;
    col1RowsValues[3] = false;
    col1RowsValues[4] = false;
    col1RowsValues[5] = false;
    col1RowsValues[6] = false;
    
    col2RowsValues[0] = true;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = false;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = true;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = true;
    col3RowsValues[2] = true;
    col3RowsValues[3] = true;
    col3RowsValues[4] = true;
    col3RowsValues[5] = true;
    col3RowsValues[6] = true;
    
    col4RowsValues[0] = true;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = true;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = false;
    col5RowsValues[2] = false;
    col5RowsValues[3] = false;
    col5RowsValues[4] = false;
    col5RowsValues[5] = false;
    col5RowsValues[6] = false;
  }
  else if(c == 'L'){
    // LETRA L
    col1RowsValues[0] = true;
    col1RowsValues[1] = true;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = false;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = false;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = true;
    
    col3RowsValues[0] = false;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = false;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = true;
    
    col4RowsValues[0] = false;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = true;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = false;
    col5RowsValues[2] = false;
    col5RowsValues[3] = false;
    col5RowsValues[4] = false;
    col5RowsValues[5] = false;
    col5RowsValues[6] = true;
  }
  else if(c == 'M'){
    // LETRA M
    col1RowsValues[0] = true;
    col1RowsValues[1] = true;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = false;
    col2RowsValues[1] = true;
    col2RowsValues[2] = false;
    col2RowsValues[3] = false;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = false;
    
    col3RowsValues[0] = false;
    col3RowsValues[1] = false;
    col3RowsValues[2] = true;
    col3RowsValues[3] = true;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = false;
    
    col4RowsValues[0] = false;
    col4RowsValues[1] = true;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = false;
    
    col5RowsValues[0] = true;
    col5RowsValues[1] = true;
    col5RowsValues[2] = true;
    col5RowsValues[3] = true;
    col5RowsValues[4] = true;
    col5RowsValues[5] = true;
    col5RowsValues[6] = true;
  }
  else if(c == 'N'){
    // LETRA N
    col1RowsValues[0] = true;
    col1RowsValues[1] = true;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = false;
    col2RowsValues[1] = true;
    col2RowsValues[2] = false;
    col2RowsValues[3] = false;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = false;
    
    col3RowsValues[0] = false;
    col3RowsValues[1] = false;
    col3RowsValues[2] = true;
    col3RowsValues[3] = false;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = false;
    
    col4RowsValues[0] = false;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = true;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = false;
    
    col5RowsValues[0] = true;
    col5RowsValues[1] = true;
    col5RowsValues[2] = true;
    col5RowsValues[3] = true;
    col5RowsValues[4] = true;
    col5RowsValues[5] = true;
    col5RowsValues[6] = true;
  }
  else if(c == 'P'){
    // LETRA P
    col1RowsValues[0] = true;
    col1RowsValues[1] = true;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = true;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = true;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = false;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = true;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = false;
    
    col4RowsValues[0] = true;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = true;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = false;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = true;
    col5RowsValues[2] = true;
    col5RowsValues[3] = false;
    col5RowsValues[4] = false;
    col5RowsValues[5] = false;
    col5RowsValues[6] = false;
  }
  else if(c == 'R'){ 
    // LETRA R
    col1RowsValues[0] = true;
    col1RowsValues[1] = true;
    col1RowsValues[2] = true;
    col1RowsValues[3] = true;
    col1RowsValues[4] = true;
    col1RowsValues[5] = true;
    col1RowsValues[6] = true;
    
    col2RowsValues[0] = true;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = true;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = false;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = true;
    col3RowsValues[4] = true;
    col3RowsValues[5] = false;
    col3RowsValues[6] = false;
    
    col4RowsValues[0] = true;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = true;
    col4RowsValues[4] = false;
    col4RowsValues[5] = true;
    col4RowsValues[6] = false;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = true;
    col5RowsValues[2] = true;
    col5RowsValues[3] = false;
    col5RowsValues[4] = false;
    col5RowsValues[5] = false;
    col5RowsValues[6] = true;
  }
  else if(c == 'T'){
    // LETRA T
    col1RowsValues[0] = true;
    col1RowsValues[1] = false;
    col1RowsValues[2] = false;
    col1RowsValues[3] = false;
    col1RowsValues[4] = false;
    col1RowsValues[5] = false;
    col1RowsValues[6] = false;
    
    col2RowsValues[0] = true;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = false;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = false;
    
    col3RowsValues[0] = true;
    col3RowsValues[1] = true;
    col3RowsValues[2] = true;
    col3RowsValues[3] = true;
    col3RowsValues[4] = true;
    col3RowsValues[5] = true;
    col3RowsValues[6] = true;
    
    col4RowsValues[0] = true;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = false;
    
    col5RowsValues[0] = true;
    col5RowsValues[1] = false;
    col5RowsValues[2] = false;
    col5RowsValues[3] = false;
    col5RowsValues[4] = false;
    col5RowsValues[5] = false;
    col5RowsValues[6] = false;
  }
  else if(c == ' '){ 
    // ESPACIO
    col1RowsValues[0] = false;
    col1RowsValues[1] = false;
    col1RowsValues[2] = false;
    col1RowsValues[3] = false;
    col1RowsValues[4] = false;
    col1RowsValues[5] = false;
    col1RowsValues[6] = false;
    
    col2RowsValues[0] = false;
    col2RowsValues[1] = false;
    col2RowsValues[2] = false;
    col2RowsValues[3] = false;
    col2RowsValues[4] = false;
    col2RowsValues[5] = false;
    col2RowsValues[6] = false;
    
    col3RowsValues[0] = false;
    col3RowsValues[1] = false;
    col3RowsValues[2] = false;
    col3RowsValues[3] = false;
    col3RowsValues[4] = false;
    col3RowsValues[5] = false;
    col3RowsValues[6] = false;
    
    col4RowsValues[0] = false;
    col4RowsValues[1] = false;
    col4RowsValues[2] = false;
    col4RowsValues[3] = false;
    col4RowsValues[4] = false;
    col4RowsValues[5] = false;
    col4RowsValues[6] = false;
    
    col5RowsValues[0] = false;
    col5RowsValues[1] = false;
    col5RowsValues[2] = false;
    col5RowsValues[3] = false;
    col5RowsValues[4] = false;
    col5RowsValues[5] = false;
    col5RowsValues[6] = false;
  }
    /* LETRA
    col1RowsValues[0] = ;
    col1RowsValues[1] = ;
    col1RowsValues[2] = ;
    col1RowsValues[3] = ;
    col1RowsValues[4] = ;
    col1RowsValues[5] = ;
    col1RowsValues[6] = ;
    
    col2RowsValues[0] = ;
    col2RowsValues[1] = ;
    col2RowsValues[2] = ;
    col2RowsValues[3] = ;
    col2RowsValues[4] = ;
    col2RowsValues[5] = ;
    col2RowsValues[6] = ;
    
    col3RowsValues[0] = ;
    col3RowsValues[1] = ;
    col3RowsValues[2] = ;
    col3RowsValues[3] = ;
    col3RowsValues[4] = ;
    col3RowsValues[5] = ;
    col3RowsValues[6] = ;
    
    col4RowsValues[0] = ;
    col4RowsValues[1] = ;
    col4RowsValues[2] = ;
    col4RowsValues[3] = ;
    col4RowsValues[4] = ;
    col4RowsValues[5] = ;
    col4RowsValues[6] = ;
    
    col5RowsValues[0] = ;
    col5RowsValues[1] = ;
    col5RowsValues[2] = ;
    col5RowsValues[3] = ;
    col5RowsValues[4] = ;
    col5RowsValues[5] = ;
    col5RowsValues[6] = ;
  */
}
