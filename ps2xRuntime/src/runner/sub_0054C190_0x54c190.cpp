#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054C190
// Address: 0x54c190 - 0x54c620
void sub_0054C190_0x54c190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054C190_0x54c190");
#endif

    switch (ctx->pc) {
        case 0x54c190u: goto label_54c190;
        case 0x54c194u: goto label_54c194;
        case 0x54c198u: goto label_54c198;
        case 0x54c19cu: goto label_54c19c;
        case 0x54c1a0u: goto label_54c1a0;
        case 0x54c1a4u: goto label_54c1a4;
        case 0x54c1a8u: goto label_54c1a8;
        case 0x54c1acu: goto label_54c1ac;
        case 0x54c1b0u: goto label_54c1b0;
        case 0x54c1b4u: goto label_54c1b4;
        case 0x54c1b8u: goto label_54c1b8;
        case 0x54c1bcu: goto label_54c1bc;
        case 0x54c1c0u: goto label_54c1c0;
        case 0x54c1c4u: goto label_54c1c4;
        case 0x54c1c8u: goto label_54c1c8;
        case 0x54c1ccu: goto label_54c1cc;
        case 0x54c1d0u: goto label_54c1d0;
        case 0x54c1d4u: goto label_54c1d4;
        case 0x54c1d8u: goto label_54c1d8;
        case 0x54c1dcu: goto label_54c1dc;
        case 0x54c1e0u: goto label_54c1e0;
        case 0x54c1e4u: goto label_54c1e4;
        case 0x54c1e8u: goto label_54c1e8;
        case 0x54c1ecu: goto label_54c1ec;
        case 0x54c1f0u: goto label_54c1f0;
        case 0x54c1f4u: goto label_54c1f4;
        case 0x54c1f8u: goto label_54c1f8;
        case 0x54c1fcu: goto label_54c1fc;
        case 0x54c200u: goto label_54c200;
        case 0x54c204u: goto label_54c204;
        case 0x54c208u: goto label_54c208;
        case 0x54c20cu: goto label_54c20c;
        case 0x54c210u: goto label_54c210;
        case 0x54c214u: goto label_54c214;
        case 0x54c218u: goto label_54c218;
        case 0x54c21cu: goto label_54c21c;
        case 0x54c220u: goto label_54c220;
        case 0x54c224u: goto label_54c224;
        case 0x54c228u: goto label_54c228;
        case 0x54c22cu: goto label_54c22c;
        case 0x54c230u: goto label_54c230;
        case 0x54c234u: goto label_54c234;
        case 0x54c238u: goto label_54c238;
        case 0x54c23cu: goto label_54c23c;
        case 0x54c240u: goto label_54c240;
        case 0x54c244u: goto label_54c244;
        case 0x54c248u: goto label_54c248;
        case 0x54c24cu: goto label_54c24c;
        case 0x54c250u: goto label_54c250;
        case 0x54c254u: goto label_54c254;
        case 0x54c258u: goto label_54c258;
        case 0x54c25cu: goto label_54c25c;
        case 0x54c260u: goto label_54c260;
        case 0x54c264u: goto label_54c264;
        case 0x54c268u: goto label_54c268;
        case 0x54c26cu: goto label_54c26c;
        case 0x54c270u: goto label_54c270;
        case 0x54c274u: goto label_54c274;
        case 0x54c278u: goto label_54c278;
        case 0x54c27cu: goto label_54c27c;
        case 0x54c280u: goto label_54c280;
        case 0x54c284u: goto label_54c284;
        case 0x54c288u: goto label_54c288;
        case 0x54c28cu: goto label_54c28c;
        case 0x54c290u: goto label_54c290;
        case 0x54c294u: goto label_54c294;
        case 0x54c298u: goto label_54c298;
        case 0x54c29cu: goto label_54c29c;
        case 0x54c2a0u: goto label_54c2a0;
        case 0x54c2a4u: goto label_54c2a4;
        case 0x54c2a8u: goto label_54c2a8;
        case 0x54c2acu: goto label_54c2ac;
        case 0x54c2b0u: goto label_54c2b0;
        case 0x54c2b4u: goto label_54c2b4;
        case 0x54c2b8u: goto label_54c2b8;
        case 0x54c2bcu: goto label_54c2bc;
        case 0x54c2c0u: goto label_54c2c0;
        case 0x54c2c4u: goto label_54c2c4;
        case 0x54c2c8u: goto label_54c2c8;
        case 0x54c2ccu: goto label_54c2cc;
        case 0x54c2d0u: goto label_54c2d0;
        case 0x54c2d4u: goto label_54c2d4;
        case 0x54c2d8u: goto label_54c2d8;
        case 0x54c2dcu: goto label_54c2dc;
        case 0x54c2e0u: goto label_54c2e0;
        case 0x54c2e4u: goto label_54c2e4;
        case 0x54c2e8u: goto label_54c2e8;
        case 0x54c2ecu: goto label_54c2ec;
        case 0x54c2f0u: goto label_54c2f0;
        case 0x54c2f4u: goto label_54c2f4;
        case 0x54c2f8u: goto label_54c2f8;
        case 0x54c2fcu: goto label_54c2fc;
        case 0x54c300u: goto label_54c300;
        case 0x54c304u: goto label_54c304;
        case 0x54c308u: goto label_54c308;
        case 0x54c30cu: goto label_54c30c;
        case 0x54c310u: goto label_54c310;
        case 0x54c314u: goto label_54c314;
        case 0x54c318u: goto label_54c318;
        case 0x54c31cu: goto label_54c31c;
        case 0x54c320u: goto label_54c320;
        case 0x54c324u: goto label_54c324;
        case 0x54c328u: goto label_54c328;
        case 0x54c32cu: goto label_54c32c;
        case 0x54c330u: goto label_54c330;
        case 0x54c334u: goto label_54c334;
        case 0x54c338u: goto label_54c338;
        case 0x54c33cu: goto label_54c33c;
        case 0x54c340u: goto label_54c340;
        case 0x54c344u: goto label_54c344;
        case 0x54c348u: goto label_54c348;
        case 0x54c34cu: goto label_54c34c;
        case 0x54c350u: goto label_54c350;
        case 0x54c354u: goto label_54c354;
        case 0x54c358u: goto label_54c358;
        case 0x54c35cu: goto label_54c35c;
        case 0x54c360u: goto label_54c360;
        case 0x54c364u: goto label_54c364;
        case 0x54c368u: goto label_54c368;
        case 0x54c36cu: goto label_54c36c;
        case 0x54c370u: goto label_54c370;
        case 0x54c374u: goto label_54c374;
        case 0x54c378u: goto label_54c378;
        case 0x54c37cu: goto label_54c37c;
        case 0x54c380u: goto label_54c380;
        case 0x54c384u: goto label_54c384;
        case 0x54c388u: goto label_54c388;
        case 0x54c38cu: goto label_54c38c;
        case 0x54c390u: goto label_54c390;
        case 0x54c394u: goto label_54c394;
        case 0x54c398u: goto label_54c398;
        case 0x54c39cu: goto label_54c39c;
        case 0x54c3a0u: goto label_54c3a0;
        case 0x54c3a4u: goto label_54c3a4;
        case 0x54c3a8u: goto label_54c3a8;
        case 0x54c3acu: goto label_54c3ac;
        case 0x54c3b0u: goto label_54c3b0;
        case 0x54c3b4u: goto label_54c3b4;
        case 0x54c3b8u: goto label_54c3b8;
        case 0x54c3bcu: goto label_54c3bc;
        case 0x54c3c0u: goto label_54c3c0;
        case 0x54c3c4u: goto label_54c3c4;
        case 0x54c3c8u: goto label_54c3c8;
        case 0x54c3ccu: goto label_54c3cc;
        case 0x54c3d0u: goto label_54c3d0;
        case 0x54c3d4u: goto label_54c3d4;
        case 0x54c3d8u: goto label_54c3d8;
        case 0x54c3dcu: goto label_54c3dc;
        case 0x54c3e0u: goto label_54c3e0;
        case 0x54c3e4u: goto label_54c3e4;
        case 0x54c3e8u: goto label_54c3e8;
        case 0x54c3ecu: goto label_54c3ec;
        case 0x54c3f0u: goto label_54c3f0;
        case 0x54c3f4u: goto label_54c3f4;
        case 0x54c3f8u: goto label_54c3f8;
        case 0x54c3fcu: goto label_54c3fc;
        case 0x54c400u: goto label_54c400;
        case 0x54c404u: goto label_54c404;
        case 0x54c408u: goto label_54c408;
        case 0x54c40cu: goto label_54c40c;
        case 0x54c410u: goto label_54c410;
        case 0x54c414u: goto label_54c414;
        case 0x54c418u: goto label_54c418;
        case 0x54c41cu: goto label_54c41c;
        case 0x54c420u: goto label_54c420;
        case 0x54c424u: goto label_54c424;
        case 0x54c428u: goto label_54c428;
        case 0x54c42cu: goto label_54c42c;
        case 0x54c430u: goto label_54c430;
        case 0x54c434u: goto label_54c434;
        case 0x54c438u: goto label_54c438;
        case 0x54c43cu: goto label_54c43c;
        case 0x54c440u: goto label_54c440;
        case 0x54c444u: goto label_54c444;
        case 0x54c448u: goto label_54c448;
        case 0x54c44cu: goto label_54c44c;
        case 0x54c450u: goto label_54c450;
        case 0x54c454u: goto label_54c454;
        case 0x54c458u: goto label_54c458;
        case 0x54c45cu: goto label_54c45c;
        case 0x54c460u: goto label_54c460;
        case 0x54c464u: goto label_54c464;
        case 0x54c468u: goto label_54c468;
        case 0x54c46cu: goto label_54c46c;
        case 0x54c470u: goto label_54c470;
        case 0x54c474u: goto label_54c474;
        case 0x54c478u: goto label_54c478;
        case 0x54c47cu: goto label_54c47c;
        case 0x54c480u: goto label_54c480;
        case 0x54c484u: goto label_54c484;
        case 0x54c488u: goto label_54c488;
        case 0x54c48cu: goto label_54c48c;
        case 0x54c490u: goto label_54c490;
        case 0x54c494u: goto label_54c494;
        case 0x54c498u: goto label_54c498;
        case 0x54c49cu: goto label_54c49c;
        case 0x54c4a0u: goto label_54c4a0;
        case 0x54c4a4u: goto label_54c4a4;
        case 0x54c4a8u: goto label_54c4a8;
        case 0x54c4acu: goto label_54c4ac;
        case 0x54c4b0u: goto label_54c4b0;
        case 0x54c4b4u: goto label_54c4b4;
        case 0x54c4b8u: goto label_54c4b8;
        case 0x54c4bcu: goto label_54c4bc;
        case 0x54c4c0u: goto label_54c4c0;
        case 0x54c4c4u: goto label_54c4c4;
        case 0x54c4c8u: goto label_54c4c8;
        case 0x54c4ccu: goto label_54c4cc;
        case 0x54c4d0u: goto label_54c4d0;
        case 0x54c4d4u: goto label_54c4d4;
        case 0x54c4d8u: goto label_54c4d8;
        case 0x54c4dcu: goto label_54c4dc;
        case 0x54c4e0u: goto label_54c4e0;
        case 0x54c4e4u: goto label_54c4e4;
        case 0x54c4e8u: goto label_54c4e8;
        case 0x54c4ecu: goto label_54c4ec;
        case 0x54c4f0u: goto label_54c4f0;
        case 0x54c4f4u: goto label_54c4f4;
        case 0x54c4f8u: goto label_54c4f8;
        case 0x54c4fcu: goto label_54c4fc;
        case 0x54c500u: goto label_54c500;
        case 0x54c504u: goto label_54c504;
        case 0x54c508u: goto label_54c508;
        case 0x54c50cu: goto label_54c50c;
        case 0x54c510u: goto label_54c510;
        case 0x54c514u: goto label_54c514;
        case 0x54c518u: goto label_54c518;
        case 0x54c51cu: goto label_54c51c;
        case 0x54c520u: goto label_54c520;
        case 0x54c524u: goto label_54c524;
        case 0x54c528u: goto label_54c528;
        case 0x54c52cu: goto label_54c52c;
        case 0x54c530u: goto label_54c530;
        case 0x54c534u: goto label_54c534;
        case 0x54c538u: goto label_54c538;
        case 0x54c53cu: goto label_54c53c;
        case 0x54c540u: goto label_54c540;
        case 0x54c544u: goto label_54c544;
        case 0x54c548u: goto label_54c548;
        case 0x54c54cu: goto label_54c54c;
        case 0x54c550u: goto label_54c550;
        case 0x54c554u: goto label_54c554;
        case 0x54c558u: goto label_54c558;
        case 0x54c55cu: goto label_54c55c;
        case 0x54c560u: goto label_54c560;
        case 0x54c564u: goto label_54c564;
        case 0x54c568u: goto label_54c568;
        case 0x54c56cu: goto label_54c56c;
        case 0x54c570u: goto label_54c570;
        case 0x54c574u: goto label_54c574;
        case 0x54c578u: goto label_54c578;
        case 0x54c57cu: goto label_54c57c;
        case 0x54c580u: goto label_54c580;
        case 0x54c584u: goto label_54c584;
        case 0x54c588u: goto label_54c588;
        case 0x54c58cu: goto label_54c58c;
        case 0x54c590u: goto label_54c590;
        case 0x54c594u: goto label_54c594;
        case 0x54c598u: goto label_54c598;
        case 0x54c59cu: goto label_54c59c;
        case 0x54c5a0u: goto label_54c5a0;
        case 0x54c5a4u: goto label_54c5a4;
        case 0x54c5a8u: goto label_54c5a8;
        case 0x54c5acu: goto label_54c5ac;
        case 0x54c5b0u: goto label_54c5b0;
        case 0x54c5b4u: goto label_54c5b4;
        case 0x54c5b8u: goto label_54c5b8;
        case 0x54c5bcu: goto label_54c5bc;
        case 0x54c5c0u: goto label_54c5c0;
        case 0x54c5c4u: goto label_54c5c4;
        case 0x54c5c8u: goto label_54c5c8;
        case 0x54c5ccu: goto label_54c5cc;
        case 0x54c5d0u: goto label_54c5d0;
        case 0x54c5d4u: goto label_54c5d4;
        case 0x54c5d8u: goto label_54c5d8;
        case 0x54c5dcu: goto label_54c5dc;
        case 0x54c5e0u: goto label_54c5e0;
        case 0x54c5e4u: goto label_54c5e4;
        case 0x54c5e8u: goto label_54c5e8;
        case 0x54c5ecu: goto label_54c5ec;
        case 0x54c5f0u: goto label_54c5f0;
        case 0x54c5f4u: goto label_54c5f4;
        case 0x54c5f8u: goto label_54c5f8;
        case 0x54c5fcu: goto label_54c5fc;
        case 0x54c600u: goto label_54c600;
        case 0x54c604u: goto label_54c604;
        case 0x54c608u: goto label_54c608;
        case 0x54c60cu: goto label_54c60c;
        case 0x54c610u: goto label_54c610;
        case 0x54c614u: goto label_54c614;
        case 0x54c618u: goto label_54c618;
        case 0x54c61cu: goto label_54c61c;
        default: break;
    }

    ctx->pc = 0x54c190u;

label_54c190:
    // 0x54c190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x54c190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_54c194:
    // 0x54c194: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x54c194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_54c198:
    // 0x54c198: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x54c198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_54c19c:
    // 0x54c19c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x54c19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_54c1a0:
    // 0x54c1a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x54c1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_54c1a4:
    // 0x54c1a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x54c1a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54c1a8:
    // 0x54c1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x54c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_54c1ac:
    // 0x54c1ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x54c1acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54c1b0:
    // 0x54c1b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_54c1b4:
    // 0x54c1b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x54c1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_54c1b8:
    // 0x54c1b8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x54c1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_54c1bc:
    // 0x54c1bc: 0x3445d57a  ori         $a1, $v0, 0xD57A
    ctx->pc = 0x54c1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54650);
label_54c1c0:
    // 0x54c1c0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x54c1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_54c1c4:
    // 0x54c1c4: 0xc10ca68  jal         func_4329A0
label_54c1c8:
    if (ctx->pc == 0x54C1C8u) {
        ctx->pc = 0x54C1C8u;
            // 0x54c1c8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x54C1CCu;
        goto label_54c1cc;
    }
    ctx->pc = 0x54C1C4u;
    SET_GPR_U32(ctx, 31, 0x54C1CCu);
    ctx->pc = 0x54C1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C1C4u;
            // 0x54c1c8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C1CCu; }
        if (ctx->pc != 0x54C1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C1CCu; }
        if (ctx->pc != 0x54C1CCu) { return; }
    }
    ctx->pc = 0x54C1CCu;
label_54c1cc:
    // 0x54c1cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x54c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_54c1d0:
    // 0x54c1d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x54c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_54c1d4:
    // 0x54c1d4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x54c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_54c1d8:
    // 0x54c1d8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x54c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_54c1dc:
    // 0x54c1dc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x54c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_54c1e0:
    // 0x54c1e0: 0x244279a0  addiu       $v0, $v0, 0x79A0
    ctx->pc = 0x54c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31136));
label_54c1e4:
    // 0x54c1e4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x54c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_54c1e8:
    // 0x54c1e8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54c1ec:
    // 0x54c1ec: 0xa2710054  sb          $s1, 0x54($s3)
    ctx->pc = 0x54c1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 84), (uint8_t)GPR_U32(ctx, 17));
label_54c1f0:
    // 0x54c1f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54c1f4:
    // 0x54c1f4: 0xa2700055  sb          $s0, 0x55($s3)
    ctx->pc = 0x54c1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 16));
label_54c1f8:
    // 0x54c1f8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x54c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_54c1fc:
    // 0x54c1fc: 0xa2600056  sb          $zero, 0x56($s3)
    ctx->pc = 0x54c1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 0));
label_54c200:
    // 0x54c200: 0x8467e460  lh          $a3, -0x1BA0($v1)
    ctx->pc = 0x54c200u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960224)));
label_54c204:
    // 0x54c204: 0xa2600057  sb          $zero, 0x57($s3)
    ctx->pc = 0x54c204u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 0));
label_54c208:
    // 0x54c208: 0xa2600058  sb          $zero, 0x58($s3)
    ctx->pc = 0x54c208u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 0));
label_54c20c:
    // 0x54c20c: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x54c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_54c210:
    // 0x54c210: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54c210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54c214:
    // 0x54c214: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x54c214u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
label_54c218:
    // 0x54c218: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x54c218u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_54c21c:
    // 0x54c21c: 0xae720068  sw          $s2, 0x68($s3)
    ctx->pc = 0x54c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 18));
label_54c220:
    // 0x54c220: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x54c220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_54c224:
    // 0x54c224: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x54c224u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_54c228:
    // 0x54c228: 0x8484e464  lh          $a0, -0x1B9C($a0)
    ctx->pc = 0x54c228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294960228)));
label_54c22c:
    // 0x54c22c: 0x8463e466  lh          $v1, -0x1B9A($v1)
    ctx->pc = 0x54c22cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960230)));
label_54c230:
    // 0x54c230: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x54c230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_54c234:
    // 0x54c234: 0x8446e462  lh          $a2, -0x1B9E($v0)
    ctx->pc = 0x54c234u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960226)));
label_54c238:
    // 0x54c238: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x54c238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_54c23c:
    // 0x54c23c: 0x8ca489f0  lw          $a0, -0x7610($a1)
    ctx->pc = 0x54c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937072)));
label_54c240:
    // 0x54c240: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x54c240u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_54c244:
    // 0x54c244: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x54c244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54c248:
    // 0x54c248: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x54c248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_54c24c:
    // 0x54c24c: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x54c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_54c250:
    // 0x54c250: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x54c250u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_54c254:
    // 0x54c254: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x54c254u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_54c258:
    // 0x54c258: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x54c258u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_54c25c:
    // 0x54c25c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x54c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_54c260:
    // 0x54c260: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x54c260u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_54c264:
    // 0x54c264: 0xa6640060  sh          $a0, 0x60($s3)
    ctx->pc = 0x54c264u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 4));
label_54c268:
    // 0x54c268: 0xa6630062  sh          $v1, 0x62($s3)
    ctx->pc = 0x54c268u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 98), (uint16_t)GPR_U32(ctx, 3));
label_54c26c:
    // 0x54c26c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x54c26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_54c270:
    // 0x54c270: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x54c270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54c274:
    // 0x54c274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x54c274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54c278:
    // 0x54c278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x54c278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54c27c:
    // 0x54c27c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x54c27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_54c280:
    // 0x54c280: 0x3e00008  jr          $ra
label_54c284:
    if (ctx->pc == 0x54C284u) {
        ctx->pc = 0x54C284u;
            // 0x54c284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x54C288u;
        goto label_54c288;
    }
    ctx->pc = 0x54C280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54C284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C280u;
            // 0x54c284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54C288u;
label_54c288:
    // 0x54c288: 0x0  nop
    ctx->pc = 0x54c288u;
    // NOP
label_54c28c:
    // 0x54c28c: 0x0  nop
    ctx->pc = 0x54c28cu;
    // NOP
label_54c290:
    // 0x54c290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x54c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_54c294:
    // 0x54c294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x54c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_54c298:
    // 0x54c298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x54c298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_54c29c:
    // 0x54c29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54c29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_54c2a0:
    // 0x54c2a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x54c2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54c2a4:
    // 0x54c2a4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_54c2a8:
    if (ctx->pc == 0x54C2A8u) {
        ctx->pc = 0x54C2A8u;
            // 0x54c2a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C2ACu;
        goto label_54c2ac;
    }
    ctx->pc = 0x54C2A4u;
    {
        const bool branch_taken_0x54c2a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C2A4u;
            // 0x54c2a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c2a4) {
            ctx->pc = 0x54C32Cu;
            goto label_54c32c;
        }
    }
    ctx->pc = 0x54C2ACu;
label_54c2ac:
    // 0x54c2ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x54c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_54c2b0:
    // 0x54c2b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54c2b4:
    // 0x54c2b4: 0x246379d0  addiu       $v1, $v1, 0x79D0
    ctx->pc = 0x54c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31184));
label_54c2b8:
    // 0x54c2b8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x54c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_54c2bc:
    // 0x54c2bc: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x54c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_54c2c0:
    // 0x54c2c0: 0xc6200140  lwc1        $f0, 0x140($s1)
    ctx->pc = 0x54c2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54c2c4:
    // 0x54c2c4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x54c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_54c2c8:
    // 0x54c2c8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x54c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_54c2cc:
    // 0x54c2cc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x54c2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_54c2d0:
    // 0x54c2d0: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x54c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_54c2d4:
    // 0x54c2d4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x54c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_54c2d8:
    // 0x54c2d8: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x54c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_54c2dc:
    // 0x54c2dc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_54c2e0:
    if (ctx->pc == 0x54C2E0u) {
        ctx->pc = 0x54C2E4u;
        goto label_54c2e4;
    }
    ctx->pc = 0x54C2DCu;
    {
        const bool branch_taken_0x54c2dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c2dc) {
            ctx->pc = 0x54C2F4u;
            goto label_54c2f4;
        }
    }
    ctx->pc = 0x54C2E4u;
label_54c2e4:
    // 0x54c2e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54c2e8:
    // 0x54c2e8: 0xc0fe48c  jal         func_3F9230
label_54c2ec:
    if (ctx->pc == 0x54C2ECu) {
        ctx->pc = 0x54C2ECu;
            // 0x54c2ec: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x54C2F0u;
        goto label_54c2f0;
    }
    ctx->pc = 0x54C2E8u;
    SET_GPR_U32(ctx, 31, 0x54C2F0u);
    ctx->pc = 0x54C2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C2E8u;
            // 0x54c2ec: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C2F0u; }
        if (ctx->pc != 0x54C2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C2F0u; }
        if (ctx->pc != 0x54C2F0u) { return; }
    }
    ctx->pc = 0x54C2F0u;
label_54c2f0:
    // 0x54c2f0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x54c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_54c2f4:
    // 0x54c2f4: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_54c2f8:
    if (ctx->pc == 0x54C2F8u) {
        ctx->pc = 0x54C2F8u;
            // 0x54c2f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x54C2FCu;
        goto label_54c2fc;
    }
    ctx->pc = 0x54C2F4u;
    {
        const bool branch_taken_0x54c2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c2f4) {
            ctx->pc = 0x54C2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54C2F4u;
            // 0x54c2f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C318u;
            goto label_54c318;
        }
    }
    ctx->pc = 0x54C2FCu;
label_54c2fc:
    // 0x54c2fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x54c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_54c300:
    // 0x54c300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54c300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54c304:
    // 0x54c304: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x54c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_54c308:
    // 0x54c308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54c308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54c30c:
    // 0x54c30c: 0xc057a68  jal         func_15E9A0
label_54c310:
    if (ctx->pc == 0x54C310u) {
        ctx->pc = 0x54C310u;
            // 0x54c310: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x54C314u;
        goto label_54c314;
    }
    ctx->pc = 0x54C30Cu;
    SET_GPR_U32(ctx, 31, 0x54C314u);
    ctx->pc = 0x54C310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C30Cu;
            // 0x54c310: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C314u; }
        if (ctx->pc != 0x54C314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C314u; }
        if (ctx->pc != 0x54C314u) { return; }
    }
    ctx->pc = 0x54C314u;
label_54c314:
    // 0x54c314: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x54c314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_54c318:
    // 0x54c318: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x54c318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_54c31c:
    // 0x54c31c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_54c320:
    if (ctx->pc == 0x54C320u) {
        ctx->pc = 0x54C320u;
            // 0x54c320: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C324u;
        goto label_54c324;
    }
    ctx->pc = 0x54C31Cu;
    {
        const bool branch_taken_0x54c31c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x54c31c) {
            ctx->pc = 0x54C320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54C31Cu;
            // 0x54c320: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C330u;
            goto label_54c330;
        }
    }
    ctx->pc = 0x54C324u;
label_54c324:
    // 0x54c324: 0xc0400a8  jal         func_1002A0
label_54c328:
    if (ctx->pc == 0x54C328u) {
        ctx->pc = 0x54C328u;
            // 0x54c328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C32Cu;
        goto label_54c32c;
    }
    ctx->pc = 0x54C324u;
    SET_GPR_U32(ctx, 31, 0x54C32Cu);
    ctx->pc = 0x54C328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C324u;
            // 0x54c328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C32Cu; }
        if (ctx->pc != 0x54C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C32Cu; }
        if (ctx->pc != 0x54C32Cu) { return; }
    }
    ctx->pc = 0x54C32Cu;
label_54c32c:
    // 0x54c32c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x54c32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54c330:
    // 0x54c330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x54c330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_54c334:
    // 0x54c334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x54c334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54c338:
    // 0x54c338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x54c338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_54c33c:
    // 0x54c33c: 0x3e00008  jr          $ra
label_54c340:
    if (ctx->pc == 0x54C340u) {
        ctx->pc = 0x54C340u;
            // 0x54c340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x54C344u;
        goto label_54c344;
    }
    ctx->pc = 0x54C33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54C340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C33Cu;
            // 0x54c340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54C344u;
label_54c344:
    // 0x54c344: 0x0  nop
    ctx->pc = 0x54c344u;
    // NOP
label_54c348:
    // 0x54c348: 0x0  nop
    ctx->pc = 0x54c348u;
    // NOP
label_54c34c:
    // 0x54c34c: 0x0  nop
    ctx->pc = 0x54c34cu;
    // NOP
label_54c350:
    // 0x54c350: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x54c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_54c354:
    // 0x54c354: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x54c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_54c358:
    // 0x54c358: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x54c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_54c35c:
    // 0x54c35c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x54c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_54c360:
    // 0x54c360: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54c360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54c364:
    // 0x54c364: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x54c364u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_54c368:
    // 0x54c368: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x54c368u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_54c36c:
    // 0x54c36c: 0x142000a3  bnez        $at, . + 4 + (0xA3 << 2)
label_54c370:
    if (ctx->pc == 0x54C370u) {
        ctx->pc = 0x54C370u;
            // 0x54c370: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C374u;
        goto label_54c374;
    }
    ctx->pc = 0x54C36Cu;
    {
        const bool branch_taken_0x54c36c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x54C370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C36Cu;
            // 0x54c370: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c36c) {
            ctx->pc = 0x54C5FCu;
            goto label_54c5fc;
        }
    }
    ctx->pc = 0x54C374u;
label_54c374:
    // 0x54c374: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54c378:
    // 0x54c378: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x54c378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_54c37c:
    // 0x54c37c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54c37cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54c380:
    // 0x54c380: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x54c380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_54c384:
    // 0x54c384: 0x320f809  jalr        $t9
label_54c388:
    if (ctx->pc == 0x54C388u) {
        ctx->pc = 0x54C388u;
            // 0x54c388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C38Cu;
        goto label_54c38c;
    }
    ctx->pc = 0x54C384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C38Cu);
        ctx->pc = 0x54C388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C384u;
            // 0x54c388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C38Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C38Cu; }
            if (ctx->pc != 0x54C38Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54C38Cu;
label_54c38c:
    // 0x54c38c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c390:
    // 0x54c390: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54c390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54c394:
    // 0x54c394: 0xc440dba0  lwc1        $f0, -0x2460($v0)
    ctx->pc = 0x54c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54c398:
    // 0x54c398: 0xc461dba4  lwc1        $f1, -0x245C($v1)
    ctx->pc = 0x54c398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54c39c:
    // 0x54c39c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c3a0:
    // 0x54c3a0: 0xc442dba8  lwc1        $f2, -0x2458($v0)
    ctx->pc = 0x54c3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54c3a4:
    // 0x54c3a4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54c3a8:
    // 0x54c3a8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x54c3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_54c3ac:
    // 0x54c3ac: 0xc460dbac  lwc1        $f0, -0x2454($v1)
    ctx->pc = 0x54c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54c3b0:
    // 0x54c3b0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c3b4:
    // 0x54c3b4: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x54c3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_54c3b8:
    // 0x54c3b8: 0xc441dbb0  lwc1        $f1, -0x2450($v0)
    ctx->pc = 0x54c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54c3bc:
    // 0x54c3bc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54c3c0:
    // 0x54c3c0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x54c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_54c3c4:
    // 0x54c3c4: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x54c3c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_54c3c8:
    // 0x54c3c8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c3cc:
    // 0x54c3cc: 0xc440dbb4  lwc1        $f0, -0x244C($v0)
    ctx->pc = 0x54c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54c3d0:
    // 0x54c3d0: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x54c3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_54c3d4:
    // 0x54c3d4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c3d8:
    // 0x54c3d8: 0xc441dbb8  lwc1        $f1, -0x2448($v0)
    ctx->pc = 0x54c3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54c3dc:
    // 0x54c3dc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x54c3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_54c3e0:
    // 0x54c3e0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c3e4:
    // 0x54c3e4: 0xc440dbc0  lwc1        $f0, -0x2440($v0)
    ctx->pc = 0x54c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54c3e8:
    // 0x54c3e8: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x54c3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_54c3ec:
    // 0x54c3ec: 0xc461dbc4  lwc1        $f1, -0x243C($v1)
    ctx->pc = 0x54c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54c3f0:
    // 0x54c3f0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c3f4:
    // 0x54c3f4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x54c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_54c3f8:
    // 0x54c3f8: 0xc440dbc8  lwc1        $f0, -0x2438($v0)
    ctx->pc = 0x54c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54c3fc:
    // 0x54c3fc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54c400:
    // 0x54c400: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x54c400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_54c404:
    // 0x54c404: 0xc461dbcc  lwc1        $f1, -0x2434($v1)
    ctx->pc = 0x54c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54c408:
    // 0x54c408: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c40c:
    // 0x54c40c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x54c40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_54c410:
    // 0x54c410: 0xc440dbd0  lwc1        $f0, -0x2430($v0)
    ctx->pc = 0x54c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54c414:
    // 0x54c414: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54c414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54c418:
    // 0x54c418: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x54c418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_54c41c:
    // 0x54c41c: 0xc461dbd4  lwc1        $f1, -0x242C($v1)
    ctx->pc = 0x54c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54c420:
    // 0x54c420: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c424:
    // 0x54c424: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x54c424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_54c428:
    // 0x54c428: 0xc440dbd8  lwc1        $f0, -0x2428($v0)
    ctx->pc = 0x54c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54c42c:
    // 0x54c42c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54c430:
    // 0x54c430: 0xc46cdb90  lwc1        $f12, -0x2470($v1)
    ctx->pc = 0x54c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_54c434:
    // 0x54c434: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x54c434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_54c438:
    // 0x54c438: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c43c:
    // 0x54c43c: 0xc44ddb94  lwc1        $f13, -0x246C($v0)
    ctx->pc = 0x54c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_54c440:
    // 0x54c440: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c444:
    // 0x54c444: 0xc44edb98  lwc1        $f14, -0x2468($v0)
    ctx->pc = 0x54c444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_54c448:
    // 0x54c448: 0xc04e888  jal         func_13A220
label_54c44c:
    if (ctx->pc == 0x54C44Cu) {
        ctx->pc = 0x54C44Cu;
            // 0x54c44c: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x54C450u;
        goto label_54c450;
    }
    ctx->pc = 0x54C448u;
    SET_GPR_U32(ctx, 31, 0x54C450u);
    ctx->pc = 0x54C44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C448u;
            // 0x54c44c: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A220u;
    if (runtime->hasFunction(0x13A220u)) {
        auto targetFn = runtime->lookupFunction(0x13A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C450u; }
        if (ctx->pc != 0x54C450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A220_0x13a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C450u; }
        if (ctx->pc != 0x54C450u) { return; }
    }
    ctx->pc = 0x54C450u;
label_54c450:
    // 0x54c450: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x54c450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_54c454:
    // 0x54c454: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_54c458:
    if (ctx->pc == 0x54C458u) {
        ctx->pc = 0x54C458u;
            // 0x54c458: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x54C45Cu;
        goto label_54c45c;
    }
    ctx->pc = 0x54C454u;
    {
        const bool branch_taken_0x54c454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C454u;
            // 0x54c458: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c454) {
            ctx->pc = 0x54C478u;
            goto label_54c478;
        }
    }
    ctx->pc = 0x54C45Cu;
label_54c45c:
    // 0x54c45c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x54c45cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_54c460:
    // 0x54c460: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x54c460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_54c464:
    // 0x54c464: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x54c464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_54c468:
    // 0x54c468: 0x0  nop
    ctx->pc = 0x54c468u;
    // NOP
label_54c46c:
    // 0x54c46c: 0x0  nop
    ctx->pc = 0x54c46cu;
    // NOP
label_54c470:
    // 0x54c470: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_54c474:
    if (ctx->pc == 0x54C474u) {
        ctx->pc = 0x54C478u;
        goto label_54c478;
    }
    ctx->pc = 0x54C470u;
    {
        const bool branch_taken_0x54c470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54c470) {
            ctx->pc = 0x54C45Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54c45c;
        }
    }
    ctx->pc = 0x54C478u;
label_54c478:
    // 0x54c478: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x54c478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_54c47c:
    // 0x54c47c: 0xc04cb44  jal         func_132D10
label_54c480:
    if (ctx->pc == 0x54C480u) {
        ctx->pc = 0x54C480u;
            // 0x54c480: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C484u;
        goto label_54c484;
    }
    ctx->pc = 0x54C47Cu;
    SET_GPR_U32(ctx, 31, 0x54C484u);
    ctx->pc = 0x54C480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C47Cu;
            // 0x54c480: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C484u; }
        if (ctx->pc != 0x54C484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C484u; }
        if (ctx->pc != 0x54C484u) { return; }
    }
    ctx->pc = 0x54C484u;
label_54c484:
    // 0x54c484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x54c484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_54c488:
    // 0x54c488: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x54c488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_54c48c:
    // 0x54c48c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x54c48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_54c490:
    // 0x54c490: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x54c490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_54c494:
    // 0x54c494: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x54c494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
label_54c498:
    // 0x54c498: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x54c498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_54c49c:
    // 0x54c49c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x54c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_54c4a0:
    // 0x54c4a0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x54c4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_54c4a4:
    // 0x54c4a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x54c4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_54c4a8:
    // 0x54c4a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x54c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_54c4ac:
    // 0x54c4ac: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x54c4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_54c4b0:
    // 0x54c4b0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x54c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_54c4b4:
    // 0x54c4b4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x54c4b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_54c4b8:
    // 0x54c4b8: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x54c4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_54c4bc:
    // 0x54c4bc: 0xc04e95c  jal         func_13A570
label_54c4c0:
    if (ctx->pc == 0x54C4C0u) {
        ctx->pc = 0x54C4C0u;
            // 0x54c4c0: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x54C4C4u;
        goto label_54c4c4;
    }
    ctx->pc = 0x54C4BCu;
    SET_GPR_U32(ctx, 31, 0x54C4C4u);
    ctx->pc = 0x54C4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C4BCu;
            // 0x54c4c0: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A570u;
    if (runtime->hasFunction(0x13A570u)) {
        auto targetFn = runtime->lookupFunction(0x13A570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4C4u; }
        if (ctx->pc != 0x54C4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A570_0x13a570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4C4u; }
        if (ctx->pc != 0x54C4C4u) { return; }
    }
    ctx->pc = 0x54C4C4u;
label_54c4c4:
    // 0x54c4c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x54c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54c4c8:
    // 0x54c4c8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x54c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_54c4cc:
    // 0x54c4cc: 0xc04e9a8  jal         func_13A6A0
label_54c4d0:
    if (ctx->pc == 0x54C4D0u) {
        ctx->pc = 0x54C4D0u;
            // 0x54c4d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x54C4D4u;
        goto label_54c4d4;
    }
    ctx->pc = 0x54C4CCu;
    SET_GPR_U32(ctx, 31, 0x54C4D4u);
    ctx->pc = 0x54C4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C4CCu;
            // 0x54c4d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4D4u; }
        if (ctx->pc != 0x54C4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4D4u; }
        if (ctx->pc != 0x54C4D4u) { return; }
    }
    ctx->pc = 0x54C4D4u;
label_54c4d4:
    // 0x54c4d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x54c4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54c4d8:
    // 0x54c4d8: 0xc04e894  jal         func_13A250
label_54c4dc:
    if (ctx->pc == 0x54C4DCu) {
        ctx->pc = 0x54C4DCu;
            // 0x54c4dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x54C4E0u;
        goto label_54c4e0;
    }
    ctx->pc = 0x54C4D8u;
    SET_GPR_U32(ctx, 31, 0x54C4E0u);
    ctx->pc = 0x54C4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C4D8u;
            // 0x54c4dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4E0u; }
        if (ctx->pc != 0x54C4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4E0u; }
        if (ctx->pc != 0x54C4E0u) { return; }
    }
    ctx->pc = 0x54C4E0u;
label_54c4e0:
    // 0x54c4e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x54c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_54c4e4:
    // 0x54c4e4: 0xc04cb44  jal         func_132D10
label_54c4e8:
    if (ctx->pc == 0x54C4E8u) {
        ctx->pc = 0x54C4E8u;
            // 0x54c4e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C4ECu;
        goto label_54c4ec;
    }
    ctx->pc = 0x54C4E4u;
    SET_GPR_U32(ctx, 31, 0x54C4ECu);
    ctx->pc = 0x54C4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C4E4u;
            // 0x54c4e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4ECu; }
        if (ctx->pc != 0x54C4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4ECu; }
        if (ctx->pc != 0x54C4ECu) { return; }
    }
    ctx->pc = 0x54C4ECu;
label_54c4ec:
    // 0x54c4ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x54c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_54c4f0:
    // 0x54c4f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x54c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_54c4f4:
    // 0x54c4f4: 0xc04e94c  jal         func_13A530
label_54c4f8:
    if (ctx->pc == 0x54C4F8u) {
        ctx->pc = 0x54C4F8u;
            // 0x54c4f8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x54C4FCu;
        goto label_54c4fc;
    }
    ctx->pc = 0x54C4F4u;
    SET_GPR_U32(ctx, 31, 0x54C4FCu);
    ctx->pc = 0x54C4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C4F4u;
            // 0x54c4f8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A530u;
    if (runtime->hasFunction(0x13A530u)) {
        auto targetFn = runtime->lookupFunction(0x13A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4FCu; }
        if (ctx->pc != 0x54C4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A530_0x13a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C4FCu; }
        if (ctx->pc != 0x54C4FCu) { return; }
    }
    ctx->pc = 0x54C4FCu;
label_54c4fc:
    // 0x54c4fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x54c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54c500:
    // 0x54c500: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x54c500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_54c504:
    // 0x54c504: 0xc04e9a8  jal         func_13A6A0
label_54c508:
    if (ctx->pc == 0x54C508u) {
        ctx->pc = 0x54C508u;
            // 0x54c508: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x54C50Cu;
        goto label_54c50c;
    }
    ctx->pc = 0x54C504u;
    SET_GPR_U32(ctx, 31, 0x54C50Cu);
    ctx->pc = 0x54C508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C504u;
            // 0x54c508: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C50Cu; }
        if (ctx->pc != 0x54C50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C50Cu; }
        if (ctx->pc != 0x54C50Cu) { return; }
    }
    ctx->pc = 0x54C50Cu;
label_54c50c:
    // 0x54c50c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x54c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54c510:
    // 0x54c510: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x54c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_54c514:
    // 0x54c514: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x54c514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54c518:
    // 0x54c518: 0xc04ecc0  jal         func_13B300
label_54c51c:
    if (ctx->pc == 0x54C51Cu) {
        ctx->pc = 0x54C51Cu;
            // 0x54c51c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C520u;
        goto label_54c520;
    }
    ctx->pc = 0x54C518u;
    SET_GPR_U32(ctx, 31, 0x54C520u);
    ctx->pc = 0x54C51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C518u;
            // 0x54c51c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B300u;
    if (runtime->hasFunction(0x13B300u)) {
        auto targetFn = runtime->lookupFunction(0x13B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C520u; }
        if (ctx->pc != 0x54C520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B300_0x13b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C520u; }
        if (ctx->pc != 0x54C520u) { return; }
    }
    ctx->pc = 0x54C520u;
label_54c520:
    // 0x54c520: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x54c520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54c524:
    // 0x54c524: 0xc04e894  jal         func_13A250
label_54c528:
    if (ctx->pc == 0x54C528u) {
        ctx->pc = 0x54C528u;
            // 0x54c528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C52Cu;
        goto label_54c52c;
    }
    ctx->pc = 0x54C524u;
    SET_GPR_U32(ctx, 31, 0x54C52Cu);
    ctx->pc = 0x54C528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C524u;
            // 0x54c528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C52Cu; }
        if (ctx->pc != 0x54C52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C52Cu; }
        if (ctx->pc != 0x54C52Cu) { return; }
    }
    ctx->pc = 0x54C52Cu;
label_54c52c:
    // 0x54c52c: 0xc04f01c  jal         func_13C070
label_54c530:
    if (ctx->pc == 0x54C530u) {
        ctx->pc = 0x54C534u;
        goto label_54c534;
    }
    ctx->pc = 0x54C52Cu;
    SET_GPR_U32(ctx, 31, 0x54C534u);
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C534u; }
        if (ctx->pc != 0x54C534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C070_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C534u; }
        if (ctx->pc != 0x54C534u) { return; }
    }
    ctx->pc = 0x54C534u;
label_54c534:
    // 0x54c534: 0x3c02bd08  lui         $v0, 0xBD08
    ctx->pc = 0x54c534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48392 << 16));
label_54c538:
    // 0x54c538: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x54c538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_54c53c:
    // 0x54c53c: 0x34448889  ori         $a0, $v0, 0x8889
    ctx->pc = 0x54c53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_54c540:
    // 0x54c540: 0xc6210084  lwc1        $f1, 0x84($s1)
    ctx->pc = 0x54c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54c544:
    // 0x54c544: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x54c544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_54c548:
    // 0x54c548: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x54c548u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_54c54c:
    // 0x54c54c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x54c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_54c550:
    // 0x54c550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c554:
    // 0x54c554: 0x0  nop
    ctx->pc = 0x54c554u;
    // NOP
label_54c558:
    // 0x54c558: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x54c558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_54c55c:
    // 0x54c55c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x54c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_54c560:
    // 0x54c560: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x54c560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_54c564:
    // 0x54c564: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x54c564u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_54c568:
    // 0x54c568: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x54c568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_54c56c:
    // 0x54c56c: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x54c56cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_54c570:
    // 0x54c570: 0xc04f018  jal         func_13C060
label_54c574:
    if (ctx->pc == 0x54C574u) {
        ctx->pc = 0x54C574u;
            // 0x54c574: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x54C578u;
        goto label_54c578;
    }
    ctx->pc = 0x54C570u;
    SET_GPR_U32(ctx, 31, 0x54C578u);
    ctx->pc = 0x54C574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C570u;
            // 0x54c574: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C060u;
    if (runtime->hasFunction(0x13C060u)) {
        auto targetFn = runtime->lookupFunction(0x13C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C578u; }
        if (ctx->pc != 0x54C578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C060_0x13c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C578u; }
        if (ctx->pc != 0x54C578u) { return; }
    }
    ctx->pc = 0x54C578u;
label_54c578:
    // 0x54c578: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54c578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54c57c:
    // 0x54c57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54c580:
    // 0x54c580: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x54c580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_54c584:
    // 0x54c584: 0x320f809  jalr        $t9
label_54c588:
    if (ctx->pc == 0x54C588u) {
        ctx->pc = 0x54C588u;
            // 0x54c588: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x54C58Cu;
        goto label_54c58c;
    }
    ctx->pc = 0x54C584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C58Cu);
        ctx->pc = 0x54C588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C584u;
            // 0x54c588: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C58Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C58Cu; }
            if (ctx->pc != 0x54C58Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54C58Cu;
label_54c58c:
    // 0x54c58c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x54c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_54c590:
    // 0x54c590: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x54c590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54c594:
    // 0x54c594: 0xc0c7afc  jal         func_31EBF0
label_54c598:
    if (ctx->pc == 0x54C598u) {
        ctx->pc = 0x54C598u;
            // 0x54c598: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54C59Cu;
        goto label_54c59c;
    }
    ctx->pc = 0x54C594u;
    SET_GPR_U32(ctx, 31, 0x54C59Cu);
    ctx->pc = 0x54C598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C594u;
            // 0x54c598: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EBF0u;
    if (runtime->hasFunction(0x31EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x31EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C59Cu; }
        if (ctx->pc != 0x54C59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EBF0_0x31ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C59Cu; }
        if (ctx->pc != 0x54C59Cu) { return; }
    }
    ctx->pc = 0x54C59Cu;
label_54c59c:
    // 0x54c59c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x54c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_54c5a0:
    // 0x54c5a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x54c5a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_54c5a4:
    // 0x54c5a4: 0xc0c7afc  jal         func_31EBF0
label_54c5a8:
    if (ctx->pc == 0x54C5A8u) {
        ctx->pc = 0x54C5A8u;
            // 0x54c5a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C5ACu;
        goto label_54c5ac;
    }
    ctx->pc = 0x54C5A4u;
    SET_GPR_U32(ctx, 31, 0x54C5ACu);
    ctx->pc = 0x54C5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C5A4u;
            // 0x54c5a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EBF0u;
    if (runtime->hasFunction(0x31EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x31EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5ACu; }
        if (ctx->pc != 0x54C5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EBF0_0x31ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5ACu; }
        if (ctx->pc != 0x54C5ACu) { return; }
    }
    ctx->pc = 0x54C5ACu;
label_54c5ac:
    // 0x54c5ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54c5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54c5b0:
    // 0x54c5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54c5b4:
    // 0x54c5b4: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x54c5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_54c5b8:
    // 0x54c5b8: 0x320f809  jalr        $t9
label_54c5bc:
    if (ctx->pc == 0x54C5BCu) {
        ctx->pc = 0x54C5BCu;
            // 0x54c5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x54C5C0u;
        goto label_54c5c0;
    }
    ctx->pc = 0x54C5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C5C0u);
        ctx->pc = 0x54C5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C5B8u;
            // 0x54c5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C5C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C5C0u; }
            if (ctx->pc != 0x54C5C0u) { return; }
        }
        }
    }
    ctx->pc = 0x54C5C0u;
label_54c5c0:
    // 0x54c5c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54c5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54c5c4:
    // 0x54c5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54c5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54c5c8:
    // 0x54c5c8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x54c5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_54c5cc:
    // 0x54c5cc: 0x320f809  jalr        $t9
label_54c5d0:
    if (ctx->pc == 0x54C5D0u) {
        ctx->pc = 0x54C5D0u;
            // 0x54c5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C5D4u;
        goto label_54c5d4;
    }
    ctx->pc = 0x54C5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C5D4u);
        ctx->pc = 0x54C5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C5CCu;
            // 0x54c5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C5D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C5D4u; }
            if (ctx->pc != 0x54C5D4u) { return; }
        }
        }
    }
    ctx->pc = 0x54C5D4u;
label_54c5d4:
    // 0x54c5d4: 0xc15422c  jal         func_5508B0
label_54c5d8:
    if (ctx->pc == 0x54C5D8u) {
        ctx->pc = 0x54C5D8u;
            // 0x54c5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C5DCu;
        goto label_54c5dc;
    }
    ctx->pc = 0x54C5D4u;
    SET_GPR_U32(ctx, 31, 0x54C5DCu);
    ctx->pc = 0x54C5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C5D4u;
            // 0x54c5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5508B0u;
    if (runtime->hasFunction(0x5508B0u)) {
        auto targetFn = runtime->lookupFunction(0x5508B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5DCu; }
        if (ctx->pc != 0x54C5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005508B0_0x5508b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5DCu; }
        if (ctx->pc != 0x54C5DCu) { return; }
    }
    ctx->pc = 0x54C5DCu;
label_54c5dc:
    // 0x54c5dc: 0xc153ff4  jal         func_54FFD0
label_54c5e0:
    if (ctx->pc == 0x54C5E0u) {
        ctx->pc = 0x54C5E0u;
            // 0x54c5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C5E4u;
        goto label_54c5e4;
    }
    ctx->pc = 0x54C5DCu;
    SET_GPR_U32(ctx, 31, 0x54C5E4u);
    ctx->pc = 0x54C5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C5DCu;
            // 0x54c5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54FFD0u;
    if (runtime->hasFunction(0x54FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x54FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5E4u; }
        if (ctx->pc != 0x54C5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054FFD0_0x54ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5E4u; }
        if (ctx->pc != 0x54C5E4u) { return; }
    }
    ctx->pc = 0x54C5E4u;
label_54c5e4:
    // 0x54c5e4: 0xc153188  jal         func_54C620
label_54c5e8:
    if (ctx->pc == 0x54C5E8u) {
        ctx->pc = 0x54C5E8u;
            // 0x54c5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C5ECu;
        goto label_54c5ec;
    }
    ctx->pc = 0x54C5E4u;
    SET_GPR_U32(ctx, 31, 0x54C5ECu);
    ctx->pc = 0x54C5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C5E4u;
            // 0x54c5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54C620u;
    if (runtime->hasFunction(0x54C620u)) {
        auto targetFn = runtime->lookupFunction(0x54C620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5ECu; }
        if (ctx->pc != 0x54C5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054C620_0x54c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5ECu; }
        if (ctx->pc != 0x54C5ECu) { return; }
    }
    ctx->pc = 0x54C5ECu;
label_54c5ec:
    // 0x54c5ec: 0xc1533c4  jal         func_54CF10
label_54c5f0:
    if (ctx->pc == 0x54C5F0u) {
        ctx->pc = 0x54C5F0u;
            // 0x54c5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C5F4u;
        goto label_54c5f4;
    }
    ctx->pc = 0x54C5ECu;
    SET_GPR_U32(ctx, 31, 0x54C5F4u);
    ctx->pc = 0x54C5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C5ECu;
            // 0x54c5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54CF10u;
    if (runtime->hasFunction(0x54CF10u)) {
        auto targetFn = runtime->lookupFunction(0x54CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5F4u; }
        if (ctx->pc != 0x54C5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054CF10_0x54cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5F4u; }
        if (ctx->pc != 0x54C5F4u) { return; }
    }
    ctx->pc = 0x54C5F4u;
label_54c5f4:
    // 0x54c5f4: 0xc1532c0  jal         func_54CB00
label_54c5f8:
    if (ctx->pc == 0x54C5F8u) {
        ctx->pc = 0x54C5F8u;
            // 0x54c5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C5FCu;
        goto label_54c5fc;
    }
    ctx->pc = 0x54C5F4u;
    SET_GPR_U32(ctx, 31, 0x54C5FCu);
    ctx->pc = 0x54C5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C5F4u;
            // 0x54c5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54CB00u;
    if (runtime->hasFunction(0x54CB00u)) {
        auto targetFn = runtime->lookupFunction(0x54CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5FCu; }
        if (ctx->pc != 0x54C5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054CB00_0x54cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C5FCu; }
        if (ctx->pc != 0x54C5FCu) { return; }
    }
    ctx->pc = 0x54C5FCu;
label_54c5fc:
    // 0x54c5fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x54c5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_54c600:
    // 0x54c600: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54c604:
    // 0x54c604: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x54c604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54c608:
    // 0x54c608: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x54c608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54c60c:
    // 0x54c60c: 0x3e00008  jr          $ra
label_54c610:
    if (ctx->pc == 0x54C610u) {
        ctx->pc = 0x54C610u;
            // 0x54c610: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x54C614u;
        goto label_54c614;
    }
    ctx->pc = 0x54C60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54C610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C60Cu;
            // 0x54c610: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54C614u;
label_54c614:
    // 0x54c614: 0x0  nop
    ctx->pc = 0x54c614u;
    // NOP
label_54c618:
    // 0x54c618: 0x0  nop
    ctx->pc = 0x54c618u;
    // NOP
label_54c61c:
    // 0x54c61c: 0x0  nop
    ctx->pc = 0x54c61cu;
    // NOP
}
