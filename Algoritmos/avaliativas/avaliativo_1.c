ALGORITMO cofrinho_atividade_avaliativa
 
VAR 
  INTEIRO: valor_total, q_moedas, sem_m, m_5, m_10, m_25, m_50, m_100; 
 
﻿INICIO 
  ESCREVA("Informe a quantidade de moedas de 5 centavos: "); 
  LEIA(m_5); 
 
  ESCREVA("Informe a quantidade de moedas de 10 centavos: "); 
  LEIA(m_10); 
 
  ESCREVA("Informe a quantidade de moedas de 25 centavos: "); 
  LEIA(m_25); 
 
  ESCREVA("Informe a quantidade de moedas de 50 centavos: "); 
  LEIA(m_50); 
  
  ESCREVA("Informe a quantidade de moedas de 1 real: "); 
  LEIA(m_100); 
 
  sem_m <- 0 ; 
 
  valor_total <- sem_m + m_5 * 0.05 + m_10 * 0.1 + m_25 * 0.25 + m_50 * 0.5 + m_100 * 1 ; 
 
  ESCREVA("O total de moedas economizadas é: ", valor_total, " e você possui ", m_5, " moedas de 5 centavos, ", m_10, " moedas de 10 centavos, ", m_25, " moedas de 25 centavos, ", m_50, " moedas de 50 centavos e ", m_100, " moedas de 1 real."); 
FIM