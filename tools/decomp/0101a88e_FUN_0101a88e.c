
undefined8
FUN_0101a88e(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  uint unaff_r4;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (-1 < (int)((0xcU >> (unaff_r4 & 0xff)) << 0x1f)) {
    uVar5 = 0xc801;
    goto LAB_01012dea;
  }
  if (param_3 == 3) {
    uVar4 = 0xff;
    uVar2 = 0x9f;
LAB_01012dc2:
    uVar3 = 0xf;
  }
  else {
    if (param_3 == 0) {
      uVar4 = 0x41;
      uVar2 = 0;
      goto LAB_01012dc2;
    }
    if (param_3 == 1) {
      uVar4 = 0xbe;
      uVar2 = 0;
    }
    else {
      if (param_3 != 2) {
        uVar5 = 0xc800;
        goto LAB_01012dea;
      }
      uVar4 = 0;
      uVar2 = 0x9f;
    }
    uVar3 = 0;
  }
  uVar1 = FUN_01012e22();
  uVar4 = FUN_01012e22(uVar1,0x2c,uVar4,param_5._1_1_);
  uVar2 = FUN_01012e22(uVar4,0x2d,uVar2,param_5._2_1_);
  FUN_01012e22(uVar2,0x2f,uVar3,param_5._3_1_);
LAB_01012dea:
  return CONCAT44(param_4,uVar5);
}

