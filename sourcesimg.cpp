#include "header.h"

void imgdeque()
{
    cout << "                                                            \n"
            "   ◢            ██████╗ ███████╗ ██████╗ ██╗   ██╗███████╗  \n"
            "  ◢███████▕╲    ██╔══██╗██╔════╝██╔═══██╗██║   ██║██╔════╝  \n"
            "  ◥███████▔ ╲   ██║  ██║█████╗  ██║██╗██║██║   ██║█████╗    \n"
            "   ◥▕▁▁▁▁▁▁ ╱   ██║  ██║██╔══╝  ╚██████╔╝██║   ██║██╔══╝    \n"
            "          ▕╱    ██████╔╝███████╗ ╚═██╔═╝ ╚██████╔╝███████╗  \n"
            "                ╚═════╝ ╚══════╝   ╚═╝    ╚═════╝ ╚══════╝  \n"
            "                                                            \n"
            "  Список плохих людей, к-рые когда либо насолили мне в жизни\n";
}

void imgdequeempty()
{
    cout << "    ╱╲───────────────╮\n"
            "   ╱▐▌╲  Спимок пуст │\n"
            "  ╱ ╺╸ ╲─────────────╯\n"
            "  ▔▔▔▔▔▔              \n";
}

void imgstorageempty()
{
    cout << "    ╱╲──────────────╮\n"
            "   ╱▐▌╲  Склад пуст │\n"
            "  ╱ ╺╸ ╲────────────╯\n"
            "  ▔▔▔▔▔▔              \n";
}

void imgerrorid()
{
    cout<<" ╱▔▔▔╲────────────────╮\n"
          "▕  ╳  ▏ Такого id нет │\n"
          " ╲   ╱────────────────╯\n"
          "  ▔▔▔\n";
}

void imgmenu()
{
    cout << "  \n"
            "     ▛▀▜ ◣      ◢ ▛▀▜        ◢ ▛▀▜ ◣      ◢     ◣  \n"
            "   ▛▀▘ ▝▀▜◣    ◢▛▀▘ ▝▀▜     ◢▛▀▘ ▝▀▜◣    ◢▛▀▀▀▀▀▜◣\n"
            "   ▙▄▖ ▗▄▟◤    ◥▙▄▖ ▗▄▟     ◥▙▄▖ ▗▄▟◤    ◥▙▄▄▄▄▄▟◤\n"
            "     ▙▄▟ ◤      ◥ ▙▄▟        ◥ ▙▄▟ ◤      ◥     ◤    \n"
            "                                                                \n"
            "    ╶╣1╠╴        ╶╣2╠╴        ╶╣3╠╴        ╶╣4╠╴\n"
            " Добавить в   Добавить в    Добавить      Удалить \n"
            "   начало        конец        после\n"
            "                             кого-то\n"
            "           \n"
            "   ◢███◤╱╲      ◢            ◢███◣▁       ▄▄▄▄▄▄▄\n"
            "   ██  ╱  ╲    ◢███████◣     █◤▀◥█╳╲      ▊◣    █\n"
            "  ◥██◤ ▔▏▕▔    ▁▁▁▁▁▁▁▁▁     █◣▄◢█╳╳▏     ▊█  ◢▄▄▄\n"
            "   ◥◤╱▔▔ ╱     ╲▁▁▁▁▁▁ ╱     ◥███◤╳╳▏     ▊█  ◥▀▀▀\n"
            "     ▔▔▔▔            ▕╱        ╲╳╳╳╱      ▊█▁▁▁▁█\n"
            "                                ▔▔▔        ◥\n"
            "    ╶╣5╠╴       ╶╣6╠╴         ╶╣7╠╴        ╶╣8╠╴\n"
            " Сортировка    Reverse       Тасовка       Назад\n\n";
}

void ingdequetablestart()
{
    cout << " ╭────┰───────────────┰───────────────┰────────────────┰─────────────────────────────────╮ \n"
            " │ id ┃ Фамилия       ┃ Имя           ┃ Отчество       ┃ Почему плохой?                  │ \n"
            " ┝━━━━╇━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┥ \n";
}

void ingdequetableend()
{
    cout << " ╰────┴───────────────┴───────────────┴────────────────┴─────────────────────────────────╯ ";
}

void imgstoragetablestart()
{
    cout << " ╭────┬─────────────────────┬────────────┬────────┬──────────────────────────────────────╮\n"
            " │ id │ Наименование        │ Тип        │ Кол-во │ Дополнительная информация            │\n"
            " ├────┼─────────────────────┼────────────┼────────┼──────────────────────────────────────┤\n";
}

void imgstoragetableend()
{
    cout << " ╰────┴─────────────────────┴────────────┴────────┴──────────────────────────────────────╯\n\n";
}

void storagemenu()
{
    cout << "  ▁▁▁▁▁▁▁    ▁▁▁▁▁▁▁    ▁▁▁▁▁▁▁     ▁▁▁▁▁▁▁\n"
            " ▕╲▁▁▁▁▁╱▏  ▕╲▁▁▁▁▁╱▏  ▕╲▁▁▁▁▁╱▏   ▕╲▁▁▁▁▁╱▏    ◢▛▀▀▀▜◣\n"
            " ▕▕     ▏▏  ▕▕     ▏▏  ▕▕     ▏ ▁  ▕▕     ▏▏    █  ◢▄▄▄\n"
            " ▕▕▔▔▔▔▔    ▕▕▔▔▔▔▔▏▏  ▕▕▔▔▔▔▔ ╱╱  ▕▕▔▔▔▔▔      █  ◥▀▀▀\n"
            " ▕╱▔▔▔ ▄█▄  ▕╱▔▔▔ ▄▄▄  ▕╱▔▔▔▔ ╱╱   ▕╱▔▔ ▐▛ ◢◣   ◥▙▄▄▄▟◤\n"
            "  ▔▔▔▔ ▔▀    ▔▔▔▔       ▔▔▔▔  ◤     ▔▔▔ ◥◤ ▟▌   \n"
            "   ╶╣1╠╴      ╶╣2╠╴      ╶╣3╠╴       ╶╣4╠╴       ╶╣5╠╴\n"
            " Добавить    Удалить   Редактир.   Сортировка    Назад\n\n";
}

void storagelogo()
{
    cout << "   ▁▁▁▁▁▁▁▁▁  ╔═══╗╔════╗╔═══╗╔═══╗╔═══╗╔═══╗╔═══╗\n"
            "  ╱   ◢◤   ╱▏ ║╔═╗║║╔╗╔╗║║╔═╗║║╔═╗║║╔═╗║║╔═╗║║╔══╝\n"
            " ▕▔▔▔▔█▔▔▔▔▏▏ ║╚══╗╚╝║║╚╝║║ ║║║╚═╝║║║ ║║║║ ╚╝║╚══╗\n"
            " ▕    ▀   ▕ ▏ ╚══╗║  ║║  ║║ ║║║╔╗╔╝║╚═╝║║║╔═╗║╔══╝\n"
            " ▕        ▕ ▏ ║╚═╝║  ║║  ║╚═╝║║║║╚╗║╔═╗║║╚╩═║║╚══╗\n"
            " ▕        ▕╱  ╚═══╝  ╚╝  ╚═══╝╚╝╚═╝╚╝─╚╝╚═══╝╚═══╝\n"
            "  ▔▔▔▔▔▔▔▔▔\n";
}

void mainmaenu()
{
    cout << " ╭────────────────────────────────────────────╮\n"
            " │                 ╭─────╮ ╭─╮ ╭─╮    ╭─────╮ │\n"
            " │ ╭────╮          │ ╭───╯ │ │ │ │    │ ╭───╯ │\n"
            " │ │    ▝▀▀▀▀▀┐    │ ╰─╮   │ │ │ │    │ ╰─╮   │\n"
            " │ │          │▄◣  │ ╭─╯   │ │ │ │    │ ╭─╯   │\n"
            " │ │        ◢▄│▀◤  │ │     │ │ │ ╰──╮ │ ╰───╮ │\n"
            " │ ╰───────╴◥▀│    ╰─╯     ╰─╯ ╰────╯ ╰─────╯ │\n"
            " ╰───────────╴│╶──────────────────────────────╯\n"
            "              │\n"
            "              │       ╭───────────╮\n"
            "              │       │ ◢         │\n"
            "              │ ╭───╮ │◢███████▕╲ │\n"
            "              ├─┤ 1 ╞═╡◥███████▔ ╲│\n"
            "              │ ╰───╯ │ ◥▕▁▁▁▁▁▁ ╱│\n"
            "              │       │        ▕╱ │\n"
            "              │       ╰───────────╯\n"
            "              │           DEQUE\n"
            "              │\n"
            "              │       ╭───────────╮\n"
            "              │       │   ▁▁▁▁▁▁  │\n"
            "              │ ╭───╮ │  ╱ ◢█◤ ╱▏ │\n"
            "              ├─┤ 2 ╞═╡ ▕▔▔▜▛▔▔▏▏ │\n"
            "              │ ╰───╯ │ ▕     ▕╱  │\n"
            "              │       │  ▔▔▔▔▔▔   │\n"
            "              │       ╰───────────╯\n"
            "              │          STORAGE\n"
            "              │\n"
            "              │       ╭───────────╮\n"
            "              │       │  ▄▄▄▄▄▄▄  │\n"
            "              │ ╭───╮ │  ▉◣    █  │\n"
            "              ├─┤ 3 ╞═╡  ▉█    █  │\n"
            "              │ ╰───╯ │  ▉█    █  │\n"
            "              │       │  ▀◥━━━━▀  │\n"
            "              │       ╰───────────╯\n"
            "              │            EXIT\n"
            "              │\n"
            "              ╰ ";
}

