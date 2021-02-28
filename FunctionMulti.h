#ifndef UNTITLED2_FUNCTIONMULTI_H
#define UNTITLED2_FUNCTIONMULTI_H
#include "Function.h"
#include "FunctionSum.h"

//double Function
namespace OOP_Hw3{
    class FunctionMulti : public Function{
        SharedPtr<Function> leftFunction;
        SharedPtr<Function> rigthFunction;
        //leftFunction * rigthFunction

    public:
        FunctionMulti(SharedPtr<Function> left, SharedPtr<Function> rigth);
        virtual double Evaluate(const std::map<std::string,double> &variables) const;
        virtual SharedPtr<OOP_Hw3::Function> DeriveBy(const std::string& variable) const;
        ~FunctionMulti(){};
    };
}

#endif //UNTITLED2_FUNCTIONMULTI_H
