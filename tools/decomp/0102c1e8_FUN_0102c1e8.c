
void FUN_0102c1e8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  
  uVar2 = DAT_0102c75c;
  uVar1 = DAT_0102c758;
  pin_update(DAT_0102c754,0x10,0x10);
  FUN_0102c184();
  pin_update(uVar1,2,2);
  pin_update(uVar2,1,1);
  pin_update(uVar2,2,2);
  pin_update(uVar1,2,0,in_r3);
  return;
}

