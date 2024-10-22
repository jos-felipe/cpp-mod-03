/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:00:25 by josfelip          #+#    #+#             */
/*   Updated: 2024/10/22 16:00:31 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    // Criando uma instância de ClapTrap
    ClapTrap claptrap("CT-42");

    // Testando o ataque
    claptrap.attack("Enemy-1");

    // Testando o recebimento de dano
    claptrap.takeDamage(5);

    // Testando a reparação
    claptrap.beRepaired(3);

    // Testando quando o ClapTrap fica sem energia
    claptrap.attack("Enemy-2");
    claptrap.attack("Enemy-3");  // Energia insuficiente

    return 0;
}
