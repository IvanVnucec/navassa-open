
void FUN_01025502(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_58 [2];
  undefined1 auStack_50 [40];
  undefined4 local_28;
  undefined4 local_20;
  
  uVar2 = 0;
  local_28 = param_1;
  do {
    if ((int)((param_2 >> (uVar2 & 0xff)) << 0x1f) < 0) {
      local_20 = *(undefined4 *)(param_3 + uVar2 * 4);
      uVar1 = FUN_01005c82(auStack_50,uVar2 & 0xff);
      local_58[uVar2] = uVar1;
      FUN_01005e78(1,uVar1,local_28,uVar2 & 0xff);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}

