#ifndef POSITION_H_
#define POSITION_H_

#include <MLV/MLV_all.h>
#include "geometrie.h"

struct MLV_Position_s {
  Coord decalage;
  Coord dimension;
};
typedef struct MLV_Position_s *MLV_Position;

/* Gestion du TAD Position */
MLV_Position init_positon(Coord decalage, Coord dimension);
void liberer_position(MLV_Position *pos);
MLV_Position copie_position(MLV_Position pos);
void afficher_position(MLV_Position pos, MLV_Color col);

#endif
