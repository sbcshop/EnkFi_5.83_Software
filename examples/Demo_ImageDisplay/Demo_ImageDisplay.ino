/* Onboard E-paper Display Demo */
#include "EnkFi_5in83.h"
#include "imgData.h"

void setup()
{
  Serial.begin(115200); // initialize Serial communication
  Serial.print("EnkFi 5.83\" Display Demo");
  ENKFI_Config(); // initialize pin configuration for E-paper

  Serial.print("E-paper Init and Clear");
  ENKFI_Init();
  ENKFI_Clear();
  delay(500);

  Serial.print("Display Image");
  ENKFI_Display_Black_Red(blackImg, redImg);
  delay(3000);

  ENKFI_Clear();
  ENKFI_Display_Black(HOFFER_IMG);
  delay(3000);

  ENKFI_Clear();
  ENKFI_Display_Red(FRIDAY_IMG);
  delay(2000);

  ENKFI_Clear();
  ENKFI_Display_Red(HOFFER_IMG2);
  delay(2000);
  
  //ENKFI_Clear();
  Serial.print("Sleep...\r\n");
  ENKFI_Sleep();
}

void loop()
{
  delay(50);
}
