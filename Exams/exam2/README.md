## Контролно 2
### Задача 1

Да се имплементира клас `Hero`, който има:
*  `name` - име на героя - динамичен char масив (не може да използвате std::string);
*  `base_attack` - базова атака на героя - естествено число от 1 до 100;
*  `health` - жизнени точки на героя - естествено число от 1 до 100;
*  метод `take_damage`, който приема естествено число от 1 до 100, с което да намали `health` на героя;
*  метод `take_healing`, който приема естествено число от 1 до 100, с което да увеличи `health` на героя;
*  метод `get_attack` - който връща `base_attack`.

Клас `Warrior`, който наследява Hero и освен това има:
* `crit` - процентен шанс да удари двойно по силно - естествено число от 1 до 100
*  `clan` - име на клан на война - динамичен char масив (не може да използвате std::string)
*  метод `get_attack` - който връща `base_attack` на война, а в `crit` процента от случаите върнатия резултат трябва да е `base_attack*2` (резултата от rand() % 10 е равен на 0 в 10% от случаите)

Клас `Wizard`, който наследява Hero и освен това има:
* `drain` - процентен шанс при удар, магьосника да увеличи своя health с половината от атаката си
* `rang` - име на ранга на магьосника - динамичен char масив (не може да използвате std::string)
* метод `get_attack` - който връща base_attack на магьосника и в drain процента от случаите, преди да върне атаката, трябва да увеличи жизнените точки с половината от `base_attack`

Напишете канонична четворка за всеки от горните класове.

Клас `Game`, който представлява игра между 2 героя. В конструктора си приема 2 указателя към обекти от клас Hero и при извикване на метода run на Game обект да се разиграва битка между двамата герои. Избира се на случаен принцип кой герой напада първи. Докато не свършат жизнените точки на някой от героите:
* напада героят, чийто ред е в момента - взима се атака му и с нея се намаляват жизнените точки на другия герой
* принтира се какво се е случило на този ход Накрая се принтира (разбира се) победителя в играта.

## Бонус задача

Да се имплементира опашка от цели числва (queue, FIFO) използвайки динамичен int масив.