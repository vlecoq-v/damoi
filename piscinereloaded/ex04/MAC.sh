# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 10:47:51 by vlecoq-v          #+#    #+#              #
#    Updated: 2018/11/06 10:51:00 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | sed -n '/ether/ p' | cut -c8-
