#include <iostream>
#include <fstream>
#include "string.h"

bool is_file_exists();
void write_file(std::string text, std::string passwd);
std::string read_file(std::string input);
std::string  encrypt_caesar(std::string text, int key);
std::string decrypt_ceaser(std::string text, int key);



const std::string file_name = "Dosya.txt";

int main()
{
    std::string text;
    std::string pass;

    if (is_file_exists())
    {
        while (true)
        {
            std::cout << "sifre girin : ";  getline(std::cin, pass);
            text = read_file(pass);
            /*if(text == "Invalid password!")
            {
                 std::cout<<text<<std::endl;
            }
            else
            {
                 std::cout<<text<<std::endl;
                 return 0;
            }*/
            std::cout << text << std::endl;
            if (text != "Invalid password!")
                return 0;

        }
    }
    else
    {
        std::cout << "Enter a text: "; getline(std::cin, text);
        std::cout << "Enter a password: "; getline(std::cin, pass);
        std::string encrypted_text = encrypt_caesar(text, text.length());
        std::string encrypted_pass = encrypt_caesar(pass, pass.length());
        write_file(encrypted_text, encrypted_pass);
    }
}
//dosyanın var olup olmadığını kontrol edecek 
bool is_file_exists()
{
    //std::ifstream file;
    //file.open(file_name);
    std::ifstream file(file_name);
    return file.is_open();
}

void write_file(std::string text, std::string passwd)
{
    std::ofstream file(file_name);

    if (!file.is_open())
        return;

    file << text << std::endl;
    file << passwd << std::endl;
    file.close();
}


std::string read_file(std::string input)
{
    std::string text;
    std::string pass;
    std::ifstream file(file_name);

    if (!file.is_open())
        return "Can't open file";

    getline(file, text);
    getline(file, pass);

    file.close();

    if (pass == input)
        return text;

    else
        return "Geçersiz şifre!";
}

std::string  encrypt_caesar(std::string text, int key)
{
    const std::string characters = "ABCDEFGHIJKLMNOPRSTUVYZabcdefghijklmnoprstuvyz";
    std::string encrypted_text = "";
    /*   int a= 'Z';
       std::cout<<a<<std::endl;
       for(char ch : text)
       {
            encrypted_text += ch + key;
       }
  */
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < characters.length(); j++)
        {
            if (text[i] == characters[j])
            {
                encrypted_text += characters[(j + key) % characters.length()];
                break;
            }
        }

    }
    return encrypted_text;

}

// bu islev mantık hatalarıyla doludur. :D
std::string decrypt_ceaser(std::string text, int key)
{
    std::string charachters = "ABCDEFGHIJKLMNOPRSTUVYZabcdefghijklmnoprstuvyz";
    std::string decrypted_text = "";

    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < charachters.length(); j++)
            if (text[i] == charachters[j])
            {
                decrypted_text += charachters[(j - key) % charachters.length()];
                break;
            }
    }
    return decrypted_text;

}
