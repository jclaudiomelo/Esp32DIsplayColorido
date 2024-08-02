// ST7789 Display 240 x 240 sem linha de seleção de chip, configuração 24 copiada e renomeada

#define ST7789_DRIVER      // Configurar todos os registros

#define TFT_WIDTH  240
#define TFT_HEIGHT 240

#define TFT_RGB_ORDER TFT_RGB // Ordem das cores Vermelho-Verde-Azul
//#define TFT_RGB_ORDER TFT_BGR // Ordem das cores Azul-Verde-Vermelho

//#define TFT_INVERSION_ON
//#define TFT_INVERSION_OFF

// // Definindo as cores
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
#define TFT_ORANGE      0xFD20
#define TFT_GREENYELLOW 0xAFE5
#define TFT_PINK        0xF81F

// Configuração DSTIKE stepup
#define TFT_DC    23
#define TFT_RST   32
#define TFT_MOSI  26
#define TFT_SCLK  27

// Configuração genérica do ESP32
#define TFT_MISO  19
#define TFT_MOSI  23
#define TFT_SCLK  18
#define TFT_CS    -1 // Não conectado
#define TFT_DC    2
#define TFT_RST   4  // Conecte a reinicialização para garantir que a tela seja inicializada

// Para NodeMCU – use números de pinos no formato PIN_Dx onde Dx é a designação do pino NodeMCU
//#define TFT_CS   -1      // Definir como não usado
//#define TFT_DC   PIN_D1  // Pino de controle de comando de dados
//#define TFT_RST  PIN_D4  // Pino de reinicialização TFT (pode se conectar ao NodeMCU RST, veja a próxima linha)
//#define TFT_RST  -1    // Pino de reinicialização TFT conectado ao NodeMCU RST, deve adicionar 10K pull down ao TFT SCK

#define LOAD_GLCD   // Fonte 1. A fonte original Adafruit de 8 pixels precisa de ~1820 bytes em FLASH
#define LOAD_FONT2  // Fonte 2. Fonte pequena de 16 pixels de altura, precisa de ~3534 bytes em FLASH, 96 caracteres
#define LOAD_FONT4  // Fonte 4. Fonte média de 26 pixels de altura, precisa de ~5848 bytes em FLASH, 96 caracteres
#define LOAD_FONT6  // Fonte 6. Fonte grande de 48 pixels, precisa de ~2666 bytes em FLASH, apenas caracteres 1234567890:-.apm
#define LOAD_FONT7  // Fonte 7. Fonte de 7 segmentos de 48 pixels, precisa de ~2438 bytes em FLASH, apenas caracteres 1234567890:.
#define LOAD_FONT8  // Fonte 8. A fonte grande de 75 pixels precisa de ~3256 bytes em FLASH, apenas caracteres 1234567890:-.
//#define LOAD_FONT8N // Fonte 8. Alternativa à fonte 8 acima, um pouco mais estreita, para que 3 dígitos caibam em um TFT de 160 pixels
#define LOAD_GFXFF  // FreeFonts. Inclua acesso às 48 Adafruit_GFX fontes gratuitas FF1 a FF48 e fontes personalizadas

#define SMOOTH_FONT

#define SPI_FREQUENCY  40000000
#define SPI_READ_FREQUENCY  20000000

//#define SPI_TOUCH_FREQUENCY  2500000 // Defina isso se estiver usando uma tela sensível ao toque

#define SUPPORT_TRANSACTIONS
