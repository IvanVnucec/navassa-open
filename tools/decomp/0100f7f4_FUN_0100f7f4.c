
void FUN_0100f7f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0100febc;
  uVar3 = 0;
  do {
    uVar4 = *(undefined4 *)(iVar1 + uVar3 * 4);
    FUN_0100f924(param_1,0xdb,8,8);
    uVar2 = FUN_0100f91c();
    uVar2 = FUN_0100f924(uVar2,0x1a6,8,8);
    FUN_0100f924(uVar2,0x1c0,8,8);
    FUN_0100fb6a();
    FUN_0100f924();
    uVar2 = FUN_0100f91c();
    uVar2 = FUN_0100f924(uVar2,0x1a6,8,8);
    uVar2 = FUN_0100f924(uVar2,0x1c0,8,8);
    uVar2 = FUN_0100f918(uVar2,0,0);
    uVar2 = FUN_0100f914(uVar2,0,0);
    uVar2 = FUN_0100f918(uVar2,1,0);
    uVar2 = FUN_0100f914(uVar2,1,0);
    uVar2 = FUN_0100f918(uVar2,2,0);
    uVar2 = FUN_0100f914(uVar2,2,0);
    uVar2 = FUN_0100f918(uVar2,3,0);
    FUN_0100f914(uVar2,3,0);
    FUN_0100fd1e(uVar3 & 0xff,0);
    FUN_0100fd48(uVar3 & 0xff,0);
    FUN_0100fd5c(uVar3 & 0xff,0);
    FUN_0100fd92(uVar3 & 0xff);
    uVar2 = FUN_0100f7bc(uVar4,0x15e,1);
    FUN_0100f924(uVar2,0xdb,8,0);
    uVar2 = FUN_0100f91e();
    uVar2 = FUN_0100f924(uVar2,0x1a6,8,0);
    FUN_0100f924(uVar2,0x1c0,8,0);
    FUN_0100fb68();
    uVar2 = FUN_0100f924();
    uVar2 = FUN_0100f924(uVar2,0x184,1,0);
    uVar2 = FUN_0100f924(uVar2,0x19e,1,0);
    param_1 = FUN_0100f924(uVar2,0x1b8,1,0);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return;
}

