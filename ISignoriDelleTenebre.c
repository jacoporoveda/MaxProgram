#include <stdio.h>
#include <stdbool.h>

void Prologo(void);
void Regole(void);
void RegoleCombattimento(void);
void uno(void);
void due(void);
void tre(void);
void quattro(void);
void cinque(void);
void sei(void);
void sette(void);
void otto(void);
void nove(void);
void uno_zero(void);
void uno_uno(void);
void uno_due(void);

int main(void) {
	
	Prologo();
	
	return 0;
	}

void Prologo(void) {
	
	char continua = 'x';
	bool verifica = false;
	
	printf("\n                   PROLOGO                   \n\n");
	
	printf("\nDa molti secoli i nobili cavalieri del regno di\n");
	printf("Sommerlund usano mandare i loro figli presso il\n");
	printf("monastero di Ramas, affinchè imparino le tecniche e\n");
	printf("le arti che fanno di un giovane un vero cavaliere.\n");
	printf("\n");
	printf("I monaci di Ramas sono maestri in molte discipline,\n");
	printf("e i giovani loro affidati li amano e li rispettano\n");
	printf("malgrado le durezze dell'insegnamento. Essi sanno\n");
	printf("infatti che solo così potranno diventare cavalieri\n");
	printf("Ramas, preparati nel corpo e nella mente per\n");
	printf("difendere la loro terra dalla costante minaccia che\n");
	printf("viene da ovest, dai Signori delle Tenebre.\n");
	printf("\n");
	printf("Anticamente, nell'età della Luna Nera, i Signori\n");
	printf("delle Tenebre portarono guerra a Sommerlund. Il\n");
	printf("conflitto lungo e sanguinoso finì con la vittoria degli\n");
	printf("eserciti di Sommerlund, guidati dal Re Ulnar, che\n");
	printf("insieme agli alleati del regno di Durenor sbaraglia-\n");
	printf("rono il nemico al passo di Moytura: Vashna, il\n");
	printf("condottiero dei Signori delle Tenebre, venne ucciso\n");
	printf("dalla spada di re Ulnar, la Spada del Sole. Da allora\n");
	printf("i Signori delle Tenebre hanno giurato vendetta\n");
	printf("contro le terre di Sommerlund e Durenor.\n");
	printf("\n");
	printf("Oggi è il giorno della festa di Fendar, quando tutti i\n");
	printf("Ramas sono presenti al monastero per festeggiare i\n");
	printf("loro figli che finiscono il periodo di addestramento.\n");
	printf("Improvvisamente un'enorme nuvola appare nel\n");
	printf("cielo a occidente: sono animali dalle ali nere, e così\n");
	printf("tanti che il sole è completamente oscurato. I Signori\n");
	printf("delle Tenebre, gli eterni nemici di Sommerlund,\n");
	printf("stanno attaccando. La guerra comincia.\n");
	printf("\n");
	printf("In questo giorno fatale tu, Lupo Silenzioso (questo è\n");
	printf("il nome che ti è stato dati dai monaci), sei stato\n");
	printf("mandato a raccogliere legna nella foresta, come\n");
	printf("punizione perchè sei sempre distratto. Mentre stai\n");
	printf("tornando vedi con orrore il monastero completa-\n");
	printf("mente avvolto da un nugolo di mostri alati dalla nera\n");
	printf("pelle squamosa.\n");
	printf("\n");
	printf("Lasciando cadere la legna corri verso la battaglia\n");
	printf("che infuria. Ma nel buio innaturale inciampi, e batti\n");
	printf("la testa sul tronco di una quercia secolare. Mentre\n");
	printf("stai perdendo conoscenza l'ultima cosa che vedi\n");
	printf("sono le mura del monastero che crollano al suolo.\n");
	printf("\n");
	printf("Passano molte ore prima del tuo risveglio. Con gli\n");
	printf("occhi pieni di lacrime guardi quello scenario di\n");
	printf("morte. Alzi lo sguardo al cielo ormai chiaro e giuri\n");
	printf("di vendicare il massacro dei cavalieri Ramas: come\n");
	printf("in un lampo ti rendi conto di ciò che devi fare. Devi\n");
	printf("cercare di raggiungere la capitale per avvertire il Re\n");
	printf("della terribile minaccia che incombe sulle genti di\n");
	printf("Sommerlund.\n");
	printf("\n");
	printf("Ora sei tu l'ultimo Ramas superstite: ora il tuo nome\n");
	printf("è LUPO SOLITARIO.\n\n");
	
	printf("PER LEGGERE LE REGOLE PREMI r\n");
	printf("PER LEGGERE LE REGOLE DI COMBATTIMENTO PREMI c\n");
	printf("PER INIZIARE A GIOCARE PREMI 1: ");
	
	do {
		if(continua == 'r') {
			Regole();
			verifica = true;
			}
		else if(continua == 'c') {
			RegoleCombattimento();
			verifica = true;
			}
		else if(continua == '1') {
			uno();
			verifica = true;
			}
		else {
			printf("Non consentito, riprova\n");
			scanf("%c", &continua);
			}
		} while(verifica == false);
	}
	

void Regole(void) {
	
	char continua = 'x';
	bool verifica = false;
	
	printf("\n                   LE REGOLE DEL GIOCO                   \n\n");
	
	printf("\nDurante la tua avventura devi tenere sempre\n");
	printf("aggiornato il REGISTRO DI GUERRA.\n");
	printf("\n");
	printf("Durante il tuo apprendistato come Ramas hai\n");
	printf("sviluppato delle doti tattiche (COMBATTIVITÀ) e fisiche\n");
	printf("(VITALITÀ). Prima di iniziare la tua avventura devi\n");
	printf("controllare il livello della tua preparazione. Per fare\n");
	printf("questo tira un dado a 10 facce (1d10), i numeri variano da 0 a 9.\n");
	printf("\n");
	printf("Il numero che esce indica la tua COMBATTIVITÀ. A questo numero\n");
	printf("aggiungi 10 e scrivi il totale nella casella <<COMBATTIVITÀ>>\n");
	printf("del Registro di Guerra.\n");
	printf("Quando combatti la tua Combattività dovrà misu-\n");
	printf("rarsi con quella del tuo avversario. Un punteggio\n");
	printf("alto in questa casella è perciò molto vantaggioso.\n");
	printf("\n");
	printf("Rilancia il dado: questo numero indicherà la tua VITALITÀ.\n");
	printf("Aggiungi 20 a questo numero e scrivi il totale nella\n");
	printf("casella <<VITALITÀ>> del Registro di Guerra.\n");
	printf("\n");
	printf("Se vieni ferito in combattimento perdi punti di Vitalità.\n");
	printf("Qando il tuo punteggio di Vitalità arriva\n");
	printf("a zero sei morto, e l'avventura è finita. I punti di\n");
	printf("Vitalità persi possono essere recuperati durante\n");
	printf("il gioco, ma il punteggio non può mai superare\n");
	printf("quello di partenza.\n");
	printf("\n\n");
	
	printf("\n                   LE ARTI RAMAS                   \n\n");
	
	printf("\nNel corso dei secoli i monaci hanno perfezionato le\n");
	printf("loro tecniche di combattimento; i loro insegnamenti,\n");
	printf("impartiti a tutti i giovani cavalieri, vanno sotto il\n");
	printf("nome di Arti Ramas. Tu hai imparato solo cinque\n");
	printf("delle Arti elencate qui sotto: ora devi decidere quali\n");
	printf("sono. Siccome dovrai impiegarle tutte nel corso del\n");
	printf("tuo pericoloso viaggio, sceglile con molta cura.\n");
	printf("L'uso corretto di queste tecniche al momento giusto\n");
	printf("può salvarti la vita.\n");
	printf("\n");
	printf("Quando hai scelto le tue cinque Arti, scrivile nella\n");
	printf("tabella <<Arti Ramas>> del tuo Registro di Guerra.\n");
	printf("\n");
	printf("MIMETISMO\n");
	printf("Questa tecnica permette al Ramas di adattarsi\n");
	printf("all'ambiente circostante. In campagna può na-\n");
	printf("scondersi tra alberi e rocce senza essere scoperto e\n");
	printf("passare vicino al nemico senza essere visto.\n");
	printf("\n");
	printf("In città lo rende capace di comportarsi e di parlare\n");
	printf("come uno del posto, e può aiutarlo a trovare un\n");
	printf("nascondiglio sicuro. Se scegli questa tecnica, scrivi\n");
	printf("MIMETISMO sul tuo Registro di Guerra.\n");
	printf("\n");
	printf("CACCIA\n");
	printf("Questa tecnica permette al Ramas di non morire di\n");
	printf("fame in un ambiente selvaggio. Sarà sempre in\n");
	printf("grado di procurarsi del cibo, tranne che nel deserto.\n");
	printf("È una tecnica che gli consente inoltre di muoversi\n");
	printf("agilmente senza far rumore.\n");
	printf("Se scegli questa tecnica scrivi CACCIA sul tuo\n");
	printf("Registro di Guerra: non sei obbligato a fare un\n");
	printf("Pasto quando ti viene ordinato di mangiare.\n");
	printf("\n");
	printf("SESTO SENSO\n");
	printf("Questa tecninca avverte il Ramas di un pericolo\n");
	printf("imminente. Permette di capire la vera natura di uno\n");
	printf("sconosciuto, o di un oggetto strano incontrato nel\n");
	printf("corso dell'avventura.\n");
	printf("Se scegli questa tecnica scrivi SESTO SENSO sul tuo\n");
	printf("Registro di Guerra.\n");
	printf("\n");
	printf("ORIENTAMENTO\n");
	printf("Con questa tecnica il Ramas è in grado di scegliere il\n");
	printf("percorso giusto anche in un territorio selvaggio, di\n");
	printf("leggere i segreti delle tracce e delle impronte, e nelle\n");
	printf("zone abitate di trovare sempre la persona o l'oggetto\n");
	printf("che cerca. Se scegli questa tecnica, scrivi ORIENTA-\n");
	printf("MENTO sul tuo Registro di Guerra.\n");
	printf("\n");
	printf("GUARIGIONE\n");
	printf("Questa Arte serve a recuperare i punti di Vita-\n");
	printf("lità persi in combattimento. Ti permette di\n");
	printf("aggiungere un punto di Vitalità ogni volta che\n");
	printf("superi una tappa del tuo viaggio senza essere\n");
	printf("impegnato in combattimento. Puoi usare questa\n");
	printf("capacità solo se hai già perso dei punti di\n");
	printf("Vitalità, ma ricorda che non puoi mai superare\n");
	printf("il punteggio di partenza.\n");
	printf("Se scegli questa tecnica scrivi GUARIGIONE sul tuo\n");
	printf("Registro di Guerra: un punto di Vitalità in più\n");
	printf("per ogni tappa senza combattimento.\n");
	printf("\n");
	printf("SCHERMA\n");
	printf("Quando entra nel monastero, ogni allievo impara a\n");
	printf("usare perfettamente un tipo di arma. Se decidi di\n");
	printf("impiegare l'Arte della Scherma, lancia 1d10 e vedi\n");
	printf("nell'elenco qui sotto a quale arma corrisponde.\n");
	printf("Questa sarà l'arma in cui sei maestro, e se ti capiterà\n");
	printf("di averla quando affronti un combattimento potrai\n");
	printf("aggiungere 2 punti di Combattività.\n");
	printf("\n");
	printf("0 = PUGNALE\n");
	printf("1 = LANCIA\n");
	printf("2 = MAZZA\n");
	printf("3 = DAGA\n");
	printf("4 = MARTELLO\n");
	printf("5 = SPADA\n");
	printf("6 = ASCIA\n");
	printf("7 = SPADA\n");
	printf("8 = ASTA\n");
	printf("9 = SPADONE\n");
	printf("\n");
	printf("Il fatto di avere abilità con un'arma non significa\n");
	printf("necessariamente che tu cominci il viaggio con quella\n");
	printf("particolare arma. Avrai comunque la possibilità di\n");
	printf("procurarti delle armi nel corso dell'avventura.\n");
	printf("Non puoi portare più di due armi. Se scegli questa\n");
	printf("Arte scrivi MAESTRO DI SCHERMA IN... sul tuo\n");
	printf("Registro di Guerra: più 2 punti di Combattività se\n");
	printf("porti quest'arma.\n");
	printf("\n");
	printf("PSICOSCHERMO\n");
	printf("I Signori delle Tenebre e molti degli esseri malvagi\n");
	printf("sotto il loro potere possono attaccarti con il loro\n");
	printf("Psicolaser. Lo Psicoschermo impedisce che tu perda\n");
	printf("punti di Vitalità se sei sottoposto a questa forma\n");
	printf("di attacco.\n");
	printf("Se scegli questa tecnica scrivi PSICOSCHERMO sul tuo\n");
	printf("Registro di Guerra: non perdi punti se vieni attaccato\n");
	printf("dallo Psicolaser.\n");
	printf("\n");
	printf("PSICOLASER\n");
	printf("Con questa tecnica il Ramas può attaccare il nemico\n");
	printf("con la forza della sua mente. Può essere usato\n");
	printf("insieme alle normali armi e aggiunge 2 punti alla tua\n");
	printf("Combattività. Non tutte le creature che incontri\n");
	printf("sono sensibili allo Psicolaser: questo i verrà detto\n");
	printf("volta per volta.\n");
	printf("Se scegli questa tecnica scrivi PSCIOLARE sul tuo\n");
	printf("Registro di guerra: 2 punti di Combattività in più.\n");
	printf("\n");
	printf("AFFINITÀ ANIMALE\n");
	printf("Permette al Ramas di comunciare con alcuni\n");
	printf("animali e di capire le intenzioni di altri.\n");
	printf("Se scegli questa tecnica scrivi AFFINITÀ ANIMALE,\n");
	printf("sul Registro di Guerra.\n");
	printf("\n");
	printf("TELECINESI\n");
	printf("Questa tecnica consente al Ramas di muovere\n");
	printf("piccoli oggetti con la sua capacità di concen-\n");
	printf("trazione.\n");
	printf("Se scegli questa tecnica scrivi TELECINESI, sul tuo\n");
	printf("Registro di Guerra.\n");
	printf("\n");
	printf("Se porti a termine con successo questa avventura\n");
	printf("potrai aggiungere un'altra Arte Ramas di tua scelta\n");
	printf("sul Registro di Guerra. Questa tecnica in più,\n");
	printf("insieme alle altre cinque, e a tutti gli Oggetti Speciali\n");
	printf("che avrai acquisito nel corso del viaggio, potrà\n");
	printf("essere impiegata nella seconda avventura di Lupo\n");
	printf("Solitario, Traversata infernale.\n");
	
	printf("\n                   EQUIPAGGIAMENTO                  \n\n");
	
	printf("\nHai addosso la divisa dell'allievo Ramas: tunica e\n");
	printf("mantello verde. Hai molto poco con te, e devi\n");
	printf("riuscire a sopravvivere.\n");
	printf("\n");
	printf("Tutto quello che hai è un'Ascia (segnala sotto\n");
	printf("<<Armamento>> sul tuo Registro di Guerra) e uno\n");
	printf("Zaino con dentro un unico Pasto (segnallo sotto\n");
	printf("<<Pasti>> nel tuo Registro di Guerra). Appesa alla\n");
	printf("cintura hai una Borsa di cuoio contenete delle\n");
	printf("Corone d'oro. Per sapere quante ne hai, usa il\n");
	printf("solito sistema del dado. Il numero che esce ti\n");
	printf("dice quante Corone possiedi all'inizio\n");
	printf("dell'avventura (segna il numero nella casella <<Bor-\n");
	printf("sa>> del tuo Registro di Guerra).\n");
	printf("\n");
	printf("Tra le rovine fumanti del monastero scopri una\n");
	printf("mappa di Sommerlund (segnala nella casella\n");
	printf("<<Oggetti Speciali>> del tuo Registro di Guerra), dove\n");
	printf("è indicaata la capitale, Holmgard, e il regno di\n");
	printf("Durenor, laggiù a oriente. Per sicurezza nascondi la\n");
	printf("mappa sotto la tunica.\n");
	printf("\n");
	printf("Trovi inoltre una delle seguenti cose:\n");
	printf("1 = SPADA (<<Armamento>>)\n");
	printf("2 = ELMO (<<Oggetti Speciali>>). Questo aggiunge 2\n");
	printf("punti di Vitalità.\n");
	printf("3 = DUE PASTI (<<Past>>)\n");
	printf("4 = COTTA DI MAGLIA (<<Oggetti Speciali>>). Questo\n");
	printf("aggiunge 4 punti di Vitalità.\n");
	printf("5 = MAZZA (<<Armamento>>)\n");
	printf("6 = POZIONE MAGICA (<<Zaino>>). Con questa puoi\n");
	printf("recuperare 4 punti di Vitalità, se la bevi dopo\n");
	printf("un combattimento. La bottiglia contiene una\n");
	printf("sola dose.\n");
	printf("7 = ASTA (<<Armamento>>)\n");
	printf("8 = LANCIA (<<Armamento>>)\n");
	printf("9 = 12 CORONE D'ORO (<<Borsa>>)\n");
	printf("0 = SPADONE (<<Armamento>>)\n");
	printf("\n");
	printf("Per sapere quale di queste cose trovi, usa come al\n");
	printf("solito il lancio di dado e cerca l'oggetto che\n");
	printf("corrisponde al numero. Segnalo sul tuo Registro di\n");
	printf("Guerra nella casella corrispondente alla voce che\n");
	printf("qui è tra parentesi, ed eventualmente mdodifica il tuo\n");
	printf("punteggio iniziale di Vitalità.\n");
	printf("\n");
	printf("\n");
	printf("QUANTO PUOI PORTARE?\n");
	printf("\n");
	printf("ARMAMENTO: Il massimo numero di Armi che puoi\n");
	printf("portare è 2.\n");
	printf("\n");
	printf("ZAINO: non è molto grande, quindi può contenere al\n");
	printf("massimo 8 oggetti, compresi i Pasti.\n");
	printf("\n");
	printf("OGGETTI SPECIALI: questi non devono stare nello\n");
	printf("Zaino. Quando n troverai uno, ti verrà detto come\n");
	printf("portarlo.\n");
	printf("\n");
	printf("CORONE D'ORO: queste stanno sempre nella Borsa. Il\n");
	printf("numero massimo è 50.\n");
	printf("\n");
	printf("CIBO: deve stare nello Zaino. Ogni Pasto conta\n");
	printf("come un oggetto.\n");
	printf("\n");
	printf("Tutti gli oggetti che puoi trovare e usare nel tuo\n");
	printf("viaggio, e che devi segnare sul Registro di Guerra,\n");
	printf("nel testo li troverai scritti in maiuscolo.\n");
	printf("Se non viene detto esplicitamente che si tratta di un\n");
	printf("Oggetto Speciale, mettilo nello Zaino.\n");
	printf("\n");
	printf("\n");
	printf("COME USARE L'EQUIPAGGIAMENTO?\n");
	printf("\n");
	printf("ARMAMENTO: le armi ti aiutano in battaglia. Se tra le\n");
	printf("Arti Ramas che hai scelto c'è la SCHERMA, e se hai\n");
	printf("l'Arma corrispondente, aggiungi 2 punti alla tua\n");
	printf("Combattività. Se entri in battaglia senza armi, togli\n");
	printf("4 punti dalla tua Combattività e combatti a mani\n");
	printf("nude. Se trovi un'arma durante il viaggio, puoi\n");
	printf("prenderla e usarla (ricorda che puoi portare al\n");
	printf("massimo due armi).\n");
	printf("\n");
	printf("ZAINO: durante il viaggio troverai diversi oggetti utili\n");
	printf("che forse vorrai tenere (ricorda che nello zaino puoi\n");
	printf("portare al massimo 8 oggetti). Puoi cambiare i tuoi\n");
	printf("oggetti, o eliminarli, ma non quando sei impegnato\n");
	printf("in un combattimento.\n");
	printf("\n");
	printf("OGGETTI SPECIALI: ogni Oggetto Speciale ha un suo\n");
	printf("uso e un suo effetto. Qualche volta questo ti sarà\n");
	printf("detto nel momento in cui lo trovi, altre volte ti sarà\n");
	printf("rivelato man mano che la storia procede.\n");
	printf("\n");
	printf("CORONE D'ORO: la moneta locale è la Corona, una\n");
	printf("piccola moneta d'oro. Le monete possono essere\n");
	printf("usate durante il viaggio per pagare il trasporto, il\n");
	printf("cibo, o per corrompere qualcuno! Molti dei nemici\n");
	printf("che incontrerai avranno delle Corone d'oro, con sè o\n");
	printf("nascoste da qualche parte. Ogni volta che uccidi un\n");
	printf("nemico puoi prendere le sue Corone e metterle nella\n");
	printf("Borsa (Comunque non più di 50).\n");
	printf("\n");
	printf("CIBO: dovrai mangiare regolarmente durante il\n");
	printf("viaggio. Se ti trovi senza cibo quando ti viene\n");
	printf("ordinato di magniare un Pasto, perdi 3 punti di\n");
	printf("Vitalità. Ma se tra le cinque Arti Ramas hai\n");
	printf("scelto la CACCIA, non sarà necessario cancellare un\n");
	printf("Pasto dalla casella del tuo Registro di Guerra.\n");
	printf("\n");
	printf("POZIONE MAGICA: questa può ridarti 4 punti di\n");
	printf("Vitalità se la bevi dopo un combattimento. Ne\n");
	printf("hai una sola dose. Se trovi altre Pozioni Magiche\n");
	printf("durante il viaggio, ti verrà detto che effetto hanno.\n");
	printf("Tutte le Pozioni Magiche vanno contate come\n");
	printf("oggetti da mettere nello Zaino.\n\n");
	
	printf("PER TORNARE AL PROLOGO PREMI p\n");
	printf("PER LEGGERE LE REGOLE DI COMBATTIMENTO PREMI c\n");
	printf("PER INIZIARE A GIOCARE PREMI 1: ");
	
	do {
		if(continua == 'p') {
			Prologo();
			verifica = true;
			}
		else if(continua == 'c') {
			RegoleCombattimento();
			verifica = true;
			}
		else if(continua == '1') {
			uno();
			verifica = true;
			}
		else {
			scanf("%c", &continua);
			}
		} while(verifica == false);
	
	}

void RegoleCombattimento(void) {
	
	char continua = 'x';
	bool verifica = false;
	
	printf("\n                   LE REGOLE DI COMBATTIMENTO                  \n\n");
	
	printf("\nDurante la tua avventura ti capiterà l'occasione di\n");
	printf("combattere con dei nemici. Il punteggio di Combat-\n");
	printf("tività e di Vitalità di ogni singolo nemico saranno\n");
	printf("specificati nel testo. Lo scopo di Lupo Solitario in\n");
	printf("combattimento è di uccidere il nemico; questo di fa\n");
	printf("portando a zero i suoi punti di Vitalità cercando\n");
	printf("di perderne il meno possibile.\n");
	printf("\n");
	printf("All'inizio del combattimento i punti di Vitalità di\n");
	printf("Lupo Solitario e del nemico devono essere segnati\n");
	printf("nelle apposite caselle del DIARIO DI COMBATTIMENTO\n");
	printf("nel tuo Registro di Guerra.\n");
	printf("\n");
	printf("Il combattimento si svolgerà così:\n");
	printf("\n");
	printf("1) Aggiungi al tuo punteggio di Combattività i punti\n");
	printf("che ti toccano grazie alle tue arti Ramas.\n");
	printf("\n");
	printf("2) Sottrai il punteggio di Combattività del nemico\n");
	printf("dalla somma ottenuta. Questo è il RAPPORTO DI\n");
	printf("FORZA, che devi segnare nell'apposita casella del\n");
	printf("Diario di Combattimento.\n");
	printf("3) Adesso lancia 1d10 come al solito.\n");
	printf("\n");
	printf("4) Vai alla tabella RISULTATI DI COMBATTIMENTO.\n");
	printf("Nella riga in alto sono segnati i\n");
	printf("numeri del Rapporto di Forza; cerca il tuo e fai\n");
	printf("l'incrocio con il numero uscito sul dado (lato della tabella).\n");
	printf("Così trovi i punti di Vitalità persi sia da Lupo Solitario\n");
	printf("che dal suo nemico durante questo combattimento.\n");
	printf("\n");
	printf("5) Sulle caselle <<Vitalità>> del Diario di Com-\n");
	printf("battimento segna i nuovi punteggi dei due combattimenti.\n");
	printf("\n");
	printf("6) Se non ricevi istruzioni diverse, o se non hai la\n");
	printf("possibilità di fuggire, devo continuare a combat-\n");
	printf("tere, e cioè...\n");
	printf("\n");
	printf("7) Riprendi dal 3.\n");
	printf("\n");
	printf("Il combattimento continua finchè i punti di Vita-\n");
	printf("lità del nemico o di Lupo Solitario arrivano a\n");
	printf("zero; a questo punto chi ha zero viene dichiarato\n");
	printf("morto. Se muore Lupo Solitario l'avventura è finita.\n");
	printf("Se muore il nemico, Lupo Solitario coninua, ma\n");
	printf("ovviamente con meno punti di Vitalità.\n");
	printf("\n");
	printf("\n");
	printf("FUGA DAL COMBATTIMENTO\n");
	printf("\n");
	printf("Durante la tua avventura può esserti data la possi-\n");
	printf("bilità di sottrarti al combattimento tra uno scontro e\n");
	printf("l'altro. Se decidi di fuggire calcola il punteggio fino a\n");
	printf("quel momento con il solito sistema. Bada però che\n");
	printf("non vengono contati i punti di Vitalità persi dal\n");
	printf("nemico, ma solo quelli persi da Lupo Solitario:\n");
	printf("questo è il prezzo che si paga per fuggire! Comunque\n");
	printf("tieni presente che puoi fuggire solo se questa\n");
	printf("possibilità è prevista espressamente dal testo.\n\n");
	
	printf("PER INIZIARE L'AVVENTURA PREMI 1\n");
	printf("PER TORNARE ALLE REGOLE PREMI r\n");
	printf("PER TORNARE AL PROLOGO PREMI p: ");
	
	do {
		if(continua == '1') {
			uno();
			verifica = true;
			}
		else if(continua == 'r') {
			Regole();
			verifica = true;
			}
		else if(continua == 'p') {
			Prologo();
			verifica = true;
			}
		else {
			scanf("%c", &continua);
			}
		} while(verifica == false);
	}
	
void uno(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   1.                  \n\n");
	
	printf("\nDevi far presto, perchè qualcosa ti dice che non è\n");
	printf("prudente indugiare presso le rovine fumanti del\n");
	printf("monastero. I Kraan, i mostri dalle nere ali,\n");
	printf("potrebbero tornare da un momento all'altro. Devi\n");
	printf("raggiungere Holmgard, la capitale di Sommerlund, e\n");
	printf("portare al Re la terribile notizia: tutti i cavalieri\n");
	printf("Ramas, salvo te, sono stati massacrati. Sommerlund sarà\n");
	printf("alla mercè del suo antico nemico, i Signori delle\n");
	printf("Tenebre.\n");
	printf("\n");
	printf("Trattenendo le lacrime, dai un ultimo saluto ai tuoi\n");
	printf("compagni uccisi. Dentro di te giuri che la loro morte\n");
	printf("sarà vendicata. Volti le spalle alle rovine e scendi\n");
	printf("con circospezione il ripido sentiero.\n");
	printf("\n");
	printf("Ai piedi della collina il sentiero si biforca, ma\n");
	printf("entrambe le piste portano nel folto della foresta.\n\n");
	
	printf("Se scegli il sentiero di destra, vai all'85.\n");
	printf("Se scegli quello di sinistra, vai al 275.\n");
	printf("Se vuoi utilzzare l'Arte del Sesto Senso, vai al 141.\n");
	printf("PER TORNARE AL PROLOGO PREMI 999\n");
	
	do {
		if(continua == 85) {
			//otto_cinque();
			verifica = true;
			}
		else if(continua == 275) {
			//due_sette_cinque();
			verifica = true;
			}
		else if(continua == 141) {
			//uno_quattro_uno();
			verifica = true;
			}
		else if(continua == 999) {
			Prologo();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}
	
void due(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   2.                  \n\n");
	
	printf("\nMentre corri nel bosco sempre più fitto le grida dei\n");
	printf("Giak si sentono sempre meno. Ormai li hai quasi\n");
	printf("seminati, ma improvvisamente inciampi in un ramo\n");
	printf("basso e finisci dentro un cespuglio.\n");
	printf("\n");
	printf("Tira il dado\n\n");

	printf("Se esce un numero fra 0 e 4, vai al 343.\n");
	printf("Se esce un numero da 5 a 9, vai al 276.\n");
	
	do {
		if(continua == 343) {
			//tre_quattro_tre();
			verifica = true;
			}
		else if(continua == 276) {
			//due_sette_sei();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}
	
void tre(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   3.                  \n\n");
	
	printf("\nSeguendo passo passo l'ufficiale attraversi un\n");
	printf("portale ad arco, e salendo per una stretta scala arrivi\n");
	printf("in un ampio cortile. C'è tutto un via vai di soldati, i\n");
	printf("quali portano agli ufficiali di guardia sulle mura della\n");
	printf("città gli ordini scritti su pergamene decorate.\n");
	printf("\n");
	printf("Un uomo scarno e con la faccia coperta di cicatrici,\n");
	printf("che indossa l'abito bianco e porpora dei cortigiani, si\n");
	printf("avvicina e ti invita a seguirlo nella rocca.\n\n");
	
	printf("Se vuoi seguirlo, vai al 196.\n");
	printf("Se rifiuti il suo invito e vuoi tornare nelle strade\n");
	printf("affollate, vai al 144.\n");
	
	do {
		if(continua == 196) {
			//uno_nove_sei();
			verifica = true;
			}
		else if(continua == 144) {
			//uno_quattro_quattro();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}
	
void quattro(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   4.                  \n\n");
	
	printf("\nÈ una piccola canoa, molto in cattivo stato. Il legno\n");
	printf("è marcio e pieno di fessure, e l'acqua entra da tutte\n");
	printf("le parti. Rapidamente tappi i buchi più grossi con\n");
	printf("dell'argilla, e butti fuori l'acqua. Sembra che per\n");
	printf("adesso tenga. Sistemi il tuo equipaggiamento sotto\n");
	printf("prua, e con un pezzo di legno trovato li vicino\n");
	printf("cominci a remare giù per la corrente.\n");
	printf("\n");
	printf("Dopo un po' senti dei cavalli al galoppo avvicinarsi\n");
	printf("sulla riva sinistra.\n\n");
	
	printf("Se vuoi nasconderti sul fondo della canoa, vai al 75.\n");
	printf("Se vuoi richiamare la loro attenzione, vai al 175.\n");
	printf("Se vuoi utilizzare l'Arte del Sesto Senso, vai al 218.\n");
	
	do {
		if(continua == 75) {
			//sette_cinque();
			verifica = true;
			}
		else if(continua == 175) {
			//uno_sette_cinque();
			verifica = true;
			}
		else if(continua == 218) {
			//due_uno_otto();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}
	
void cinque(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   5.                  \n\n");
	
	printf("\nDopo aver camminato per circa un'ora, ecco che il\n");
	printf("sentiero piega leggermente a est. Arrivi a un guado\n");
	printf("che attraversa un rapido torrente che scende a sud.\n");
	printf("Poco dopo il guado incontri un sentiero più largo che\n");
	printf("va da nord a sud. Capisci che se andassi a nord ti\n");
	printf("allontaneresti dalla capitale, quindi all'incrocio giri a\n");
	printf("destra e ti dirigi a sud.\n\n");
	
	printf("Vai al 111.\n");
	
	do {
		if(continua == 111) {
			//uno_uno_uno();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}

void sei(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   6.                  \n\n");
	
	printf("\nIn lontananza senti un galoppo di cavalli che si\n");
	printf("avvicinano. Ti nascondi dietro un albero e aspetti: è\n");
	printf("la cavalleria della Guardia Reale con le bianche\n");
	printf("uniformi di Sua Maestà.\n\n");

	printf("Se vuoi chiamarli, vai al 183.\n");
	printf("Se vuoi lasciarli passare per poi continuare il tuo\n");
	printf("   cammino nella foresta, vai al 200.\n");
	
	do {
		if(continua == 183) {
			//uno_otto_tre();
			verifica = true;
			}
		else if(continua == 200) {
			//due_zero_zero();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}

void sette(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   7.                  \n\n");
	
	printf("\nPer quella che ti sembra un'eternità, l'impeto della\n");
	printf("folla ti trascina come una foglia sull'onda della\n");
	printf("corrente. Tenti disperatamente di stare in piedi, ma\n");
	printf("ti senti debole e ti gira la testa, e le tue gambe pesano\n");
	printf("come il piombo. Improvvisamente intravedi una\n");
	printf("lunga e stretta scala di pietra che porta sul tetto di\n");
	printf("una locanda.\n");
	printf("\n");
	printf("Raccogliendo le ultime forze ti precipiti verso la\n");
	printf("scala e cominci faticosamente a salire. Da lì vedi il\n");
	printf("magnifico panorama dei tetti e delle torri di\n");
	printf("Holmgard, con le alte mura di pietra della rocca\n");
	printf("splendenti nel sole.\n");
	printf("\n");
	printf("Le case e i palazzi della capitale sono costruiti molto\n");
	printf("vicini uno all'altro, ed è possibile saltare da un tetto\n");
	printf("all'altro. Un tempo gli abitanti di Holmgard adopera-\n");
	printf("vano questi percorsi aerei quando le pesanti pioggie\n");
	printf("autunnali trasformavano le strade non pavimentate\n");
	printf("in impraticabili pantani. Ma dopo molti incidenti un\n");
	printf("regio decreto aveva proibito severamente quest'abi-\n");
	printf("tudine.\n");
	printf("\n");
	printf("Valutato il pro e il contro, decidi di seguire questa\n");
	printf("via: l'unica che ti consente di raggiungere il Re. Con\n");
	printf("un salto dopo l'altro sorvoli diverse strade: te ne\n");
	printf("manca solo una. Quest'ultima però è molto più larga\n");
	printf("delle altre, e il salto è molto impegnativo. La\n");
	printf("paura ti attanaglia lo stomaco. Deciso a raggiungere\n");
	printf("la fortezza, fai qualche passo indietro e prendi la\n");
	printf("rincorsa per il salto. Con il cuore in gola arrivi al\n");
	printf("bordo del tetto e ti lanci nel vuoto, con gli occhi fissi\n");
	printf("sul tetto di fronte.\n");
	printf("Tira il dado.\n\n");
	
	printf("Se esce un numero da 0 a 2, vai al 108.\n");
	printf("Se esce un numero da 3 a 9, vai al 25.\n");
	
	do {
		if(continua == 108) {
			//uno_zero_otto();
			verifica = true;
			}
		else if(continua == 25) {
			//due_cinque();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}

void otto(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   8.                  \n\n");
	
	printf("\nIl tuo Sesto Senso ti dice che a sud infuria una\n");
	printf("violenta battaglia. Tuttavia sai che la via più rapida\n");
	printf("per la capitale è proprio quella che va verso sud.\n\n");
	
	printf("Vai al 70 e scegli la tua strada.\n");
	
	do {
		if(continua == 70) {
			//sette_zero();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}

void nove(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   9.                  \n\n");
	
	printf("\nNon riesci a muoverti: sei come immobilizzato da\n");
	printf("una forza misteriosa. I tuoi occhi sono attratti\n");
	printf("irresistibilmente dalla bocca dello scheletro. Dalle\n");
	printf("viscere della terra sale nn cupo rumore, come il\n");
	printf("ronzio di milioni di api impazzite. Nelle vuote\n");
	printf("occhiaie dello scheletro del Re appare un lieve\n");
	printf("chiarore di brace, mentre il ronzio aumenta fino a\n");
	printf("diventare assordante. Sei in presenza di una forza\n");
	printf("malvagia primordiale, molto più antica e potente\n");
	printf("degli stessi Signori delle Tenebre.\n\n");
	
	printf("Se possiedi una Gemma Vordak, vai al 236.\n");
	printf("Altrimenti, vai al 292.\n");
	
	do {
		if(continua == 236) {
			//due_tre_sei();
			verifica = true;
			}
		else if(continua == 292) {
			//due_nove_due();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}

void uno_zero(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   10.                  \n\n");
	
	printf("\nStai sudando, e le gambe ti dolgono. Poco lontano\n");
	printf("vedi un gruppo di capanne.\n\n");
	
	printf("Se vuoi entrare in una capanna per riposarti, vai al 115.\n");
	printf("Se vuoi andare avanti, vai all'83.\n");
	
	do {
		if(continua == 115) {
			//uno_uno_cinque();
			verifica = true;
			}
		else if(continua == 83) {
			//otto_tre();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}

void uno_uno(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   11.                  \n\n");
	
	printf("\nTi precipiti dentro una stalla, e nascondi il camice\n");
	printf("da chirurgo sotto la paglia: è meglio farsi vedere\n");
	printf("come Ramas che come ciarlatano.\n");
	printf("Senza perdere un attimo ti dirigi verso la Grande\n");
	printf("Sala all'altro lato del cortile.\n\n");
	
	printf("Vai al 139.\n");
	
	do {
		if(continua == 139) {
			//uno_tre_nove();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}

void uno_due(void) {
	
	int  continua = 0;
	bool verifica = false;
	
	printf("\n                   12.                  \n\n");
	
	printf("\nLa guardia del corpo ti guarda con grande sospetto e\n");
	printf("poi sbatte la porta. Senti delle voci all'interno del\n");
	printf("carrozzone. Improvvisamente la porta si apre e\n");
	printf("compare la faccia di un agitato mercante.\n");
	printf("\n");
	printf("Dice che ci vogliono 10 Corone per il viaggio.\n\n");
	
	printf("Se hai 10 Corone d'oro e vuoi pagarlo, vai al 262.\n");
	printf("Se non hai abbastanza soldi, o non vuoi pagarlo, vai al 247.\n");
	
	do {
		if(continua == 262) {
			//due_sei_due();
			verifica = true;
			}
		else if(continua == 247) {
			//due_quattro_sette();
			verifica = true;
			}
		else {
			scanf("%i", &continua);
			}
		} while(verifica == false);
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

