/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:38:44 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/14 21:20:27 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int main()
{
    std::string s1,s2;
    std::string str;
    std::string strh;
    std::string fin_name;
    size_t j, flag = 0;
    size_t n = 0,from = 0;
    std::cout<< "Enter s1:";
    std::cin>> s1;
    std::cout<< "Enter s2:";
    std::cin>> s2;
    std::cout<< "Enter filename:";
    std::cin>> fin_name;
    std::ifstream fin(fin_name);
    std::ofstream fout("output.txt");
    if (fin.fail()){
        std::cout<< "Incorrect input file\n";
        return 1;
    }
    while (!fin.eof()){
        getline(fin,strh);
        str += strh;
        if (!fin.eof()){
            str += '\n';
        }
    }
    while ((n = str.find(s1, from)) != std::string::npos) {
        from = n + s1.size();        
        j = 0;
        for (size_t i = n; i < n + s1.size();i++){
            if (s1[j] == str[i]){
                if (j == s1.size() -1){
                    flag =1;
                }
                j++;
                continue;
            }
            else{
                break;
            }
        }
        if (flag == 1){
            str.erase(n, s1.size());
            str.insert(n,s2);
            flag = 0;
        }
        
    }
    fin.close();
    fout<<str;
    
    fout.close();
    return 0;
}