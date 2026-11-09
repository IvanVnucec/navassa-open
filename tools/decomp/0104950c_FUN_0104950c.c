
int FUN_0104950c(uint param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
                undefined1 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  longlong lVar6;
  
  lVar6 = CONCAT44(unaff_r11,unaff_r9);
  iVar3 = 0;
  bVar4 = 0;
  do {
    if ((param_1 & 1 << (uint)bVar4) == param_1) {
      uVar1 = (uint)*(byte *)(DAT_01049720 + (uint)bVar4);
      uVar2 = *(uint *)(*(int *)(DAT_01049754 + uVar1 * 4) + 0xc);
      if (bVar4 == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
      if (uVar2 != 0) {
        uVar2 = 1;
      }
      if (iVar3 == 0) {
        thunk_FUN_01006c2c(uVar2 & 0xff,2,uVar1,0);
        lVar6 = thunk_FUN_01006dfc(uVar2 & 0xff,5,uVar1);
        lVar6 = lVar6 + CONCAT44(param_4,param_3);
        unaff_r10 = *(int *)(DAT_01049710 + uVar1 * 4 + 0x84);
        uVar1 = 0x40 << uVar1 & (uint)*(byte *)(DAT_01049758 + unaff_r10 * 0x60);
        if (param_2 == '\x01') {
          if (uVar1 != 0) {
            iVar3 = 0xff14;
            goto LAB_01049634;
          }
          iVar3 = thunk_FUN_0101a690(uVar5,2,0,0);
          if (iVar3 == 0) {
            iVar3 = thunk_FUN_01009518(unaff_r10,2,bVar4,0);
          }
        }
        else {
          if (uVar1 == 0) {
            iVar3 = 0xff14;
          }
LAB_010495b2:
          if (param_2 == '\0') {
            if ((iVar3 == 0) && (iVar3 = thunk_FUN_0101a690(uVar5,1,0,0), iVar3 == 0)) {
              thunk_FUN_0100974e(unaff_r10,2,bVar4);
              iVar3 = thunk_FUN_01009650(unaff_r10,2,bVar4,0);
            }
            goto LAB_01049634;
          }
        }
        if ((iVar3 == 0) && (iVar3 = thunk_FUN_01009ae4(2,bVar4,param_5,param_6), iVar3 == 0)) {
          iVar3 = thunk_FUN_010096fc((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),unaff_r10,2,bVar4);
        }
      }
      else if (param_2 != '\x01') goto LAB_010495b2;
    }
LAB_01049634:
    bVar4 = bVar4 + 1;
    if (1 < bVar4) {
      return iVar3;
    }
  } while( true );
}

