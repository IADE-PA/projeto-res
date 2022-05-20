#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    char name[80];
    int games_played;
    int wins;
} _Player, *Player;

bool equal_players(Player first, Player second);

void free_player(Player player);

#endif