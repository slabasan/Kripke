#ifndef KRIPKE_KERNEL_3D_GDZ_H__
#define KRIPKE_KERNEL_3D_GDZ_H__

#include<Kripke/Kernel.h>

class Kernel_3d_GDZ : public Kernel {
  public:
    Kernel_3d_GDZ();
    virtual ~Kernel_3d_GDZ();

    virtual Nesting_Order nesting(void) const;

    // Computational Kernels
    virtual void evalSigmaTot(Grid_Data *grid_data);
    virtual void evalSigmaS(Grid_Data *grid_data);
    virtual void LTimes(Grid_Data *grid_data);
    virtual void LPlusTimes(Grid_Data *grid_data);
    virtual void sweep(Grid_Data *grid_data, Group_Dir_Set *gd_set);

};

#endif