
void FUN_0100fb98(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_0100febc + param_1 * 4);
  FUN_0100f7e2(uVar2,0x114,0xffff,*param_2);
  FUN_0100f7e2(uVar2,0x116,0xffff,param_2[1]);
  uVar1 = FUN_0100f7e2(uVar2,0x118,0xffff,param_2[2]);
  FUN_0100fbe4(uVar1,0x11a,3);
  FUN_0100f7bc(uVar2,0x11a,0);
  return;
}

