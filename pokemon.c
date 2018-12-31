#include <stdio.h>

typedef struct Mochilita{
	int nPKM; //N° Pokedex
	int cpPKM; //Combat Power
	int fPKM; // Favorito 1 ó 0
	int caPKM; //Caramelos
}mochila[150]; //Los 4 son "int" por lo que será un poco más fácil trabajar con ello


void listPokedex(){
	printf("1.Bulbasaur\n");
	printf("2.Ivysaur\n");
	printf("3.Venusaur\n");
	printf("4.Charmander\n");
	printf("5.Charmeleon\n");
	printf("6.Charizard\n");
	printf("7.Squirtle\n");
	printf("8.Wartortle\n");
	printf("9.Blastoise\n");
	printf("10.Caterpie\n");
	printf("11.Metapod\n");
	printf("12.Butterfree\n");
	printf("13.Weedle\n");
	printf("14.Kakuna\n");
	printf("15.Beedrill\n");
	printf("16.Pidgey\n");
	printf("17.Pidgeotto\n");
	printf("18.Pidgeot\n");
	printf("19.Rattata\n");
	printf("20.Raticate\n");
	printf("21.Spearow\n");
	printf("22.Fearow\n");
	printf("23.Ekans\n");
	printf("24.Arbok\n");
	printf("25.Pikachu\n");
	printf("26.Raichu\n");
	printf("27.Sandshrew\n");
	printf("28.Sandslash\n");
	printf("29.Nidoran Hembra\n");
	printf("30.Nidorina\n");
	printf("31.Nidoqueen\n");
	printf("32.Nidoran Macho\n");
	printf("33.Nidorino\n");
	printf("34.Nidoking\n");
	printf("35.Clefairy\n");
	printf("36.Clefable\n");
	printf("37.Vulpix\n");
	printf("38.Ninetales\n");
	printf("39.Jigglypuff\n");
	printf("40.Wigglytuff\n");
	printf("41.Zubat\n");
	printf("42.Golbat\n");
	printf("43.Oddish\n");
	printf("44.Gloom\n");
	printf("45.Vileplume\n");
	printf("46.Paras\n");
	printf("47.Parasect\n");
	printf("48.Venonat\n");
	printf("49.Venomoth\n");
	printf("50.Diglett\n");
	printf("51.Dugtrio\n");
	printf("52.Meowth\n");
	printf("53.Persian\n");
	printf("54.Psyduck\n");
	printf("55.Golduck\n");
	printf("56.Mankey\n");
	printf("57.Primeape\n");
	printf("58.Growlithe\n");
	printf("59.Arcanine\n");
	printf("60.Poliwag\n");
	printf("61.Poliwhirl\n");
	printf("62.Poliwrath\n");
	printf("63.Abra\n");
	printf("64.Kadabra\n");
	printf("65.Alakazam\n");
	printf("66.Machop\n");
	printf("67.Machoke\n");
	printf("68.Machamp\n");
	printf("69.Bellsprout\n");
	printf("70.Weepinbell\n");
	printf("71.Victreebel\n");
	printf("72.Tentacool\n");
	printf("73.Tentacruel\n");
	printf("74.Geodude\n");
	printf("75.Graveler\n");
	printf("76.Golem\n");
	printf("77.Ponyta\n");
	printf("78.Rapidash\n");
	printf("79.Solwpoke\n");
	printf("80.Slowbro\n");
	printf("81.Magnemite\n");
	printf("82.Magneton\n");
	printf("83.Farfetch'd\n");
	printf("84.Doduo\n");
	printf("85.Dodrio\n");
	printf("86.Seel\n");
	printf("87.Dewgong\n");
	printf("88.Grimer\n");
	printf("89.Muk\n");
	printf("90.Shellder\n");
	printf("91.Cloyster\n");
	printf("92.Gastly\n");
	printf("93.Haunter\n");
	printf("94.Gengar\n");
	printf("95.Onix\n");
	printf("96.Drowzee\n");
	printf("97.Hypno\n");
	printf("98.Krabby\n");
	printf("99.Kingler\n");
	printf("100.Voltorb\n");
	printf("101.Electrode\n");
	printf("102.Exeggcute\n");
	printf("103.Exeggutor\n");
	printf("104.Cubone\n");
	printf("105.Marowak\n");
	printf("106.Hitmonlee\n");
	printf("107.Hitmonchan\n");
	printf("108.Lickitung\n");
	printf("109.Kofing\n");
	printf("110.Weezing\n");
	printf("111.Rhyhorn\n");
	printf("112.Rhydon\n");
	printf("113.Chansey\n");
	printf("114.Tangela\n");
	printf("115.Kangaskhan\n");
	printf("116.Horsea\n");
	printf("117.Seadra\n");
	printf("118.Goldeen\n");
	printf("119.Seaking\n");
	printf("120.Staryu\n");
	printf("121.Starmie\n");
	printf("122.Mr.Mime\n");
	printf("123.Scyther\n");
	printf("124.Jynx\n");
	printf("125.Electabuzz\n");
	printf("126.Magmar\n");
	printf("127.Pinsir\n");
	printf("128.Tauros\n");
	printf("129.Magikarp\n");
	printf("130.Gyarados\n");
	printf("131.Lapras\n");
	printf("132.Ditto\n");
	printf("133.Eevee\n");
	printf("134.Vaporeon\n");
	printf("135.Jolteon\n");
	printf("136.Flareon\n");
	printf("137.Porygon\n");
	printf("138.Omanyte\n");
	printf("139.Omastar\n");
	printf("140.Kabuto\n");
	printf("141.Kabutops\n");
	printf("142.Aereodactyl\n");
	printf("143.Snorlax\n");
	printf("144.Articuno\n");
	printf("145.Zapdos\n");
	printf("146.Moltres\n");
	printf("147.Dratini\n");
	printf("148.Dragonair\n");
	printf("149.Dragonite\n");
	printf("150.Mewtwo\n");
	printf("151.Mew\n");
}

void mostrarMenu(){
	printf("MENU:\n");
	printf("1.- Atrapar POKEMON\n");
	printf("2.- Aumentar CP\n");
	printf("3.- evolucionar POKEMON\n");
	printf("4.- Transferir POKEMON\n");
	printf("5.- Listar\n");
	printf("6.- Salir\n");
	printf("  Opcion: \n");
}

void atrapar(int K){
	int n, cp, f, ca;
	char p = 's';
	printf("Te sabes la pokedex? (s) (n): " ); scanf("%c",&p);
	if (p=='n')
		listPokedex();

	do {
		printf("Que Pokemon quieres atrapar? ingresa su numero de pokedex: \n");
		scanf("%i",&n);
	} while(n<1 || n>151);

	printf("Wena atrapaste un: ");   //(1)
	switch (n){
			case 1:  printf("Bulbasaur\n"); break;
			case 2:  printf("Ivysaur\n"); break;
			case 3:  printf("Venusaur\n"); break;
			case 4:  printf("Charmander\n"); break;
			case 5:  printf("Charmeleon\n"); break;
			case 6:  printf("Charizard\n"); break;
			case 7:  printf("Squirtle\n"); break;
			case 8:  printf("Wartortle\n"); break;
			case 9:  printf("Blastoise\n"); break;
			case 10: printf("Caterpie\n"); break;
			case 11: printf("Metapod\n"); break;
			case 12: printf("Butterfree\n"); break;
			case 13: printf("Weedle\n"); break;
			case 14: printf("Kakuna\n"); break;
			case 15: printf("Beedrill\n"); break;
			case 16: printf("Pidgey\n"); break;
			case 17: printf("Pidgeotto\n"); break;
			case 18: printf("Pidgeot\n"); break;
			case 19: printf("Rattata\n"); break;
			case 20: printf("Raticate\n"); break;
			case 21: printf("Spearow\n"); break;
			case 22: printf("Fearow\n"); break;
			case 23: printf("Ekans\n"); break;
			case 24: printf("Arbok\n"); break;
			case 25: printf("Pikachu\n"); break;
			case 26: printf("Raichu\n"); break;
			case 27: printf("Sandshrew\n"); break;
			case 28: printf("Sandslash\n"); break;
			case 29: printf("Nidoran Hembra\n"); break;
			case 30: printf("Nidorina\n"); break;
			case 31: printf("Nidorquenn\n");break;
			case 32: printf("Nidoran Macho\n"); break;
			case 33: printf("Nidorino\n"); break;
			case 34: printf("Nidoking\n"); break;
			case 35: printf("Clefairy\n"); break;
			case 36: printf("Clefable\n"); break;
			case 37: printf("Vulpix\n"); break;
			case 38: printf("Ninetales\n" ); break;
			case 39: printf("Jigglypuff\n"); break;
			case 40: printf("Wigglytuff\n"); break;
			case 41: printf("Zubat\n"); break;
			case 42: printf("Golbat\n"); break;
			case 43: printf("Oddish\n"); break;
			case 44: printf("Gloom\n"); break;
			case 45: printf("Vileplume\n"); break;
			case 46: printf("Paras\n"); break;
			case 47: printf("Parasect\n"); break;
			case 48: printf("Venonat\n"); break;
			case 49: printf("Venomoth\n"); break;
			case 50: printf("Diglett\n"); break;
			case 51: printf("Dugtrio\n"); break;
			case 52: printf("Meowth\n"); break;
			case 53: printf("Persian\n"); break;
			case 54: printf("Psyduck\n"); break;
			case 55: printf("Golduck\n"); break;
			case 56: printf("mankey\n"); break;
			case 57: printf("Primeape\n"); break;
			case 58: printf("Growlithe\n"); break;
			case 59: printf("Arcanine\n"); break;
			case 60: printf("Poliwag\n"); break;
			case 61: printf("Poliwhirl \n"); break;
			case 62: printf("Poliwrath\n"); break;
			case 63: printf("Abra\n"); break;
			case 64: printf("Kadabra\n"); break;
			case 65: printf("Alakazam\n"); break;
			case 66: printf("Machop\n"); break;
			case 67: printf("Machoke\n"); break;
			case 68: printf("Machamp\n"); break;
			case 69: printf("Bellsprout\n"); break;
			case 70: printf("Weepinbell\n"); break;
			case 71: printf("Victreebel\n"); break;
			case 72: printf("Tentacool\n"); break;
			case 73: printf("Tentacruel\n"); break;
			case 74: printf("Geodude\n"); break;
			case 75: printf("Graveler\n"); break;
			case 76: printf("Golem\n"); break;
			case 77: printf("Ponyta\n"); break;
			case 78: printf("Rapidash\n"); break;
			case 79: printf("Slowpoke\n"); break;
			case 80: printf("Slowbro\n"); break;
			case 81: printf("Magnemite\n"); break;
			case 82: printf("Magneton\n"); break;
			case 83: printf("Farfetch\n"); break;
			case 84: printf("Doduo\n"); break;
			case 85: printf("Dodrio\n"); break;
			case 86: printf("Seel\n"); break;
			case 87: printf("Dewgong\n"); break;
			case 88: printf("Grimer\n"); break;
			case 89: printf("Muk\n"); break;
			case 90: printf("Shellder\n"); break;
			case 91: printf("Cloyster\n"); break;
			case 92: printf("Gastly\n"); break;
			case 93: printf("Haunter\n"); break;
			case 94: printf("Gengar\n"); break;
			case 95: printf("onix\n"); break;
			case 96: printf("Drowzee\n"); break;
			case 97: printf("Hypno\n"); break;
			case 98: printf("krabby\n"); break;
			case 99: printf("Kingler\n"); break;
			case 100: printf("Voltorb\n"); break;
			case 101: printf("electrode\n"); break;
			case 102: printf("Exeggcute\n"); break;
			case 103: printf("Exeggutor\n"); break;
			case 104: printf("Cubone\n"); break;
			case 105: printf("Marowak\n"); break;
			case 106: printf("Hitmonlee\n"); break;
			case 107: printf("Hitmonchan\n"); break;
			case 108: printf("Lickitung\n"); break;
			case 109: printf("Kofing\n"); break;
			case 110: printf("Weezing\n"); break;
			case 111: printf("Rhyhorn\n"); break;
			case 112: printf("Rhydon\n"); break;
			case 113: printf("Chansey\n"); break;
			case 114: printf("Tangela\n"); break;
			case 115: printf("Kangaskhan\n"); break;
			case 116: printf("Horsea\n"); break;
			case 117: printf("Seadra\n"); break;
			case 118: printf("Goldeen\n"); break;
			case 119: printf("Seaking\n"); break;
			case 120: printf("Staryu\n"); break;
			case 121: printf("Starmie\n"); break;
			case 122: printf("Mr. Mime\n"); break;
			case 123: printf("Scyther\n"); break;
			case 124: printf("Jynx\n"); break;
			case 125: printf("Electabuzz\n"); break;
			case 126: printf("Magmar\n"); break;
			case 127: printf("Pinsir\n"); break;
			case 128: printf("Tauros\n"); break;
			case 129: printf("Magikarp\n"); break;
			case 130: printf("Gyarados\n"); break;
			case 131: printf("Lapras\n"); break;
			case 132: printf("Ditto\n"); break;
			case 133: printf("Eevee\n"); break;
			case 134: printf("Vaporeon\n"); break;
			case 135: printf("Jolteon\n"); break;
			case 136: printf("Flareon\n"); break;
			case 137: printf("Porygon\n"); break;
			case 138: printf("Omanyte\n"); break;
			case 139: printf("Omastar\n"); break;
			case 140: printf("Kabuto\n"); break;
			case 141: printf("Kabutops\n"); break;
			case 142: printf("Aereodactyl\n"); break;
			case 143: printf("Snorlax\n"); break;
			case 144: printf("Articuno\n"); break;
			case 145: printf("Zapdos\n"); break;
			case 146: printf("Moltres\n"); break;
			case 147: printf("Dratini\n"); break;
			case 148: printf("Dragonair\n"); break;
			case 149: printf("Dragonite\n"); break;
			case 150: printf("Mewtwo\n"); break;
			case 151: printf("Mew\n"); break;
	}

	printf("Cual es su CP?: \n" );
	scanf("%i",&cp); // (2)

	printf("quieres dejarlo como favorito?\n(1)Para SI\n(0)Para NO\n");
	scanf("%i",&f ); //(3)


	mochila[K].nPKM = n;   //(1')
	mochila[K].cpPKM = cp; //(2')
	mochila[K].fPKM = f;   //(3')
	mochila[K].caPKM +=3;

	K++;


}

int main(int argc, char const *argv[])
{
	int menu, i, K; // "K"(mayúscula) Será nuestra variable maestra

	for ( i = 0; i < 150; i++) {
		mochila[i].nPKM = 0;
		mochila[i].cpPKM = 0;
		mochila[i].fPKM = 0;
		mochila[i].caPKM = 0;
	} //Rellenar con 0 todo al inicio del programa para evitar basura ;)

	do
	{
		mostrarMenu();

		switch(menu){
			case 1: atrapar(k); break;
			case 2:
			case 3:
			case 4:
			case 5:
		}
	} while (menu!=6);


	return 0;
}
