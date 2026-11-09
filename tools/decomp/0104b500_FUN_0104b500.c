
undefined8 FUN_0104b500(void)

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
  if (*(code **)(extraout_r1 + 0x10) != (code *)0x0) {
    uVar1 = (**(code **)(extraout_r1 + 0x10))();
    return CONCAT44(in_r3,uVar1);
  }
  return CONCAT44(in_r3,0x8f05);
}

