
void FUN_01019374(uint *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  
  bVar1 = 0;
  do {
    if (param_1[2] <= (uint)(DAT_010193c0 << (uint)bVar1)) break;
    bVar1 = bVar1 + 1;
  } while (bVar1 < 7);
  pin_update(DAT_01019594,7,bVar1);
  cVar4 = (char)((ulonglong)*param_1 / ((ulonglong)param_1[1] / 10));
  if ((char)param_1[4] == '\0') {
    if (cVar4 == '\x04') {
      uVar2 = 1;
    }
    else if (cVar4 == '\x06') {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
    cVar4 = '\x02';
  }
  else {
    uVar2 = 0;
    if (cVar4 != '\x02' && cVar4 != '\x03') {
      cVar4 = '\x04';
    }
  }
  uVar2 = pin_update(DAT_01019598,3,uVar2);
  uVar2 = FUN_0101946c(uVar2,0x1f,cVar4);
  FUN_0101946c(uVar2,0x80,0);
  *DAT_010195a0 = 0xc;
  uVar2 = pin_update(DAT_010195a8,0x40,0x40);
  FUN_01019544(uVar2,0x10,0x10);
  FUN_01019540();
  cVar4 = (char)param_1[4];
  if (cVar4 != '\0') {
    iVar3 = *(int *)(DAT_010195b0 + 0x10);
  }
  else {
    iVar3 = *(int *)(DAT_010195b0 + 0xc);
  }
  uVar2 = FUN_01019474(DAT_010195ac,cVar4,cVar4 != '\0');
  FUN_01019544(uVar2,1,1);
  uVar2 = FUN_01019540();
  uVar2 = FUN_01019544(uVar2,4,4);
  uVar5 = FUN_01019544(uVar2,4,0);
  FUN_01019542((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0);
  pin_update(iVar3 + 0x45,4,4);
  pin_update(iVar3 + 0x48,3,0);
  *(undefined1 *)(iVar3 + 0x49) = 2;
  return;
}

