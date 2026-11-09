
void FUN_01012a98(uint param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined4 local_18;
  undefined1 local_14;
  char local_13;
  
  local_34 = *(undefined4 *)(param_1 + 0x4f0);
  local_30 = *(undefined4 *)(param_1 + 8);
  uVar1 = param_1;
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
    param_4 = DAT_01012b9c + 0x19c;
    uVar1 = 0;
    param_3 = uVar1;
    break;
  case 1:
    param_4 = DAT_01012b9c + 600;
    uVar1 = 0;
    goto LAB_01012af4;
  case 2:
    param_4 = DAT_01012b9c + 0x314;
    uVar1 = 1;
    goto LAB_01012aea;
  case 3:
    param_4 = DAT_01012b9c + 0x3d0;
    uVar1 = 1;
    param_3 = uVar1;
    break;
  case 4:
    param_4 = DAT_01012b9c + 0x604;
    uVar1 = 3;
LAB_01012aea:
    param_3 = 0;
    break;
  case 5:
    param_4 = DAT_01012b9c + 0x6c0;
    uVar1 = 3;
LAB_01012af4:
    param_3 = 1;
  }
  if (*(char *)(param_4 + 0x12) == '\x01') {
    local_28 = *(uint *)(param_4 + 0x20) >> 1;
  }
  else {
    fVar2 = (float)VectorUnsignedToFloat(*(uint *)(param_4 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
    local_28 = VectorFloatToUnsigned(fVar2 / DAT_01012b68 + 0.5,3);
  }
  local_38 = param_2;
  local_2c = param_1 + 0x1c0;
  local_24 = FUN_0101175c(uVar1,param_3 & 0xff);
  local_28 = local_28 << 1;
  FUN_010128e8(&local_38);
  if (local_13 != '\0') {
    FUN_010119b8(param_1 + 0x1c0,0,0);
  }
  *(undefined1 *)(param_1 + 0x2c) = local_1b;
  *(undefined4 *)(param_1 + 0x30) = local_18;
  *(undefined1 *)(param_1 + 0x34) = local_14;
  *(undefined1 *)(param_1 + 0x28) = local_1c;
  return;
}

