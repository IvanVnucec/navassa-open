
undefined8 FUN_0100e590(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  float fVar7;
  
  fVar3 = DAT_0100e8d0;
  uVar1 = *param_1;
  iVar5 = 0;
  uVar6 = 0;
  do {
    if ((*(ushort *)(*(int *)(param_1 + 0x10) + 0x30) <= uVar6) ||
       (iVar5 = FUN_0100e348(param_1,1), iVar5 != 0)) {
      iVar4 = *(int *)(param_1 + 0x14);
      *(ushort *)(iVar4 + 0x16) = uVar6 + *(short *)(iVar4 + 0x16);
      if (param_2 != 99) {
        iVar4 = iVar4 + param_2;
      }
      if (param_2 != 99) {
        *(char *)(iVar4 + 0x18) = (char)uVar6;
      }
      return CONCAT44(param_4,iVar5);
    }
    if (param_1[8] == '\0') {
LAB_0100e5e6:
      *(float *)(param_1 + 0x50) =
           *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x94);
      FUN_010242b2(*param_1,1);
      fVar7 = *(float *)(param_1 + 0x8c) * fVar3 * *(float *)(param_1 + 0x6c);
      *(float *)(param_1 + 0x6c) = fVar7;
      sVar2 = (short)(int)fVar7 + *(short *)(param_1 + 0x48);
      *(short *)(param_1 + 0x48) = sVar2;
      FUN_010241c4(uVar1,(int)sVar2,1);
LAB_0100e62e:
      if (param_1[8] == '\x01') goto LAB_0100e634;
    }
    else {
      if (param_1[8] != '\x01') goto LAB_0100e62e;
      if (param_1[0xad] == '\x01') {
        FUN_0100a506(uVar1,0);
        if (param_1[8] == '\x01') {
          FUN_0100e532(param_1);
        }
        goto LAB_0100e5e6;
      }
LAB_0100e634:
      FUN_01023eb4(*(undefined4 *)(param_1 + 0xa0));
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

