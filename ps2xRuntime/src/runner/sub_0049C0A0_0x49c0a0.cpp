#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049C0A0
// Address: 0x49c0a0 - 0x49c5b0
void sub_0049C0A0_0x49c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C0A0_0x49c0a0");
#endif

    switch (ctx->pc) {
        case 0x49c0a0u: goto label_49c0a0;
        case 0x49c0a4u: goto label_49c0a4;
        case 0x49c0a8u: goto label_49c0a8;
        case 0x49c0acu: goto label_49c0ac;
        case 0x49c0b0u: goto label_49c0b0;
        case 0x49c0b4u: goto label_49c0b4;
        case 0x49c0b8u: goto label_49c0b8;
        case 0x49c0bcu: goto label_49c0bc;
        case 0x49c0c0u: goto label_49c0c0;
        case 0x49c0c4u: goto label_49c0c4;
        case 0x49c0c8u: goto label_49c0c8;
        case 0x49c0ccu: goto label_49c0cc;
        case 0x49c0d0u: goto label_49c0d0;
        case 0x49c0d4u: goto label_49c0d4;
        case 0x49c0d8u: goto label_49c0d8;
        case 0x49c0dcu: goto label_49c0dc;
        case 0x49c0e0u: goto label_49c0e0;
        case 0x49c0e4u: goto label_49c0e4;
        case 0x49c0e8u: goto label_49c0e8;
        case 0x49c0ecu: goto label_49c0ec;
        case 0x49c0f0u: goto label_49c0f0;
        case 0x49c0f4u: goto label_49c0f4;
        case 0x49c0f8u: goto label_49c0f8;
        case 0x49c0fcu: goto label_49c0fc;
        case 0x49c100u: goto label_49c100;
        case 0x49c104u: goto label_49c104;
        case 0x49c108u: goto label_49c108;
        case 0x49c10cu: goto label_49c10c;
        case 0x49c110u: goto label_49c110;
        case 0x49c114u: goto label_49c114;
        case 0x49c118u: goto label_49c118;
        case 0x49c11cu: goto label_49c11c;
        case 0x49c120u: goto label_49c120;
        case 0x49c124u: goto label_49c124;
        case 0x49c128u: goto label_49c128;
        case 0x49c12cu: goto label_49c12c;
        case 0x49c130u: goto label_49c130;
        case 0x49c134u: goto label_49c134;
        case 0x49c138u: goto label_49c138;
        case 0x49c13cu: goto label_49c13c;
        case 0x49c140u: goto label_49c140;
        case 0x49c144u: goto label_49c144;
        case 0x49c148u: goto label_49c148;
        case 0x49c14cu: goto label_49c14c;
        case 0x49c150u: goto label_49c150;
        case 0x49c154u: goto label_49c154;
        case 0x49c158u: goto label_49c158;
        case 0x49c15cu: goto label_49c15c;
        case 0x49c160u: goto label_49c160;
        case 0x49c164u: goto label_49c164;
        case 0x49c168u: goto label_49c168;
        case 0x49c16cu: goto label_49c16c;
        case 0x49c170u: goto label_49c170;
        case 0x49c174u: goto label_49c174;
        case 0x49c178u: goto label_49c178;
        case 0x49c17cu: goto label_49c17c;
        case 0x49c180u: goto label_49c180;
        case 0x49c184u: goto label_49c184;
        case 0x49c188u: goto label_49c188;
        case 0x49c18cu: goto label_49c18c;
        case 0x49c190u: goto label_49c190;
        case 0x49c194u: goto label_49c194;
        case 0x49c198u: goto label_49c198;
        case 0x49c19cu: goto label_49c19c;
        case 0x49c1a0u: goto label_49c1a0;
        case 0x49c1a4u: goto label_49c1a4;
        case 0x49c1a8u: goto label_49c1a8;
        case 0x49c1acu: goto label_49c1ac;
        case 0x49c1b0u: goto label_49c1b0;
        case 0x49c1b4u: goto label_49c1b4;
        case 0x49c1b8u: goto label_49c1b8;
        case 0x49c1bcu: goto label_49c1bc;
        case 0x49c1c0u: goto label_49c1c0;
        case 0x49c1c4u: goto label_49c1c4;
        case 0x49c1c8u: goto label_49c1c8;
        case 0x49c1ccu: goto label_49c1cc;
        case 0x49c1d0u: goto label_49c1d0;
        case 0x49c1d4u: goto label_49c1d4;
        case 0x49c1d8u: goto label_49c1d8;
        case 0x49c1dcu: goto label_49c1dc;
        case 0x49c1e0u: goto label_49c1e0;
        case 0x49c1e4u: goto label_49c1e4;
        case 0x49c1e8u: goto label_49c1e8;
        case 0x49c1ecu: goto label_49c1ec;
        case 0x49c1f0u: goto label_49c1f0;
        case 0x49c1f4u: goto label_49c1f4;
        case 0x49c1f8u: goto label_49c1f8;
        case 0x49c1fcu: goto label_49c1fc;
        case 0x49c200u: goto label_49c200;
        case 0x49c204u: goto label_49c204;
        case 0x49c208u: goto label_49c208;
        case 0x49c20cu: goto label_49c20c;
        case 0x49c210u: goto label_49c210;
        case 0x49c214u: goto label_49c214;
        case 0x49c218u: goto label_49c218;
        case 0x49c21cu: goto label_49c21c;
        case 0x49c220u: goto label_49c220;
        case 0x49c224u: goto label_49c224;
        case 0x49c228u: goto label_49c228;
        case 0x49c22cu: goto label_49c22c;
        case 0x49c230u: goto label_49c230;
        case 0x49c234u: goto label_49c234;
        case 0x49c238u: goto label_49c238;
        case 0x49c23cu: goto label_49c23c;
        case 0x49c240u: goto label_49c240;
        case 0x49c244u: goto label_49c244;
        case 0x49c248u: goto label_49c248;
        case 0x49c24cu: goto label_49c24c;
        case 0x49c250u: goto label_49c250;
        case 0x49c254u: goto label_49c254;
        case 0x49c258u: goto label_49c258;
        case 0x49c25cu: goto label_49c25c;
        case 0x49c260u: goto label_49c260;
        case 0x49c264u: goto label_49c264;
        case 0x49c268u: goto label_49c268;
        case 0x49c26cu: goto label_49c26c;
        case 0x49c270u: goto label_49c270;
        case 0x49c274u: goto label_49c274;
        case 0x49c278u: goto label_49c278;
        case 0x49c27cu: goto label_49c27c;
        case 0x49c280u: goto label_49c280;
        case 0x49c284u: goto label_49c284;
        case 0x49c288u: goto label_49c288;
        case 0x49c28cu: goto label_49c28c;
        case 0x49c290u: goto label_49c290;
        case 0x49c294u: goto label_49c294;
        case 0x49c298u: goto label_49c298;
        case 0x49c29cu: goto label_49c29c;
        case 0x49c2a0u: goto label_49c2a0;
        case 0x49c2a4u: goto label_49c2a4;
        case 0x49c2a8u: goto label_49c2a8;
        case 0x49c2acu: goto label_49c2ac;
        case 0x49c2b0u: goto label_49c2b0;
        case 0x49c2b4u: goto label_49c2b4;
        case 0x49c2b8u: goto label_49c2b8;
        case 0x49c2bcu: goto label_49c2bc;
        case 0x49c2c0u: goto label_49c2c0;
        case 0x49c2c4u: goto label_49c2c4;
        case 0x49c2c8u: goto label_49c2c8;
        case 0x49c2ccu: goto label_49c2cc;
        case 0x49c2d0u: goto label_49c2d0;
        case 0x49c2d4u: goto label_49c2d4;
        case 0x49c2d8u: goto label_49c2d8;
        case 0x49c2dcu: goto label_49c2dc;
        case 0x49c2e0u: goto label_49c2e0;
        case 0x49c2e4u: goto label_49c2e4;
        case 0x49c2e8u: goto label_49c2e8;
        case 0x49c2ecu: goto label_49c2ec;
        case 0x49c2f0u: goto label_49c2f0;
        case 0x49c2f4u: goto label_49c2f4;
        case 0x49c2f8u: goto label_49c2f8;
        case 0x49c2fcu: goto label_49c2fc;
        case 0x49c300u: goto label_49c300;
        case 0x49c304u: goto label_49c304;
        case 0x49c308u: goto label_49c308;
        case 0x49c30cu: goto label_49c30c;
        case 0x49c310u: goto label_49c310;
        case 0x49c314u: goto label_49c314;
        case 0x49c318u: goto label_49c318;
        case 0x49c31cu: goto label_49c31c;
        case 0x49c320u: goto label_49c320;
        case 0x49c324u: goto label_49c324;
        case 0x49c328u: goto label_49c328;
        case 0x49c32cu: goto label_49c32c;
        case 0x49c330u: goto label_49c330;
        case 0x49c334u: goto label_49c334;
        case 0x49c338u: goto label_49c338;
        case 0x49c33cu: goto label_49c33c;
        case 0x49c340u: goto label_49c340;
        case 0x49c344u: goto label_49c344;
        case 0x49c348u: goto label_49c348;
        case 0x49c34cu: goto label_49c34c;
        case 0x49c350u: goto label_49c350;
        case 0x49c354u: goto label_49c354;
        case 0x49c358u: goto label_49c358;
        case 0x49c35cu: goto label_49c35c;
        case 0x49c360u: goto label_49c360;
        case 0x49c364u: goto label_49c364;
        case 0x49c368u: goto label_49c368;
        case 0x49c36cu: goto label_49c36c;
        case 0x49c370u: goto label_49c370;
        case 0x49c374u: goto label_49c374;
        case 0x49c378u: goto label_49c378;
        case 0x49c37cu: goto label_49c37c;
        case 0x49c380u: goto label_49c380;
        case 0x49c384u: goto label_49c384;
        case 0x49c388u: goto label_49c388;
        case 0x49c38cu: goto label_49c38c;
        case 0x49c390u: goto label_49c390;
        case 0x49c394u: goto label_49c394;
        case 0x49c398u: goto label_49c398;
        case 0x49c39cu: goto label_49c39c;
        case 0x49c3a0u: goto label_49c3a0;
        case 0x49c3a4u: goto label_49c3a4;
        case 0x49c3a8u: goto label_49c3a8;
        case 0x49c3acu: goto label_49c3ac;
        case 0x49c3b0u: goto label_49c3b0;
        case 0x49c3b4u: goto label_49c3b4;
        case 0x49c3b8u: goto label_49c3b8;
        case 0x49c3bcu: goto label_49c3bc;
        case 0x49c3c0u: goto label_49c3c0;
        case 0x49c3c4u: goto label_49c3c4;
        case 0x49c3c8u: goto label_49c3c8;
        case 0x49c3ccu: goto label_49c3cc;
        case 0x49c3d0u: goto label_49c3d0;
        case 0x49c3d4u: goto label_49c3d4;
        case 0x49c3d8u: goto label_49c3d8;
        case 0x49c3dcu: goto label_49c3dc;
        case 0x49c3e0u: goto label_49c3e0;
        case 0x49c3e4u: goto label_49c3e4;
        case 0x49c3e8u: goto label_49c3e8;
        case 0x49c3ecu: goto label_49c3ec;
        case 0x49c3f0u: goto label_49c3f0;
        case 0x49c3f4u: goto label_49c3f4;
        case 0x49c3f8u: goto label_49c3f8;
        case 0x49c3fcu: goto label_49c3fc;
        case 0x49c400u: goto label_49c400;
        case 0x49c404u: goto label_49c404;
        case 0x49c408u: goto label_49c408;
        case 0x49c40cu: goto label_49c40c;
        case 0x49c410u: goto label_49c410;
        case 0x49c414u: goto label_49c414;
        case 0x49c418u: goto label_49c418;
        case 0x49c41cu: goto label_49c41c;
        case 0x49c420u: goto label_49c420;
        case 0x49c424u: goto label_49c424;
        case 0x49c428u: goto label_49c428;
        case 0x49c42cu: goto label_49c42c;
        case 0x49c430u: goto label_49c430;
        case 0x49c434u: goto label_49c434;
        case 0x49c438u: goto label_49c438;
        case 0x49c43cu: goto label_49c43c;
        case 0x49c440u: goto label_49c440;
        case 0x49c444u: goto label_49c444;
        case 0x49c448u: goto label_49c448;
        case 0x49c44cu: goto label_49c44c;
        case 0x49c450u: goto label_49c450;
        case 0x49c454u: goto label_49c454;
        case 0x49c458u: goto label_49c458;
        case 0x49c45cu: goto label_49c45c;
        case 0x49c460u: goto label_49c460;
        case 0x49c464u: goto label_49c464;
        case 0x49c468u: goto label_49c468;
        case 0x49c46cu: goto label_49c46c;
        case 0x49c470u: goto label_49c470;
        case 0x49c474u: goto label_49c474;
        case 0x49c478u: goto label_49c478;
        case 0x49c47cu: goto label_49c47c;
        case 0x49c480u: goto label_49c480;
        case 0x49c484u: goto label_49c484;
        case 0x49c488u: goto label_49c488;
        case 0x49c48cu: goto label_49c48c;
        case 0x49c490u: goto label_49c490;
        case 0x49c494u: goto label_49c494;
        case 0x49c498u: goto label_49c498;
        case 0x49c49cu: goto label_49c49c;
        case 0x49c4a0u: goto label_49c4a0;
        case 0x49c4a4u: goto label_49c4a4;
        case 0x49c4a8u: goto label_49c4a8;
        case 0x49c4acu: goto label_49c4ac;
        case 0x49c4b0u: goto label_49c4b0;
        case 0x49c4b4u: goto label_49c4b4;
        case 0x49c4b8u: goto label_49c4b8;
        case 0x49c4bcu: goto label_49c4bc;
        case 0x49c4c0u: goto label_49c4c0;
        case 0x49c4c4u: goto label_49c4c4;
        case 0x49c4c8u: goto label_49c4c8;
        case 0x49c4ccu: goto label_49c4cc;
        case 0x49c4d0u: goto label_49c4d0;
        case 0x49c4d4u: goto label_49c4d4;
        case 0x49c4d8u: goto label_49c4d8;
        case 0x49c4dcu: goto label_49c4dc;
        case 0x49c4e0u: goto label_49c4e0;
        case 0x49c4e4u: goto label_49c4e4;
        case 0x49c4e8u: goto label_49c4e8;
        case 0x49c4ecu: goto label_49c4ec;
        case 0x49c4f0u: goto label_49c4f0;
        case 0x49c4f4u: goto label_49c4f4;
        case 0x49c4f8u: goto label_49c4f8;
        case 0x49c4fcu: goto label_49c4fc;
        case 0x49c500u: goto label_49c500;
        case 0x49c504u: goto label_49c504;
        case 0x49c508u: goto label_49c508;
        case 0x49c50cu: goto label_49c50c;
        case 0x49c510u: goto label_49c510;
        case 0x49c514u: goto label_49c514;
        case 0x49c518u: goto label_49c518;
        case 0x49c51cu: goto label_49c51c;
        case 0x49c520u: goto label_49c520;
        case 0x49c524u: goto label_49c524;
        case 0x49c528u: goto label_49c528;
        case 0x49c52cu: goto label_49c52c;
        case 0x49c530u: goto label_49c530;
        case 0x49c534u: goto label_49c534;
        case 0x49c538u: goto label_49c538;
        case 0x49c53cu: goto label_49c53c;
        case 0x49c540u: goto label_49c540;
        case 0x49c544u: goto label_49c544;
        case 0x49c548u: goto label_49c548;
        case 0x49c54cu: goto label_49c54c;
        case 0x49c550u: goto label_49c550;
        case 0x49c554u: goto label_49c554;
        case 0x49c558u: goto label_49c558;
        case 0x49c55cu: goto label_49c55c;
        case 0x49c560u: goto label_49c560;
        case 0x49c564u: goto label_49c564;
        case 0x49c568u: goto label_49c568;
        case 0x49c56cu: goto label_49c56c;
        case 0x49c570u: goto label_49c570;
        case 0x49c574u: goto label_49c574;
        case 0x49c578u: goto label_49c578;
        case 0x49c57cu: goto label_49c57c;
        case 0x49c580u: goto label_49c580;
        case 0x49c584u: goto label_49c584;
        case 0x49c588u: goto label_49c588;
        case 0x49c58cu: goto label_49c58c;
        case 0x49c590u: goto label_49c590;
        case 0x49c594u: goto label_49c594;
        case 0x49c598u: goto label_49c598;
        case 0x49c59cu: goto label_49c59c;
        case 0x49c5a0u: goto label_49c5a0;
        case 0x49c5a4u: goto label_49c5a4;
        case 0x49c5a8u: goto label_49c5a8;
        case 0x49c5acu: goto label_49c5ac;
        default: break;
    }

    ctx->pc = 0x49c0a0u;

label_49c0a0:
    // 0x49c0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49c0a4:
    // 0x49c0a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49c0a8:
    // 0x49c0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49c0ac:
    // 0x49c0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49c0b0:
    // 0x49c0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49c0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49c0b4:
    // 0x49c0b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_49c0b8:
    if (ctx->pc == 0x49C0B8u) {
        ctx->pc = 0x49C0B8u;
            // 0x49c0b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C0BCu;
        goto label_49c0bc;
    }
    ctx->pc = 0x49C0B4u;
    {
        const bool branch_taken_0x49c0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C0B4u;
            // 0x49c0b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c0b4) {
            ctx->pc = 0x49C1E8u;
            goto label_49c1e8;
        }
    }
    ctx->pc = 0x49C0BCu;
label_49c0bc:
    // 0x49c0bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49c0c0:
    // 0x49c0c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49c0c4:
    // 0x49c0c4: 0x2463fde0  addiu       $v1, $v1, -0x220
    ctx->pc = 0x49c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966752));
label_49c0c8:
    // 0x49c0c8: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
label_49c0cc:
    // 0x49c0cc: 0x2442fe18  addiu       $v0, $v0, -0x1E8
    ctx->pc = 0x49c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966808));
label_49c0d0:
    // 0x49c0d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_49c0d4:
    // 0x49c0d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x49c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_49c0d8:
    // 0x49c0d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x49c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_49c0dc:
    // 0x49c0dc: 0xc0407c0  jal         func_101F00
label_49c0e0:
    if (ctx->pc == 0x49C0E0u) {
        ctx->pc = 0x49C0E0u;
            // 0x49c0e0: 0x24a5c200  addiu       $a1, $a1, -0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951424));
        ctx->pc = 0x49C0E4u;
        goto label_49c0e4;
    }
    ctx->pc = 0x49C0DCu;
    SET_GPR_U32(ctx, 31, 0x49C0E4u);
    ctx->pc = 0x49C0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C0DCu;
            // 0x49c0e0: 0x24a5c200  addiu       $a1, $a1, -0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C0E4u; }
        if (ctx->pc != 0x49C0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C0E4u; }
        if (ctx->pc != 0x49C0E4u) { return; }
    }
    ctx->pc = 0x49C0E4u;
label_49c0e4:
    // 0x49c0e4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x49c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_49c0e8:
    // 0x49c0e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_49c0ec:
    if (ctx->pc == 0x49C0ECu) {
        ctx->pc = 0x49C0ECu;
            // 0x49c0ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x49C0F0u;
        goto label_49c0f0;
    }
    ctx->pc = 0x49C0E8u;
    {
        const bool branch_taken_0x49c0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c0e8) {
            ctx->pc = 0x49C0ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C0E8u;
            // 0x49c0ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C0FCu;
            goto label_49c0fc;
        }
    }
    ctx->pc = 0x49C0F0u;
label_49c0f0:
    // 0x49c0f0: 0xc07507c  jal         func_1D41F0
label_49c0f4:
    if (ctx->pc == 0x49C0F4u) {
        ctx->pc = 0x49C0F4u;
            // 0x49c0f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x49C0F8u;
        goto label_49c0f8;
    }
    ctx->pc = 0x49C0F0u;
    SET_GPR_U32(ctx, 31, 0x49C0F8u);
    ctx->pc = 0x49C0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C0F0u;
            // 0x49c0f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C0F8u; }
        if (ctx->pc != 0x49C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C0F8u; }
        if (ctx->pc != 0x49C0F8u) { return; }
    }
    ctx->pc = 0x49C0F8u;
label_49c0f8:
    // 0x49c0f8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x49c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_49c0fc:
    // 0x49c0fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_49c100:
    if (ctx->pc == 0x49C100u) {
        ctx->pc = 0x49C100u;
            // 0x49c100: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x49C104u;
        goto label_49c104;
    }
    ctx->pc = 0x49C0FCu;
    {
        const bool branch_taken_0x49c0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c0fc) {
            ctx->pc = 0x49C100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C0FCu;
            // 0x49c100: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C12Cu;
            goto label_49c12c;
        }
    }
    ctx->pc = 0x49C104u;
label_49c104:
    // 0x49c104: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49c108:
    if (ctx->pc == 0x49C108u) {
        ctx->pc = 0x49C10Cu;
        goto label_49c10c;
    }
    ctx->pc = 0x49C104u;
    {
        const bool branch_taken_0x49c104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c104) {
            ctx->pc = 0x49C128u;
            goto label_49c128;
        }
    }
    ctx->pc = 0x49C10Cu;
label_49c10c:
    // 0x49c10c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49c110:
    if (ctx->pc == 0x49C110u) {
        ctx->pc = 0x49C114u;
        goto label_49c114;
    }
    ctx->pc = 0x49C10Cu;
    {
        const bool branch_taken_0x49c10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c10c) {
            ctx->pc = 0x49C128u;
            goto label_49c128;
        }
    }
    ctx->pc = 0x49C114u;
label_49c114:
    // 0x49c114: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x49c114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_49c118:
    // 0x49c118: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49c11c:
    if (ctx->pc == 0x49C11Cu) {
        ctx->pc = 0x49C120u;
        goto label_49c120;
    }
    ctx->pc = 0x49C118u;
    {
        const bool branch_taken_0x49c118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c118) {
            ctx->pc = 0x49C128u;
            goto label_49c128;
        }
    }
    ctx->pc = 0x49C120u;
label_49c120:
    // 0x49c120: 0xc0400a8  jal         func_1002A0
label_49c124:
    if (ctx->pc == 0x49C124u) {
        ctx->pc = 0x49C128u;
        goto label_49c128;
    }
    ctx->pc = 0x49C120u;
    SET_GPR_U32(ctx, 31, 0x49C128u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C128u; }
        if (ctx->pc != 0x49C128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C128u; }
        if (ctx->pc != 0x49C128u) { return; }
    }
    ctx->pc = 0x49C128u;
label_49c128:
    // 0x49c128: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x49c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_49c12c:
    // 0x49c12c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_49c130:
    if (ctx->pc == 0x49C130u) {
        ctx->pc = 0x49C130u;
            // 0x49c130: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x49C134u;
        goto label_49c134;
    }
    ctx->pc = 0x49C12Cu;
    {
        const bool branch_taken_0x49c12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c12c) {
            ctx->pc = 0x49C130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C12Cu;
            // 0x49c130: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C15Cu;
            goto label_49c15c;
        }
    }
    ctx->pc = 0x49C134u;
label_49c134:
    // 0x49c134: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49c138:
    if (ctx->pc == 0x49C138u) {
        ctx->pc = 0x49C13Cu;
        goto label_49c13c;
    }
    ctx->pc = 0x49C134u;
    {
        const bool branch_taken_0x49c134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c134) {
            ctx->pc = 0x49C158u;
            goto label_49c158;
        }
    }
    ctx->pc = 0x49C13Cu;
label_49c13c:
    // 0x49c13c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49c140:
    if (ctx->pc == 0x49C140u) {
        ctx->pc = 0x49C144u;
        goto label_49c144;
    }
    ctx->pc = 0x49C13Cu;
    {
        const bool branch_taken_0x49c13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c13c) {
            ctx->pc = 0x49C158u;
            goto label_49c158;
        }
    }
    ctx->pc = 0x49C144u;
label_49c144:
    // 0x49c144: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x49c144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_49c148:
    // 0x49c148: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49c14c:
    if (ctx->pc == 0x49C14Cu) {
        ctx->pc = 0x49C150u;
        goto label_49c150;
    }
    ctx->pc = 0x49C148u;
    {
        const bool branch_taken_0x49c148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c148) {
            ctx->pc = 0x49C158u;
            goto label_49c158;
        }
    }
    ctx->pc = 0x49C150u;
label_49c150:
    // 0x49c150: 0xc0400a8  jal         func_1002A0
label_49c154:
    if (ctx->pc == 0x49C154u) {
        ctx->pc = 0x49C158u;
        goto label_49c158;
    }
    ctx->pc = 0x49C150u;
    SET_GPR_U32(ctx, 31, 0x49C158u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C158u; }
        if (ctx->pc != 0x49C158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C158u; }
        if (ctx->pc != 0x49C158u) { return; }
    }
    ctx->pc = 0x49C158u;
label_49c158:
    // 0x49c158: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x49c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_49c15c:
    // 0x49c15c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49c160:
    if (ctx->pc == 0x49C160u) {
        ctx->pc = 0x49C164u;
        goto label_49c164;
    }
    ctx->pc = 0x49C15Cu;
    {
        const bool branch_taken_0x49c15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c15c) {
            ctx->pc = 0x49C178u;
            goto label_49c178;
        }
    }
    ctx->pc = 0x49C164u;
label_49c164:
    // 0x49c164: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49c164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49c168:
    // 0x49c168: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49c168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49c16c:
    // 0x49c16c: 0x2463fdd0  addiu       $v1, $v1, -0x230
    ctx->pc = 0x49c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966736));
label_49c170:
    // 0x49c170: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x49c170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_49c174:
    // 0x49c174: 0xac407c10  sw          $zero, 0x7C10($v0)
    ctx->pc = 0x49c174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31760), GPR_U32(ctx, 0));
label_49c178:
    // 0x49c178: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_49c17c:
    if (ctx->pc == 0x49C17Cu) {
        ctx->pc = 0x49C17Cu;
            // 0x49c17c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x49C180u;
        goto label_49c180;
    }
    ctx->pc = 0x49C178u;
    {
        const bool branch_taken_0x49c178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c178) {
            ctx->pc = 0x49C17Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C178u;
            // 0x49c17c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C1D4u;
            goto label_49c1d4;
        }
    }
    ctx->pc = 0x49C180u;
label_49c180:
    // 0x49c180: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49c184:
    // 0x49c184: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x49c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_49c188:
    // 0x49c188: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49c188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49c18c:
    // 0x49c18c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x49c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_49c190:
    // 0x49c190: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49c194:
    if (ctx->pc == 0x49C194u) {
        ctx->pc = 0x49C194u;
            // 0x49c194: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x49C198u;
        goto label_49c198;
    }
    ctx->pc = 0x49C190u;
    {
        const bool branch_taken_0x49c190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c190) {
            ctx->pc = 0x49C194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C190u;
            // 0x49c194: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C1ACu;
            goto label_49c1ac;
        }
    }
    ctx->pc = 0x49C198u;
label_49c198:
    // 0x49c198: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49c198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c19c:
    // 0x49c19c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49c19cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49c1a0:
    // 0x49c1a0: 0x320f809  jalr        $t9
label_49c1a4:
    if (ctx->pc == 0x49C1A4u) {
        ctx->pc = 0x49C1A4u;
            // 0x49c1a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49C1A8u;
        goto label_49c1a8;
    }
    ctx->pc = 0x49C1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49C1A8u);
        ctx->pc = 0x49C1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C1A0u;
            // 0x49c1a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49C1A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49C1A8u; }
            if (ctx->pc != 0x49C1A8u) { return; }
        }
        }
    }
    ctx->pc = 0x49C1A8u;
label_49c1a8:
    // 0x49c1a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x49c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_49c1ac:
    // 0x49c1ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49c1b0:
    if (ctx->pc == 0x49C1B0u) {
        ctx->pc = 0x49C1B0u;
            // 0x49c1b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C1B4u;
        goto label_49c1b4;
    }
    ctx->pc = 0x49C1ACu;
    {
        const bool branch_taken_0x49c1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c1ac) {
            ctx->pc = 0x49C1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C1ACu;
            // 0x49c1b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C1C8u;
            goto label_49c1c8;
        }
    }
    ctx->pc = 0x49C1B4u;
label_49c1b4:
    // 0x49c1b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49c1b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c1b8:
    // 0x49c1b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49c1b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49c1bc:
    // 0x49c1bc: 0x320f809  jalr        $t9
label_49c1c0:
    if (ctx->pc == 0x49C1C0u) {
        ctx->pc = 0x49C1C0u;
            // 0x49c1c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49C1C4u;
        goto label_49c1c4;
    }
    ctx->pc = 0x49C1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49C1C4u);
        ctx->pc = 0x49C1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C1BCu;
            // 0x49c1c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49C1C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49C1C4u; }
            if (ctx->pc != 0x49C1C4u) { return; }
        }
        }
    }
    ctx->pc = 0x49C1C4u;
label_49c1c4:
    // 0x49c1c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49c1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49c1c8:
    // 0x49c1c8: 0xc075bf8  jal         func_1D6FE0
label_49c1cc:
    if (ctx->pc == 0x49C1CCu) {
        ctx->pc = 0x49C1CCu;
            // 0x49c1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C1D0u;
        goto label_49c1d0;
    }
    ctx->pc = 0x49C1C8u;
    SET_GPR_U32(ctx, 31, 0x49C1D0u);
    ctx->pc = 0x49C1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C1C8u;
            // 0x49c1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C1D0u; }
        if (ctx->pc != 0x49C1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C1D0u; }
        if (ctx->pc != 0x49C1D0u) { return; }
    }
    ctx->pc = 0x49C1D0u;
label_49c1d0:
    // 0x49c1d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49c1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49c1d4:
    // 0x49c1d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49c1d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49c1d8:
    // 0x49c1d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49c1dc:
    if (ctx->pc == 0x49C1DCu) {
        ctx->pc = 0x49C1DCu;
            // 0x49c1dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C1E0u;
        goto label_49c1e0;
    }
    ctx->pc = 0x49C1D8u;
    {
        const bool branch_taken_0x49c1d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49c1d8) {
            ctx->pc = 0x49C1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C1D8u;
            // 0x49c1dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C1ECu;
            goto label_49c1ec;
        }
    }
    ctx->pc = 0x49C1E0u;
label_49c1e0:
    // 0x49c1e0: 0xc0400a8  jal         func_1002A0
label_49c1e4:
    if (ctx->pc == 0x49C1E4u) {
        ctx->pc = 0x49C1E4u;
            // 0x49c1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C1E8u;
        goto label_49c1e8;
    }
    ctx->pc = 0x49C1E0u;
    SET_GPR_U32(ctx, 31, 0x49C1E8u);
    ctx->pc = 0x49C1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C1E0u;
            // 0x49c1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C1E8u; }
        if (ctx->pc != 0x49C1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C1E8u; }
        if (ctx->pc != 0x49C1E8u) { return; }
    }
    ctx->pc = 0x49C1E8u;
label_49c1e8:
    // 0x49c1e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49c1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49c1ec:
    // 0x49c1ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49c1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49c1f0:
    // 0x49c1f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49c1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49c1f4:
    // 0x49c1f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49c1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49c1f8:
    // 0x49c1f8: 0x3e00008  jr          $ra
label_49c1fc:
    if (ctx->pc == 0x49C1FCu) {
        ctx->pc = 0x49C1FCu;
            // 0x49c1fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49C200u;
        goto label_49c200;
    }
    ctx->pc = 0x49C1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C1F8u;
            // 0x49c1fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C200u;
label_49c200:
    // 0x49c200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49c204:
    // 0x49c204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49c204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49c208:
    // 0x49c208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49c208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49c20c:
    // 0x49c20c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49c210:
    // 0x49c210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49c210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49c214:
    // 0x49c214: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_49c218:
    if (ctx->pc == 0x49C218u) {
        ctx->pc = 0x49C218u;
            // 0x49c218: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C21Cu;
        goto label_49c21c;
    }
    ctx->pc = 0x49C214u;
    {
        const bool branch_taken_0x49c214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C214u;
            // 0x49c218: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c214) {
            ctx->pc = 0x49C2DCu;
            goto label_49c2dc;
        }
    }
    ctx->pc = 0x49C21Cu;
label_49c21c:
    // 0x49c21c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49c220:
    // 0x49c220: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49c220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49c224:
    // 0x49c224: 0x2463fd30  addiu       $v1, $v1, -0x2D0
    ctx->pc = 0x49c224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966576));
label_49c228:
    // 0x49c228: 0x2442fd70  addiu       $v0, $v0, -0x290
    ctx->pc = 0x49c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966640));
label_49c22c:
    // 0x49c22c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49c230:
    // 0x49c230: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x49c230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_49c234:
    // 0x49c234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49c234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c238:
    // 0x49c238: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x49c238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_49c23c:
    // 0x49c23c: 0x320f809  jalr        $t9
label_49c240:
    if (ctx->pc == 0x49C240u) {
        ctx->pc = 0x49C244u;
        goto label_49c244;
    }
    ctx->pc = 0x49C23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49C244u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49C244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49C244u; }
            if (ctx->pc != 0x49C244u) { return; }
        }
        }
    }
    ctx->pc = 0x49C244u;
label_49c244:
    // 0x49c244: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_49c248:
    if (ctx->pc == 0x49C248u) {
        ctx->pc = 0x49C248u;
            // 0x49c248: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x49C24Cu;
        goto label_49c24c;
    }
    ctx->pc = 0x49C244u;
    {
        const bool branch_taken_0x49c244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c244) {
            ctx->pc = 0x49C248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C244u;
            // 0x49c248: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C2C8u;
            goto label_49c2c8;
        }
    }
    ctx->pc = 0x49C24Cu;
label_49c24c:
    // 0x49c24c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49c250:
    // 0x49c250: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49c250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49c254:
    // 0x49c254: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x49c254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_49c258:
    // 0x49c258: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x49c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_49c25c:
    // 0x49c25c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49c260:
    // 0x49c260: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x49c260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_49c264:
    // 0x49c264: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x49c264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_49c268:
    // 0x49c268: 0xc0aecc4  jal         func_2BB310
label_49c26c:
    if (ctx->pc == 0x49C26Cu) {
        ctx->pc = 0x49C26Cu;
            // 0x49c26c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49C270u;
        goto label_49c270;
    }
    ctx->pc = 0x49C268u;
    SET_GPR_U32(ctx, 31, 0x49C270u);
    ctx->pc = 0x49C26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C268u;
            // 0x49c26c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C270u; }
        if (ctx->pc != 0x49C270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C270u; }
        if (ctx->pc != 0x49C270u) { return; }
    }
    ctx->pc = 0x49C270u;
label_49c270:
    // 0x49c270: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x49c270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_49c274:
    // 0x49c274: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x49c274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_49c278:
    // 0x49c278: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49c27c:
    if (ctx->pc == 0x49C27Cu) {
        ctx->pc = 0x49C27Cu;
            // 0x49c27c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x49C280u;
        goto label_49c280;
    }
    ctx->pc = 0x49C278u;
    {
        const bool branch_taken_0x49c278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c278) {
            ctx->pc = 0x49C27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C278u;
            // 0x49c27c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C294u;
            goto label_49c294;
        }
    }
    ctx->pc = 0x49C280u;
label_49c280:
    // 0x49c280: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x49c280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_49c284:
    // 0x49c284: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49c284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49c288:
    // 0x49c288: 0x320f809  jalr        $t9
label_49c28c:
    if (ctx->pc == 0x49C28Cu) {
        ctx->pc = 0x49C28Cu;
            // 0x49c28c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49C290u;
        goto label_49c290;
    }
    ctx->pc = 0x49C288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49C290u);
        ctx->pc = 0x49C28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C288u;
            // 0x49c28c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49C290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49C290u; }
            if (ctx->pc != 0x49C290u) { return; }
        }
        }
    }
    ctx->pc = 0x49C290u;
label_49c290:
    // 0x49c290: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x49c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_49c294:
    // 0x49c294: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x49c294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49c298:
    // 0x49c298: 0xc0aec9c  jal         func_2BB270
label_49c29c:
    if (ctx->pc == 0x49C29Cu) {
        ctx->pc = 0x49C29Cu;
            // 0x49c29c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x49C2A0u;
        goto label_49c2a0;
    }
    ctx->pc = 0x49C298u;
    SET_GPR_U32(ctx, 31, 0x49C2A0u);
    ctx->pc = 0x49C29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C298u;
            // 0x49c29c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2A0u; }
        if (ctx->pc != 0x49C2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2A0u; }
        if (ctx->pc != 0x49C2A0u) { return; }
    }
    ctx->pc = 0x49C2A0u;
label_49c2a0:
    // 0x49c2a0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x49c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_49c2a4:
    // 0x49c2a4: 0xc0aec88  jal         func_2BB220
label_49c2a8:
    if (ctx->pc == 0x49C2A8u) {
        ctx->pc = 0x49C2A8u;
            // 0x49c2a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x49C2ACu;
        goto label_49c2ac;
    }
    ctx->pc = 0x49C2A4u;
    SET_GPR_U32(ctx, 31, 0x49C2ACu);
    ctx->pc = 0x49C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C2A4u;
            // 0x49c2a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2ACu; }
        if (ctx->pc != 0x49C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2ACu; }
        if (ctx->pc != 0x49C2ACu) { return; }
    }
    ctx->pc = 0x49C2ACu;
label_49c2ac:
    // 0x49c2ac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x49c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_49c2b0:
    // 0x49c2b0: 0xc0aec0c  jal         func_2BB030
label_49c2b4:
    if (ctx->pc == 0x49C2B4u) {
        ctx->pc = 0x49C2B4u;
            // 0x49c2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C2B8u;
        goto label_49c2b8;
    }
    ctx->pc = 0x49C2B0u;
    SET_GPR_U32(ctx, 31, 0x49C2B8u);
    ctx->pc = 0x49C2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C2B0u;
            // 0x49c2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2B8u; }
        if (ctx->pc != 0x49C2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2B8u; }
        if (ctx->pc != 0x49C2B8u) { return; }
    }
    ctx->pc = 0x49C2B8u;
label_49c2b8:
    // 0x49c2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49c2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49c2bc:
    // 0x49c2bc: 0xc0aeaa8  jal         func_2BAAA0
label_49c2c0:
    if (ctx->pc == 0x49C2C0u) {
        ctx->pc = 0x49C2C0u;
            // 0x49c2c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C2C4u;
        goto label_49c2c4;
    }
    ctx->pc = 0x49C2BCu;
    SET_GPR_U32(ctx, 31, 0x49C2C4u);
    ctx->pc = 0x49C2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C2BCu;
            // 0x49c2c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2C4u; }
        if (ctx->pc != 0x49C2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2C4u; }
        if (ctx->pc != 0x49C2C4u) { return; }
    }
    ctx->pc = 0x49C2C4u;
label_49c2c4:
    // 0x49c2c4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_49c2c8:
    // 0x49c2c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49c2c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49c2cc:
    // 0x49c2cc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49c2d0:
    if (ctx->pc == 0x49C2D0u) {
        ctx->pc = 0x49C2D0u;
            // 0x49c2d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C2D4u;
        goto label_49c2d4;
    }
    ctx->pc = 0x49C2CCu;
    {
        const bool branch_taken_0x49c2cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49c2cc) {
            ctx->pc = 0x49C2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C2CCu;
            // 0x49c2d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C2E0u;
            goto label_49c2e0;
        }
    }
    ctx->pc = 0x49C2D4u;
label_49c2d4:
    // 0x49c2d4: 0xc0400a8  jal         func_1002A0
label_49c2d8:
    if (ctx->pc == 0x49C2D8u) {
        ctx->pc = 0x49C2D8u;
            // 0x49c2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C2DCu;
        goto label_49c2dc;
    }
    ctx->pc = 0x49C2D4u;
    SET_GPR_U32(ctx, 31, 0x49C2DCu);
    ctx->pc = 0x49C2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C2D4u;
            // 0x49c2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2DCu; }
        if (ctx->pc != 0x49C2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C2DCu; }
        if (ctx->pc != 0x49C2DCu) { return; }
    }
    ctx->pc = 0x49C2DCu;
label_49c2dc:
    // 0x49c2dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49c2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49c2e0:
    // 0x49c2e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49c2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49c2e4:
    // 0x49c2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49c2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49c2e8:
    // 0x49c2e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49c2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49c2ec:
    // 0x49c2ec: 0x3e00008  jr          $ra
label_49c2f0:
    if (ctx->pc == 0x49C2F0u) {
        ctx->pc = 0x49C2F0u;
            // 0x49c2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49C2F4u;
        goto label_49c2f4;
    }
    ctx->pc = 0x49C2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C2ECu;
            // 0x49c2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C2F4u;
label_49c2f4:
    // 0x49c2f4: 0x0  nop
    ctx->pc = 0x49c2f4u;
    // NOP
label_49c2f8:
    // 0x49c2f8: 0x0  nop
    ctx->pc = 0x49c2f8u;
    // NOP
label_49c2fc:
    // 0x49c2fc: 0x0  nop
    ctx->pc = 0x49c2fcu;
    // NOP
label_49c300:
    // 0x49c300: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x49c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_49c304:
    // 0x49c304: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49c304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49c308:
    // 0x49c308: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x49c308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_49c30c:
    // 0x49c30c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x49c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_49c310:
    // 0x49c310: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x49c310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_49c314:
    // 0x49c314: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x49c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_49c318:
    // 0x49c318: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x49c318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_49c31c:
    // 0x49c31c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x49c31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_49c320:
    // 0x49c320: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x49c320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_49c324:
    // 0x49c324: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x49c324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_49c328:
    // 0x49c328: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49c328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49c32c:
    // 0x49c32c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49c32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_49c330:
    // 0x49c330: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x49c330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_49c334:
    // 0x49c334: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x49c334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_49c338:
    // 0x49c338: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49c338u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49c33c:
    // 0x49c33c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49c340:
    // 0x49c340: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_49c344:
    if (ctx->pc == 0x49C344u) {
        ctx->pc = 0x49C344u;
            // 0x49c344: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C348u;
        goto label_49c348;
    }
    ctx->pc = 0x49C340u;
    {
        const bool branch_taken_0x49c340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x49C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C340u;
            // 0x49c344: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c340) {
            ctx->pc = 0x49C384u;
            goto label_49c384;
        }
    }
    ctx->pc = 0x49C348u;
label_49c348:
    // 0x49c348: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49c348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49c34c:
    // 0x49c34c: 0x50a30089  beql        $a1, $v1, . + 4 + (0x89 << 2)
label_49c350:
    if (ctx->pc == 0x49C350u) {
        ctx->pc = 0x49C350u;
            // 0x49c350: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x49C354u;
        goto label_49c354;
    }
    ctx->pc = 0x49C34Cu;
    {
        const bool branch_taken_0x49c34c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49c34c) {
            ctx->pc = 0x49C350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C34Cu;
            // 0x49c350: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C574u;
            goto label_49c574;
        }
    }
    ctx->pc = 0x49C354u;
label_49c354:
    // 0x49c354: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49c354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49c358:
    // 0x49c358: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_49c35c:
    if (ctx->pc == 0x49C35Cu) {
        ctx->pc = 0x49C35Cu;
            // 0x49c35c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49C360u;
        goto label_49c360;
    }
    ctx->pc = 0x49C358u;
    {
        const bool branch_taken_0x49c358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49c358) {
            ctx->pc = 0x49C35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C358u;
            // 0x49c35c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C368u;
            goto label_49c368;
        }
    }
    ctx->pc = 0x49C360u;
label_49c360:
    // 0x49c360: 0x10000083  b           . + 4 + (0x83 << 2)
label_49c364:
    if (ctx->pc == 0x49C364u) {
        ctx->pc = 0x49C368u;
        goto label_49c368;
    }
    ctx->pc = 0x49C360u;
    {
        const bool branch_taken_0x49c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c360) {
            ctx->pc = 0x49C570u;
            goto label_49c570;
        }
    }
    ctx->pc = 0x49C368u;
label_49c368:
    // 0x49c368: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x49c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_49c36c:
    // 0x49c36c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x49c36cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_49c370:
    // 0x49c370: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x49c370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_49c374:
    // 0x49c374: 0x320f809  jalr        $t9
label_49c378:
    if (ctx->pc == 0x49C378u) {
        ctx->pc = 0x49C378u;
            // 0x49c378: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x49C37Cu;
        goto label_49c37c;
    }
    ctx->pc = 0x49C374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49C37Cu);
        ctx->pc = 0x49C378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C374u;
            // 0x49c378: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49C37Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49C37Cu; }
            if (ctx->pc != 0x49C37Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49C37Cu;
label_49c37c:
    // 0x49c37c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_49c380:
    if (ctx->pc == 0x49C380u) {
        ctx->pc = 0x49C384u;
        goto label_49c384;
    }
    ctx->pc = 0x49C37Cu;
    {
        const bool branch_taken_0x49c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c37c) {
            ctx->pc = 0x49C570u;
            goto label_49c570;
        }
    }
    ctx->pc = 0x49C384u;
label_49c384:
    // 0x49c384: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x49c384u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_49c388:
    // 0x49c388: 0x12e00079  beqz        $s7, . + 4 + (0x79 << 2)
label_49c38c:
    if (ctx->pc == 0x49C38Cu) {
        ctx->pc = 0x49C390u;
        goto label_49c390;
    }
    ctx->pc = 0x49C388u;
    {
        const bool branch_taken_0x49c388 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c388) {
            ctx->pc = 0x49C570u;
            goto label_49c570;
        }
    }
    ctx->pc = 0x49C390u;
label_49c390:
    // 0x49c390: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x49c390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_49c394:
    // 0x49c394: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x49c394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_49c398:
    // 0x49c398: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x49c398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_49c39c:
    // 0x49c39c: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x49c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_49c3a0:
    // 0x49c3a0: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x49c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_49c3a4:
    // 0x49c3a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49c3a8:
    // 0x49c3a8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x49c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49c3ac:
    // 0x49c3ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49c3b0:
    // 0x49c3b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x49c3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_49c3b4:
    // 0x49c3b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x49c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_49c3b8:
    // 0x49c3b8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c3bc:
    // 0x49c3bc: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x49c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_49c3c0:
    // 0x49c3c0: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x49c3c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_49c3c4:
    // 0x49c3c4: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x49c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_49c3c8:
    // 0x49c3c8: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x49c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_49c3cc:
    // 0x49c3cc: 0xc04e738  jal         func_139CE0
label_49c3d0:
    if (ctx->pc == 0x49C3D0u) {
        ctx->pc = 0x49C3D0u;
            // 0x49c3d0: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->pc = 0x49C3D4u;
        goto label_49c3d4;
    }
    ctx->pc = 0x49C3CCu;
    SET_GPR_U32(ctx, 31, 0x49C3D4u);
    ctx->pc = 0x49C3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C3CCu;
            // 0x49c3d0: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C3D4u; }
        if (ctx->pc != 0x49C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C3D4u; }
        if (ctx->pc != 0x49C3D4u) { return; }
    }
    ctx->pc = 0x49C3D4u;
label_49c3d4:
    // 0x49c3d4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x49c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_49c3d8:
    // 0x49c3d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x49c3d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49c3dc:
    // 0x49c3dc: 0xc4540b28  lwc1        $f20, 0xB28($v0)
    ctx->pc = 0x49c3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_49c3e0:
    // 0x49c3e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49c3e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49c3e4:
    // 0x49c3e4: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x49c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_49c3e8:
    // 0x49c3e8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x49c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_49c3ec:
    // 0x49c3ec: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x49c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_49c3f0:
    // 0x49c3f0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x49c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_49c3f4:
    // 0x49c3f4: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x49c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_49c3f8:
    // 0x49c3f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x49c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_49c3fc:
    // 0x49c3fc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x49c3fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49c400:
    // 0x49c400: 0xc0d639c  jal         func_358E70
label_49c404:
    if (ctx->pc == 0x49C404u) {
        ctx->pc = 0x49C404u;
            // 0x49c404: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x49C408u;
        goto label_49c408;
    }
    ctx->pc = 0x49C400u;
    SET_GPR_U32(ctx, 31, 0x49C408u);
    ctx->pc = 0x49C404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C400u;
            // 0x49c404: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C408u; }
        if (ctx->pc != 0x49C408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C408u; }
        if (ctx->pc != 0x49C408u) { return; }
    }
    ctx->pc = 0x49C408u;
label_49c408:
    // 0x49c408: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_49c40c:
    if (ctx->pc == 0x49C40Cu) {
        ctx->pc = 0x49C410u;
        goto label_49c410;
    }
    ctx->pc = 0x49C408u;
    {
        const bool branch_taken_0x49c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c408) {
            ctx->pc = 0x49C508u;
            goto label_49c508;
        }
    }
    ctx->pc = 0x49C410u;
label_49c410:
    // 0x49c410: 0xc0d1c14  jal         func_347050
label_49c414:
    if (ctx->pc == 0x49C414u) {
        ctx->pc = 0x49C414u;
            // 0x49c414: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C418u;
        goto label_49c418;
    }
    ctx->pc = 0x49C410u;
    SET_GPR_U32(ctx, 31, 0x49C418u);
    ctx->pc = 0x49C414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C410u;
            // 0x49c414: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C418u; }
        if (ctx->pc != 0x49C418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C418u; }
        if (ctx->pc != 0x49C418u) { return; }
    }
    ctx->pc = 0x49C418u;
label_49c418:
    // 0x49c418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49c418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49c41c:
    // 0x49c41c: 0xc04f278  jal         func_13C9E0
label_49c420:
    if (ctx->pc == 0x49C420u) {
        ctx->pc = 0x49C420u;
            // 0x49c420: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x49C424u;
        goto label_49c424;
    }
    ctx->pc = 0x49C41Cu;
    SET_GPR_U32(ctx, 31, 0x49C424u);
    ctx->pc = 0x49C420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C41Cu;
            // 0x49c420: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C424u; }
        if (ctx->pc != 0x49C424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C424u; }
        if (ctx->pc != 0x49C424u) { return; }
    }
    ctx->pc = 0x49C424u;
label_49c424:
    // 0x49c424: 0xc68c0170  lwc1        $f12, 0x170($s4)
    ctx->pc = 0x49c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49c428:
    // 0x49c428: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x49c428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_49c42c:
    // 0x49c42c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49c42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49c430:
    // 0x49c430: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x49c430u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_49c434:
    // 0x49c434: 0xc04ce50  jal         func_133940
label_49c438:
    if (ctx->pc == 0x49C438u) {
        ctx->pc = 0x49C438u;
            // 0x49c438: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x49C43Cu;
        goto label_49c43c;
    }
    ctx->pc = 0x49C434u;
    SET_GPR_U32(ctx, 31, 0x49C43Cu);
    ctx->pc = 0x49C438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C434u;
            // 0x49c438: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C43Cu; }
        if (ctx->pc != 0x49C43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C43Cu; }
        if (ctx->pc != 0x49C43Cu) { return; }
    }
    ctx->pc = 0x49C43Cu;
label_49c43c:
    // 0x49c43c: 0xc0d1c10  jal         func_347040
label_49c440:
    if (ctx->pc == 0x49C440u) {
        ctx->pc = 0x49C440u;
            // 0x49c440: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C444u;
        goto label_49c444;
    }
    ctx->pc = 0x49C43Cu;
    SET_GPR_U32(ctx, 31, 0x49C444u);
    ctx->pc = 0x49C440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C43Cu;
            // 0x49c440: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C444u; }
        if (ctx->pc != 0x49C444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C444u; }
        if (ctx->pc != 0x49C444u) { return; }
    }
    ctx->pc = 0x49C444u;
label_49c444:
    // 0x49c444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49c448:
    // 0x49c448: 0xc04ce80  jal         func_133A00
label_49c44c:
    if (ctx->pc == 0x49C44Cu) {
        ctx->pc = 0x49C44Cu;
            // 0x49c44c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x49C450u;
        goto label_49c450;
    }
    ctx->pc = 0x49C448u;
    SET_GPR_U32(ctx, 31, 0x49C450u);
    ctx->pc = 0x49C44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C448u;
            // 0x49c44c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C450u; }
        if (ctx->pc != 0x49C450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C450u; }
        if (ctx->pc != 0x49C450u) { return; }
    }
    ctx->pc = 0x49C450u;
label_49c450:
    // 0x49c450: 0xc0d4108  jal         func_350420
label_49c454:
    if (ctx->pc == 0x49C454u) {
        ctx->pc = 0x49C458u;
        goto label_49c458;
    }
    ctx->pc = 0x49C450u;
    SET_GPR_U32(ctx, 31, 0x49C458u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C458u; }
        if (ctx->pc != 0x49C458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C458u; }
        if (ctx->pc != 0x49C458u) { return; }
    }
    ctx->pc = 0x49C458u;
label_49c458:
    // 0x49c458: 0xc0b36b4  jal         func_2CDAD0
label_49c45c:
    if (ctx->pc == 0x49C45Cu) {
        ctx->pc = 0x49C45Cu;
            // 0x49c45c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C460u;
        goto label_49c460;
    }
    ctx->pc = 0x49C458u;
    SET_GPR_U32(ctx, 31, 0x49C460u);
    ctx->pc = 0x49C45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C458u;
            // 0x49c45c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C460u; }
        if (ctx->pc != 0x49C460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C460u; }
        if (ctx->pc != 0x49C460u) { return; }
    }
    ctx->pc = 0x49C460u;
label_49c460:
    // 0x49c460: 0xc0b9c64  jal         func_2E7190
label_49c464:
    if (ctx->pc == 0x49C464u) {
        ctx->pc = 0x49C464u;
            // 0x49c464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C468u;
        goto label_49c468;
    }
    ctx->pc = 0x49C460u;
    SET_GPR_U32(ctx, 31, 0x49C468u);
    ctx->pc = 0x49C464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C460u;
            // 0x49c464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C468u; }
        if (ctx->pc != 0x49C468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C468u; }
        if (ctx->pc != 0x49C468u) { return; }
    }
    ctx->pc = 0x49C468u;
label_49c468:
    // 0x49c468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49c468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49c46c:
    // 0x49c46c: 0xc0d4104  jal         func_350410
label_49c470:
    if (ctx->pc == 0x49C470u) {
        ctx->pc = 0x49C470u;
            // 0x49c470: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C474u;
        goto label_49c474;
    }
    ctx->pc = 0x49C46Cu;
    SET_GPR_U32(ctx, 31, 0x49C474u);
    ctx->pc = 0x49C470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C46Cu;
            // 0x49c470: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C474u; }
        if (ctx->pc != 0x49C474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C474u; }
        if (ctx->pc != 0x49C474u) { return; }
    }
    ctx->pc = 0x49C474u;
label_49c474:
    // 0x49c474: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x49c474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49c478:
    // 0x49c478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49c478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49c47c:
    // 0x49c47c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49c47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49c480:
    // 0x49c480: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x49c480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_49c484:
    // 0x49c484: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x49c484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49c488:
    // 0x49c488: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x49c488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49c48c:
    // 0x49c48c: 0xc0d40ac  jal         func_3502B0
label_49c490:
    if (ctx->pc == 0x49C490u) {
        ctx->pc = 0x49C490u;
            // 0x49c490: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x49C494u;
        goto label_49c494;
    }
    ctx->pc = 0x49C48Cu;
    SET_GPR_U32(ctx, 31, 0x49C494u);
    ctx->pc = 0x49C490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C48Cu;
            // 0x49c490: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C494u; }
        if (ctx->pc != 0x49C494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C494u; }
        if (ctx->pc != 0x49C494u) { return; }
    }
    ctx->pc = 0x49C494u;
label_49c494:
    // 0x49c494: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x49c494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_49c498:
    // 0x49c498: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_49c49c:
    if (ctx->pc == 0x49C49Cu) {
        ctx->pc = 0x49C49Cu;
            // 0x49c49c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x49C4A0u;
        goto label_49c4a0;
    }
    ctx->pc = 0x49C498u;
    {
        const bool branch_taken_0x49c498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C498u;
            // 0x49c49c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c498) {
            ctx->pc = 0x49C520u;
            goto label_49c520;
        }
    }
    ctx->pc = 0x49C4A0u;
label_49c4a0:
    // 0x49c4a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x49c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49c4a4:
    // 0x49c4a4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x49c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_49c4a8:
    // 0x49c4a8: 0xc12716c  jal         func_49C5B0
label_49c4ac:
    if (ctx->pc == 0x49C4ACu) {
        ctx->pc = 0x49C4ACu;
            // 0x49c4ac: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x49C4B0u;
        goto label_49c4b0;
    }
    ctx->pc = 0x49C4A8u;
    SET_GPR_U32(ctx, 31, 0x49C4B0u);
    ctx->pc = 0x49C4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C4A8u;
            // 0x49c4ac: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C5B0u;
    if (runtime->hasFunction(0x49C5B0u)) {
        auto targetFn = runtime->lookupFunction(0x49C5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C4B0u; }
        if (ctx->pc != 0x49C4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049C5B0_0x49c5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C4B0u; }
        if (ctx->pc != 0x49C4B0u) { return; }
    }
    ctx->pc = 0x49C4B0u;
label_49c4b0:
    // 0x49c4b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x49c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_49c4b4:
    // 0x49c4b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x49c4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_49c4b8:
    // 0x49c4b8: 0xc04cd60  jal         func_133580
label_49c4bc:
    if (ctx->pc == 0x49C4BCu) {
        ctx->pc = 0x49C4BCu;
            // 0x49c4bc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x49C4C0u;
        goto label_49c4c0;
    }
    ctx->pc = 0x49C4B8u;
    SET_GPR_U32(ctx, 31, 0x49C4C0u);
    ctx->pc = 0x49C4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C4B8u;
            // 0x49c4bc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C4C0u; }
        if (ctx->pc != 0x49C4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C4C0u; }
        if (ctx->pc != 0x49C4C0u) { return; }
    }
    ctx->pc = 0x49C4C0u;
label_49c4c0:
    // 0x49c4c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x49c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49c4c4:
    // 0x49c4c4: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x49c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_49c4c8:
    // 0x49c4c8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x49c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_49c4cc:
    // 0x49c4cc: 0xc04e4a4  jal         func_139290
label_49c4d0:
    if (ctx->pc == 0x49C4D0u) {
        ctx->pc = 0x49C4D0u;
            // 0x49c4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C4D4u;
        goto label_49c4d4;
    }
    ctx->pc = 0x49C4CCu;
    SET_GPR_U32(ctx, 31, 0x49C4D4u);
    ctx->pc = 0x49C4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C4CCu;
            // 0x49c4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C4D4u; }
        if (ctx->pc != 0x49C4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C4D4u; }
        if (ctx->pc != 0x49C4D4u) { return; }
    }
    ctx->pc = 0x49C4D4u;
label_49c4d4:
    // 0x49c4d4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x49c4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_49c4d8:
    // 0x49c4d8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x49c4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_49c4dc:
    // 0x49c4dc: 0x320f809  jalr        $t9
label_49c4e0:
    if (ctx->pc == 0x49C4E0u) {
        ctx->pc = 0x49C4E0u;
            // 0x49c4e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C4E4u;
        goto label_49c4e4;
    }
    ctx->pc = 0x49C4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49C4E4u);
        ctx->pc = 0x49C4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C4DCu;
            // 0x49c4e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49C4E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49C4E4u; }
            if (ctx->pc != 0x49C4E4u) { return; }
        }
        }
    }
    ctx->pc = 0x49C4E4u;
label_49c4e4:
    // 0x49c4e4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x49c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_49c4e8:
    // 0x49c4e8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x49c4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_49c4ec:
    // 0x49c4ec: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x49c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_49c4f0:
    // 0x49c4f0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x49c4f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49c4f4:
    // 0x49c4f4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x49c4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49c4f8:
    // 0x49c4f8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x49c4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_49c4fc:
    // 0x49c4fc: 0xc04cfcc  jal         func_133F30
label_49c500:
    if (ctx->pc == 0x49C500u) {
        ctx->pc = 0x49C500u;
            // 0x49c500: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x49C504u;
        goto label_49c504;
    }
    ctx->pc = 0x49C4FCu;
    SET_GPR_U32(ctx, 31, 0x49C504u);
    ctx->pc = 0x49C500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C4FCu;
            // 0x49c500: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C504u; }
        if (ctx->pc != 0x49C504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C504u; }
        if (ctx->pc != 0x49C504u) { return; }
    }
    ctx->pc = 0x49C504u;
label_49c504:
    // 0x49c504: 0x0  nop
    ctx->pc = 0x49c504u;
    // NOP
label_49c508:
    // 0x49c508: 0x8e84009c  lw          $a0, 0x9C($s4)
    ctx->pc = 0x49c508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_49c50c:
    // 0x49c50c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x49c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49c510:
    // 0x49c510: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x49c510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_49c514:
    // 0x49c514: 0xc0e31f8  jal         func_38C7E0
label_49c518:
    if (ctx->pc == 0x49C518u) {
        ctx->pc = 0x49C518u;
            // 0x49c518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C51Cu;
        goto label_49c51c;
    }
    ctx->pc = 0x49C514u;
    SET_GPR_U32(ctx, 31, 0x49C51Cu);
    ctx->pc = 0x49C518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C514u;
            // 0x49c518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C51Cu; }
        if (ctx->pc != 0x49C51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C51Cu; }
        if (ctx->pc != 0x49C51Cu) { return; }
    }
    ctx->pc = 0x49C51Cu;
label_49c51c:
    // 0x49c51c: 0x0  nop
    ctx->pc = 0x49c51cu;
    // NOP
label_49c520:
    // 0x49c520: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x49c520u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_49c524:
    // 0x49c524: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x49c524u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_49c528:
    // 0x49c528: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
label_49c52c:
    if (ctx->pc == 0x49C52Cu) {
        ctx->pc = 0x49C52Cu;
            // 0x49c52c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x49C530u;
        goto label_49c530;
    }
    ctx->pc = 0x49C528u;
    {
        const bool branch_taken_0x49c528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C528u;
            // 0x49c52c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c528) {
            ctx->pc = 0x49C3E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49c3e4;
        }
    }
    ctx->pc = 0x49C530u;
label_49c530:
    // 0x49c530: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49c530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49c534:
    // 0x49c534: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x49c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_49c538:
    // 0x49c538: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_49c53c:
    if (ctx->pc == 0x49C53Cu) {
        ctx->pc = 0x49C540u;
        goto label_49c540;
    }
    ctx->pc = 0x49C538u;
    {
        const bool branch_taken_0x49c538 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x49c538) {
            ctx->pc = 0x49C570u;
            goto label_49c570;
        }
    }
    ctx->pc = 0x49C540u;
label_49c540:
    // 0x49c540: 0xc04e738  jal         func_139CE0
label_49c544:
    if (ctx->pc == 0x49C544u) {
        ctx->pc = 0x49C544u;
            // 0x49c544: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x49C548u;
        goto label_49c548;
    }
    ctx->pc = 0x49C540u;
    SET_GPR_U32(ctx, 31, 0x49C548u);
    ctx->pc = 0x49C544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C540u;
            // 0x49c544: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C548u; }
        if (ctx->pc != 0x49C548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C548u; }
        if (ctx->pc != 0x49C548u) { return; }
    }
    ctx->pc = 0x49C548u;
label_49c548:
    // 0x49c548: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49c548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49c54c:
    // 0x49c54c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x49c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49c550:
    // 0x49c550: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x49c550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_49c554:
    // 0x49c554: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x49c554u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_49c558:
    // 0x49c558: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49c558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49c55c:
    // 0x49c55c: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x49c55cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_49c560:
    // 0x49c560: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49c560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49c564:
    // 0x49c564: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x49c564u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_49c568:
    // 0x49c568: 0xc055990  jal         func_156640
label_49c56c:
    if (ctx->pc == 0x49C56Cu) {
        ctx->pc = 0x49C56Cu;
            // 0x49c56c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C570u;
        goto label_49c570;
    }
    ctx->pc = 0x49C568u;
    SET_GPR_U32(ctx, 31, 0x49C570u);
    ctx->pc = 0x49C56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C568u;
            // 0x49c56c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C570u; }
        if (ctx->pc != 0x49C570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C570u; }
        if (ctx->pc != 0x49C570u) { return; }
    }
    ctx->pc = 0x49C570u;
label_49c570:
    // 0x49c570: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x49c570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_49c574:
    // 0x49c574: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x49c574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_49c578:
    // 0x49c578: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x49c578u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_49c57c:
    // 0x49c57c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x49c57cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_49c580:
    // 0x49c580: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x49c580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49c584:
    // 0x49c584: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x49c584u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49c588:
    // 0x49c588: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x49c588u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49c58c:
    // 0x49c58c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x49c58cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49c590:
    // 0x49c590: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x49c590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49c594:
    // 0x49c594: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49c594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49c598:
    // 0x49c598: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49c598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49c59c:
    // 0x49c59c: 0x3e00008  jr          $ra
label_49c5a0:
    if (ctx->pc == 0x49C5A0u) {
        ctx->pc = 0x49C5A0u;
            // 0x49c5a0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x49C5A4u;
        goto label_49c5a4;
    }
    ctx->pc = 0x49C59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C59Cu;
            // 0x49c5a0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C5A4u;
label_49c5a4:
    // 0x49c5a4: 0x0  nop
    ctx->pc = 0x49c5a4u;
    // NOP
label_49c5a8:
    // 0x49c5a8: 0x0  nop
    ctx->pc = 0x49c5a8u;
    // NOP
label_49c5ac:
    // 0x49c5ac: 0x0  nop
    ctx->pc = 0x49c5acu;
    // NOP
}
