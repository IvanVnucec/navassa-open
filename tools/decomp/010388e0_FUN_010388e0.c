
void FUN_010388e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  byte local_20 [16];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_0101206c(local_20,&DAT_01038c28,0x10);
  uVar2 = 0;
  do {
    *(undefined4 *)(param_2 + uVar2 * 4) = *(undefined4 *)(param_1 + (uint)local_20[uVar2] * 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  FUN_0103889e(param_2);
  FUN_0103889e(param_2 + 0x20);
  FUN_0103895c();
  FUN_01038858(param_2,param_2 + 0x20);
  uVar1 = DAT_01038c0c;
  FUN_01038858(param_2 + 8,param_2 + 0x28,DAT_01038c0c,DAT_01038c0c);
  FUN_01038858(param_2 + 0x10,param_2 + 0x30,0,0x800000);
  FUN_01038858(param_2 + 0x18,param_2 + 0x38,DAT_01038c10,uVar1);
  return;
}

