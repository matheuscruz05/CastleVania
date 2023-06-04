#include "../../include/Estados/Estado.hpp"

#include "../../include/Estados/GerenciadorEstado.hpp"

using namespace GE;

Estado::Estado(GerenciadorEstado* pGE) :
pGE(pGE) { }

Estado::~Estado() {
    pGE = NULL;
}

void Estado::setGerenciadorEstado(GerenciadorEstado* pGE) {
    this->pGE = pGE;
}

void Estado::mudarEstado(GE::estadoID id) {
    pGE->mudarEstadoAtual(id);
}

