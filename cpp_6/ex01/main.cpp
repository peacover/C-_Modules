/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:24:39 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/05 17:45:32 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Data
{
    
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data        *data = new Data;
    uintptr_t   ret_ser;
    Data*       ret_des;
    
    std::cout << data << std::endl;
    ret_ser = serialize(data);
    ret_des = deserialize(ret_ser);
    std::cout << ret_des << std::endl;
}