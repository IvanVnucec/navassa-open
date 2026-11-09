
undefined8 FUN_0104b520(void)

{
  undefined4 uVar1;
  int extraout_r1;
  undefined4 in_r3;
  char in_NG;
  char in_OV;
  
  FUN_0104b550();
  if (in_NG == in_OV) {
    return CONCAT44(in_r3,0x8f00);
  }
  FUN_0104b540();
  if (*(code **)(extraout_r1 + 0x14) != (code *)0x0) {
    uVar1 = (**(code **)(extraout_r1 + 0x14))();
    return CONCAT44(in_r3,uVar1);
  }
  return CONCAT44(in_r3,0x8f04);
}

