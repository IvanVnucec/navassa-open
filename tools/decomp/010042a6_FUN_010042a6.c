
undefined4 FUN_010042a6(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 *local_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [6];
  undefined1 local_76;
  uint local_68;
  uint uStack_64;
  undefined1 local_48 [8];
  uint local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  uint local_38;
  undefined4 uStack_28;
  
  *DAT_010044a8 = 0;
  uVar3 = DAT_010044b0;
  uVar2 = DAT_010044ac;
  local_68 = param_2[2];
  uStack_64 = param_2[3];
  local_3c = (undefined1)param_2[4];
  local_38 = param_2[8];
  local_3b = 0;
  bVar1 = true;
  local_40 = param_2[6];
  bVar8 = 0;
  uStack_28 = param_4;
  do {
    uVar6 = (uint)bVar8;
    local_48[uVar6] = 0;
    if ((int)((*param_2 >> (uint)bVar8) << 0x1f) < 0) {
      uVar4 = param_2[6];
      if (uVar4 == 0) {
        uVar7 = 0;
        FUN_01004376(2);
        uVar5 = uVar2;
LAB_010042fe:
        FUN_01003cd6(param_2,uVar5);
      }
      else {
        if (uVar4 == 1) {
          uVar7 = 1;
LAB_0100433e:
          FUN_01004376(3);
          uVar5 = uVar3;
          goto LAB_010042fe;
        }
        if (uVar4 == 3) {
          uVar7 = 3;
          goto LAB_0100433e;
        }
        if (uVar4 != 2) {
          bVar1 = false;
          goto LAB_0100432a;
        }
        FUN_01004376();
        FUN_01003cd6(param_2,DAT_010044a4);
        FUN_010102be(bVar8,auStack_7c);
        local_48[uVar6] = local_76;
        uVar7 = 2;
      }
      if (bVar1) {
        FUN_01004158(bVar8,&local_68,&local_84,auStack_80);
        FUN_01010184(*local_84,local_84[1],bVar8,uVar7,*(undefined1 *)(DAT_010044ec + uVar6));
      }
    }
LAB_0100432a:
    bVar8 = bVar8 + 1;
    if (1 < bVar8) {
      return 0;
    }
  } while( true );
}

