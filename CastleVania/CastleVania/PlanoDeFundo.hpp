#pragma once

#include "../Personagem/Ent.hpp"
#include "../Gerenciador/GerenciadorGrafico.hpp"
#include "../stdafx.h"

class PlanoDeFundo : public Ent {
public:
    PlanoDeFundo(sf::Vector2f pos, const char* path);
    PlanoDeFundo();
    virtual ~PlanoDeFundo();

    void inicializaSprite();
    void renderiza();
    void atualiza(float dt) { }
};

