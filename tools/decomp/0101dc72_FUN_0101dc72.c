
undefined8 FUN_0101dc72(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_r6;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0101ddea();
  uVar3 = 0;
  if (iVar1 == 1) {
    if (param_3 == 0) {
      pin_update(unaff_r6 + 0xe0,3,param_2 >> 8);
      puVar2 = (undefined1 *)(unaff_r6 + 0xdf);
    }
    else {
      pin_update(unaff_r6 + 0xde,3,param_2 >> 8);
      puVar2 = (undefined1 *)(unaff_r6 + 0xdd);
    }
    *puVar2 = (char)param_2;
    FUN_0101db10();
  }
  else {
    uVar3 = 0xc600;
  }
  return CONCAT44(param_4,uVar3);
}

