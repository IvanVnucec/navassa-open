
void FUN_01039274(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *extraout_r1;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  float fVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s2;
  float extraout_s2_00;
  undefined8 uVar8;
  
  puVar4 = *(undefined1 **)(DAT_01039790 + param_2 * 4);
  *puVar4 = 0;
  FUN_010027dc(puVar4 + 1,0x7f,0);
  pin_update(puVar4 + 2,0x1f,*(undefined1 *)(param_1 + 0x46));
  pin_update(puVar4 + 3,0x3f,*(undefined1 *)(param_1 + 0x52));
  FUN_010027dc(puVar4 + 4,0x1f,2);
  FUN_010027dc(puVar4 + 6,0x77,0x21);
  cVar6 = SCARRY4((int)puVar4,7);
  FUN_010027dc(puVar4 + 7,0x3f,0x1a);
  puVar4[8] = (char)*(undefined2 *)(param_1 + 0x4e);
  puVar4[9] = (char)*(undefined2 *)(param_1 + 0x50);
  puVar4[10] = (char)*(undefined2 *)(param_1 + 0x48);
  uVar8 = FUN_010393c4();
  FUN_01039506((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),*(undefined1 *)(param_1 + 4));
  cVar5 = '\0';
  fVar7 = (float)FUN_01039712(*(float *)(param_1 + 0x30) * DAT_01039668,DAT_0103966c);
  if (cVar5 == cVar6) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = (undefined1)(int)fVar7;
  }
  puVar4[0xd] = uVar1;
  FUN_010393b2(DAT_01039678);
  if (cVar5 == cVar6) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = (undefined1)(int)extraout_s2;
  }
  puVar4[0xe] = uVar1;
  puVar3 = puVar4 + 0xf;
  uVar2 = FUN_010393b2();
  if (cVar5 == cVar6) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = (undefined1)(int)extraout_s2_00;
  }
  *puVar3 = uVar1;
  uVar1 = FUN_01039712(*(float *)(param_1 + 0x30) * extraout_s0,uVar2,puVar4 + 0x10);
  if (cVar5 != cVar6) {
    uVar1 = (undefined1)(int)extraout_s0_00;
  }
  *extraout_r1 = uVar1;
  puVar4[0x11] = 0;
  uVar8 = FUN_0103950c(0,3,0);
  FUN_0103950a((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0);
  puVar4[0x13] = (char)*(undefined2 *)(param_1 + 0x48);
  uVar2 = FUN_010393c4();
  uVar2 = FUN_0103950c(uVar2,8,0);
  uVar8 = FUN_0103950c(uVar2,0x10,0x10);
  FUN_01039506((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),*(undefined1 *)(param_1 + 5));
  FUN_010027dc(puVar4 + 0x15,0x7f,*(undefined1 *)(param_1 + 6),param_4);
  return;
}

