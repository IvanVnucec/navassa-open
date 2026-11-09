
undefined8 FUN_010414c8(int param_1,int *param_2,char *param_3,undefined4 param_4)

{
  byte bVar1;
  float fVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  undefined1 local_48 [4];
  undefined1 auStack_44 [12];
  undefined1 local_38;
  
  fVar2 = DAT_01041830;
  fVar10 = (float)VectorUnsignedToFloat((uint)(byte)param_3[0xb],(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar10 * DAT_01041830;
  uVar3 = FUN_0100a4f4();
  *(undefined1 *)(param_2 + 0x20) = uVar3;
  FUN_0100a506(param_1,0);
  if (*param_3 == '\0') {
    uVar4 = FUN_01041d54(param_1,2);
    *(undefined2 *)(param_2[1] + 0x244) = uVar4;
    uVar4 = FUN_01041d54(param_1,3);
    *(undefined2 *)(param_2[1] + 0x246) = uVar4;
  }
  else {
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined2 *)((int)param_2 + 10) = 0;
    FUN_01041d24(param_1,2,0);
    FUN_01041d24(param_1,3,(int)*(short *)((int)param_2 + 10));
    *(short *)(param_2 + 0x1d) = 0;
  }
  iVar5 = FUN_0101ddf6(param_1,auStack_44);
  if (iVar5 == 0) {
    FUN_0101deb2(param_1,2,0);
  }
  bVar9 = 0;
  do {
    if (((uint)(byte)param_3[1] <= (uint)bVar9) || (iVar5 != 0)) {
      FUN_0101c40c(DAT_01041cd8 + param_1 * 0x158 + 8,param_1 + 2U & 0xff,0);
      FUN_0101de6a(param_1,auStack_44);
      FUN_0100ef48(param_1,local_38,0,0,1,1);
      FUN_0100a506(param_1,(char)param_2[0x20]);
      return CONCAT44(param_4,iVar5);
    }
    bVar1 = param_3[bVar9 + 3];
    iVar5 = FUN_0101db98(fVar10,param_1,bVar1);
    if (iVar5 == 0) {
      if (((*param_3 == '\x01') && (bVar1 <= (byte)param_3[0xd])) && ((short)param_2[0x1d] == 0)) {
        FUN_0100ef48(param_1,bVar1,0,0,1,1);
        fVar11 = (float)VectorUnsignedToFloat((uint)(byte)param_3[0xf],(byte)(in_fpscr >> 0x15) & 3)
        ;
        FUN_0101db98(fVar11 * fVar2,param_1,bVar1);
        FUN_0101026a(param_1,2,local_48);
        FUN_010104ae(param_1,2,0,param_4);
        iVar5 = FUN_01041a96(param_1,param_2);
        FUN_010104ae(param_1,2,local_48[0],param_4);
        goto LAB_010415e6;
      }
LAB_010415ec:
      iVar6 = *param_2;
      uVar7 = 100 / (byte)param_3[1] + *(int *)(iVar6 + 4);
      *(uint *)(iVar6 + 4) = uVar7;
      uVar8 = uVar7;
      if (99 < uVar7) {
        uVar8 = 99;
      }
      if (99 < uVar7) {
        *(uint *)(iVar6 + 4) = uVar8;
      }
    }
    else {
LAB_010415e6:
      if (iVar5 == 0) goto LAB_010415ec;
    }
    bVar9 = bVar9 + 1;
  } while( true );
}

