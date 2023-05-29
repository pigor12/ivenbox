# Sistema de Monitoramento de Condições Ambientais

Este projeto é um sistema embarcado utilizando um ESP32 para monitorar a temperatura e umidade dentro de um recipiente hermético que abriga alimentos. Se a temperatura exceder um valor definido, uma ventoinha de 12V é ativada. Além disso, o sistema monitora se o recipiente está cheio usando um sensor infravermelho de obstáculo. Todas as informações são exibidas para o usuário através de um display LCD 16x2.

## Componentes do Hardware

- ESP32
- Sensor de temperatura e umidade DHT22
- Ventoinha de 12V
- Sensor infravermelho de obstáculo
- Display LCD 16x2 com interface I2C

## Configuração

1. Conecte todos os componentes de hardware ao ESP32;
2. Instale as bibliotecas necessárias para o ESP32 no ambiente do Arduino IDE;
3. Carregue o código do Arduino no ESP32.

## Uso

Após ligar o sistema, a temperatura e umidade atuais, bem como o estado do recipiente (cheio ou vazio), serão exibidos no display LCD. Se a temperatura ultrapassar o limite predefinido, a ventoinha será ativada para resfriar o ambiente.

## Licença

Este projeto está licenciado sob a Licença GNU General Public License v3.0 - veja o arquivo [LICENSE.md](LICENSE.md) para detalhes.

## Contribuições

As contribuições são bem-vindas. Para mudanças importantes, por favor, abra uma issue primeiro para discutir o que você gostaria de mudar.

## Suporte

Se você tiver qualquer problema ou sugestão, por favor, abra uma issue [aqui](https://github.com/pigor12/ivenbox/issues).

## Autores e Agradecimentos

Agradeça às pessoas que contribuíram para o projeto.

---

Este README é um bom ponto de partida, mas sinta-se à vontade para personalizá-lo de acordo com suas necessidades. Você pode incluir capturas de tela do seu projeto, informações adicionais sobre a configuração ou o uso, etc. Lembre-se de que um bom README é fundamental para engajar outras pessoas com o seu projeto, seja elas colaboradores potenciais ou usuários.
