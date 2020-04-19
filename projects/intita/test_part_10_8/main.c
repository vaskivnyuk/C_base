/*----------------------------------------------------------------
 * Алгоритмізація і програмування на мові С.
 * Заняття 10. Типи даних, визначені користувачем (частина 2).
 * Частина 8. Додавання нового вузла в середину списку перед заданим.
 *----------------------------------------------------------------
 * ITA17
 * Vaskivnyuk Mykhailo
 * 17.06.2017
 *----------------------------------------------------------------
 * IDE: Qt Creator 3.2.1 Основан на Qt 5.3.2 (MSVC 2010, 32 бита)
----------------------------------------------------------------*/

/* ЗАВДАННЯ
Перепишіть процедуру AddLast, використовуючи виключно синтаксис С
і з врахуванням вимог до раніше написаних процедур AddFirst і AddBefore
(передавання покажчика Head за значенням, його повернення в місце виклику).
*/

#include <stdio.h>
#include "clubs.h"

int main(void)
{
    sClubs    * clubs_ptr  = NULL;
    sClubNode * club_ptr   = NULL;
    sClubNode * club_ptr_2 = NULL;

//------------------------------------------------------------------------------
    cls_init(&clubs_ptr);
//------------------------------------------------------------------------------
    club_ptr = cls_new("Super Club 2", "Club City 2", "Club Country 2", 200.5, 228);
    cls_add_to_end(clubs_ptr, club_ptr);
//------------------------------------------------------------------------------
    club_ptr = cls_new("Super Club 1", "Club City 1", "Club Country 1", 100.5, 128);
    cls_add_to_begin(clubs_ptr, club_ptr);
//------------------------------------------------------------------------------
    club_ptr_2 = cls_new("Super Club 3", "Club City 3", "Club Country 3", 300.5, 328);
    cls_add_before(clubs_ptr, club_ptr, club_ptr_2);
//------------------------------------------------------------------------------
    club_ptr_2 = cls_new("Super Club 4", "Club City 4", "Club Country 4", 400.5, 428);
    cls_add_after(clubs_ptr, club_ptr, club_ptr_2);
//------------------------------------------------------------------------------
    printClubs(clubs_ptr);
//------------------------------------------------------------------------------
    puts("\0");
    return 0;
}