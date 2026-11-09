
undefined4 FUN_01043916(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_010439c8;
  uVar2 = DAT_010439cc;
  uVar3 = DAT_010439d0;
  uVar4 = DAT_010439d4;
  if ((param_1 != 0) &&
     (uVar1 = DAT_010439d8, uVar2 = DAT_010439dc, uVar3 = DAT_010439e0, uVar4 = DAT_010439e4,
     param_1 != 1)) {
    return param_4;
  }
  FUN_010027f4(uVar1,0xffffff,*param_2);
  FUN_010027f4(uVar2,0xfff,*(undefined2 *)(param_2 + 1));
  FUN_010027dc(uVar3,0x38,((uint)*(byte *)((int)param_2 + 7) << 0x1b) >> 0x18);
  FUN_010027dc(uVar4,7,*(undefined1 *)(param_2 + 2));
  uVar1 = FUN_010027dc(uVar4,0x10,((uint)*(byte *)((int)param_2 + 6) << 0x1c) >> 0x18,param_4);
  return uVar1;
}

