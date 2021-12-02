int led1 = 2;  
int led2 = 3;
int led3 = 4;                                                                          
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;

int crvenoKola = 11;    
int zutoKola = 10;
int zelenoKola = 9;

int zelenoPesaci = 12;
int crvenoPesaci = 13;

void nine(){
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);                                                                        
 digitalWrite(led5,0);
 digitalWrite(led6,1);                                                                              
 digitalWrite(led7,1);
 }
void eight(){
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
}
void seven(){
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,0);
  }
void six(){
 digitalWrite(led1,1);
 digitalWrite(led2,0);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 }

void five(){
 digitalWrite(led1,1);
 digitalWrite(led2,0);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,0);
 digitalWrite(led6,1);
 digitalWrite(led7,1);

 }
void four(){
 digitalWrite(led1,0);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 }
void three(){
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,1);
 }
void two(){
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,0);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,0);
 digitalWrite(led7,1);
}
void one(){
 digitalWrite(led1,0);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,0);
 }
void zero(){
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,0);
 }

void setup() {
 pinMode(led1, OUTPUT);                                                              
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
 pinMode(led7, OUTPUT);
 
 pinMode(crvenoKola, OUTPUT);
 pinMode(zutoKola, OUTPUT);
 pinMode(zelenoKola, OUTPUT);

 pinMode(crvenoPesaci, OUTPUT);
 pinMode(zelenoPesaci, OUTPUT);

}
int displayWrite = -1;

bool stanjeCrvenoKola;
bool stanjeZutoKola;
bool stanjeZelenoKola;
bool stanjeCrvenoPesaci;
bool stanjeZelenoPesaci;

int brojac = 0;
void loop() {
int period;
if(brojac == 1 || brojac == 3){
  period = 100;
  }else{
    period = 1000;}

  
  displayWrite++;
  
  delay(period);
  switch(displayWrite){
    case 0:nine();
    break;
    case 1:eight();

    break;
    case 2:seven(); 
  
    break;
    case 3:six(); 
 
    break;
    case 4:five();
    
    break;
    case 5:four(); 

    break;
    case 6:three(); 

    break;
    case 7:two(); 
 
    break;
    case 8:one();
  
    break;
    case 9:zero(); 
    brojac++;
    displayWrite = -1;
        break;
    }

if(brojac == 0){
            stanjeCrvenoKola = HIGH; // KOLA CRVENO
            stanjeZutoKola = LOW;
            stanjeZelenoKola = LOW;
            stanjeCrvenoPesaci = LOW;
            stanjeZelenoPesaci = HIGH; //PESACI ZELENO
        }else if(brojac == 1){      //----------------------
            stanjeCrvenoKola = LOW; 
            stanjeZutoKola = HIGH;  //KOLA ZUTO
            stanjeZelenoKola = LOW;
            stanjeCrvenoPesaci = HIGH;  //PESACI CRVENO
            stanjeZelenoPesaci = LOW;
          }else if(brojac == 2){    //----------------------
            stanjeCrvenoKola = LOW;   
            stanjeZutoKola = LOW;      
            stanjeZelenoKola = HIGH;     // KOLA ZELENO
            stanjeCrvenoPesaci = HIGH;  //PESACI CRVENO
            stanjeZelenoPesaci = LOW;
            }else if(brojac == 3){ //----------------------
            stanjeCrvenoKola = LOW;
            stanjeZutoKola = HIGH;    // KOLA ZUTO
            stanjeZelenoKola = LOW;
            stanjeCrvenoPesaci = HIGH; //PESACI CRVENO
            stanjeZelenoPesaci = LOW;   
              }
            else if(brojac >= 4){
             brojac = 0;
      }
digitalWrite(crvenoKola,stanjeCrvenoKola);
digitalWrite(zutoKola,stanjeZutoKola);
digitalWrite(zelenoKola,stanjeZelenoKola);

digitalWrite(crvenoPesaci,stanjeCrvenoPesaci);
digitalWrite(zelenoPesaci,stanjeZelenoPesaci);



 }
