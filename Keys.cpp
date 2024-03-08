#include <Windows.h>
#include <iostream>
#include <vector>


void sendKey(char key) {
    // Создаем структуру INPUT для отправки данных о клавиатурном вводе
    INPUT input = { 0 };

    // Устанавливаем тип входных данных как клавиатурный ввод
    input.type = INPUT_KEYBOARD;

    // Получаем код клавиши Virtual-Key, соответствующий символу 'key'
    input.ki.wVk = VkKeyScanA(key);

    // Отправляем сообщение о нажатии клавиши
    SendInput(1, &input, sizeof(INPUT));

    // Пауза для создания задержки между нажатием и отпусканием клавиши
    Sleep(100);

    // Устанавливаем флаг KEYEVENTF_KEYUP для отпускания клавиши
    input.ki.dwFlags = KEYEVENTF_KEYUP;

    // Отправляем сообщение об отпускании клавиши
    SendInput(1, &input, sizeof(INPUT));
}

//Предметы
void sendMouseWheelDown() {
    // Создаем структуру INPUT для отправки данных о мыши
    INPUT input = { 0 };

    // Устанавливаем тип входных данных как мышиное действие
    input.type = INPUT_MOUSE;

    // Устанавливаем флаг для сообщения о прокрутке колесика мыши
    input.mi.dwFlags = MOUSEEVENTF_WHEEL;

    // Устанавливаем данные прокрутки - отрицательное значение для прокрутки вниз
    input.mi.mouseData = -WHEEL_DELTA;

    // Отправляем сообщение о прокрутке колесика мыши
    SendInput(1, &input, sizeof(INPUT));
}

void sendMouseWheelUP() {
    // Создаем структуру INPUT для отправки данных о мыши
    INPUT input = { 0 };

    // Устанавливаем тип входных данных как мышиное действие
    input.type = INPUT_MOUSE;

    // Устанавливаем флаг для сообщения о прокрутке колесика мыши
    input.mi.dwFlags = MOUSEEVENTF_WHEEL;

    // Устанавливаем данные прокрутки  значение для прокрутки вверх
    input.mi.mouseData = +WHEEL_DELTA;

    // Отправляем сообщение о прокрутке колесика мыши
    SendInput(1, &input, sizeof(INPUT));
}

void sendMouse5() {
    INPUT input[2] = { 0 };

    // Устанавливаем тип входных данных как мышинное действие
    input[0].type = INPUT_MOUSE;

    // Устанавливаем флаг для нажатия клавиши Mouse5 (XBUTTON2)
    input[0].mi.dwFlags = MOUSEEVENTF_XDOWN;
    input[0].mi.mouseData = XBUTTON2; // Константа для Mouse5

    // Отправляем сообщение о нажатии клавиши Mouse5
    SendInput(1, &input[0], sizeof(INPUT));

    // Подготавливаем сообщение об отпускании клавиши Mouse5
    input[1] = input[0]; // Копируем данные из первого INPUT
    input[1].mi.dwFlags = MOUSEEVENTF_XUP; // Устанавливаем флаг отпускания клавиши Mouse5

    // Отправляем сообщение об отпускании клавиши Mouse5
    SendInput(1, &input[1], sizeof(INPUT));
}

void sendMouse4() {
    INPUT input[2] = { 0 };

    // Устанавливаем тип входных данных как мышинное действие
    input[0].type = INPUT_MOUSE;

    // Устанавливаем флаг для нажатия клавиши Mouse5 (XBUTTON2)
    input[0].mi.dwFlags = MOUSEEVENTF_XDOWN;
    input[0].mi.mouseData = XBUTTON1; // Константа для Mouse5

    // Отправляем сообщение о нажатии клавиши Mouse5
    SendInput(1, &input[0], sizeof(INPUT));

    // Подготавливаем сообщение об отпускании клавиши Mouse5
    input[1] = input[0]; // Копируем данные из первого INPUT
    input[1].mi.dwFlags = MOUSEEVENTF_XUP; // Устанавливаем флаг отпускания клавиши Mouse5

    // Отправляем сообщение об отпускании клавиши Mouse5
    SendInput(1, &input[1], sizeof(INPUT));
}


void mouseC() {
    std::vector<char> keys = {'c'};

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void mouseV() {
    std::vector<char> keys = { 'v' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void mouseN() {
    std::vector<char> keys = { 'n' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void final() {
    std::vector<char> keys = { 'i' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}



//Скилы 
void coldSnap() {
    std::vector<char> keys = { 'q', 'q', 'q', 'r', 'f' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void ghostWalk() {
    std::vector<char> keys = { 'q', 'q', 'w', 'r', 'f' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void iceWall() {
    std::vector<char> keys = { 'q', 'q', 'e', 'r', 'f' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}



void emp() {
    std::vector<char> keys = { 'w', 'w', 'w', 'r', 'f'  };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void tornado() {
    std::vector<char> keys = { 'w', 'w', 'q', 'r', 'f' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void alacrity() {
    std::vector<char> keys = { 'w', 'w', 'e', 'r', 'f' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void deafeningDlast() {
    std::vector<char> keys = { 'w', 'w', 'q', 'r', 'f' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}


void sunStrike() {
    std::vector<char> keys = { 'e', 'e', 'e', 'r', 'f' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void forgeSpirit() {
    std::vector<char> keys = { 'e', 'e', 'q', 'r', 'f' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}

void chaosMeteor() {
    std::vector<char> keys = { 'e', 'e', 'w', 'r', 'f' };

    for (int i = 0; i < keys.size(); ++i) {
        char key = keys[i];
        sendKey(key);
    }
}




int main() {

    Sleep(7000);
    iceWall();
    Sleep(200);
    sendMouseWheelDown();
    Sleep(200);
    forgeSpirit();
    Sleep(200);
    coldSnap();
    Sleep(200);

    sendMouseWheelUP();
    Sleep(200);
    sendMouse4();
    Sleep(200);
    mouseC();
    Sleep(200);
    sendMouse5();
    Sleep(200);
    tornado();
                        Sleep(2500);                ////
    sendMouseWheelUP();
    Sleep(200);
    //sendMouseWheelDown();
    //Sleep(200);
    emp();
    Sleep(200);
    sunStrike();
    Sleep(250);
    chaosMeteor();
    Sleep(200);
    sendMouse5();
    Sleep(200);
    deafeningDlast();
    Sleep(200);

    mouseV();                       ///

    Sleep(200);
    mouseC();
    Sleep(200);
    sendMouse5();
    Sleep(200);
    sendMouseWheelDown();
    Sleep(200);
    sendMouse4();
    Sleep(200);
    sunStrike();
    Sleep(200);
    sunStrike();
    Sleep(200);
    chaosMeteor();
    Sleep(200);
    sendMouseWheelUP();
    Sleep(200);
    deafeningDlast();
    Sleep(200);
    mouseC();
    Sleep(200);
    sendMouseWheelDown();
    Sleep(200);
    sendMouse5();
    Sleep(200);
    sendMouse4();

    Sleep(200);
    mouseN();           ///////////
    Sleep(200);
    sendMouseWheelDown();
    Sleep(200);
    sendMouse5();
    Sleep(200);
    sendMouse4();
    Sleep(200);
    iceWall();
    Sleep(200);
    coldSnap();
    Sleep(200);
    ghostWalk();
    Sleep(200);
    sendMouse5();
    Sleep(200);
    final();

    return 0;
}
