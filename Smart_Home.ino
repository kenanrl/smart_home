
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial //digunakan untuk monitor blynk di serial


#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk

char auth[] = "tSz8JDVsEn7IgMBustPZRrcZCrEoHG1N"; //token yang dikirim dari blynk ke email masing masing

char ssid[] = "@wifi.id";
char pass[] = "harejeng";

void setup() // fungsi utama, dijalankan sekali
{
  // Debug console
  Serial.begin(9600); //untuk monitor di serial print

  Blynk.begin(auth, ssid, pass); // menjalankan blynk sesuai token, wifi, dan passwordnya
  
}

void loop() // ifungsi utama dijalankan berulang kali
{
  Blynk.run(); // perintah untuk menjalankan blynk 
}
