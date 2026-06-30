#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049E3D0
// Address: 0x49e3d0 - 0x49e6e0
void sub_0049E3D0_0x49e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E3D0_0x49e3d0");
#endif

    switch (ctx->pc) {
        case 0x49e3d0u: goto label_49e3d0;
        case 0x49e3d4u: goto label_49e3d4;
        case 0x49e3d8u: goto label_49e3d8;
        case 0x49e3dcu: goto label_49e3dc;
        case 0x49e3e0u: goto label_49e3e0;
        case 0x49e3e4u: goto label_49e3e4;
        case 0x49e3e8u: goto label_49e3e8;
        case 0x49e3ecu: goto label_49e3ec;
        case 0x49e3f0u: goto label_49e3f0;
        case 0x49e3f4u: goto label_49e3f4;
        case 0x49e3f8u: goto label_49e3f8;
        case 0x49e3fcu: goto label_49e3fc;
        case 0x49e400u: goto label_49e400;
        case 0x49e404u: goto label_49e404;
        case 0x49e408u: goto label_49e408;
        case 0x49e40cu: goto label_49e40c;
        case 0x49e410u: goto label_49e410;
        case 0x49e414u: goto label_49e414;
        case 0x49e418u: goto label_49e418;
        case 0x49e41cu: goto label_49e41c;
        case 0x49e420u: goto label_49e420;
        case 0x49e424u: goto label_49e424;
        case 0x49e428u: goto label_49e428;
        case 0x49e42cu: goto label_49e42c;
        case 0x49e430u: goto label_49e430;
        case 0x49e434u: goto label_49e434;
        case 0x49e438u: goto label_49e438;
        case 0x49e43cu: goto label_49e43c;
        case 0x49e440u: goto label_49e440;
        case 0x49e444u: goto label_49e444;
        case 0x49e448u: goto label_49e448;
        case 0x49e44cu: goto label_49e44c;
        case 0x49e450u: goto label_49e450;
        case 0x49e454u: goto label_49e454;
        case 0x49e458u: goto label_49e458;
        case 0x49e45cu: goto label_49e45c;
        case 0x49e460u: goto label_49e460;
        case 0x49e464u: goto label_49e464;
        case 0x49e468u: goto label_49e468;
        case 0x49e46cu: goto label_49e46c;
        case 0x49e470u: goto label_49e470;
        case 0x49e474u: goto label_49e474;
        case 0x49e478u: goto label_49e478;
        case 0x49e47cu: goto label_49e47c;
        case 0x49e480u: goto label_49e480;
        case 0x49e484u: goto label_49e484;
        case 0x49e488u: goto label_49e488;
        case 0x49e48cu: goto label_49e48c;
        case 0x49e490u: goto label_49e490;
        case 0x49e494u: goto label_49e494;
        case 0x49e498u: goto label_49e498;
        case 0x49e49cu: goto label_49e49c;
        case 0x49e4a0u: goto label_49e4a0;
        case 0x49e4a4u: goto label_49e4a4;
        case 0x49e4a8u: goto label_49e4a8;
        case 0x49e4acu: goto label_49e4ac;
        case 0x49e4b0u: goto label_49e4b0;
        case 0x49e4b4u: goto label_49e4b4;
        case 0x49e4b8u: goto label_49e4b8;
        case 0x49e4bcu: goto label_49e4bc;
        case 0x49e4c0u: goto label_49e4c0;
        case 0x49e4c4u: goto label_49e4c4;
        case 0x49e4c8u: goto label_49e4c8;
        case 0x49e4ccu: goto label_49e4cc;
        case 0x49e4d0u: goto label_49e4d0;
        case 0x49e4d4u: goto label_49e4d4;
        case 0x49e4d8u: goto label_49e4d8;
        case 0x49e4dcu: goto label_49e4dc;
        case 0x49e4e0u: goto label_49e4e0;
        case 0x49e4e4u: goto label_49e4e4;
        case 0x49e4e8u: goto label_49e4e8;
        case 0x49e4ecu: goto label_49e4ec;
        case 0x49e4f0u: goto label_49e4f0;
        case 0x49e4f4u: goto label_49e4f4;
        case 0x49e4f8u: goto label_49e4f8;
        case 0x49e4fcu: goto label_49e4fc;
        case 0x49e500u: goto label_49e500;
        case 0x49e504u: goto label_49e504;
        case 0x49e508u: goto label_49e508;
        case 0x49e50cu: goto label_49e50c;
        case 0x49e510u: goto label_49e510;
        case 0x49e514u: goto label_49e514;
        case 0x49e518u: goto label_49e518;
        case 0x49e51cu: goto label_49e51c;
        case 0x49e520u: goto label_49e520;
        case 0x49e524u: goto label_49e524;
        case 0x49e528u: goto label_49e528;
        case 0x49e52cu: goto label_49e52c;
        case 0x49e530u: goto label_49e530;
        case 0x49e534u: goto label_49e534;
        case 0x49e538u: goto label_49e538;
        case 0x49e53cu: goto label_49e53c;
        case 0x49e540u: goto label_49e540;
        case 0x49e544u: goto label_49e544;
        case 0x49e548u: goto label_49e548;
        case 0x49e54cu: goto label_49e54c;
        case 0x49e550u: goto label_49e550;
        case 0x49e554u: goto label_49e554;
        case 0x49e558u: goto label_49e558;
        case 0x49e55cu: goto label_49e55c;
        case 0x49e560u: goto label_49e560;
        case 0x49e564u: goto label_49e564;
        case 0x49e568u: goto label_49e568;
        case 0x49e56cu: goto label_49e56c;
        case 0x49e570u: goto label_49e570;
        case 0x49e574u: goto label_49e574;
        case 0x49e578u: goto label_49e578;
        case 0x49e57cu: goto label_49e57c;
        case 0x49e580u: goto label_49e580;
        case 0x49e584u: goto label_49e584;
        case 0x49e588u: goto label_49e588;
        case 0x49e58cu: goto label_49e58c;
        case 0x49e590u: goto label_49e590;
        case 0x49e594u: goto label_49e594;
        case 0x49e598u: goto label_49e598;
        case 0x49e59cu: goto label_49e59c;
        case 0x49e5a0u: goto label_49e5a0;
        case 0x49e5a4u: goto label_49e5a4;
        case 0x49e5a8u: goto label_49e5a8;
        case 0x49e5acu: goto label_49e5ac;
        case 0x49e5b0u: goto label_49e5b0;
        case 0x49e5b4u: goto label_49e5b4;
        case 0x49e5b8u: goto label_49e5b8;
        case 0x49e5bcu: goto label_49e5bc;
        case 0x49e5c0u: goto label_49e5c0;
        case 0x49e5c4u: goto label_49e5c4;
        case 0x49e5c8u: goto label_49e5c8;
        case 0x49e5ccu: goto label_49e5cc;
        case 0x49e5d0u: goto label_49e5d0;
        case 0x49e5d4u: goto label_49e5d4;
        case 0x49e5d8u: goto label_49e5d8;
        case 0x49e5dcu: goto label_49e5dc;
        case 0x49e5e0u: goto label_49e5e0;
        case 0x49e5e4u: goto label_49e5e4;
        case 0x49e5e8u: goto label_49e5e8;
        case 0x49e5ecu: goto label_49e5ec;
        case 0x49e5f0u: goto label_49e5f0;
        case 0x49e5f4u: goto label_49e5f4;
        case 0x49e5f8u: goto label_49e5f8;
        case 0x49e5fcu: goto label_49e5fc;
        case 0x49e600u: goto label_49e600;
        case 0x49e604u: goto label_49e604;
        case 0x49e608u: goto label_49e608;
        case 0x49e60cu: goto label_49e60c;
        case 0x49e610u: goto label_49e610;
        case 0x49e614u: goto label_49e614;
        case 0x49e618u: goto label_49e618;
        case 0x49e61cu: goto label_49e61c;
        case 0x49e620u: goto label_49e620;
        case 0x49e624u: goto label_49e624;
        case 0x49e628u: goto label_49e628;
        case 0x49e62cu: goto label_49e62c;
        case 0x49e630u: goto label_49e630;
        case 0x49e634u: goto label_49e634;
        case 0x49e638u: goto label_49e638;
        case 0x49e63cu: goto label_49e63c;
        case 0x49e640u: goto label_49e640;
        case 0x49e644u: goto label_49e644;
        case 0x49e648u: goto label_49e648;
        case 0x49e64cu: goto label_49e64c;
        case 0x49e650u: goto label_49e650;
        case 0x49e654u: goto label_49e654;
        case 0x49e658u: goto label_49e658;
        case 0x49e65cu: goto label_49e65c;
        case 0x49e660u: goto label_49e660;
        case 0x49e664u: goto label_49e664;
        case 0x49e668u: goto label_49e668;
        case 0x49e66cu: goto label_49e66c;
        case 0x49e670u: goto label_49e670;
        case 0x49e674u: goto label_49e674;
        case 0x49e678u: goto label_49e678;
        case 0x49e67cu: goto label_49e67c;
        case 0x49e680u: goto label_49e680;
        case 0x49e684u: goto label_49e684;
        case 0x49e688u: goto label_49e688;
        case 0x49e68cu: goto label_49e68c;
        case 0x49e690u: goto label_49e690;
        case 0x49e694u: goto label_49e694;
        case 0x49e698u: goto label_49e698;
        case 0x49e69cu: goto label_49e69c;
        case 0x49e6a0u: goto label_49e6a0;
        case 0x49e6a4u: goto label_49e6a4;
        case 0x49e6a8u: goto label_49e6a8;
        case 0x49e6acu: goto label_49e6ac;
        case 0x49e6b0u: goto label_49e6b0;
        case 0x49e6b4u: goto label_49e6b4;
        case 0x49e6b8u: goto label_49e6b8;
        case 0x49e6bcu: goto label_49e6bc;
        case 0x49e6c0u: goto label_49e6c0;
        case 0x49e6c4u: goto label_49e6c4;
        case 0x49e6c8u: goto label_49e6c8;
        case 0x49e6ccu: goto label_49e6cc;
        case 0x49e6d0u: goto label_49e6d0;
        case 0x49e6d4u: goto label_49e6d4;
        case 0x49e6d8u: goto label_49e6d8;
        case 0x49e6dcu: goto label_49e6dc;
        default: break;
    }

    ctx->pc = 0x49e3d0u;

label_49e3d0:
    // 0x49e3d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49e3d4:
    // 0x49e3d4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x49e3d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_49e3d8:
    // 0x49e3d8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x49e3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_49e3dc:
    // 0x49e3dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49e3e0:
    // 0x49e3e0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x49e3e0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_49e3e4:
    // 0x49e3e4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x49e3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_49e3e8:
    // 0x49e3e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49e3ec:
    // 0x49e3ec: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x49e3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_49e3f0:
    // 0x49e3f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49e3f4:
    // 0x49e3f4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x49e3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_49e3f8:
    // 0x49e3f8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x49e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_49e3fc:
    // 0x49e3fc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x49e3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_49e400:
    // 0x49e400: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x49e400u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_49e404:
    // 0x49e404: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x49e404u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_49e408:
    // 0x49e408: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x49e408u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_49e40c:
    // 0x49e40c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49e410:
    // 0x49e410: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x49e410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_49e414:
    // 0x49e414: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x49e414u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_49e418:
    // 0x49e418: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x49e418u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_49e41c:
    // 0x49e41c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x49e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_49e420:
    // 0x49e420: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x49e420u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_49e424:
    // 0x49e424: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x49e424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_49e428:
    // 0x49e428: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x49e428u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_49e42c:
    // 0x49e42c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x49e42cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_49e430:
    // 0x49e430: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x49e430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_49e434:
    // 0x49e434: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x49e434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_49e438:
    // 0x49e438: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49e438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49e43c:
    // 0x49e43c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x49e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_49e440:
    // 0x49e440: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x49e440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_49e444:
    // 0x49e444: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x49e444u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_49e448:
    // 0x49e448: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x49e448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_49e44c:
    // 0x49e44c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x49e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_49e450:
    // 0x49e450: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x49e450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_49e454:
    // 0x49e454: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x49e454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_49e458:
    // 0x49e458: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x49e458u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_49e45c:
    // 0x49e45c: 0x3e00008  jr          $ra
label_49e460:
    if (ctx->pc == 0x49E460u) {
        ctx->pc = 0x49E460u;
            // 0x49e460: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x49E464u;
        goto label_49e464;
    }
    ctx->pc = 0x49E45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E45Cu;
            // 0x49e460: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E464u;
label_49e464:
    // 0x49e464: 0x0  nop
    ctx->pc = 0x49e464u;
    // NOP
label_49e468:
    // 0x49e468: 0x0  nop
    ctx->pc = 0x49e468u;
    // NOP
label_49e46c:
    // 0x49e46c: 0x0  nop
    ctx->pc = 0x49e46cu;
    // NOP
label_49e470:
    // 0x49e470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49e474:
    // 0x49e474: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49e474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49e478:
    // 0x49e478: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x49e478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_49e47c:
    // 0x49e47c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49e480:
    // 0x49e480: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49e480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49e484:
    // 0x49e484: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49e484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49e488:
    // 0x49e488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49e48c:
    // 0x49e48c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49e490:
    // 0x49e490: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49e490u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49e494:
    // 0x49e494: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_49e498:
    if (ctx->pc == 0x49E498u) {
        ctx->pc = 0x49E498u;
            // 0x49e498: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E49Cu;
        goto label_49e49c;
    }
    ctx->pc = 0x49E494u;
    {
        const bool branch_taken_0x49e494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x49E498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E494u;
            // 0x49e498: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e494) {
            ctx->pc = 0x49E4C8u;
            goto label_49e4c8;
        }
    }
    ctx->pc = 0x49E49Cu;
label_49e49c:
    // 0x49e49c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49e4a0:
    // 0x49e4a0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_49e4a4:
    if (ctx->pc == 0x49E4A4u) {
        ctx->pc = 0x49E4A4u;
            // 0x49e4a4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49E4A8u;
        goto label_49e4a8;
    }
    ctx->pc = 0x49E4A0u;
    {
        const bool branch_taken_0x49e4a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49e4a0) {
            ctx->pc = 0x49E4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E4A0u;
            // 0x49e4a4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E4BCu;
            goto label_49e4bc;
        }
    }
    ctx->pc = 0x49E4A8u;
label_49e4a8:
    // 0x49e4a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49e4ac:
    // 0x49e4ac: 0x10a30084  beq         $a1, $v1, . + 4 + (0x84 << 2)
label_49e4b0:
    if (ctx->pc == 0x49E4B0u) {
        ctx->pc = 0x49E4B4u;
        goto label_49e4b4;
    }
    ctx->pc = 0x49E4ACu;
    {
        const bool branch_taken_0x49e4ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49e4ac) {
            ctx->pc = 0x49E6C0u;
            goto label_49e6c0;
        }
    }
    ctx->pc = 0x49E4B4u;
label_49e4b4:
    // 0x49e4b4: 0x10000082  b           . + 4 + (0x82 << 2)
label_49e4b8:
    if (ctx->pc == 0x49E4B8u) {
        ctx->pc = 0x49E4BCu;
        goto label_49e4bc;
    }
    ctx->pc = 0x49E4B4u;
    {
        const bool branch_taken_0x49e4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e4b4) {
            ctx->pc = 0x49E6C0u;
            goto label_49e6c0;
        }
    }
    ctx->pc = 0x49E4BCu;
label_49e4bc:
    // 0x49e4bc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49e4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49e4c0:
    // 0x49e4c0: 0x320f809  jalr        $t9
label_49e4c4:
    if (ctx->pc == 0x49E4C4u) {
        ctx->pc = 0x49E4C8u;
        goto label_49e4c8;
    }
    ctx->pc = 0x49E4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49E4C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49E4C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49E4C8u; }
            if (ctx->pc != 0x49E4C8u) { return; }
        }
        }
    }
    ctx->pc = 0x49E4C8u;
label_49e4c8:
    // 0x49e4c8: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x49e4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_49e4cc:
    // 0x49e4cc: 0x1200007c  beqz        $s0, . + 4 + (0x7C << 2)
label_49e4d0:
    if (ctx->pc == 0x49E4D0u) {
        ctx->pc = 0x49E4D4u;
        goto label_49e4d4;
    }
    ctx->pc = 0x49E4CCu;
    {
        const bool branch_taken_0x49e4cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e4cc) {
            ctx->pc = 0x49E6C0u;
            goto label_49e6c0;
        }
    }
    ctx->pc = 0x49E4D4u;
label_49e4d4:
    // 0x49e4d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49e4d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e4d8:
    // 0x49e4d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49e4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e4dc:
    // 0x49e4dc: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x49e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_49e4e0:
    // 0x49e4e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x49e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_49e4e4:
    // 0x49e4e4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x49e4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49e4e8:
    // 0x49e4e8: 0xc1279c8  jal         func_49E720
label_49e4ec:
    if (ctx->pc == 0x49E4ECu) {
        ctx->pc = 0x49E4ECu;
            // 0x49e4ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E4F0u;
        goto label_49e4f0;
    }
    ctx->pc = 0x49E4E8u;
    SET_GPR_U32(ctx, 31, 0x49E4F0u);
    ctx->pc = 0x49E4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E4E8u;
            // 0x49e4ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E720u;
    if (runtime->hasFunction(0x49E720u)) {
        auto targetFn = runtime->lookupFunction(0x49E720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E4F0u; }
        if (ctx->pc != 0x49E4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E720_0x49e720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E4F0u; }
        if (ctx->pc != 0x49E4F0u) { return; }
    }
    ctx->pc = 0x49E4F0u;
label_49e4f0:
    // 0x49e4f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49e4f4:
    // 0x49e4f4: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_49e4f8:
    if (ctx->pc == 0x49E4F8u) {
        ctx->pc = 0x49E4FCu;
        goto label_49e4fc;
    }
    ctx->pc = 0x49E4F4u;
    {
        const bool branch_taken_0x49e4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49e4f4) {
            ctx->pc = 0x49E530u;
            goto label_49e530;
        }
    }
    ctx->pc = 0x49E4FCu;
label_49e4fc:
    // 0x49e4fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49e500:
    if (ctx->pc == 0x49E500u) {
        ctx->pc = 0x49E504u;
        goto label_49e504;
    }
    ctx->pc = 0x49E4FCu;
    {
        const bool branch_taken_0x49e4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e4fc) {
            ctx->pc = 0x49E510u;
            goto label_49e510;
        }
    }
    ctx->pc = 0x49E504u;
label_49e504:
    // 0x49e504: 0x1000006a  b           . + 4 + (0x6A << 2)
label_49e508:
    if (ctx->pc == 0x49E508u) {
        ctx->pc = 0x49E50Cu;
        goto label_49e50c;
    }
    ctx->pc = 0x49E504u;
    {
        const bool branch_taken_0x49e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e504) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E50Cu;
label_49e50c:
    // 0x49e50c: 0x0  nop
    ctx->pc = 0x49e50cu;
    // NOP
label_49e510:
    // 0x49e510: 0xc1279c4  jal         func_49E710
label_49e514:
    if (ctx->pc == 0x49E514u) {
        ctx->pc = 0x49E514u;
            // 0x49e514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E518u;
        goto label_49e518;
    }
    ctx->pc = 0x49E510u;
    SET_GPR_U32(ctx, 31, 0x49E518u);
    ctx->pc = 0x49E514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E510u;
            // 0x49e514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E710u;
    if (runtime->hasFunction(0x49E710u)) {
        auto targetFn = runtime->lookupFunction(0x49E710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E518u; }
        if (ctx->pc != 0x49E518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E710_0x49e710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E518u; }
        if (ctx->pc != 0x49E518u) { return; }
    }
    ctx->pc = 0x49E518u;
label_49e518:
    // 0x49e518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49e518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49e51c:
    // 0x49e51c: 0xc1279c0  jal         func_49E700
label_49e520:
    if (ctx->pc == 0x49E520u) {
        ctx->pc = 0x49E520u;
            // 0x49e520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49E524u;
        goto label_49e524;
    }
    ctx->pc = 0x49E51Cu;
    SET_GPR_U32(ctx, 31, 0x49E524u);
    ctx->pc = 0x49E520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E51Cu;
            // 0x49e520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E700u;
    if (runtime->hasFunction(0x49E700u)) {
        auto targetFn = runtime->lookupFunction(0x49E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E524u; }
        if (ctx->pc != 0x49E524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E700_0x49e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E524u; }
        if (ctx->pc != 0x49E524u) { return; }
    }
    ctx->pc = 0x49E524u;
label_49e524:
    // 0x49e524: 0x10000062  b           . + 4 + (0x62 << 2)
label_49e528:
    if (ctx->pc == 0x49E528u) {
        ctx->pc = 0x49E52Cu;
        goto label_49e52c;
    }
    ctx->pc = 0x49E524u;
    {
        const bool branch_taken_0x49e524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e524) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E52Cu;
label_49e52c:
    // 0x49e52c: 0x0  nop
    ctx->pc = 0x49e52cu;
    // NOP
label_49e530:
    // 0x49e530: 0xc1279bc  jal         func_49E6F0
label_49e534:
    if (ctx->pc == 0x49E534u) {
        ctx->pc = 0x49E534u;
            // 0x49e534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E538u;
        goto label_49e538;
    }
    ctx->pc = 0x49E530u;
    SET_GPR_U32(ctx, 31, 0x49E538u);
    ctx->pc = 0x49E534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E530u;
            // 0x49e534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E6F0u;
    if (runtime->hasFunction(0x49E6F0u)) {
        auto targetFn = runtime->lookupFunction(0x49E6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E538u; }
        if (ctx->pc != 0x49E538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E6F0_0x49e6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E538u; }
        if (ctx->pc != 0x49E538u) { return; }
    }
    ctx->pc = 0x49E538u;
label_49e538:
    // 0x49e538: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49e538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49e53c:
    // 0x49e53c: 0x10430044  beq         $v0, $v1, . + 4 + (0x44 << 2)
label_49e540:
    if (ctx->pc == 0x49E540u) {
        ctx->pc = 0x49E544u;
        goto label_49e544;
    }
    ctx->pc = 0x49E53Cu;
    {
        const bool branch_taken_0x49e53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49e53c) {
            ctx->pc = 0x49E650u;
            goto label_49e650;
        }
    }
    ctx->pc = 0x49E544u;
label_49e544:
    // 0x49e544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49e548:
    // 0x49e548: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
label_49e54c:
    if (ctx->pc == 0x49E54Cu) {
        ctx->pc = 0x49E550u;
        goto label_49e550;
    }
    ctx->pc = 0x49E548u;
    {
        const bool branch_taken_0x49e548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49e548) {
            ctx->pc = 0x49E5E0u;
            goto label_49e5e0;
        }
    }
    ctx->pc = 0x49E550u;
label_49e550:
    // 0x49e550: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x49e550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49e554:
    // 0x49e554: 0x1045000e  beq         $v0, $a1, . + 4 + (0xE << 2)
label_49e558:
    if (ctx->pc == 0x49E558u) {
        ctx->pc = 0x49E55Cu;
        goto label_49e55c;
    }
    ctx->pc = 0x49E554u;
    {
        const bool branch_taken_0x49e554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x49e554) {
            ctx->pc = 0x49E590u;
            goto label_49e590;
        }
    }
    ctx->pc = 0x49E55Cu;
label_49e55c:
    // 0x49e55c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49e560:
    if (ctx->pc == 0x49E560u) {
        ctx->pc = 0x49E564u;
        goto label_49e564;
    }
    ctx->pc = 0x49E55Cu;
    {
        const bool branch_taken_0x49e55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e55c) {
            ctx->pc = 0x49E570u;
            goto label_49e570;
        }
    }
    ctx->pc = 0x49E564u;
label_49e564:
    // 0x49e564: 0x10000052  b           . + 4 + (0x52 << 2)
label_49e568:
    if (ctx->pc == 0x49E568u) {
        ctx->pc = 0x49E56Cu;
        goto label_49e56c;
    }
    ctx->pc = 0x49E564u;
    {
        const bool branch_taken_0x49e564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e564) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E56Cu;
label_49e56c:
    // 0x49e56c: 0x0  nop
    ctx->pc = 0x49e56cu;
    // NOP
label_49e570:
    // 0x49e570: 0x86430088  lh          $v1, 0x88($s2)
    ctx->pc = 0x49e570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 136)));
label_49e574:
    // 0x49e574: 0x1860004e  blez        $v1, . + 4 + (0x4E << 2)
label_49e578:
    if (ctx->pc == 0x49E578u) {
        ctx->pc = 0x49E57Cu;
        goto label_49e57c;
    }
    ctx->pc = 0x49E574u;
    {
        const bool branch_taken_0x49e574 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x49e574) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E57Cu;
label_49e57c:
    // 0x49e57c: 0xc1279b8  jal         func_49E6E0
label_49e580:
    if (ctx->pc == 0x49E580u) {
        ctx->pc = 0x49E580u;
            // 0x49e580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E584u;
        goto label_49e584;
    }
    ctx->pc = 0x49E57Cu;
    SET_GPR_U32(ctx, 31, 0x49E584u);
    ctx->pc = 0x49E580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E57Cu;
            // 0x49e580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E6E0u;
    if (runtime->hasFunction(0x49E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x49E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E584u; }
        if (ctx->pc != 0x49E584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E6E0_0x49e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E584u; }
        if (ctx->pc != 0x49E584u) { return; }
    }
    ctx->pc = 0x49E584u;
label_49e584:
    // 0x49e584: 0x1000004a  b           . + 4 + (0x4A << 2)
label_49e588:
    if (ctx->pc == 0x49E588u) {
        ctx->pc = 0x49E58Cu;
        goto label_49e58c;
    }
    ctx->pc = 0x49E584u;
    {
        const bool branch_taken_0x49e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e584) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E58Cu;
label_49e58c:
    // 0x49e58c: 0x0  nop
    ctx->pc = 0x49e58cu;
    // NOP
label_49e590:
    // 0x49e590: 0xc0d1c10  jal         func_347040
label_49e594:
    if (ctx->pc == 0x49E594u) {
        ctx->pc = 0x49E594u;
            // 0x49e594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E598u;
        goto label_49e598;
    }
    ctx->pc = 0x49E590u;
    SET_GPR_U32(ctx, 31, 0x49E598u);
    ctx->pc = 0x49E594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E590u;
            // 0x49e594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E598u; }
        if (ctx->pc != 0x49E598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E598u; }
        if (ctx->pc != 0x49E598u) { return; }
    }
    ctx->pc = 0x49E598u;
label_49e598:
    // 0x49e598: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x49e598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_49e59c:
    // 0x49e59c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49e59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e5a0:
    // 0x49e5a0: 0xc122d2c  jal         func_48B4B0
label_49e5a4:
    if (ctx->pc == 0x49E5A4u) {
        ctx->pc = 0x49E5A4u;
            // 0x49e5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E5A8u;
        goto label_49e5a8;
    }
    ctx->pc = 0x49E5A0u;
    SET_GPR_U32(ctx, 31, 0x49E5A8u);
    ctx->pc = 0x49E5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E5A0u;
            // 0x49e5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E5A8u; }
        if (ctx->pc != 0x49E5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E5A8u; }
        if (ctx->pc != 0x49E5A8u) { return; }
    }
    ctx->pc = 0x49E5A8u;
label_49e5a8:
    // 0x49e5a8: 0xc127b08  jal         func_49EC20
label_49e5ac:
    if (ctx->pc == 0x49E5ACu) {
        ctx->pc = 0x49E5ACu;
            // 0x49e5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E5B0u;
        goto label_49e5b0;
    }
    ctx->pc = 0x49E5A8u;
    SET_GPR_U32(ctx, 31, 0x49E5B0u);
    ctx->pc = 0x49E5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E5A8u;
            // 0x49e5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49EC20u;
    if (runtime->hasFunction(0x49EC20u)) {
        auto targetFn = runtime->lookupFunction(0x49EC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E5B0u; }
        if (ctx->pc != 0x49E5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049EC20_0x49ec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E5B0u; }
        if (ctx->pc != 0x49E5B0u) { return; }
    }
    ctx->pc = 0x49E5B0u;
label_49e5b0:
    // 0x49e5b0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_49e5b4:
    if (ctx->pc == 0x49E5B4u) {
        ctx->pc = 0x49E5B8u;
        goto label_49e5b8;
    }
    ctx->pc = 0x49E5B0u;
    {
        const bool branch_taken_0x49e5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e5b0) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E5B8u;
label_49e5b8:
    // 0x49e5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49e5bc:
    // 0x49e5bc: 0xc1279b8  jal         func_49E6E0
label_49e5c0:
    if (ctx->pc == 0x49E5C0u) {
        ctx->pc = 0x49E5C0u;
            // 0x49e5c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x49E5C4u;
        goto label_49e5c4;
    }
    ctx->pc = 0x49E5BCu;
    SET_GPR_U32(ctx, 31, 0x49E5C4u);
    ctx->pc = 0x49E5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E5BCu;
            // 0x49e5c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E6E0u;
    if (runtime->hasFunction(0x49E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x49E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E5C4u; }
        if (ctx->pc != 0x49E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E6E0_0x49e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E5C4u; }
        if (ctx->pc != 0x49E5C4u) { return; }
    }
    ctx->pc = 0x49E5C4u;
label_49e5c4:
    // 0x49e5c4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x49e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_49e5c8:
    // 0x49e5c8: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x49e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_49e5cc:
    // 0x49e5cc: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x49e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_49e5d0:
    // 0x49e5d0: 0xc122c5c  jal         func_48B170
label_49e5d4:
    if (ctx->pc == 0x49E5D4u) {
        ctx->pc = 0x49E5D4u;
            // 0x49e5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E5D8u;
        goto label_49e5d8;
    }
    ctx->pc = 0x49E5D0u;
    SET_GPR_U32(ctx, 31, 0x49E5D8u);
    ctx->pc = 0x49E5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E5D0u;
            // 0x49e5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E5D8u; }
        if (ctx->pc != 0x49E5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E5D8u; }
        if (ctx->pc != 0x49E5D8u) { return; }
    }
    ctx->pc = 0x49E5D8u;
label_49e5d8:
    // 0x49e5d8: 0x10000035  b           . + 4 + (0x35 << 2)
label_49e5dc:
    if (ctx->pc == 0x49E5DCu) {
        ctx->pc = 0x49E5E0u;
        goto label_49e5e0;
    }
    ctx->pc = 0x49E5D8u;
    {
        const bool branch_taken_0x49e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e5d8) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E5E0u;
label_49e5e0:
    // 0x49e5e0: 0xc6410084  lwc1        $f1, 0x84($s2)
    ctx->pc = 0x49e5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49e5e4:
    // 0x49e5e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49e5e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49e5e8:
    // 0x49e5e8: 0x0  nop
    ctx->pc = 0x49e5e8u;
    // NOP
label_49e5ec:
    // 0x49e5ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49e5ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49e5f0:
    // 0x49e5f0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_49e5f4:
    if (ctx->pc == 0x49E5F4u) {
        ctx->pc = 0x49E5F8u;
        goto label_49e5f8;
    }
    ctx->pc = 0x49E5F0u;
    {
        const bool branch_taken_0x49e5f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49e5f0) {
            ctx->pc = 0x49E618u;
            goto label_49e618;
        }
    }
    ctx->pc = 0x49E5F8u;
label_49e5f8:
    // 0x49e5f8: 0xc0775b8  jal         func_1DD6E0
label_49e5fc:
    if (ctx->pc == 0x49E5FCu) {
        ctx->pc = 0x49E600u;
        goto label_49e600;
    }
    ctx->pc = 0x49E5F8u;
    SET_GPR_U32(ctx, 31, 0x49E600u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E600u; }
        if (ctx->pc != 0x49E600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E600u; }
        if (ctx->pc != 0x49E600u) { return; }
    }
    ctx->pc = 0x49E600u;
label_49e600:
    // 0x49e600: 0xc0775b4  jal         func_1DD6D0
label_49e604:
    if (ctx->pc == 0x49E604u) {
        ctx->pc = 0x49E604u;
            // 0x49e604: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49E608u;
        goto label_49e608;
    }
    ctx->pc = 0x49E600u;
    SET_GPR_U32(ctx, 31, 0x49E608u);
    ctx->pc = 0x49E604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E600u;
            // 0x49e604: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E608u; }
        if (ctx->pc != 0x49E608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E608u; }
        if (ctx->pc != 0x49E608u) { return; }
    }
    ctx->pc = 0x49E608u;
label_49e608:
    // 0x49e608: 0xc6410084  lwc1        $f1, 0x84($s2)
    ctx->pc = 0x49e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49e60c:
    // 0x49e60c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x49e60cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49e610:
    // 0x49e610: 0xe6400084  swc1        $f0, 0x84($s2)
    ctx->pc = 0x49e610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
label_49e614:
    // 0x49e614: 0x0  nop
    ctx->pc = 0x49e614u;
    // NOP
label_49e618:
    // 0x49e618: 0xc6410084  lwc1        $f1, 0x84($s2)
    ctx->pc = 0x49e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49e61c:
    // 0x49e61c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49e61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49e620:
    // 0x49e620: 0x0  nop
    ctx->pc = 0x49e620u;
    // NOP
label_49e624:
    // 0x49e624: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49e624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49e628:
    // 0x49e628: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_49e62c:
    if (ctx->pc == 0x49E62Cu) {
        ctx->pc = 0x49E630u;
        goto label_49e630;
    }
    ctx->pc = 0x49E628u;
    {
        const bool branch_taken_0x49e628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49e628) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E630u;
label_49e630:
    // 0x49e630: 0x86430088  lh          $v1, 0x88($s2)
    ctx->pc = 0x49e630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 136)));
label_49e634:
    // 0x49e634: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_49e638:
    if (ctx->pc == 0x49E638u) {
        ctx->pc = 0x49E63Cu;
        goto label_49e63c;
    }
    ctx->pc = 0x49E634u;
    {
        const bool branch_taken_0x49e634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e634) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E63Cu;
label_49e63c:
    // 0x49e63c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49e63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49e640:
    // 0x49e640: 0xc1279b8  jal         func_49E6E0
label_49e644:
    if (ctx->pc == 0x49E644u) {
        ctx->pc = 0x49E644u;
            // 0x49e644: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x49E648u;
        goto label_49e648;
    }
    ctx->pc = 0x49E640u;
    SET_GPR_U32(ctx, 31, 0x49E648u);
    ctx->pc = 0x49E644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E640u;
            // 0x49e644: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E6E0u;
    if (runtime->hasFunction(0x49E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x49E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E648u; }
        if (ctx->pc != 0x49E648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E6E0_0x49e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E648u; }
        if (ctx->pc != 0x49E648u) { return; }
    }
    ctx->pc = 0x49E648u;
label_49e648:
    // 0x49e648: 0x10000019  b           . + 4 + (0x19 << 2)
label_49e64c:
    if (ctx->pc == 0x49E64Cu) {
        ctx->pc = 0x49E650u;
        goto label_49e650;
    }
    ctx->pc = 0x49E648u;
    {
        const bool branch_taken_0x49e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e648) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E650u;
label_49e650:
    // 0x49e650: 0xc0d1c10  jal         func_347040
label_49e654:
    if (ctx->pc == 0x49E654u) {
        ctx->pc = 0x49E654u;
            // 0x49e654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E658u;
        goto label_49e658;
    }
    ctx->pc = 0x49E650u;
    SET_GPR_U32(ctx, 31, 0x49E658u);
    ctx->pc = 0x49E654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E650u;
            // 0x49e654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E658u; }
        if (ctx->pc != 0x49E658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E658u; }
        if (ctx->pc != 0x49E658u) { return; }
    }
    ctx->pc = 0x49E658u;
label_49e658:
    // 0x49e658: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x49e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_49e65c:
    // 0x49e65c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49e65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e660:
    // 0x49e660: 0xc122d2c  jal         func_48B4B0
label_49e664:
    if (ctx->pc == 0x49E664u) {
        ctx->pc = 0x49E664u;
            // 0x49e664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E668u;
        goto label_49e668;
    }
    ctx->pc = 0x49E660u;
    SET_GPR_U32(ctx, 31, 0x49E668u);
    ctx->pc = 0x49E664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E660u;
            // 0x49e664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E668u; }
        if (ctx->pc != 0x49E668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E668u; }
        if (ctx->pc != 0x49E668u) { return; }
    }
    ctx->pc = 0x49E668u;
label_49e668:
    // 0x49e668: 0xc127b08  jal         func_49EC20
label_49e66c:
    if (ctx->pc == 0x49E66Cu) {
        ctx->pc = 0x49E66Cu;
            // 0x49e66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E670u;
        goto label_49e670;
    }
    ctx->pc = 0x49E668u;
    SET_GPR_U32(ctx, 31, 0x49E670u);
    ctx->pc = 0x49E66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E668u;
            // 0x49e66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49EC20u;
    if (runtime->hasFunction(0x49EC20u)) {
        auto targetFn = runtime->lookupFunction(0x49EC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E670u; }
        if (ctx->pc != 0x49E670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049EC20_0x49ec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E670u; }
        if (ctx->pc != 0x49E670u) { return; }
    }
    ctx->pc = 0x49E670u;
label_49e670:
    // 0x49e670: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_49e674:
    if (ctx->pc == 0x49E674u) {
        ctx->pc = 0x49E678u;
        goto label_49e678;
    }
    ctx->pc = 0x49E670u;
    {
        const bool branch_taken_0x49e670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e670) {
            ctx->pc = 0x49E698u;
            goto label_49e698;
        }
    }
    ctx->pc = 0x49E678u;
label_49e678:
    // 0x49e678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49e678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49e67c:
    // 0x49e67c: 0xc1279b8  jal         func_49E6E0
label_49e680:
    if (ctx->pc == 0x49E680u) {
        ctx->pc = 0x49E680u;
            // 0x49e680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E684u;
        goto label_49e684;
    }
    ctx->pc = 0x49E67Cu;
    SET_GPR_U32(ctx, 31, 0x49E684u);
    ctx->pc = 0x49E680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E67Cu;
            // 0x49e680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E6E0u;
    if (runtime->hasFunction(0x49E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x49E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E684u; }
        if (ctx->pc != 0x49E684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E6E0_0x49e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E684u; }
        if (ctx->pc != 0x49E684u) { return; }
    }
    ctx->pc = 0x49E684u;
label_49e684:
    // 0x49e684: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x49e684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_49e688:
    // 0x49e688: 0xc122c5c  jal         func_48B170
label_49e68c:
    if (ctx->pc == 0x49E68Cu) {
        ctx->pc = 0x49E68Cu;
            // 0x49e68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E690u;
        goto label_49e690;
    }
    ctx->pc = 0x49E688u;
    SET_GPR_U32(ctx, 31, 0x49E690u);
    ctx->pc = 0x49E68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E688u;
            // 0x49e68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E690u; }
        if (ctx->pc != 0x49E690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E690u; }
        if (ctx->pc != 0x49E690u) { return; }
    }
    ctx->pc = 0x49E690u;
label_49e690:
    // 0x49e690: 0x10000007  b           . + 4 + (0x7 << 2)
label_49e694:
    if (ctx->pc == 0x49E694u) {
        ctx->pc = 0x49E698u;
        goto label_49e698;
    }
    ctx->pc = 0x49E690u;
    {
        const bool branch_taken_0x49e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e690) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E698u;
label_49e698:
    // 0x49e698: 0x86430088  lh          $v1, 0x88($s2)
    ctx->pc = 0x49e698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 136)));
label_49e69c:
    // 0x49e69c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_49e6a0:
    if (ctx->pc == 0x49E6A0u) {
        ctx->pc = 0x49E6A4u;
        goto label_49e6a4;
    }
    ctx->pc = 0x49E69Cu;
    {
        const bool branch_taken_0x49e69c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x49e69c) {
            ctx->pc = 0x49E6B0u;
            goto label_49e6b0;
        }
    }
    ctx->pc = 0x49E6A4u;
label_49e6a4:
    // 0x49e6a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49e6a8:
    // 0x49e6a8: 0xc1279b8  jal         func_49E6E0
label_49e6ac:
    if (ctx->pc == 0x49E6ACu) {
        ctx->pc = 0x49E6ACu;
            // 0x49e6ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49E6B0u;
        goto label_49e6b0;
    }
    ctx->pc = 0x49E6A8u;
    SET_GPR_U32(ctx, 31, 0x49E6B0u);
    ctx->pc = 0x49E6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E6A8u;
            // 0x49e6ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E6E0u;
    if (runtime->hasFunction(0x49E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x49E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E6B0u; }
        if (ctx->pc != 0x49E6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E6E0_0x49e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E6B0u; }
        if (ctx->pc != 0x49E6B0u) { return; }
    }
    ctx->pc = 0x49E6B0u;
label_49e6b0:
    // 0x49e6b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49e6b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49e6b4:
    // 0x49e6b4: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x49e6b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_49e6b8:
    // 0x49e6b8: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
label_49e6bc:
    if (ctx->pc == 0x49E6BCu) {
        ctx->pc = 0x49E6BCu;
            // 0x49e6bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x49E6C0u;
        goto label_49e6c0;
    }
    ctx->pc = 0x49E6B8u;
    {
        const bool branch_taken_0x49e6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E6B8u;
            // 0x49e6bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e6b8) {
            ctx->pc = 0x49E4DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49e4dc;
        }
    }
    ctx->pc = 0x49E6C0u;
label_49e6c0:
    // 0x49e6c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x49e6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_49e6c4:
    // 0x49e6c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49e6c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49e6c8:
    // 0x49e6c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49e6c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49e6cc:
    // 0x49e6cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49e6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49e6d0:
    // 0x49e6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49e6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49e6d4:
    // 0x49e6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49e6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49e6d8:
    // 0x49e6d8: 0x3e00008  jr          $ra
label_49e6dc:
    if (ctx->pc == 0x49E6DCu) {
        ctx->pc = 0x49E6DCu;
            // 0x49e6dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x49E6E0u;
        goto label_fallthrough_0x49e6d8;
    }
    ctx->pc = 0x49E6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E6D8u;
            // 0x49e6dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x49e6d8:
    ctx->pc = 0x49E6E0u;
}
