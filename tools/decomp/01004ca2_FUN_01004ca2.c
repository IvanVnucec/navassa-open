
undefined8
FUN_01004ca2(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint unaff_r4;
  undefined1 unaff_r7;
  bool bVar3;
  char cVar4;
  uint in_fpscr;
  float fVar5;
  uint in_stack_ffffffa8;
  int iVar6;
  byte local_50;
  byte local_4f;
  byte local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  byte *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  
  iVar6 = 0;
  local_4d = 2;
  local_40 = DAT_01005540;
  uStack_3c = DAT_01005544;
  local_50 = 0xff;
  local_4e = (byte)(1 << (param_2 & 0xff));
  if ((*DAT_010054f8 & local_4e) != 0) {
    VectorSignedToFloat(*DAT_01005444 + 1,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)FUN_01004ede(param_1,*DAT_01005444 + 1);
    if (((int)fVar5 & 0xffU) < 9) {
      fVar5 = (float)FUN_01004ede();
      unaff_r7 = (undefined1)(int)fVar5;
    }
    else {
      unaff_r7 = 8;
    }
  }
  if (param_3 == 0) {
    local_4f = DAT_01005444[0x10];
    unaff_r4 = (uint)DAT_01005444[0x11];
    cVar4 = *(char *)(DAT_010050d0 + 0x77d);
    bVar3 = cVar4 != '\x01';
    if (bVar3) {
      cVar4 = *(char *)(DAT_010050cc + 0x20);
    }
    if (!bVar3 || cVar4 == '\x01') {
      local_4d = 0x10;
    }
  }
  else if (param_3 == 2) {
    local_48 = DAT_01005444 + 0x2c;
    local_4f = 0;
    local_4d = 3;
    local_38 = *(byte *)(*(int *)(DAT_010054fc + param_2 * 4) + 0x33) & 7;
    unaff_r4 = 2;
  }
  else if (param_3 == 1 || param_3 == 3) {
    local_48 = DAT_01005444 + 0x20;
    local_4f = 0;
    unaff_r4 = 6;
  }
  local_44 = ((unaff_r4 - local_4f) + 1) * *(int *)(DAT_01005444 + 4);
  FUN_01010ddc(param_2,1);
  if (param_6 == 0 && param_5 == 0) {
    iVar6 = FUN_010109dc(param_2,local_4f,unaff_r4 & 0xff,local_44);
  }
  else {
    in_stack_ffffffa8 = in_stack_ffffffa8 & 0xff;
    local_4c = unaff_r7;
    for (uVar2 = (uint)local_4f; (int)uVar2 <= (int)unaff_r4; uVar2 = uVar2 + 1 & 0xff) {
      if (param_3 == 2) {
        in_stack_ffffffa8 = (uint)*(byte *)(DAT_01005440 + param_2 * 3 + uVar2);
        pin_update(*(int *)(DAT_010054fc + param_2 * 4) + 0x33,7,in_stack_ffffffa8);
      }
      else if (param_3 == 1 || param_3 == 3) {
        in_stack_ffffffa8 = (uint)(local_48[uVar2] >> 1);
      }
      iVar6 = FUN_010109dc(param_2,in_stack_ffffffa8,in_stack_ffffffa8,local_44);
      if (iVar6 != 0) {
        iVar6 = 0x3301;
        break;
      }
      cVar4 = (param_3 == 1 || param_3 == 3) || param_3 == 2;
      if ((param_3 == 1 || param_3 == 3) || param_3 == 2) {
        cVar4 = '\0';
        FUN_01010aa8(param_2,param_4 + uVar2 * 8,in_stack_ffffffa8,in_stack_ffffffa8,1,1);
      }
      FUN_01004ed0();
      if (cVar4 == '\0') {
        cVar4 = param_6 == 0;
      }
      if (cVar4 == '\0') {
        FUN_01010c72(param_2,local_4c,&local_40,&local_50);
      }
      iVar6 = 0;
    }
    if (param_3 == 2) {
      pin_update(*(int *)(DAT_010054fc + param_2 * 4) + 0x33,7,local_38 & 0xff);
    }
  }
  cVar4 = iVar6 == 0;
  if ((bool)cVar4) {
    FUN_01004ed0();
    pbVar1 = DAT_01005444;
    if (cVar4 == '\0') {
      cVar4 = param_6 == 0;
    }
    if (cVar4 == '\0') {
      DAT_01005444[1] = local_50 + 5;
      pbVar1[2] = local_50;
    }
    if (param_3 == 0) {
      FUN_01010aa8(param_2,param_4,local_4f,unaff_r4 & 0xff,local_4d,1);
    }
  }
  FUN_01010ddc(param_2,0);
  return CONCAT44(param_5,iVar6);
}

