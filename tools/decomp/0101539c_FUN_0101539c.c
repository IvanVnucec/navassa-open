
undefined4 FUN_0101539c(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  uVar2 = FUN_0100607e();
  if (uVar2 < param_2) {
    puVar4 = DAT_01006380;
    if (0xf < param_1) {
      puVar4 = DAT_01006380 + 1;
    }
    set_priority_6_wrapper(param_1,param_2,param_4);
    iVar3 = (param_1 & 0xf) * 2 + 1;
    *puVar4 = (param_2 & 7) << iVar3 | *puVar4 & ~(7 << iVar3);
    uVar1 = restore_priority();
    return uVar1;
  }
  return param_4;
}

