float G3 = 196.00;
float D4 = 293.66;
float F4 = 349.23;
float G4 = 392.00;
float A4bemol = 415.30;
float A4normal = 440.00;
float B4 = 493.88;
float B4bemol = 466.16;
float C5 = 523.25;
float D5 = 587.33;
float E5 = 659.25;
float E5bemol = 622.25;
float F5 = 698.46;
float F5sharp = 739.99;
float G5 = 783.99;
float G5sharp = 830.61;
float A5normal = 880.00;
float A5sharp = 932.33;
float B5 = 987.77;
float C6sharp = 1108.73;
float D6 = 1174.66;


void setup()
{
  pinMode(2, OUTPUT); //Buzzer pin
}

void loop()
{
  for(int i=0; i<2; i++){
    //Primeiro Compasso
    tone(2, F4, 800);
    delay(800);
    tone(2, B4bemol, 200);
    delay(200);
    tone(2, D5, 200);
    delay(200);
    //Segundo Compasso
    tone(2, C5, 800);
    delay(800);
    tone(2, A4bemol, 200);
    delay(200);
    tone(2, G5, 200);
    delay(200);
    //Terceiro Compasso
    tone(2, F5, 1200);
    delay(1200);
    //Quarto Compasso
    delay(200);
    tone(2, A4bemol, 200);
    delay(200);
    tone(2, E5bemol, 200);
    delay(200);
    tone(2, F5, 200);
    delay(200);
    tone(2, G5, 200);
    delay(200);
    tone(2, E5bemol, 200);
    delay(200);
    //Quinto Compasso
    tone(2, F5, 600);
    delay(600);
    tone(2, E5bemol, 600);
    delay(600);
    //Sexto Compasso
    tone(2, D5, 600);
    delay(600);
    tone(2, D5, 200);
    delay(200);
    tone(2, B4bemol, 200);
    delay(200);
    tone(2, D5, 200);
    delay(200);
    //Sétimo Compasso
    tone(2, C5, 1200);
    delay(1200);
  }
  //Décimo Quinto Compasso
  tone(2, A5normal, 1200);
  delay(1200);
  //Décimo Sexto Compasso
  tone(2, F5sharp, 800);
  delay(800);
  tone(2, D5, 200);
  delay(200);
  tone(2, B5, 200);
  delay(200);
  //Décimo Sétimo Compasso
  tone(2, A5normal, 1200);
  delay(1200);
  //Décimo Oitavo Compasso
  tone(2, F5sharp, 1200);
  delay(1200);
  //Décimo Nono Compasso
  tone(2, A5normal, 600);
  delay(600);
  tone(2, B5, 600);
  delay(600);
  //Vigésimo Compasso
  tone(2, C6sharp, 600);
  delay(600);
  tone(2, B5, 600);
  delay(600);
  //Vigésimo Primeiro e Vigéssimo Segundo Compasso
  tone(2, A5normal, 200);
  delay(200);
  tone(2, B4, 200);
  delay(200);
  tone(2, A5normal, 200);
  delay(200);
  tone(2, G5, 1800);
  delay(1800);
  //Vigésimo Terceiro Compasso
  tone(2, F5, 800);
  delay(800);
  tone(2, B4bemol, 200);
  delay(200);
  tone(2, D5, 200);
  delay(200);
  //Vigésimo Quarto Compasso
  tone(2, C5, 800);
  delay(800);
  tone(2, A4bemol, 200);
  delay(200);
  tone(2, G5, 200);
  delay(200);
  //Vigésimo Quinto Compasso
  tone(2, F5, 1200);
  delay(1200);
  //Vigésimo Sexto Compasso
  delay(200);
  tone(2, A4bemol, 200);
  delay(200);
  tone(2, E5bemol, 200);
  delay(200);
  tone(2, F5, 200);
  delay(200);
  tone(2, G5, 200);
  delay(200);
  tone(2, E5bemol, 200);
  delay(200);
  //Vigésimo Sétimo Compasso
  tone(2, F5, 600);
  delay(600);
  tone(2, E5bemol, 600);
  delay(600);
  //Vigésimo Oitavo Compasso
  tone(2, D5, 600);
  delay(600);
  tone(2, D5, 200);
  delay(200);
  tone(2, B4bemol, 200);
  delay(200);
  tone(2, D5, 200);
  delay(200);
  //Vigésimo Nono Compasso
  tone(2, C5, 1200);
  delay(1200);
  //Trigésimo Compasso
  tone(2, F5sharp, 1200);
  delay(1200);
  //Trigésimo Primeiro Compasso
  tone(2, E5bemol, 800);
  delay(800);
  tone(2, B4bemol, 200);
  delay(200);
  tone(2, B4, 200);
  tone(2, G5sharp, 200);
  delay(200);
  //Trigésimo Segundo Compasso
  tone(2, F5sharp, 1200);
  delay(1200);
  //Trigésimo Terceiro Compasso
  tone(2, E5bemol, 1200);
  delay(1200);
  //Trigésimo Quarto Compasso
  tone(2, F5sharp, 600);
  delay(600);
  tone(2, G5sharp, 600);
  delay(600);
  //Trigésimo Quinto Compasso
  tone(2, A5sharp, 600);
  delay(600);
  tone(2, G5sharp, 600);
  delay(600);
  //Trigésimo Sexto e Trigéssimo Sétimo Compasso
  tone(2, F5sharp, 200);
  delay(200);
  tone(2, B4, 200);
  delay(200);
  tone(2, F5sharp, 200);
  delay(200);
  tone(2, E5, 1800);
  delay(1800);
  //Trigésimo Oitavo Compasso
  tone(2, E5, 800);
  delay(800);
  tone(2, D5, 200);
  delay(200);
  tone(2, C5, 200);
  delay(200);
  //Trigésimo Nono Compasso
  tone(2, D5, 800);
  delay(800);
  tone(2, A4, 200);
  delay(200);
  tone(2, F5sharp, 200);
  delay(200);
  //Quadragésimo e Quadragésimo Primeiro Compasso
  tone(2, E5, 200);
  delay(400);
  tone(2, C5, 200);
  delay(200);
  tone(2, D5, 1800);
  delay(1800);
  //Quadragésimo Segundo Compasso
  tone(2, E5, 600);
  delay(600);
  tone(2, F5sharp, 600);
  delay(600);
  //Quadragésimo Terceiro Compasso
  tone(2, G5, 600);
  delay(600);
  tone(2, F5sharp, 600);
  delay(600);
  //Quadragésimo Quarto e Quadragésimo Quinto Compasso
  tone(2, F5sharp, 200);
  delay(200);
  tone(2, E5, 200);
  delay(200);
  tone(2, C5, 200);
  delay(200);
  tone(2, D5, 800);
  delay(800);
  tone(2, A5normal, 200);
  delay(200);
  tone(2, D6, 200);
  delay(1000);
  //Quadragésimo Sexto
  tone(2, D4, 800);
  delay(800);
  tone(2, G4, 200);
  delay(200);
  tone(2, B4, 200);
  delay(200);
  //Quadragésimo Sétimo
  tone(2, A4normal, 800);
  delay(800);
  tone(2, F4, 200);
  delay(200);
  tone(2, E5, 200);
  delay(200);
  //Quadragésimo Oitavo
  tone(2, D5, 1200);
  delay(1200);
  //Quadragésimo Nono
  delay(200);
  tone(2, F4, 200);
  delay(200);
  tone(2, C5, 200);
  delay(200);
  tone(2, D5, 200);
  delay(200);
  tone(2, E5, 200);
  delay(200);
  tone(2, C5, 200);
  delay(200);
  //Quintagésimo
  tone(2, D5, 600);
  delay(600);
  tone(2, E5, 600);
  delay(600);
  //Quintagésimo Primeiro
  tone(2, F5, 600);
  delay(600);
  tone(2, E5bemol, 600);
  delay(600);
  //Quintagésimo Segundo
  tone(2, G5, 600);
  delay(600);
  tone(2, G3, 200);
  delay(200);
  tone(2, G3, 200);
  delay(200);
  tone(2, G3, 200);
  delay(200);
  //Quintagésimo Terceiro
  tone(2, G3, 200);
  delay(200);
  delay(1000);
  
  //Acabou
  delay(10000);
  
}
