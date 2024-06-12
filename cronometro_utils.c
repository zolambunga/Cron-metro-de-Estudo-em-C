/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cronometro_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:12:30 by zombunga          #+#    #+#             */
/*   Updated: 2024/06/12 16:30:34 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cronometro.h"

void	iniciar(void)
{
#ifdef _WIN32
	printf("Cronômetro iniciado. Pressiona Ctrl+BREAK pra sair.\n");
#else
	printf("Cronômetro iniciado. Pressiona Ctrl+C pra sair.\n");
#endif
}

void	realizar_fase(const char *fase, int n)
{
	atualizar(n);
	emitir_som_da_notificacao();
	printf("\033[32m%sconcluída!\n\033[37m", fase);
	getchar();
#ifdef _WIN32
	system(cls);
#else
	system("clear");
#endif
}

void	emitir_som_da_notificacao(void)
{
// essa funcao emite sons coerentes
// ao sistema operacional em que o programa é compilado
#ifdef _WIN32
	PlaySoundA("SystemAsterisk", NULL, SND_ALIAS);
#elif __APPLE__
	system("afplay /System/Library/Sounds/Ping.aiff");
#else
	system("paplay /usr/share/sounds/freedesktop/stereo/alarm-clock-elapsed.oga");
#endif
}

void	atualizar(int n)
{
	for (int i = 0; i <= n; ++i)
	{
		desenhar_barra_progresso((float)i / n);
		sleep(1);
		limpar();
	}
}

void	desenhar_barra_progresso(float progresso)
{
	int	barWidth;
	int	progressWidth;

	printf("Progresso: ");
	barWidth = 30;
	progressWidth = (int)(progresso * barWidth);
	printf("\u2588"); // Bloco sólido à esquerda
	printf("\033[31m");
	for (int i = 1; i < barWidth - 1; ++i)
	{
		if (i < progressWidth)
		{ // bloco com pouca opacidade
			printf("\u2593");
		}
		else
		{ // Bloco claro
			printf("\u2591");
		}
	}
	printf("\u2588"); // Bloco sólido à direita
	printf(" %.2f%%\n", progresso * 100);
}

void	limpar(void)
{
	// aqui move-se o cursor pra linha anterior
	printf("\033[F");
	// Limpar a linha
	printf("\033[K");
}
