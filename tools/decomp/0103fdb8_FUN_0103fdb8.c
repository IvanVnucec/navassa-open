
int FUN_0103fdb8(int param_1,undefined1 param_2,uint param_3,float *param_4)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined8 uVar10;
  float local_40;
  float local_3c;
  
  if (param_3 == 0) {
    iVar5 = *(uint *)(param_1 + 0x28) - *(uint *)(param_1 + 0x40);
    iVar7 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x44)) -
            (uint)(*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x40));
    iVar2 = FUN_0103ff94();
    if (iVar2 == 0xc911 || iVar2 == 0xc912) {
      iVar5 = *(uint *)(param_1 + 0x28) + *(uint *)(param_1 + 0x40);
      iVar7 = *(int *)(param_1 + 0x2c) +
              *(int *)(param_1 + 0x44) +
              (uint)CARRY4(*(uint *)(param_1 + 0x28),*(uint *)(param_1 + 0x40));
LAB_0103fe7c:
      iVar2 = FUN_0103ff94();
    }
LAB_0103fe82:
    if (iVar2 == 0) goto LAB_0103fe84;
  }
  else {
    if (param_3 == 1) {
      uVar6 = param_3;
      pfVar4 = param_4;
      uVar10 = FUN_0103ff84();
      iVar5 = (uint)uVar10 - uVar6;
      iVar7 = ((int)((ulonglong)uVar10 >> 0x20) - ((uint)pfVar4 >> 4)) -
              (uint)((uint)uVar10 < uVar6);
      iVar2 = FUN_0103ff94();
      if (iVar2 == 0xc911 || iVar2 == 0xc912) {
        uVar10 = FUN_0103ff84();
        iVar5 = (uint)uVar10 + uVar6;
        iVar7 = (int)((ulonglong)uVar10 >> 0x20) +
                ((uint)pfVar4 >> 4) + (uint)CARRY4((uint)uVar10,uVar6);
        goto LAB_0103fe7c;
      }
      goto LAB_0103fe82;
    }
    if (param_3 == 2) {
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x40) * 3;
      uVar8 = *(int *)(param_1 + 0x44) * 3 + (int)((ulonglong)lVar1 >> 0x20);
      uVar6 = (uint)lVar1 >> 2 | uVar8 * 0x40000000;
      iVar5 = *(uint *)(param_1 + 0x28) - uVar6;
      iVar7 = (*(int *)(param_1 + 0x2c) - (uVar8 >> 2)) - (uint)(*(uint *)(param_1 + 0x28) < uVar6);
      iVar2 = FUN_0103ff94();
      if (iVar2 == 0xc911 || iVar2 == 0xc912) {
        lVar1 = (ulonglong)*(uint *)(param_1 + 0x40) * 3;
        uVar8 = *(int *)(param_1 + 0x44) * 3 + (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = (uint)lVar1 >> 2 | uVar8 * 0x40000000;
        iVar5 = *(uint *)(param_1 + 0x28) + uVar6;
        iVar7 = *(int *)(param_1 + 0x2c) +
                (uVar8 >> 2) + (uint)CARRY4(*(uint *)(param_1 + 0x28),uVar6);
        goto LAB_0103fe7c;
      }
      goto LAB_0103fe82;
    }
    iVar5 = 0;
    iVar7 = 0;
LAB_0103fe84:
    iVar2 = FUN_010096fc(iVar5,iVar7,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c)
                         ,param_2);
  }
  fVar9 = DAT_0103ff64;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    if (param_3 != 0) {
      fVar3 = (float)FUN_01014570(iVar2,*(undefined4 *)(param_1 + 0x44));
      if (param_3 == 1) {
        iVar2 = (int)(fVar3 * DAT_0103ff7c);
      }
      else {
        iVar2 = (int)(fVar3 * 0.75);
      }
    }
    FUN_0103cda8(0x100,0,iVar2,*(undefined4 *)(param_1 + 0x18));
    iVar2 = FUN_0103cf2c(param_2,8,*(undefined4 *)(param_1 + 0x18),&local_40,1,3);
    if (iVar2 == 0xe102) {
      iVar2 = 0x2e02;
    }
    else {
      if (iVar2 != 0xe103) goto LAB_0103ff1e;
      iVar2 = 0x2e00;
    }
    *param_4 = fVar9;
  }
  else {
LAB_0103ff1e:
    *param_4 = fVar9;
    if ((iVar2 == 0) &&
       (local_40 = local_40 + local_3c, local_40 != 0.0 && local_40 < 0.0 == NAN(local_40))) {
      fVar9 = (float)FUN_0101edc0();
      *param_4 = DAT_01040260 + fVar9 * 10.0;
    }
  }
  return iVar2;
}

