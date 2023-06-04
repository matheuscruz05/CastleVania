#include "../../include/Personagem/Ent.hpp"
#include "../../include/Anima��o/Animacao.hpp"

Ent::Ent(ID::ids id, sf::Vector2f pos) :
sprite(new CastleVania::Animacao::Animacao()),
id(id),
posicao(pos) { }

Ent::Ent() {
    this->id = ID::empty;
    sprite = NULL;
}

Ent::~Ent() {
    delete (sprite);
}

void Ent::mudarPos(const sf::Vector2f pos) {
    posicao = pos;
}

sf::Vector2f Ent::getPos() const {
    return posicao;
}

ID::ids Ent::getID() const {
    return id;
}

void Ent::moverCorpo(const sf::Vector2f vec) {
    posicao = sf::Vector2f(posicao.x + vec.x, posicao.y + vec.y);
}

void Ent::renderizar() {
    sprite->renderizar();
}

