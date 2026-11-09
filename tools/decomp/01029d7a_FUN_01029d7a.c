
void FUN_01029d7a(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar4 = DAT_0102a828;
  uVar3 = DAT_0102a824;
  FUN_01029fa8(*param_1);
  pin_update(DAT_0102a82c,4,4);
  uVar8 = pin_update(DAT_0102a830,1,1);
  uVar2 = FUN_01029ed4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),*(undefined1 *)((int)param_1 + 7))
  ;
  FUN_01029ece(uVar2,8,((uint)*(byte *)(param_2 + 0x1a) << 0x1b) >> 0x18);
  uVar8 = pin_update(DAT_0102a834,8,((uint)*(byte *)(param_2 + 0x18) << 0x1b) >> 0x18);
  FUN_01029ecc((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),
               ((uint)*(byte *)(param_2 + 0x19) << 0x19) >> 0x18);
  if (*(char *)(param_1 + 2) == '\0') {
    uVar3 = FUN_01029ece(0,0x20,0);
    uVar3 = FUN_01029ece(uVar3,0x40,0x40);
    uVar8 = FUN_01029ece(uVar3,0x80,0x80);
    FUN_01029ed4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0);
    uVar3 = FUN_01029eca();
    uVar3 = FUN_01029ece(uVar3,4,4);
    uVar3 = FUN_01029ece(uVar3,8,0);
    uVar3 = FUN_01029ece(uVar3,0x10,0x10);
    uVar3 = FUN_01029ece(uVar3,0x20,0x20);
    uVar3 = FUN_01029ece(uVar3,0x40,0x40);
    uVar8 = FUN_01029ece(uVar3,0x80,0x80);
    iVar1 = DAT_0102a83c;
    FUN_01029ed4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1);
    uVar3 = FUN_01029eca();
    FUN_01029ece(uVar3,4,0);
    *(undefined1 *)(iVar1 + 1) = 0xff;
    *(undefined1 *)(iVar1 + 3) = 0;
    uVar3 = FUN_01029ed4(0xff,0,0);
    FUN_01029ece(uVar3,0x10,0);
    uVar6 = 0x40;
    uVar2 = 0x7c;
    uVar3 = uVar4;
  }
  else {
    uVar2 = FUN_01029ece(*(char *)(param_1 + 2),0x20,0x20);
    FUN_01029ece(uVar2,0x40,0);
    uVar6 = 0;
    uVar2 = 0x80;
  }
  pin_update(uVar3,uVar2,uVar6);
  uVar3 = DAT_0102abd0;
  if (*(char *)((int)param_1 + 7) == '\0') {
    pin_update(uVar4,1,0);
    uVar5 = *(undefined1 *)((int)param_1 + 10);
    uVar6 = 0xf;
    uVar2 = uVar3;
  }
  else {
    uVar5 = 1;
    uVar6 = 1;
    uVar2 = uVar4;
  }
  pin_update(uVar2,uVar6,uVar5);
  if (*(char *)(param_2 + 0x19) == '\0') {
    uVar7 = 2;
    uVar2 = 2;
  }
  else {
    pin_update(uVar4,2,0);
    uVar7 = ((uint)*(byte *)(param_1 + 3) << 0x1c) >> 0x18;
    uVar2 = 0xf0;
    uVar4 = uVar3;
  }
  pin_update(uVar4,uVar2,uVar7,param_4);
  return;
}

