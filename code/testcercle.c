#include <stdio.h>
#include <stdlib.h>

#include "type.h"
#include "imp_exp.h"

void main (int argc, char* argv[])
{
	int export,nlig,ncol;
	img I=NULL;
	char* f;
	f="centre_noir_50x50.pbm";

	I = import_1(f, &nlig, &ncol); //Allocation de I et lecture du fichier nommé f
	if (!I) return 0;
	printf("Importation ok\n");

	afficheimg_1(I,nlig,ncol);
	//printf("ok\n");
	export = export_1(I,"essai.pbm",0,nlig,ncol);
	if (!export) return 0;

	printf("Exportation ok\n");
	desallocation_1(I,nlig);

}