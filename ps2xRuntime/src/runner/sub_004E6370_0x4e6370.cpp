#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E6370
// Address: 0x4e6370 - 0x4e65f0
void sub_004E6370_0x4e6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6370_0x4e6370");
#endif

    switch (ctx->pc) {
        case 0x4e6370u: goto label_4e6370;
        case 0x4e6374u: goto label_4e6374;
        case 0x4e6378u: goto label_4e6378;
        case 0x4e637cu: goto label_4e637c;
        case 0x4e6380u: goto label_4e6380;
        case 0x4e6384u: goto label_4e6384;
        case 0x4e6388u: goto label_4e6388;
        case 0x4e638cu: goto label_4e638c;
        case 0x4e6390u: goto label_4e6390;
        case 0x4e6394u: goto label_4e6394;
        case 0x4e6398u: goto label_4e6398;
        case 0x4e639cu: goto label_4e639c;
        case 0x4e63a0u: goto label_4e63a0;
        case 0x4e63a4u: goto label_4e63a4;
        case 0x4e63a8u: goto label_4e63a8;
        case 0x4e63acu: goto label_4e63ac;
        case 0x4e63b0u: goto label_4e63b0;
        case 0x4e63b4u: goto label_4e63b4;
        case 0x4e63b8u: goto label_4e63b8;
        case 0x4e63bcu: goto label_4e63bc;
        case 0x4e63c0u: goto label_4e63c0;
        case 0x4e63c4u: goto label_4e63c4;
        case 0x4e63c8u: goto label_4e63c8;
        case 0x4e63ccu: goto label_4e63cc;
        case 0x4e63d0u: goto label_4e63d0;
        case 0x4e63d4u: goto label_4e63d4;
        case 0x4e63d8u: goto label_4e63d8;
        case 0x4e63dcu: goto label_4e63dc;
        case 0x4e63e0u: goto label_4e63e0;
        case 0x4e63e4u: goto label_4e63e4;
        case 0x4e63e8u: goto label_4e63e8;
        case 0x4e63ecu: goto label_4e63ec;
        case 0x4e63f0u: goto label_4e63f0;
        case 0x4e63f4u: goto label_4e63f4;
        case 0x4e63f8u: goto label_4e63f8;
        case 0x4e63fcu: goto label_4e63fc;
        case 0x4e6400u: goto label_4e6400;
        case 0x4e6404u: goto label_4e6404;
        case 0x4e6408u: goto label_4e6408;
        case 0x4e640cu: goto label_4e640c;
        case 0x4e6410u: goto label_4e6410;
        case 0x4e6414u: goto label_4e6414;
        case 0x4e6418u: goto label_4e6418;
        case 0x4e641cu: goto label_4e641c;
        case 0x4e6420u: goto label_4e6420;
        case 0x4e6424u: goto label_4e6424;
        case 0x4e6428u: goto label_4e6428;
        case 0x4e642cu: goto label_4e642c;
        case 0x4e6430u: goto label_4e6430;
        case 0x4e6434u: goto label_4e6434;
        case 0x4e6438u: goto label_4e6438;
        case 0x4e643cu: goto label_4e643c;
        case 0x4e6440u: goto label_4e6440;
        case 0x4e6444u: goto label_4e6444;
        case 0x4e6448u: goto label_4e6448;
        case 0x4e644cu: goto label_4e644c;
        case 0x4e6450u: goto label_4e6450;
        case 0x4e6454u: goto label_4e6454;
        case 0x4e6458u: goto label_4e6458;
        case 0x4e645cu: goto label_4e645c;
        case 0x4e6460u: goto label_4e6460;
        case 0x4e6464u: goto label_4e6464;
        case 0x4e6468u: goto label_4e6468;
        case 0x4e646cu: goto label_4e646c;
        case 0x4e6470u: goto label_4e6470;
        case 0x4e6474u: goto label_4e6474;
        case 0x4e6478u: goto label_4e6478;
        case 0x4e647cu: goto label_4e647c;
        case 0x4e6480u: goto label_4e6480;
        case 0x4e6484u: goto label_4e6484;
        case 0x4e6488u: goto label_4e6488;
        case 0x4e648cu: goto label_4e648c;
        case 0x4e6490u: goto label_4e6490;
        case 0x4e6494u: goto label_4e6494;
        case 0x4e6498u: goto label_4e6498;
        case 0x4e649cu: goto label_4e649c;
        case 0x4e64a0u: goto label_4e64a0;
        case 0x4e64a4u: goto label_4e64a4;
        case 0x4e64a8u: goto label_4e64a8;
        case 0x4e64acu: goto label_4e64ac;
        case 0x4e64b0u: goto label_4e64b0;
        case 0x4e64b4u: goto label_4e64b4;
        case 0x4e64b8u: goto label_4e64b8;
        case 0x4e64bcu: goto label_4e64bc;
        case 0x4e64c0u: goto label_4e64c0;
        case 0x4e64c4u: goto label_4e64c4;
        case 0x4e64c8u: goto label_4e64c8;
        case 0x4e64ccu: goto label_4e64cc;
        case 0x4e64d0u: goto label_4e64d0;
        case 0x4e64d4u: goto label_4e64d4;
        case 0x4e64d8u: goto label_4e64d8;
        case 0x4e64dcu: goto label_4e64dc;
        case 0x4e64e0u: goto label_4e64e0;
        case 0x4e64e4u: goto label_4e64e4;
        case 0x4e64e8u: goto label_4e64e8;
        case 0x4e64ecu: goto label_4e64ec;
        case 0x4e64f0u: goto label_4e64f0;
        case 0x4e64f4u: goto label_4e64f4;
        case 0x4e64f8u: goto label_4e64f8;
        case 0x4e64fcu: goto label_4e64fc;
        case 0x4e6500u: goto label_4e6500;
        case 0x4e6504u: goto label_4e6504;
        case 0x4e6508u: goto label_4e6508;
        case 0x4e650cu: goto label_4e650c;
        case 0x4e6510u: goto label_4e6510;
        case 0x4e6514u: goto label_4e6514;
        case 0x4e6518u: goto label_4e6518;
        case 0x4e651cu: goto label_4e651c;
        case 0x4e6520u: goto label_4e6520;
        case 0x4e6524u: goto label_4e6524;
        case 0x4e6528u: goto label_4e6528;
        case 0x4e652cu: goto label_4e652c;
        case 0x4e6530u: goto label_4e6530;
        case 0x4e6534u: goto label_4e6534;
        case 0x4e6538u: goto label_4e6538;
        case 0x4e653cu: goto label_4e653c;
        case 0x4e6540u: goto label_4e6540;
        case 0x4e6544u: goto label_4e6544;
        case 0x4e6548u: goto label_4e6548;
        case 0x4e654cu: goto label_4e654c;
        case 0x4e6550u: goto label_4e6550;
        case 0x4e6554u: goto label_4e6554;
        case 0x4e6558u: goto label_4e6558;
        case 0x4e655cu: goto label_4e655c;
        case 0x4e6560u: goto label_4e6560;
        case 0x4e6564u: goto label_4e6564;
        case 0x4e6568u: goto label_4e6568;
        case 0x4e656cu: goto label_4e656c;
        case 0x4e6570u: goto label_4e6570;
        case 0x4e6574u: goto label_4e6574;
        case 0x4e6578u: goto label_4e6578;
        case 0x4e657cu: goto label_4e657c;
        case 0x4e6580u: goto label_4e6580;
        case 0x4e6584u: goto label_4e6584;
        case 0x4e6588u: goto label_4e6588;
        case 0x4e658cu: goto label_4e658c;
        case 0x4e6590u: goto label_4e6590;
        case 0x4e6594u: goto label_4e6594;
        case 0x4e6598u: goto label_4e6598;
        case 0x4e659cu: goto label_4e659c;
        case 0x4e65a0u: goto label_4e65a0;
        case 0x4e65a4u: goto label_4e65a4;
        case 0x4e65a8u: goto label_4e65a8;
        case 0x4e65acu: goto label_4e65ac;
        case 0x4e65b0u: goto label_4e65b0;
        case 0x4e65b4u: goto label_4e65b4;
        case 0x4e65b8u: goto label_4e65b8;
        case 0x4e65bcu: goto label_4e65bc;
        case 0x4e65c0u: goto label_4e65c0;
        case 0x4e65c4u: goto label_4e65c4;
        case 0x4e65c8u: goto label_4e65c8;
        case 0x4e65ccu: goto label_4e65cc;
        case 0x4e65d0u: goto label_4e65d0;
        case 0x4e65d4u: goto label_4e65d4;
        case 0x4e65d8u: goto label_4e65d8;
        case 0x4e65dcu: goto label_4e65dc;
        case 0x4e65e0u: goto label_4e65e0;
        case 0x4e65e4u: goto label_4e65e4;
        case 0x4e65e8u: goto label_4e65e8;
        case 0x4e65ecu: goto label_4e65ec;
        default: break;
    }

    ctx->pc = 0x4e6370u;

label_4e6370:
    // 0x4e6370: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e6370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e6374:
    // 0x4e6374: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4e6374u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4e6378:
    // 0x4e6378: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4e6378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e637c:
    // 0x4e637c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e637cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e6380:
    // 0x4e6380: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4e6380u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4e6384:
    // 0x4e6384: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4e6384u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4e6388:
    // 0x4e6388: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e6388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e638c:
    // 0x4e638c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4e638cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4e6390:
    // 0x4e6390: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e6390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e6394:
    // 0x4e6394: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4e6394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4e6398:
    // 0x4e6398: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4e6398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4e639c:
    // 0x4e639c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4e639cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4e63a0:
    // 0x4e63a0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4e63a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4e63a4:
    // 0x4e63a4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e63a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e63a8:
    // 0x4e63a8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4e63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4e63ac:
    // 0x4e63ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e63acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e63b0:
    // 0x4e63b0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4e63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4e63b4:
    // 0x4e63b4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4e63b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4e63b8:
    // 0x4e63b8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4e63b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4e63bc:
    // 0x4e63bc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4e63bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4e63c0:
    // 0x4e63c0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4e63c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4e63c4:
    // 0x4e63c4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4e63c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4e63c8:
    // 0x4e63c8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4e63c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4e63cc:
    // 0x4e63cc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4e63ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4e63d0:
    // 0x4e63d0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4e63d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4e63d4:
    // 0x4e63d4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4e63d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4e63d8:
    // 0x4e63d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e63dc:
    // 0x4e63dc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4e63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4e63e0:
    // 0x4e63e0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4e63e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4e63e4:
    // 0x4e63e4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4e63e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e63e8:
    // 0x4e63e8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4e63e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4e63ec:
    // 0x4e63ec: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4e63ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4e63f0:
    // 0x4e63f0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4e63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4e63f4:
    // 0x4e63f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e63f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4e63f8:
    // 0x4e63f8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4e63f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4e63fc:
    // 0x4e63fc: 0x3e00008  jr          $ra
label_4e6400:
    if (ctx->pc == 0x4E6400u) {
        ctx->pc = 0x4E6400u;
            // 0x4e6400: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4E6404u;
        goto label_4e6404;
    }
    ctx->pc = 0x4E63FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E63FCu;
            // 0x4e6400: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E6404u;
label_4e6404:
    // 0x4e6404: 0x0  nop
    ctx->pc = 0x4e6404u;
    // NOP
label_4e6408:
    // 0x4e6408: 0x0  nop
    ctx->pc = 0x4e6408u;
    // NOP
label_4e640c:
    // 0x4e640c: 0x0  nop
    ctx->pc = 0x4e640cu;
    // NOP
label_4e6410:
    // 0x4e6410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e6410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e6414:
    // 0x4e6414: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e6414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e6418:
    // 0x4e6418: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e6418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e641c:
    // 0x4e641c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e6420:
    // 0x4e6420: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e6420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e6424:
    // 0x4e6424: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e6424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e6428:
    // 0x4e6428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e6428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e642c:
    // 0x4e642c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e642cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e6430:
    // 0x4e6430: 0x10a30038  beq         $a1, $v1, . + 4 + (0x38 << 2)
label_4e6434:
    if (ctx->pc == 0x4E6434u) {
        ctx->pc = 0x4E6434u;
            // 0x4e6434: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6438u;
        goto label_4e6438;
    }
    ctx->pc = 0x4E6430u;
    {
        const bool branch_taken_0x4e6430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E6434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6430u;
            // 0x4e6434: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6430) {
            ctx->pc = 0x4E6514u;
            goto label_4e6514;
        }
    }
    ctx->pc = 0x4E6438u;
label_4e6438:
    // 0x4e6438: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e6438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e643c:
    // 0x4e643c: 0x50a30032  beql        $a1, $v1, . + 4 + (0x32 << 2)
label_4e6440:
    if (ctx->pc == 0x4E6440u) {
        ctx->pc = 0x4E6440u;
            // 0x4e6440: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E6444u;
        goto label_4e6444;
    }
    ctx->pc = 0x4E643Cu;
    {
        const bool branch_taken_0x4e643c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e643c) {
            ctx->pc = 0x4E6440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E643Cu;
            // 0x4e6440: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E6508u;
            goto label_4e6508;
        }
    }
    ctx->pc = 0x4E6444u;
label_4e6444:
    // 0x4e6444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e6444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e6448:
    // 0x4e6448: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4e644c:
    if (ctx->pc == 0x4E644Cu) {
        ctx->pc = 0x4E6450u;
        goto label_4e6450;
    }
    ctx->pc = 0x4E6448u;
    {
        const bool branch_taken_0x4e6448 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e6448) {
            ctx->pc = 0x4E6458u;
            goto label_4e6458;
        }
    }
    ctx->pc = 0x4E6450u;
label_4e6450:
    // 0x4e6450: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e6454:
    if (ctx->pc == 0x4E6454u) {
        ctx->pc = 0x4E6458u;
        goto label_4e6458;
    }
    ctx->pc = 0x4E6450u;
    {
        const bool branch_taken_0x4e6450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6450) {
            ctx->pc = 0x4E6548u;
            goto label_4e6548;
        }
    }
    ctx->pc = 0x4E6458u;
label_4e6458:
    // 0x4e6458: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4e6458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4e645c:
    // 0x4e645c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e6460:
    // 0x4e6460: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4e6460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4e6464:
    // 0x4e6464: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4e6464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4e6468:
    // 0x4e6468: 0x10640037  beq         $v1, $a0, . + 4 + (0x37 << 2)
label_4e646c:
    if (ctx->pc == 0x4E646Cu) {
        ctx->pc = 0x4E6470u;
        goto label_4e6470;
    }
    ctx->pc = 0x4E6468u;
    {
        const bool branch_taken_0x4e6468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4e6468) {
            ctx->pc = 0x4E6548u;
            goto label_4e6548;
        }
    }
    ctx->pc = 0x4E6470u;
label_4e6470:
    // 0x4e6470: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x4e6470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e6474:
    // 0x4e6474: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x4e6474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_4e6478:
    // 0x4e6478: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x4e6478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_4e647c:
    // 0x4e647c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4e647cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4e6480:
    // 0x4e6480: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e6480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e6484:
    // 0x4e6484: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e6484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4e6488:
    // 0x4e6488: 0x8d080014  lw          $t0, 0x14($t0)
    ctx->pc = 0x4e6488u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_4e648c:
    // 0x4e648c: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x4e648cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6490:
    // 0x4e6490: 0x25080056  addiu       $t0, $t0, 0x56
    ctx->pc = 0x4e6490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 86));
label_4e6494:
    // 0x4e6494: 0xae080098  sw          $t0, 0x98($s0)
    ctx->pc = 0x4e6494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 8));
label_4e6498:
    // 0x4e6498: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x4e6498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e649c:
    // 0x4e649c: 0x8d080014  lw          $t0, 0x14($t0)
    ctx->pc = 0x4e649cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_4e64a0:
    // 0x4e64a0: 0x8d08000c  lw          $t0, 0xC($t0)
    ctx->pc = 0x4e64a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_4e64a4:
    // 0x4e64a4: 0x25080056  addiu       $t0, $t0, 0x56
    ctx->pc = 0x4e64a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 86));
label_4e64a8:
    // 0x4e64a8: 0xae08009c  sw          $t0, 0x9C($s0)
    ctx->pc = 0x4e64a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 8));
label_4e64ac:
    // 0x4e64ac: 0x8e090084  lw          $t1, 0x84($s0)
    ctx->pc = 0x4e64acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e64b0:
    // 0x4e64b0: 0x8ce8ca18  lw          $t0, -0x35E8($a3)
    ctx->pc = 0x4e64b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294953496)));
label_4e64b4:
    // 0x4e64b4: 0x8d290030  lw          $t1, 0x30($t1)
    ctx->pc = 0x4e64b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_4e64b8:
    // 0x4e64b8: 0x8d270120  lw          $a3, 0x120($t1)
    ctx->pc = 0x4e64b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 288)));
label_4e64bc:
    // 0x4e64bc: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4e64bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_4e64c0:
    // 0x4e64c0: 0xad270120  sw          $a3, 0x120($t1)
    ctx->pc = 0x4e64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 288), GPR_U32(ctx, 7));
label_4e64c4:
    // 0x4e64c4: 0x8cc7ca20  lw          $a3, -0x35E0($a2)
    ctx->pc = 0x4e64c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294953504)));
label_4e64c8:
    // 0x4e64c8: 0x8d2601b0  lw          $a2, 0x1B0($t1)
    ctx->pc = 0x4e64c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 432)));
label_4e64cc:
    // 0x4e64cc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4e64ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_4e64d0:
    // 0x4e64d0: 0xad2601b0  sw          $a2, 0x1B0($t1)
    ctx->pc = 0x4e64d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 432), GPR_U32(ctx, 6));
label_4e64d4:
    // 0x4e64d4: 0x8ca6ca28  lw          $a2, -0x35D8($a1)
    ctx->pc = 0x4e64d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953512)));
label_4e64d8:
    // 0x4e64d8: 0x8d250240  lw          $a1, 0x240($t1)
    ctx->pc = 0x4e64d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 576)));
label_4e64dc:
    // 0x4e64dc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4e64dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_4e64e0:
    // 0x4e64e0: 0xad250240  sw          $a1, 0x240($t1)
    ctx->pc = 0x4e64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 5));
label_4e64e4:
    // 0x4e64e4: 0x8c85ca30  lw          $a1, -0x35D0($a0)
    ctx->pc = 0x4e64e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953520)));
label_4e64e8:
    // 0x4e64e8: 0x8d2402d0  lw          $a0, 0x2D0($t1)
    ctx->pc = 0x4e64e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 720)));
label_4e64ec:
    // 0x4e64ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4e64ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4e64f0:
    // 0x4e64f0: 0xad2402d0  sw          $a0, 0x2D0($t1)
    ctx->pc = 0x4e64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 4));
label_4e64f4:
    // 0x4e64f4: 0x8c64ca38  lw          $a0, -0x35C8($v1)
    ctx->pc = 0x4e64f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953528)));
label_4e64f8:
    // 0x4e64f8: 0x8d230360  lw          $v1, 0x360($t1)
    ctx->pc = 0x4e64f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 864)));
label_4e64fc:
    // 0x4e64fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e64fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4e6500:
    // 0x4e6500: 0x10000011  b           . + 4 + (0x11 << 2)
label_4e6504:
    if (ctx->pc == 0x4E6504u) {
        ctx->pc = 0x4E6504u;
            // 0x4e6504: 0xad230360  sw          $v1, 0x360($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 864), GPR_U32(ctx, 3));
        ctx->pc = 0x4E6508u;
        goto label_4e6508;
    }
    ctx->pc = 0x4E6500u;
    {
        const bool branch_taken_0x4e6500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6500u;
            // 0x4e6504: 0xad230360  sw          $v1, 0x360($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 864), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6500) {
            ctx->pc = 0x4E6548u;
            goto label_4e6548;
        }
    }
    ctx->pc = 0x4E6508u;
label_4e6508:
    // 0x4e6508: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e6508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e650c:
    // 0x4e650c: 0x320f809  jalr        $t9
label_4e6510:
    if (ctx->pc == 0x4E6510u) {
        ctx->pc = 0x4E6514u;
        goto label_4e6514;
    }
    ctx->pc = 0x4E650Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E6514u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E6514u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E6514u; }
            if (ctx->pc != 0x4E6514u) { return; }
        }
        }
    }
    ctx->pc = 0x4E6514u;
label_4e6514:
    // 0x4e6514: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4e6514u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4e6518:
    // 0x4e6518: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4e651c:
    if (ctx->pc == 0x4E651Cu) {
        ctx->pc = 0x4E6520u;
        goto label_4e6520;
    }
    ctx->pc = 0x4E6518u;
    {
        const bool branch_taken_0x4e6518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6518) {
            ctx->pc = 0x4E6548u;
            goto label_4e6548;
        }
    }
    ctx->pc = 0x4E6520u;
label_4e6520:
    // 0x4e6520: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e6520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e6524:
    // 0x4e6524: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e6524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e6528:
    // 0x4e6528: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4e6528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4e652c:
    // 0x4e652c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4e652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4e6530:
    // 0x4e6530: 0xc0e3658  jal         func_38D960
label_4e6534:
    if (ctx->pc == 0x4E6534u) {
        ctx->pc = 0x4E6534u;
            // 0x4e6534: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4E6538u;
        goto label_4e6538;
    }
    ctx->pc = 0x4E6530u;
    SET_GPR_U32(ctx, 31, 0x4E6538u);
    ctx->pc = 0x4E6534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6530u;
            // 0x4e6534: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6538u; }
        if (ctx->pc != 0x4E6538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6538u; }
        if (ctx->pc != 0x4E6538u) { return; }
    }
    ctx->pc = 0x4E6538u;
label_4e6538:
    // 0x4e6538: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e6538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e653c:
    // 0x4e653c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4e653cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e6540:
    // 0x4e6540: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4e6544:
    if (ctx->pc == 0x4E6544u) {
        ctx->pc = 0x4E6544u;
            // 0x4e6544: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4E6548u;
        goto label_4e6548;
    }
    ctx->pc = 0x4E6540u;
    {
        const bool branch_taken_0x4e6540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E6544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6540u;
            // 0x4e6544: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6540) {
            ctx->pc = 0x4E6528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e6528;
        }
    }
    ctx->pc = 0x4E6548u;
label_4e6548:
    // 0x4e6548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e6548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e654c:
    // 0x4e654c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e654cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e6550:
    // 0x4e6550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e6550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6554:
    // 0x4e6554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e6554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6558:
    // 0x4e6558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e6558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e655c:
    // 0x4e655c: 0x3e00008  jr          $ra
label_4e6560:
    if (ctx->pc == 0x4E6560u) {
        ctx->pc = 0x4E6560u;
            // 0x4e6560: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E6564u;
        goto label_4e6564;
    }
    ctx->pc = 0x4E655Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E655Cu;
            // 0x4e6560: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E6564u;
label_4e6564:
    // 0x4e6564: 0x0  nop
    ctx->pc = 0x4e6564u;
    // NOP
label_4e6568:
    // 0x4e6568: 0x0  nop
    ctx->pc = 0x4e6568u;
    // NOP
label_4e656c:
    // 0x4e656c: 0x0  nop
    ctx->pc = 0x4e656cu;
    // NOP
label_4e6570:
    // 0x4e6570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e6570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e6574:
    // 0x4e6574: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e6574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e6578:
    // 0x4e6578: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e6578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e657c:
    // 0x4e657c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e6580:
    // 0x4e6580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e6580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e6584:
    // 0x4e6584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e6584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e6588:
    // 0x4e6588: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4e6588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e658c:
    // 0x4e658c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4e6590:
    if (ctx->pc == 0x4E6590u) {
        ctx->pc = 0x4E6590u;
            // 0x4e6590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6594u;
        goto label_4e6594;
    }
    ctx->pc = 0x4E658Cu;
    {
        const bool branch_taken_0x4e658c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E658Cu;
            // 0x4e6590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e658c) {
            ctx->pc = 0x4E65C8u;
            goto label_4e65c8;
        }
    }
    ctx->pc = 0x4E6594u;
label_4e6594:
    // 0x4e6594: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e6594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e6598:
    // 0x4e6598: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e6598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e659c:
    // 0x4e659c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4e659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4e65a0:
    // 0x4e65a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4e65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4e65a4:
    // 0x4e65a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e65a8:
    // 0x4e65a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e65a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e65ac:
    // 0x4e65ac: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4e65acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4e65b0:
    // 0x4e65b0: 0x320f809  jalr        $t9
label_4e65b4:
    if (ctx->pc == 0x4E65B4u) {
        ctx->pc = 0x4E65B8u;
        goto label_4e65b8;
    }
    ctx->pc = 0x4E65B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E65B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E65B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E65B8u; }
            if (ctx->pc != 0x4E65B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E65B8u;
label_4e65b8:
    // 0x4e65b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e65b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e65bc:
    // 0x4e65bc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4e65bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e65c0:
    // 0x4e65c0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4e65c4:
    if (ctx->pc == 0x4E65C4u) {
        ctx->pc = 0x4E65C4u;
            // 0x4e65c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4E65C8u;
        goto label_4e65c8;
    }
    ctx->pc = 0x4E65C0u;
    {
        const bool branch_taken_0x4e65c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E65C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E65C0u;
            // 0x4e65c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e65c0) {
            ctx->pc = 0x4E659Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e659c;
        }
    }
    ctx->pc = 0x4E65C8u;
label_4e65c8:
    // 0x4e65c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e65c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e65cc:
    // 0x4e65cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e65ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e65d0:
    // 0x4e65d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e65d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e65d4:
    // 0x4e65d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e65d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e65d8:
    // 0x4e65d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e65d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e65dc:
    // 0x4e65dc: 0x3e00008  jr          $ra
label_4e65e0:
    if (ctx->pc == 0x4E65E0u) {
        ctx->pc = 0x4E65E0u;
            // 0x4e65e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E65E4u;
        goto label_4e65e4;
    }
    ctx->pc = 0x4E65DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E65E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E65DCu;
            // 0x4e65e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E65E4u;
label_4e65e4:
    // 0x4e65e4: 0x0  nop
    ctx->pc = 0x4e65e4u;
    // NOP
label_4e65e8:
    // 0x4e65e8: 0x0  nop
    ctx->pc = 0x4e65e8u;
    // NOP
label_4e65ec:
    // 0x4e65ec: 0x0  nop
    ctx->pc = 0x4e65ecu;
    // NOP
}
