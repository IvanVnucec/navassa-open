
undefined8 FUN_01025d9c(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = nmi_signal_helper();
  uVar6 = 0;
  FUN_01025d4e(uVar1,param_2 & 0xff000000);
  FUN_0101b2ac();
  *param_1 = param_2 | *param_1;
  puVar5 = (uint *)param_1[4];
LAB_01025dbc:
  do {
    puVar3 = puVar5;
    uVar2 = *param_1;
    if (puVar3 == param_1 + 3) {
      *param_1 = uVar2 & ~uVar6;
      FUN_0101b2b8();
      return CONCAT44(param_4,*param_1);
    }
    uVar7 = *puVar3;
    puVar5 = (uint *)puVar3[1];
    uVar4 = uVar7 & 0xffffff;
    if (-1 < (int)(uVar7 << 5)) goto LAB_01025dee;
  } while ((uVar2 & uVar4) != uVar4);
  goto LAB_01025ddc;
LAB_01025dee:
  if ((uVar2 & uVar4) != 0) {
LAB_01025ddc:
    if ((int)(uVar7 << 7) < 0) {
      uVar6 = uVar6 | uVar4;
    }
    FUN_0101b576(puVar3,uVar2 | 0x2000000);
  }
  goto LAB_01025dbc;
}

