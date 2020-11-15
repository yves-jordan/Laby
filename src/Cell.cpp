#include "Cell.h"

using namespace std;

/**
*\ class Cell
*\ brief cette classe décrit une cellule dans notre labyrinthe
*\ Author NJAMEN Y-Jordan
*\ date 2020
*/
Cell::Cell(int x, int y) : m_x(x), m_y(y)
{
/**
*\ brief Create a Cell
*\ param x position initiale suivant x
*\ param y position initiale suivant y
*/

}
Cell::~Cell()
{
/**
*\ brief delete a Cell
*/
}

void Cell::add_neighb(Cell *n1)
{
  /**
  *\ brief ajoute une cellule voisine à la cellule courante
  *\ param *n1 pointeur vers une autre cellule
  */
  for(int i = 0 ; i < m_nb_neighb ; i++)
    if(m_neighb[i] == n1)
      return;

  m_nb_neighb++;

  Cell **new_neighb = new Cell*[m_nb_neighb];
  for(int i = 0 ; i < m_nb_neighb - 1 ; i++)
    new_neighb[i] = m_neighb[i];

  new_neighb[m_nb_neighb - 1] = n1;
  delete[] m_neighb;
  m_neighb = new_neighb;

  n1->add_neighb(this);
}

void Cell::add_neighb(Cell *n1, Cell *n2)
{
  /**
  *\ brief ajoute 2 cellules voisines à la cellule courante
  *\ param *n1 cellule 1
  *\ param *n2 cellule 2
  */
  add_neighb(n1);
  add_neighb(n2);
}

void Cell::add_neighb(Cell *n1, Cell *n2, Cell *n3)
{
  /**
  *\ brief ajoute 2 cellules voisines à la cellule courante
  *\ param *n1 cellule 1
  *\ param *n2 cellule 2
  *\ param *n3 cellule 3
  */
  add_neighb(n1);
  add_neighb(n2);
  add_neighb(n3);
}