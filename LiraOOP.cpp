﻿#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{


	class NPC {
	public:
		NPC(string x, int y);
		void dialogue();
		void get_name();
	private:
		string name;
		int id;

		void attack();
		void repair();
	};
	class Lira : public NPC {// наследования для диалога с Лирой
	public:
		void dialogue_lira();
	};
	NPC::NPC(string x, int y){
		this->name = x;
		this->id = y;
	}
	void Lira::dialogue_lira() {
		int answer;
		string name;// имя указанное игроком вов рвемя входа
		cout << "Привет Путник!" << endl;
		cout<<"Здраствуйте, меня зовут "<<name<<",я хотел кое что у тебя спросить"
		cout << "Меня зовут Лира, я работаю здесь рыболовом!\nЧто ты хотел спросить?" << endl;
		do{
			cout << "Выберите что спросить..." << endl;
			cout << "1 - Что вы знаете о Пустыне Рарбан?"endl;
			cout << "2 - Слышали ли вы о мече Дриклабрусе?"endl;
			cout << "3 - Вы замечали что то не естественное в последние время?"endl;
			cout << "4 - Где я могу найти карту нашей страны?"endl;
			cout<<"5 - Уйти"<<endl;
			cin >> answer;
			if (answer == 1) {
				Sleep(2000);
				cout << "Пустыня? Я там никогда не бывала но слышала много легенд об этом месте..." << endl;
				Sleep(3000);
				cout << "Как мне рассказывал дедушка, на краю нашей страны находиться никая мистическая пустыня" << endl;
				Sleep(3000);
				cout<<"До этого случая там была деревня восточных народов, и в одной семье купца родился сын"<<endl;
				Sleep(3000);
				cout << "Через неделю после его 18 летия, они с отцом выехали в столицу для торговли, но по дороге\nсын заметил меч, который светился синим цветом" << endl;
				Sleep(3000);
				cout << "После того как сын торговца дотронулся до осколка меча, он превратился в нежить и истребил своих жителей деревни\nпрошло много лет и в этой пустыне он выстроил свою гробницу в которой,\nкак гласят легенды он до сих пор лежит в ожидании..." << endl;
			
			}
			else if (answer == 2) {
				Sleep(2000);
				cout << "О таком не слышала, но ходят слухи о каком то древнем мече..." << endl;
				cout<<"Слышала что древний меч был выкован элементалями воды, возможно этот меч ты имел в виду"<<endl;
			}
			else if (answer == 3) {
				Sleep(2000);
				cout << "Как указали в газете, в последние время кристаллы засекающие ману,\nгде то находиться крайне огромный источник маны" << endl;
				cout<<"Все жители обеспокоины этим, возможно это как то связано с местными легендами\nи как гласит пророчество кто то собрал большинство осколков древнего меча"<<endl;
			}
			else if (answer == 4) {
				Sleep(2000);
				cout << "Тебе нужно пройти к Олдрику, он очень мудрый и находчивый, скорее всего у него есть." << endl;
			}
			else if (answer == 5) {
				Sleep(2000);
				cout << "Спасибо за разговор, удачи!" << endl;
			}
			else {
				cout<<"Такого вопроса нет" << endl;
			}
		} while (answer != 5);
		Sleep(3000);
		cout << "К сожалению это все что я знаю, надеюсь моя информация будет тебе полезной" << endl;

	}

	void NPC::dialogue() {
		int switch_answ;
		string myName;
		if (id == 1) {

			int force = 3;
			int answer = true;
			int answer2 = true;

			cout << "Enter your name: " << endl;
			cin >> myName;

			cout << "Загрузка Мира,пожалуйста подождите" << endl;
			Sleep(3000);

			cout << "Привет странник, меня зовут Олдрик.Я местный кузнец этой деревни,могу как-то помочь тебе?\n" << endl;
			cout << "1.здравствуй меня зовут " << myName << " можешь рассказать об этом городе?" << endl;
			cout << "2.Здравствуй,у меня появилась небольшая проблема с моим мечом,поможешь?" << endl;
			cout << "3.Здравствуй,спасибо нет,просто гуляю и осматриваю территорию" << endl;
			cout << "4. Здравствуй Олдрик,прости меня.Я был под сильной илюзией и нечаянно истребил твою семью" << endl;

			cin >> switch_answ;
			switch (switch_answ)
			{

			case 1:
				cout << "конечно,в этом городе очень много чего происходит.Ночью тут  было слишком опасно из-за разбойников,так что не советую гулять в темное время суток.\n Но из-за того что недавно на нашу деревню напал  дракон,сейчас все помогают друг другу...." << endl;
				break;

			case 2:
				cout << "ты правильно сделал что обратился именно ко мне.Дай ка я посмотрю что с ним." << endl;
				Sleep(200);
				cout << "Мгм, чтож я понял всю проблему твоего меча, хочешь починить его сейчас? " << endl;
				cout << "1.да\n 2.нет спасибо я пока еще похожу,если что вернусь" << endl;
				cin >> answer;

				if (answer == 1) {
					cout << "Отлично!с тебя 370 золотых " << endl;

					cout << "1.споуойно заплатить\n2.пригрозить и не заплатить ему" << endl;
					cin >> answer;
					if (answer == 1) {
						cout << "благодарю,скоро верну вам меч" << endl;
					}
					if (answer == 2) {
						cout << "СТРАЖА,помогите мне!" << endl;
					}

				}

				if (answer == 2) {

					cout << "хорошо буду вас ждать" << myName << " до свидания!" << endl;
				}
				break;

			case 3:
				cout << "хорошо,но если что заходи,могу продать или починить тебе оборудование" << endl;
				break;

			case 4:
				cout << "это же ведь шутка?" << endl;
				cout << "1.нет,прости\n 2.Конечно!" << endl;
				cin >> answer2;
				if (answer2 == 1) {
					cout << "За что? Почему именно моя семья? Я тебе это не прощу!" << endl;
					if (force < 4) {
						cout << "УМРИ!" << endl;
					}
					else {
						cout << "Я ВИЖУ ЧТО ТЫ НЕ СЛАБАК,НО И Я НЕ ПРОМАХ.ЗАЩИЩАЙСЯ!!" << endl;
					}
				}
				else
					cout << "НЕ УХОДИ ОТ ТЕМЫ" << endl;
				break;
			default:
				cout << "извините я не понимаю этот язык" << endl;
				break;
			}
		}

	}

	int main() {
		setlocale(0, "ru");
		NPC Oldrick("Oldrick", 1);
		Oldrick.dialogue();
		NPC Villager("Lira", 2);
	}
}