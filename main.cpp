#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
   std::string answer {"������"};

   std::string slovo{};
   
   do
   {
      std::cout << "�������� �����:   ";
      std::getline(std::cin, slovo);
            if (slovo!= answer)
            std::cout << "�����������" << std::endl;
   } while (slovo.compare (answer));
   
    std::cout << "���������! �� ��������! ���������� ����� � ������" << std::endl;
    std::cout << std::endl;
        
      return 0;
}