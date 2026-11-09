
undefined8 FUN_0101bd92(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *(uint *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_1;
  if (param_3 < param_2) {
    if ((param_3 < param_4) && (param_4 <= param_2)) goto LAB_0101bdb6;
    uVar1 = *DAT_0101bf00;
  }
  else {
    if (*(uint *)(param_1 + 0x18) <= param_3 - param_4) {
LAB_0101bdb6:
      uVar2 = 1;
      goto LAB_0101bdc2;
    }
    uVar1 = DAT_0101bf00[1];
  }
  vListInsertGeneric(uVar1,param_1 + 4);
LAB_0101bdc2:
  return CONCAT44(param_4,uVar2);
}

