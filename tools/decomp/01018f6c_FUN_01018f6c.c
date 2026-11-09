
undefined8 FUN_01018f6c(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  
  uVar5 = 0;
  if (param_1 < 2) {
    pcVar7 = DAT_0101956c;
    pcVar2 = DAT_01019568;
    if (param_4 != 0) {
      pcVar7 = DAT_01019574;
      pcVar2 = DAT_01019570;
    }
    if (param_1 == 0) {
      uVar1 = *(undefined1 *)(param_3 + 0x53);
      uVar4 = DAT_01019578;
    }
    else {
      uVar1 = *(undefined1 *)(param_3 + 0x53);
      uVar4 = DAT_0101957c;
    }
    (*pcVar2)(param_4,uVar4,uVar1,1);
    iVar6 = *(int *)(DAT_01019580 + param_1 * 4);
    if (*(char *)(param_3 + 0x46) == '\x02') {
      (*pcVar7)(param_4,iVar6 + 0x1d8,*(char *)(param_3 + 0x48) + -1);
      uVar4 = 2;
      uVar3 = ((uint)*(byte *)(param_2 + 0xf) << 0x19) >> 0x18;
    }
    else {
      (*pcVar7)(param_4,iVar6 + 0x1d9,*(char *)(param_3 + 0x48) + -1);
      uVar3 = (uint)*(byte *)(param_2 + 0xf);
      uVar4 = 1;
    }
    (*pcVar2)(param_4,iVar6 + 0x1d7,uVar3,uVar4);
    uVar4 = DAT_01019584;
    if (param_1 != 0) {
      uVar4 = DAT_01019588;
    }
    (*pcVar2)(param_4,uVar4,*(undefined1 *)(param_3 + 0x3c));
  }
  else {
    uVar5 = 0xe703;
  }
  return CONCAT44(param_4,uVar5);
}

