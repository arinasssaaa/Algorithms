#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Создание хеш-таблицы
    std::unordered_map<std::string, int> hashTable;
    
    // Добавление элементов
    hashTable["apple"] = 5;
    hashTable["banana"] = 3;
    hashTable["orange"] = 7;
    
    // Получение значения
    std::cout << "Apple count: " << hashTable["apple"] << std::endl;
    
    // Проверка наличия ключа
    if (hashTable.find("banana") != hashTable.end()) {
        std::cout << "Banana exists!" << std::endl;
    }
    
    // Итерация по элементам
    for (const auto& pair : hashTable) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    
    return 0;
}
