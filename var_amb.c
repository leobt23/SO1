#include <stdlib.h>
#include <stdio.h>
#include "var_amb.h"

void getVarAmbiente(pVarsAmbiente varAmb){
  if(getenv("MAXPLAYER") == NULL)
    varAmb->MAXPLAYER = MAXPLAYERS_DEFAULT;
  else
    varAmb->MAXPLAYER = atoi(getenv("MAXPLAYER"));

  if(getenv("GAMEDIR") == NULL)
    varAmb->GAMEDIR = GAMEDIR_DEFAULT;
  else
    varAmb->GAMEDIR = getenv("GAMEDIR");

    printf("MAXPLAYER: %d\n  GAMEDIR:%s\n", varAmb->MAXPLAYER, varAmb->GAMEDIR);
}

int main(){
  varsAmbiente VA;
  getVarAmbiente(&VA);

}
