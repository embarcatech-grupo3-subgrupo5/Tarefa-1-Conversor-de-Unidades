/**
 * @brief Celsius para Fahrenheit
 * @param celsius Entrada com a temperatura em celsius
 */
double celsius_para_fahrenheit(double celsius);

/**
 * @brief Celsius para Kelvin
 * @param celsius Entrada com a temperatura em celsius
 */
double celsius_para_kelvin(double celsius);

/**
 * @brief Fahrenheit para Celsius
 * @param fahrenheit Entrada com a temperatura em fahrenheit
 */
double fahrenheit_para_celsius(double fahrenheit);

/**
 * @brief Fahrenheit para Kelvin
 * @param fahrenheit Entrada com a temperatura em fahrenheit
 */
double fahrenheit_para_kelvin(double fahrenheit);

/**
 * @brief Kelvin para Celsius
 * @param kelvin Entrada com a temperatura em kelvin
 */
double kelvin_para_celsius(double kelvin);

/**
 * @brief Kelvin para Fahrenheit
 * @param kelvin Entrada com a temperatura em kelvin
 */
double kelvin_para_fahrenheit(double kelvin);

////////////////////////////////////////////////////

/**
 * @brief Grama para Kilograma
 * @param grama Entrada com a massa em gramas
 */
double grama_para_quilograma(double grama);

/**
 * @brief Kilograma para Grama
 * @param kilograma Entrada com a massa em kilogramas
 */
double quilograma_para_grama(double quilograma);

/**
 * @brief Kilograma para Tonelada
 * @param kilograma Entrada com a massa em kilograma
 */
double quilograma_para_tonelada(double quilograma);

/**
 * @brief Tonelada para Kilograma
 * @param tonelada Entrada com a massa em tonelada
 */
double tonelada_para_quilograma(double tonelada);

/**
 * @brief Grama para Tonelada
 * @param grama Entrada com a massa em grama
 */
double grama_para_tonelada(double grama);

/**
 * @brief Tonelada para Grama
 * @param tonelada Entrada com a massa em tonelada
 */
double tonelada_para_grama(double tonelada);

/////////////////////////////////////////////////

/**
 * @brief Segundos para Minutos
 * @param segundos Entrada com o tempo em segundos
*/
double segundos_para_minutos(double s);

/**
 * @brief Segundos para Horas
 * @param segundos Entrada com o tempo em segundos
*/
double segundos_para_horas(double s);

/**
 * @brief Minutos para Segundos
 * @param minutos Entrada com o tempo em minutos
*/
double minutos_para_segundos(double m);

/**
 * @brief Minutos para Horas
 * @param minutos Entrada com o tempo em minutos
*/
double minutos_para_horas(double m);

/**
 * @brief Horas para Segundos
 * @param horas Entrada com o tempo em horas
*/
double horas_para_segundos(double h);

/**
 * @brief Horas para Minutos
 * @param horas Entrada com o tempo em horas
*/
double horas_para_minutos(double h);

/**
 * @brief Converte entre diferentes unidades de armazenamento.
 * @param valor Valor a ser convertido.
 * @param tipo_original Tipo da unidade original (1 = Bits, 2 = Bytes, ..., 6 = Terabytes).
 * @param tipo_convertido Tipo da unidade convertida (1 = Bits, 2 = Bytes, ..., 6 = Terabytes).
 */
double converter_armazenamento(double valor, int tipo_original, int tipo_convertido);
