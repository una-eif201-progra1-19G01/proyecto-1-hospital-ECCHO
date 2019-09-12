#ifndef CAMA_H
#define CAMA_H

#include <string>

class Cama {
private:
    std::string codigo;
    bool estado;
public:
    Cama();

    Cama(std::string, bool);

    virtual ~Cama();

    void setCodigo(std::string);

    void setEstado(bool);

    std::string getCodigo();

    bool getEstado();












};
#endif //CAMA_H

