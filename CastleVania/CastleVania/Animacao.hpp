#pragma once

#include "../Gerenciador/GerenciadorGrafico.hpp"
#include "../stdafx.h"


class Animacao {

private:
    GerenciadorGrafico* pGerenciadorG;
    sf::Vector2u numeroImagem;
    sf::Texture* textura;
    sf::Vector2u imagemAtual;
    sf::RectangleShape corpo;
    sf::IntRect uvRect;
    float tempoTotal;
    static const float mudarTempo;

public:
    Animacao();
    ~Animacao();

    void inicializarTextura(const char* caminho, sf::Vector2u numeroImagem);
    void setnumeroImagem(const sf::Vector2u numeroImagem);
    void renderizar();
    void atualizar(int fileira, float dt, bool olhandoEsquerda, sf::Vector2f posicao);
    void setGerenciadorGrafico(GerenciadorGrafico* pGeGra) { pGerenciadorG = pGeGra;}
    };

