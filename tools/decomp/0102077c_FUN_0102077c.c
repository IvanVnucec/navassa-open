
undefined8 FUN_0102077c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < 2) {
    iVar4 = *(int *)(DAT_01020f4c + param_1 * 4);
    uVar2 = FUN_01002806(iVar4 + 0x179,0xffffff);
    *param_2 = uVar2;
    uVar2 = FUN_01002806(iVar4 + 0x17f,0xffffff);
    param_2[1] = uVar2;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(iVar4 + 0x185);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)(iVar4 + 0x16d);
    uVar1 = FUN_01002806(iVar4 + 0x16b,0xffff);
    *(undefined2 *)((int)param_2 + 10) = uVar1;
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(iVar4 + 0x170);
    uVar1 = FUN_01002806(iVar4 + 0x16e,0xffff);
    *(undefined2 *)((int)param_2 + 0xe) = uVar1;
  }
  else {
    uVar3 = 0x6100;
  }
  return CONCAT44(param_4,uVar3);
}

