#ifndef VAR_AMB_H
#define VAR_AMB_H

#define MAXPLAYERS_DEFAULT 30
#define GAMEDIR_DEFAULT "./"

typedef struct{
  int MAXPLAYER;
  char* GAMEDIR;
} varsAmbiente, *pVarsAmbiente;

void getVarAmbiente(pVarsAmbiente varAmb);

#endif
