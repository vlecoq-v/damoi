# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 10:47:51 by vlecoq-v          #+#    #+#              #
#    Updated: 2018/11/07 14:51:16 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | sed -n '/ether/ p' | cut -c8- | rev | cut -c2- | rev