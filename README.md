# EcoTrash

[LINK SIMULADOR (Wokwi)](https://wokwi.com/projects/345949790151901780)

**1 INTRODUÇÃO**

Tendo em vista os grandes problemas ecológicos, principalmente na área de descarte de lixos em geral, cada dia que passa a quantidade de lixo descartado pela população só aumenta, trazendo riscos de poluição ambiental e a possível transmissões de doenças infecciosas. Por exemplo, na cidade de São Paulo, em média cada pessoa produz diariamente entre 800 g a 1 kg de lixo diariamente, ou de 4 a 6 litros de dejetos. Por dia são geradas 15.000 toneladas de lixo, isso corresponde a 3.750 caminhões carregados diariamente. Em um ano esses caminhões enfileirados cobririam o trajeto entre a cidade de São Paulo e Nova Iorque, ida e volta.

A questão de aumento do lixo é diretamente ligada ao desenvolvimento que estamos vivenciando, consumimos muitas vezes coisas que não são necessárias. Nossa produção de lixo gerado é muito maior que a de 40 anos atrás devido o aumento da população, globalização e inovações tecnológicas.

O projeto tem em vista também diminuir os gases vapores e material particulado que são produzidos por caminhões de coleta de lixo, temos grande problema com emissão de gases de veículos a combustão, alterando diretamente os problemas com o clima, camada de ozônio, afetando nosso sistema respiratório e causando chuva ácida. Quando há grande emissão de poluição nas cidades, normalmente em grandes metrópoles, existem os fenômenos naturais como a inversão térmica que deixa a população ainda mais tempo exposta a esses gases emitidos.

O projeto será desenvolvido para ser implementado em lixeiras das empresas de coleta de lixo. Será implementado uma balança, dois sensores ultrassónicos, uma tampa com trava automática e um Arduino com conexão à internet.

A balança será utilizada para verificar o quão pesada está a lixeira, sendo assim o sistema limitará quantos quilos ela pode suportar até que a coleta seja acionada.

Caso a quantidade de lixo chegue ao primeiro sensor ultrassónico e o peso da lixeira ainda não tenha sido atingido, será enviado a mensagem para a empresa de coleta de lixo notificando que aquela lixeira em específico (identificação por número serie) está pronta para ser retirada.

Um segundo sensor e a tampa com trava trabalham juntas, quando o lixo atingir o segundo sensor ultrassónico e a coleta não tenha chegado, a tampa do lixo irá travar, impossibilitando que o usuário coloque mais lixo em seu interior.

O Arduino será conectado na internet pois enviará informações para a empresa coletora de lixo, informando o número de série da lixeira que precisa ser esvaziada.

O funcionamento do sistema Eco Trash, irá beneficiar e amenizar os problemas relacionados a quantidade de lixos espalhados pelas ruas, reduzir a quantidade de gases e materiais particulados que saem dos caminhões de coleta movidos a combustão, pois não precisarão comparecer ao local da lixeira sem necessidade.

Com menos desses gases tóxicos circulando pelo ar, ajudará diretamente no clima e evitará a chuva ácida que é causada pela queima de combustíveis que reage com o oxigênio do ar e o vapor da água transformando-se em ácidos que são depositados na superfície terrestre através das precipitações. Desta maneira, também terá impactos positivos em relação à saúde respiratória da população.

**2 REVISÃO DE LITERATURA**

Os próximos tópicos são para consolidar o projeto, onde será explicado e listado todos os itens utilizados no Eco Trash.

**2.1 ARDUINO**

Arduino, visto na figura, é uma plataforma de prototipagem eletrônica de hardware livre de placa única, projetada com o microcontrolador Atmel AVR com suporte de entrada/saída embutido, uma linguagem de programação padrão, a qual origem essencialmente em C/C++

![This is an image](https://github.com/IvanSultano/EcoTrash/blob/main/Arduino.png)

**2.2 CÉLULA DE CARGA**

Mecanicamente a célula de carga é composto por uma ponte resistiva que altera sua resistência conforme o peso é aplicado. Eletricamente quando a célula de peso, visto na figura, é aplicado determinado força, ela envia uma tensão ao microcontrolador, conforme o peso a tensão de saída irá variar.

![This is an image](https://github.com/IvanSultano/EcoTrash/blob/main/CeluladeCarga.png)

**2.3 SENSOR ULTRASSÔNICO**

Parecido com o sonar dos morcegos, o sistema do sensor ultrassônico, mostrado na figura, tem como princípio de funcionamento de emissão de uma onda sonora de alta frequência. O objeto a ser detectado resulta em um eco, que é convertido em sinais elétricos.

![This is an image](https://github.com/IvanSultano/EcoTrash/blob/main/Ultrassonico.png)

**2.4 SOLENOIDE ELETROIMÃ**

O solenoide ilustrado na figura, são fontes de campo magnético formadas por enrolamentos de fios condutores de energia elétrica, seu formato é cilíndrico e uniforme. Quando energizados com uma corrente elétrica, passa a funcionar como eletroímã, produzido por um campo magnético constante em seu interior.

![This is an image](https://github.com/IvanSultano/EcoTrash/blob/main/Eletroima.png)
