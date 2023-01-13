
#include <Ethernet.h> // Inclut la bibliothèque Ethernet

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED }; // Adresse MAC de l'Arduino

void setup() {
  Ethernet.begin(mac); // Initialise l'Ethernet avec l'adresse MAC
  Serial.begin(9600); 

  // Affiche l'adresse IP et l'adresse MAC de la carte Arduino
  Serial.print("Adresse IP : ");
  Serial.println(Ethernet.localIP());
  //Serial.print("Adresse MAC : ");
  //Serial.println(Ethernet.macAddress());
}

void loop() {
  
}
