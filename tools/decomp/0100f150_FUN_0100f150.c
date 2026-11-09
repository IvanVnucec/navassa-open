
void FUN_0100f150(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_0100f224;
  pin_update(DAT_0100f224,0x20,0x20);
  for (uVar2 = 0; uVar2 < param_1; uVar2 = uVar2 + 1) {
    *(undefined1 *)(param_3 + uVar2) = *(undefined1 *)(param_2 + uVar2);
  }
  pin_update(uVar1,0x20,0,param_4);
  return;
}

