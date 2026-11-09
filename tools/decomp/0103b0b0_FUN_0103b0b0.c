
undefined8 FUN_0103b0b0(int param_1,undefined1 param_2,byte param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  float fVar13;
  undefined8 uVar14;
  int iVar15;
  byte local_50;
  int local_4c;
  int local_48;
  undefined1 auStack_44 [4];
  float local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  FUN_0100929c(&local_38,param_4);
  uVar14 = FUN_01020074(local_38,uStack_34);
  FUN_0102035c(0xa2000000,DAT_0103b4c4,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  iVar3 = FUN_01035c84();
  bVar1 = false;
  uVar4 = (uint)(byte)((ulonglong)(uint)(iVar3 * 0x28) / 0xe10);
  if (0xd < uVar4) {
    uVar4 = 0xd;
  }
  uVar10 = 0xd - ((int)uVar4 >> 1);
  local_3c = ((int)uVar4 >> 1) + 0xd;
  iVar3 = FUN_0103b362(param_1,param_2,param_4,&local_48,&local_4c);
  fVar13 = DAT_0103b438;
  if (iVar3 == 0) {
    local_48 = -local_48;
    local_4c = -local_4c;
    FUN_0103aeec(DAT_0103b4c8,0x38,0x31);
    cVar11 = '\0';
    FUN_0103aeec(DAT_0103b4c8,0x4d,0x31);
    iVar15 = local_4c;
    FUN_0103b2cc(param_1,param_2,param_3,param_4,local_4c,auStack_44);
    iVar3 = FUN_0103b2b2();
    if (cVar11 == '\0') {
      if (iVar3 == 0) {
        local_50 = 0;
        uVar4 = 0xff;
        uVar8 = 0xff;
        while( true ) {
          uVar5 = uVar10 & 0xff;
          cVar11 = SBORROW4(local_3c,uVar5);
          if (local_3c < (int)uVar5) break;
          cVar12 = '\0';
          FUN_0103dee0(param_4,(byte)(&DAT_0103b4f4)[uVar5] >> 4,(&DAT_0103b4f4)[uVar5] & 0xf);
          iVar15 = local_4c;
          FUN_0103b2c0(auStack_44);
          iVar3 = FUN_0103b2b2();
          uVar5 = uVar4;
          uVar7 = uVar8;
          if (cVar12 == cVar11) {
            iVar15 = local_48;
            iVar3 = FUN_0103b2c0(&local_40);
            bVar1 = true;
            if (iVar3 != 0) goto LAB_0103b21a;
            if ((int)((uint)(local_40 < fVar13) << 0x1f) < 0) {
              fVar13 = local_40;
              local_50 = (byte)uVar10;
            }
            if (((int)((uint)(local_40 < DAT_0103b4b0) << 0x1f) < 0) &&
               (uVar5 = uVar10, uVar7 = uVar10, (uVar8 & 0xff) != 0xff)) {
              uVar5 = uVar4 + 1;
              uVar7 = uVar8;
            }
          }
          else if (bVar1) break;
          uVar10 = uVar10 + 1;
          uVar4 = uVar5;
          uVar8 = uVar7;
        }
        if ((uVar8 & 0xff) != 0xff) {
          local_50 = (byte)(((uVar4 & 0xff) + (uVar8 & 0xff)) * 0x10000 >> 0x11);
        }
        iVar6 = DAT_0103b4b8 + param_4 * 0x30;
        pbVar9 = (byte *)(iVar6 + (short)(ushort)param_3 * 0x18);
        *pbVar9 = (&DAT_0103b4f4)[local_50];
        pbVar9[0x10] = 1;
        *(undefined1 *)(iVar6 + 0x11) = 0;
        *(undefined1 *)(iVar6 + 0x29) = 0;
        FUN_0103dee0(param_4,*pbVar9 >> 4,*pbVar9 & 0xf,&DAT_0103b4f4,iVar15);
        pbVar9[0x11] = 1;
        uVar2 = DAT_0103b4c8;
        FUN_0103aeec(DAT_0103b4c8,0x38,0x11);
        FUN_0103aeec(uVar2,0x4d,0x11);
        FUN_0103b442(param_1,param_2);
        if (0xe < local_50 - 6) {
          if (param_1 == 0) {
            iVar3 = 0x2c01;
          }
          else {
            iVar3 = 0x2301;
          }
        }
      }
    }
    else if (param_1 == 0) {
      iVar3 = 0x2c00;
    }
    else {
      iVar3 = 0x2300;
    }
  }
LAB_0103b21a:
  return CONCAT44(param_4,iVar3);
}

