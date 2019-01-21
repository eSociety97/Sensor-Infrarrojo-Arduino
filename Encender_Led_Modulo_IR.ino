/*************************************************Capitulo 7 - Sensor Infrarrojo********************************************************
*                                                                                                                                 *
*     En este septimo capitulo aprenderemos a utilizar el sensor Infrarrojo. Este es un dispositivo electronico optoelectrico     *                                                                      *
*  capaz de medir la radiacion electromagnetica infrarroja ya que todos los cuerpos emiten cierta cantidad de radiacion la cual   *
*  resulta ser invisible para nuestros ojos pero no para este sensor. El sensor esta compuesto por un Fototransistor que es el    *
*  encargado de recibir la luz infrarroja que rebota hacia abajo cuando encuentra un objeto, esta luz es emitida por un Diodo     *
*  LED Infrarrojo. A este conjunto se le llama optoacopladores.                                                                   *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 Sensor Infrarrojo.                                                                                                          *
*  -1 LED                                                                                                                         *
*  -1 Resistencia de 1k ohm (Si no tienen de 1k pueden variar el valor entre 100 ohm a 2.2 K omh)                                 *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/ 

int sensorIR = 12; //Declaramos la variable que usaremos para la entrada digital de nuestro sensor IR
int led = 13;  //Declaramos la variable que usaremos para la salida digital de nuestro led

void setup(){ 
pinMode(13,OUTPUT); // Declaramos el pin 13 como salida del led   
pinMode(12,INPUT); // Declaramos el pin 12 como entrada del senror IR
}
void loop(){
int valor = digitalRead(12); //Declaramos la variable valor y le asignamos la lectura digital del sensor IR

if(valor == HIGH){ //Comparamos si el valor es un estado alto  
  while(valor == HIGH){ // Antirebote
  valor = digitalRead(12); //Leemos y almacenamos el valor recibidio en la variable
  }
  digitalWrite(led,HIGH);  //Encendemos el led
}
  while(valor == LOW){ //Si no detecta nada solo leera el valor del sensor IR
  valor = digitalRead(12); //Leemos y almacenamos el valor recibidio en la variable 
  digitalWrite(led,LOW);  //Apagamos el led
  }
}
