//Ecrire la fonction affiche_fichier(FILE *fp) qui permet d’afficher sur écran le contenu
//d’un fichier texte.

void affiche_fichier (FILE *fp){
	
	//déplacer le curceur de fichier au debut
	rewind (fp);
	
	//affichage le contenu du fichier
	int c; //representer les caractere
	while ( (c= fgetc(fp))!= EOF){ //tant que on est est entrain de lire un caractere 
		printf("le contenu du fichier est : %d",c);
	}
	
	//fermuture du fichier
	fclose (fp);
}
