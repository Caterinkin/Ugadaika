#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
   std::string answer {"малина"};

   std::string slovo{};
   
   do
   {
      std::cout << "Угадайте слово:   ";
      std::getline(std::cin, slovo);
            if (slovo!= answer)
            std::cout << "Неправильно" << std::endl;
   } while (slovo.compare (answer));
   
    std::cout << "Правильно! Вы победили! Загаданное слово — малина" << std::endl;
    std::cout << std::endl;
        
      return 0;
}
