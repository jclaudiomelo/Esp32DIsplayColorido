#include <SPI.h>
#include <TFT_eSPI.h>  // Biblioteca específica do hardware

#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 240

// Definindo as cores
#define TFT_BLACK       0x0000      /*   0,   0,   0 */
#define TFT_NAVY        0x000F      /*   0,   0, 128 */
#define TFT_DARKGREEN   0x03E0      /*   0, 128,   0 */
#define TFT_DARKCYAN    0x03EF      /*   0, 128, 128 */
#define TFT_MAROON      0x7800      /* 128,   0,   0 */
#define TFT_PURPLE      0x780F      /* 128,   0, 128 */
#define TFT_OLIVE       0x7BE0      /* 128, 128,   0 */
#define TFT_LIGHTGREY   0xD69A      /* 211, 211, 211 */
#define TFT_DARKGREY    0x7BEF      /* 128, 128, 128 */
#define TFT_BLUE        0x001F      /*   0,   0, 255 */
#define TFT_GREEN       0x07E0      /*   0, 255,   0 */
#define TFT_CYAN        0x07FF      /*   0, 255, 255 */
#define TFT_RED         0xF800      /* 255,   0,   0 */
#define TFT_MAGENTA     0xF81F      /* 255,   0, 255 */
#define TFT_YELLOW      0xFFE0      /* 255, 255,   0 */
#define TFT_WHITE       0xFFFF      /* 255, 255, 255 */

TFT_eSPI tft = TFT_eSPI();  // Invoca a biblioteca personalizada

void setup(void) {
  Serial.begin(9600);        // Inicializa a comunicação serial
  tft.init();                // Inicializa o display

  tft.setRotation(3); // Ajusta a rotação conforme necessário

  tft.invertDisplay(true);  // Ativa a inversão de cores

  // Limpa a tela
  tft.fillScreen(TFT_BLACK);

  // Desenha retângulos e escreve o texto em cada cor
  int y = 0;
  int colorHeight = SCREEN_HEIGHT / 16; // Divida a tela em 16 segmentos

  // Array com as cores e os nomes
  struct ColorText {
    uint16_t color;
    String text;
    uint16_t textColor;  // Cor do texto
  };
  ColorText colorTexts[] = {
    {TFT_BLACK, "Preto", TFT_WHITE},
    {TFT_NAVY, "Marinho", TFT_WHITE},
    {TFT_DARKGREEN, "Verde Escuro", TFT_WHITE},
    {TFT_DARKCYAN, "Ciano Escuro", TFT_WHITE},
    {TFT_MAROON, "Marrom", TFT_WHITE},
    {TFT_PURPLE, "Roxo", TFT_WHITE},
    {TFT_OLIVE, "Oliva", TFT_WHITE},
    {TFT_LIGHTGREY, "Cinza Claro", TFT_BLACK},
    {TFT_DARKGREY, "Cinza Escuro", TFT_WHITE},
    {TFT_BLUE, "Azul", TFT_WHITE},
    {TFT_GREEN, "Verde", TFT_BLACK},
    {TFT_CYAN, "Ciano", TFT_BLACK},
    {TFT_RED, "Vermelho", TFT_WHITE},
    {TFT_MAGENTA, "Magenta", TFT_WHITE},
    {TFT_YELLOW, "Amarelo", TFT_BLACK},
    {TFT_WHITE, "Branco", TFT_BLACK}
  };

  for (int i = 0; i < 16; i++) {
    tft.fillRect(0, y, SCREEN_WIDTH, colorHeight, colorTexts[i].color);
    
    // Configura o cursor para o centro do retângulo
    tft.setCursor(10, y + colorHeight / 2 - 8, 2); // Ajuste a posição do cursor
    
    tft.setTextSize(1);  // Define o tamanho do texto
    tft.setTextColor(colorTexts[i].textColor);  // Define a cor do texto
    tft.println(colorTexts[i].text);
    
    y += colorHeight;
  }

  delay(2000); // Atraso de 2 segundos
}

void loop() {
 
}