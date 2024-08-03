/*

Aluno: Wallace Cauã Nascimento Dos Santos
Turma 2B
LINK do video exoplicativo do codigo e seu funcionamento:
https://youtu.be/2To-vOw2hrw

*/




const int A1A = 12;
const int A1B = 10;

const int B1A = 13;
const int B1B = 11;

void setup() {
  pinMode(A1A,OUTPUT);
  pinMode(A1B,OUTPUT);  
  pinMode(B1A,OUTPUT);
  pinMode(B1B,OUTPUT); 
  delay(3000);
}

void loop() {

  motorA('D');      // liga o motor A para a direita por 2 segundos.
  delay(2000);

   motorA('E');     // liga o motor A para a esquerda por 2 segundos.
  delay(2000);  

  motorA('P');      // desliga o motor A.
  delay(2000); 
    
  motorB('D');      // liga o motor b para a direita.
  delay(2000);      // por 2 segundos.

   motorB('E');     // liga o motor b para a esquerda.
  delay(2000);      // por 2 segundos.

  motorB('P');      // desliga o motor b.
  delay(2000); 
   
  motorA('D');      // liga o motor a para a direita.
  motorB('D');      // liga o motor B para a direita.
  delay(2000);      // por 2 segundos ambos.

  motorA('E');      // liga o motor A para a esquerda.
  motorB('E');      // liga o motor B para a esquerda.
  delay(3000);      // por 3 segundos ambos.

  motorA('P');      // desliga o motor A.
  motorB('P');      // desliga o motor B.
  delay(5000);      // por 5 segundos ambos.  
}

void motorA(char d){
  /*
  definiçao das funçoes do motor A
  D = direita
  E = esquerda
 */

  if(d =='D'){
    digitalWrite(A1A,LOW);
    digitalWrite(A1B,HIGH); 
  }
  else if (d =='E'){
    digitalWrite(A1A,HIGH);
    digitalWrite(A1B,LOW);    
  }
  else{
    digitalWrite(A1A,LOW);
    digitalWrite(A1B,LOW);    
  }
}

void motorB(char d){
  /*
   definiçao das funçoes do motor B
  D = direita
  E = esquerda
 */

    if(d =='D'){
      digitalWrite(B1A,LOW);
      digitalWrite(B1B,HIGH); 
    }
    else if(d =='E'){
      digitalWrite(B1A,HIGH);
      digitalWrite(B1B,LOW);    
    }
    else{      
      digitalWrite(B1A,LOW);
      digitalWrite(B1B,LOW);     
    }
}