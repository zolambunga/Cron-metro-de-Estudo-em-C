/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:11:50 by zombunga          #+#    #+#             */
/*   Updated: 2024/06/12 16:30:45 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cronometro.h"

int	main(void)
{
	iniciar();
	realizar_fase("Fase 1: Estudo de Fundamentos de C\n", FASE_1_TEMPO);
	realizar_fase("Fase 2: Estudo sobre Va_list e Macros\n", FASE_2_TEMPO);
	realizar_fase("Fase 3: Formatação de Strings\n", FASE_3_TEMPO);
	realizar_fase("Fase 4: Implementação da Função Base\n", FASE_4_TEMPO);
	return (0);
}
