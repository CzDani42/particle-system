#include <vector>
#include <iostream>
using namespace std;

const std::string ElementCodes[] = {
    "undefined",
    "H",
    "He",
    "Li",
    "Be",
    "B",
    "C",
    "N",
    "O",
    "F",
    "Ne",
    "Na",
    "Mg",
    "Al",
    "Si",
    "P",
    "S",
    "Cl",
    "Ar",
    "K",
    "Ca",
    "Sc",
    "Ti",
    "V",
    "Cr",
    "Mn",
    "Fe",
    "Co",
    "Ni",
    "Cu",
    "Zn",
    "Ga",
    "Ge",
    "As",
    "Se",
    "Br",
    "Kr",
    "Rb",
    "Sr",
    "Y",
    "Zr",
    "Nb",
    "Mo",
    "Tc",
    "Ru",
    "Rh",
    "Pd",
    "Ag",
    "Cd",
    "In",
    "Sn",
    "Sb",
    "Te",
    "I",
    "Xe",
    "Cs",
    "Ba",
    "La",
    "Ce",
    "Pr",
    "Nd",
    "Pm",
    "Sm",
    "Eu",
    "Gd",
    "Tb",
    "Dy",
    "Ho",
    "Er",
    "Tm",
    "Yb",
    "Lu",
    "Hf",
    "Ta",
    "W",
    "Re",
    "Os",
    "Ir",
    "Pt",
    "Au",
    "Hg",
    "Tl",
    "Pb",
    "Bi",
    "Po",
    "At",
    "Rn",
    "Fr",
    "Ra",
    "Ac",
    "Th",
    "Pa",
    "U",
    "Np",
    "Pu",
    "Am",
    "Cm",
    "Bk",
    "Cf",
    "Es",
    "Fm",
    "Md",
    "No",
    "Lr",
    "Rf",
    "Db",
    "Sg",
    "Bh",
    "Hs",
    "Mt",
    "Ds",
    "Rg",
    "Cn",
    "Nh",
    "Fl",
    "Mc",
    "Lv",
    "Ts",
    "Og"
};



class Atom
{
private:
    int proton, neutron, electron;
public:
    Atom(int inpPro, int inpNeu, int inpEle)
    {
        proton = inpPro;
        neutron = inpNeu;
        electron = inpEle;
    }
    Atom(int inpPro, int inpNeu)
    {
        proton = inpPro;
        neutron = inpNeu;
        electron = inpPro;
    }
    int GetMass()
    {
        return proton + neutron;
    }
    int GetNeutronCount()
    {
        return neutron;
    }
    int GetNumber()
    {
        return proton;
    }
    std::string GetCode()
    {
        return ElementCodes[proton];
    }
};

class Molecule {
public:
    vector<pair<Atom, int>> atoms;
    Molecule(vector<pair<Atom, int>> inpAtoms)
    {
        for (pair<Atom, int> p : inpAtoms) {
            atoms.push_back(p);
        }
    }
    string toString()
    {
        string retStr = "";
        for (auto p : atoms)
        {
            retStr += p.first.GetCode();
            retStr += to_string(p.second);
        }
        return retStr;
    }
};