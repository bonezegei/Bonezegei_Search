/*
  Author: Jofel Batutay
  Date: July 2023

  Usage Sample

  Simple Array keyword Search

  Search the keyword in an arrray and returns its value. The keyword must be unique in the array if the keyword 
  exist multiple times in the array the function will only retun the value of the first keyword

  the Library returns the following data types (int, float, char*)

*/

#include <Bonezegei_Search.h>
//data array
char *data = "device=100 Temperature=78.21  name=Bonezegei Search ; ";

Bonezegei_Search search;

void setup() {
  Serial.begin(115200);
  Serial.println("\nBonezegei Search Usage Sample\n");

  //returns integer Value (param1,param2)
  // param1 = array source
  // param2 = the keyword
  int valueInt = search.getInt(data, "device");
  Serial.print("\"device\": ");
  Serial.println(valueInt);

  //returns float Value
  float valueFLoat = search.getFloat(data, "Temperature");
  Serial.print("\"Temperature\": ");
  Serial.println(valueFLoat);

  //returns the first word of the string
  String valueString1 = search.getString(data, "name");
  Serial.print("\"name\": ");
  Serial.println(valueString1);

  //returns the words of the string until the end character
  // getString(param1,param2,param3)
  // param1 = array source
  // param2 = the keyword
  // param3 = end character
  String valueString2 = search.getString(data, "name", ';');
  Serial.print("\"name\": ");
  Serial.println(valueString2);
}

void loop() {
  // put your main code here, to run repeatedly:
}
