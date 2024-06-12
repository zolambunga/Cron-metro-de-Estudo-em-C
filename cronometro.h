/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cronometro.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:12:16 by zombunga          #+#    #+#             */
/*   Updated: 2024/06/12 16:30:40 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIMBOLO
# define SIMBOLO
# include <ncurses.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <unistd.h>

// Tempo pra cada fase do cronograma em segundos
# define FASE_1_TEMPO 20
// coloquei 20 segundos pra teste podes trocar pra 600 que sao 10 minutos
# define FASE_2_TEMPO 1200 // 1200s sao 20 min
# define FASE_3_TEMPO 1800 // 1800s sao 30 min
# define FASE_4_TEMPO 1800 // 1800s sao 30 min

void	emitir_som_da_notificacao(void);
void	desenhar_barra_progresso(float progresso);
void	limpar(void);
void	iniciar(void);
void	realizar_fase(const char *fase, int n);
void	atualizar(int n);

#endif
