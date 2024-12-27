# Tarefa 1 - Conversor de Unidades em Linguagem C

## Descrição
Este repositório contém o projeto colaborativo de um programa em C para conversão de diversas unidades, desenvolvido como parte da capacitação em Git e GitHub. O objetivo principal é simular um fluxo de trabalho real utilizando versionamento e promover habilidades práticas de colaboração em equipe.

## Funcionalidades
O programa oferece as seguintes conversões:

1. **Unidades de Comprimento**: metro, centímetro, milímetro.  
   *Implementado por*: Mario Vinicius.

2. **Unidades de Massa**: quilograma, grama, tonelada.  
   *Implementado por*: Julierme Chaves.

3. **Unidades de Temperatura**: Celsius, Fahrenheit, Kelvin.  
   *Implementado por*: Emyle.

4. **Unidades de Tempo**: segundos, minutos, horas.  
   *Implementado por*: Mario Vinicius.

5. **Unidades de Armazenamento**: bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB).  
   *Implementado por*: Alexandre.

6. **Unidades de Velocidade** (ainda será implementada): km/h, m/s, mph.  
   *Será implementado por*: Everton.

## Organização do Projeto
- **Líder**: Gerencia o repositório, revisa pull requests e resolve conflitos.
- **Desenvolvedores**: Cada integrante é responsável por uma tarefa específica, como implementar uma conversão, criar a interface ou realizar testes e depuração.

## Estrutura de Branches
Cada desenvolvedor deve criar um branch para sua tarefa no formato: `feature/<nome-da-tarefa>`.

## Fluxo de Trabalho
1. O líder cria o repositório no GitHub.
2. Os desenvolvedores configuram o Git localmente com nome, e-mail e autenticação.
3. Para cada tarefa:
   - Criar uma branch específica.
   - Fazer commits regulares com mensagens descritivas.
   - Criar pull requests ao finalizar a tarefa.
   - Resolver conflitos de merge se necessário.
4. Revisão e aprovação das alterações pelo líder.
5. Integração de todas as partes em um programa funcional.

## Como Executar o Programa
1. Clone este repositório:
   ```bash
   git clone git clone https://github.com/embarcatech-grupo3-subgrupo5/Tarefa-1-Conversor-de-Unidades.git
   ```
2. Acesse o diretório do projeto:
   ```bash
   cd Tarefa-1-Conversor-de-Unidades
   ```
3. Compile o programa:
   ```bash
   gcc -o conversor main.c
   ```
4. Execute o programa:
   ```bash
   ./conversor
   ```
5. Utilize o conversor:
     Siga as instruções exibidas no terminal para selecionar o tipo de conversão desejada e insira os valores conforme solicitado.

7. Encerramento:
     Para sair do programa, selecione a opção correspondente no menu principal.
   
## Contribuição
1. Faça um fork deste repositório.
2. Crie uma branch para sua funcionalidade ou correção:
   ```bash
   git checkout -b feature/<nome-da-tarefa>
   ```
3. Faça as alterações e commits.
4. Envie as alterações para seu fork:
   ```bash
   git push origin feature/<nome-da-tarefa>
   ```
5. Abra um pull request para o repositório principal.

## Checklist de Desenvolvimento
- [ ] Implementar todas as conversões.
- [ ] Escrever comentários no código para melhor entendimento.
- [ ] Garantir commits regulares e mensagens descritivas.
- [ ] Realizar testes básicos para cada funcionalidade.
- [ ] Atualizar este arquivo README.md com instruções de uso.
