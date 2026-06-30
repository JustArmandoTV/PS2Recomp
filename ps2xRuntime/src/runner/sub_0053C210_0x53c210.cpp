#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053C210
// Address: 0x53c210 - 0x53c5d0
void sub_0053C210_0x53c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053C210_0x53c210");
#endif

    switch (ctx->pc) {
        case 0x53c210u: goto label_53c210;
        case 0x53c214u: goto label_53c214;
        case 0x53c218u: goto label_53c218;
        case 0x53c21cu: goto label_53c21c;
        case 0x53c220u: goto label_53c220;
        case 0x53c224u: goto label_53c224;
        case 0x53c228u: goto label_53c228;
        case 0x53c22cu: goto label_53c22c;
        case 0x53c230u: goto label_53c230;
        case 0x53c234u: goto label_53c234;
        case 0x53c238u: goto label_53c238;
        case 0x53c23cu: goto label_53c23c;
        case 0x53c240u: goto label_53c240;
        case 0x53c244u: goto label_53c244;
        case 0x53c248u: goto label_53c248;
        case 0x53c24cu: goto label_53c24c;
        case 0x53c250u: goto label_53c250;
        case 0x53c254u: goto label_53c254;
        case 0x53c258u: goto label_53c258;
        case 0x53c25cu: goto label_53c25c;
        case 0x53c260u: goto label_53c260;
        case 0x53c264u: goto label_53c264;
        case 0x53c268u: goto label_53c268;
        case 0x53c26cu: goto label_53c26c;
        case 0x53c270u: goto label_53c270;
        case 0x53c274u: goto label_53c274;
        case 0x53c278u: goto label_53c278;
        case 0x53c27cu: goto label_53c27c;
        case 0x53c280u: goto label_53c280;
        case 0x53c284u: goto label_53c284;
        case 0x53c288u: goto label_53c288;
        case 0x53c28cu: goto label_53c28c;
        case 0x53c290u: goto label_53c290;
        case 0x53c294u: goto label_53c294;
        case 0x53c298u: goto label_53c298;
        case 0x53c29cu: goto label_53c29c;
        case 0x53c2a0u: goto label_53c2a0;
        case 0x53c2a4u: goto label_53c2a4;
        case 0x53c2a8u: goto label_53c2a8;
        case 0x53c2acu: goto label_53c2ac;
        case 0x53c2b0u: goto label_53c2b0;
        case 0x53c2b4u: goto label_53c2b4;
        case 0x53c2b8u: goto label_53c2b8;
        case 0x53c2bcu: goto label_53c2bc;
        case 0x53c2c0u: goto label_53c2c0;
        case 0x53c2c4u: goto label_53c2c4;
        case 0x53c2c8u: goto label_53c2c8;
        case 0x53c2ccu: goto label_53c2cc;
        case 0x53c2d0u: goto label_53c2d0;
        case 0x53c2d4u: goto label_53c2d4;
        case 0x53c2d8u: goto label_53c2d8;
        case 0x53c2dcu: goto label_53c2dc;
        case 0x53c2e0u: goto label_53c2e0;
        case 0x53c2e4u: goto label_53c2e4;
        case 0x53c2e8u: goto label_53c2e8;
        case 0x53c2ecu: goto label_53c2ec;
        case 0x53c2f0u: goto label_53c2f0;
        case 0x53c2f4u: goto label_53c2f4;
        case 0x53c2f8u: goto label_53c2f8;
        case 0x53c2fcu: goto label_53c2fc;
        case 0x53c300u: goto label_53c300;
        case 0x53c304u: goto label_53c304;
        case 0x53c308u: goto label_53c308;
        case 0x53c30cu: goto label_53c30c;
        case 0x53c310u: goto label_53c310;
        case 0x53c314u: goto label_53c314;
        case 0x53c318u: goto label_53c318;
        case 0x53c31cu: goto label_53c31c;
        case 0x53c320u: goto label_53c320;
        case 0x53c324u: goto label_53c324;
        case 0x53c328u: goto label_53c328;
        case 0x53c32cu: goto label_53c32c;
        case 0x53c330u: goto label_53c330;
        case 0x53c334u: goto label_53c334;
        case 0x53c338u: goto label_53c338;
        case 0x53c33cu: goto label_53c33c;
        case 0x53c340u: goto label_53c340;
        case 0x53c344u: goto label_53c344;
        case 0x53c348u: goto label_53c348;
        case 0x53c34cu: goto label_53c34c;
        case 0x53c350u: goto label_53c350;
        case 0x53c354u: goto label_53c354;
        case 0x53c358u: goto label_53c358;
        case 0x53c35cu: goto label_53c35c;
        case 0x53c360u: goto label_53c360;
        case 0x53c364u: goto label_53c364;
        case 0x53c368u: goto label_53c368;
        case 0x53c36cu: goto label_53c36c;
        case 0x53c370u: goto label_53c370;
        case 0x53c374u: goto label_53c374;
        case 0x53c378u: goto label_53c378;
        case 0x53c37cu: goto label_53c37c;
        case 0x53c380u: goto label_53c380;
        case 0x53c384u: goto label_53c384;
        case 0x53c388u: goto label_53c388;
        case 0x53c38cu: goto label_53c38c;
        case 0x53c390u: goto label_53c390;
        case 0x53c394u: goto label_53c394;
        case 0x53c398u: goto label_53c398;
        case 0x53c39cu: goto label_53c39c;
        case 0x53c3a0u: goto label_53c3a0;
        case 0x53c3a4u: goto label_53c3a4;
        case 0x53c3a8u: goto label_53c3a8;
        case 0x53c3acu: goto label_53c3ac;
        case 0x53c3b0u: goto label_53c3b0;
        case 0x53c3b4u: goto label_53c3b4;
        case 0x53c3b8u: goto label_53c3b8;
        case 0x53c3bcu: goto label_53c3bc;
        case 0x53c3c0u: goto label_53c3c0;
        case 0x53c3c4u: goto label_53c3c4;
        case 0x53c3c8u: goto label_53c3c8;
        case 0x53c3ccu: goto label_53c3cc;
        case 0x53c3d0u: goto label_53c3d0;
        case 0x53c3d4u: goto label_53c3d4;
        case 0x53c3d8u: goto label_53c3d8;
        case 0x53c3dcu: goto label_53c3dc;
        case 0x53c3e0u: goto label_53c3e0;
        case 0x53c3e4u: goto label_53c3e4;
        case 0x53c3e8u: goto label_53c3e8;
        case 0x53c3ecu: goto label_53c3ec;
        case 0x53c3f0u: goto label_53c3f0;
        case 0x53c3f4u: goto label_53c3f4;
        case 0x53c3f8u: goto label_53c3f8;
        case 0x53c3fcu: goto label_53c3fc;
        case 0x53c400u: goto label_53c400;
        case 0x53c404u: goto label_53c404;
        case 0x53c408u: goto label_53c408;
        case 0x53c40cu: goto label_53c40c;
        case 0x53c410u: goto label_53c410;
        case 0x53c414u: goto label_53c414;
        case 0x53c418u: goto label_53c418;
        case 0x53c41cu: goto label_53c41c;
        case 0x53c420u: goto label_53c420;
        case 0x53c424u: goto label_53c424;
        case 0x53c428u: goto label_53c428;
        case 0x53c42cu: goto label_53c42c;
        case 0x53c430u: goto label_53c430;
        case 0x53c434u: goto label_53c434;
        case 0x53c438u: goto label_53c438;
        case 0x53c43cu: goto label_53c43c;
        case 0x53c440u: goto label_53c440;
        case 0x53c444u: goto label_53c444;
        case 0x53c448u: goto label_53c448;
        case 0x53c44cu: goto label_53c44c;
        case 0x53c450u: goto label_53c450;
        case 0x53c454u: goto label_53c454;
        case 0x53c458u: goto label_53c458;
        case 0x53c45cu: goto label_53c45c;
        case 0x53c460u: goto label_53c460;
        case 0x53c464u: goto label_53c464;
        case 0x53c468u: goto label_53c468;
        case 0x53c46cu: goto label_53c46c;
        case 0x53c470u: goto label_53c470;
        case 0x53c474u: goto label_53c474;
        case 0x53c478u: goto label_53c478;
        case 0x53c47cu: goto label_53c47c;
        case 0x53c480u: goto label_53c480;
        case 0x53c484u: goto label_53c484;
        case 0x53c488u: goto label_53c488;
        case 0x53c48cu: goto label_53c48c;
        case 0x53c490u: goto label_53c490;
        case 0x53c494u: goto label_53c494;
        case 0x53c498u: goto label_53c498;
        case 0x53c49cu: goto label_53c49c;
        case 0x53c4a0u: goto label_53c4a0;
        case 0x53c4a4u: goto label_53c4a4;
        case 0x53c4a8u: goto label_53c4a8;
        case 0x53c4acu: goto label_53c4ac;
        case 0x53c4b0u: goto label_53c4b0;
        case 0x53c4b4u: goto label_53c4b4;
        case 0x53c4b8u: goto label_53c4b8;
        case 0x53c4bcu: goto label_53c4bc;
        case 0x53c4c0u: goto label_53c4c0;
        case 0x53c4c4u: goto label_53c4c4;
        case 0x53c4c8u: goto label_53c4c8;
        case 0x53c4ccu: goto label_53c4cc;
        case 0x53c4d0u: goto label_53c4d0;
        case 0x53c4d4u: goto label_53c4d4;
        case 0x53c4d8u: goto label_53c4d8;
        case 0x53c4dcu: goto label_53c4dc;
        case 0x53c4e0u: goto label_53c4e0;
        case 0x53c4e4u: goto label_53c4e4;
        case 0x53c4e8u: goto label_53c4e8;
        case 0x53c4ecu: goto label_53c4ec;
        case 0x53c4f0u: goto label_53c4f0;
        case 0x53c4f4u: goto label_53c4f4;
        case 0x53c4f8u: goto label_53c4f8;
        case 0x53c4fcu: goto label_53c4fc;
        case 0x53c500u: goto label_53c500;
        case 0x53c504u: goto label_53c504;
        case 0x53c508u: goto label_53c508;
        case 0x53c50cu: goto label_53c50c;
        case 0x53c510u: goto label_53c510;
        case 0x53c514u: goto label_53c514;
        case 0x53c518u: goto label_53c518;
        case 0x53c51cu: goto label_53c51c;
        case 0x53c520u: goto label_53c520;
        case 0x53c524u: goto label_53c524;
        case 0x53c528u: goto label_53c528;
        case 0x53c52cu: goto label_53c52c;
        case 0x53c530u: goto label_53c530;
        case 0x53c534u: goto label_53c534;
        case 0x53c538u: goto label_53c538;
        case 0x53c53cu: goto label_53c53c;
        case 0x53c540u: goto label_53c540;
        case 0x53c544u: goto label_53c544;
        case 0x53c548u: goto label_53c548;
        case 0x53c54cu: goto label_53c54c;
        case 0x53c550u: goto label_53c550;
        case 0x53c554u: goto label_53c554;
        case 0x53c558u: goto label_53c558;
        case 0x53c55cu: goto label_53c55c;
        case 0x53c560u: goto label_53c560;
        case 0x53c564u: goto label_53c564;
        case 0x53c568u: goto label_53c568;
        case 0x53c56cu: goto label_53c56c;
        case 0x53c570u: goto label_53c570;
        case 0x53c574u: goto label_53c574;
        case 0x53c578u: goto label_53c578;
        case 0x53c57cu: goto label_53c57c;
        case 0x53c580u: goto label_53c580;
        case 0x53c584u: goto label_53c584;
        case 0x53c588u: goto label_53c588;
        case 0x53c58cu: goto label_53c58c;
        case 0x53c590u: goto label_53c590;
        case 0x53c594u: goto label_53c594;
        case 0x53c598u: goto label_53c598;
        case 0x53c59cu: goto label_53c59c;
        case 0x53c5a0u: goto label_53c5a0;
        case 0x53c5a4u: goto label_53c5a4;
        case 0x53c5a8u: goto label_53c5a8;
        case 0x53c5acu: goto label_53c5ac;
        case 0x53c5b0u: goto label_53c5b0;
        case 0x53c5b4u: goto label_53c5b4;
        case 0x53c5b8u: goto label_53c5b8;
        case 0x53c5bcu: goto label_53c5bc;
        case 0x53c5c0u: goto label_53c5c0;
        case 0x53c5c4u: goto label_53c5c4;
        case 0x53c5c8u: goto label_53c5c8;
        case 0x53c5ccu: goto label_53c5cc;
        default: break;
    }

    ctx->pc = 0x53c210u;

label_53c210:
    // 0x53c210: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x53c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_53c214:
    // 0x53c214: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53c214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53c218:
    // 0x53c218: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x53c218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_53c21c:
    // 0x53c21c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x53c21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_53c220:
    // 0x53c220: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x53c220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_53c224:
    // 0x53c224: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x53c224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_53c228:
    // 0x53c228: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x53c228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_53c22c:
    // 0x53c22c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x53c22cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c230:
    // 0x53c230: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x53c230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_53c234:
    // 0x53c234: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x53c234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_53c238:
    // 0x53c238: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x53c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_53c23c:
    // 0x53c23c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x53c23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_53c240:
    // 0x53c240: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x53c240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_53c244:
    // 0x53c244: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x53c244u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_53c248:
    // 0x53c248: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x53c248u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_53c24c:
    // 0x53c24c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x53c24cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_53c250:
    // 0x53c250: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x53c250u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_53c254:
    // 0x53c254: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x53c254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_53c258:
    // 0x53c258: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x53c258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_53c25c:
    // 0x53c25c: 0x8c7589e0  lw          $s5, -0x7620($v1)
    ctx->pc = 0x53c25cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_53c260:
    // 0x53c260: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53c260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53c264:
    // 0x53c264: 0x8c7489f0  lw          $s4, -0x7610($v1)
    ctx->pc = 0x53c264u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_53c268:
    // 0x53c268: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53c268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53c26c:
    // 0x53c26c: 0x8c630cc0  lw          $v1, 0xCC0($v1)
    ctx->pc = 0x53c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3264)));
label_53c270:
    // 0x53c270: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x53c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_53c274:
    // 0x53c274: 0x106000c4  beqz        $v1, . + 4 + (0xC4 << 2)
label_53c278:
    if (ctx->pc == 0x53C278u) {
        ctx->pc = 0x53C278u;
            // 0x53c278: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x53C27Cu;
        goto label_53c27c;
    }
    ctx->pc = 0x53C274u;
    {
        const bool branch_taken_0x53c274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C274u;
            // 0x53c278: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c274) {
            ctx->pc = 0x53C588u;
            goto label_53c588;
        }
    }
    ctx->pc = 0x53C27Cu;
label_53c27c:
    // 0x53c27c: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x53c27cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_53c280:
    // 0x53c280: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x53c280u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_53c284:
    // 0x53c284: 0x27ded3c0  addiu       $fp, $fp, -0x2C40
    ctx->pc = 0x53c284u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955968));
label_53c288:
    // 0x53c288: 0x106000bf  beqz        $v1, . + 4 + (0xBF << 2)
label_53c28c:
    if (ctx->pc == 0x53C28Cu) {
        ctx->pc = 0x53C28Cu;
            // 0x53c28c: 0x2673d440  addiu       $s3, $s3, -0x2BC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956096));
        ctx->pc = 0x53C290u;
        goto label_53c290;
    }
    ctx->pc = 0x53C288u;
    {
        const bool branch_taken_0x53c288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C288u;
            // 0x53c28c: 0x2673d440  addiu       $s3, $s3, -0x2BC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c288) {
            ctx->pc = 0x53C588u;
            goto label_53c588;
        }
    }
    ctx->pc = 0x53C290u;
label_53c290:
    // 0x53c290: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x53c290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_53c294:
    // 0x53c294: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x53c294u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c298:
    // 0x53c298: 0xc475c060  lwc1        $f21, -0x3FA0($v1)
    ctx->pc = 0x53c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_53c29c:
    // 0x53c29c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x53c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_53c2a0:
    // 0x53c2a0: 0xc474c058  lwc1        $f20, -0x3FA8($v1)
    ctx->pc = 0x53c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_53c2a4:
    // 0x53c2a4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x53c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_53c2a8:
    // 0x53c2a8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x53c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_53c2ac:
    // 0x53c2ac: 0x8c870cc0  lw          $a3, 0xCC0($a0)
    ctx->pc = 0x53c2acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3264)));
label_53c2b0:
    // 0x53c2b0: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x53c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_53c2b4:
    // 0x53c2b4: 0x8ce80074  lw          $t0, 0x74($a3)
    ctx->pc = 0x53c2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
label_53c2b8:
    // 0x53c2b8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x53c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_53c2bc:
    // 0x53c2bc: 0x8c85d120  lw          $a1, -0x2EE0($a0)
    ctx->pc = 0x53c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
label_53c2c0:
    // 0x53c2c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53c2c4:
    // 0x53c2c4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x53c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_53c2c8:
    // 0x53c2c8: 0x8cc70130  lw          $a3, 0x130($a2)
    ctx->pc = 0x53c2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_53c2cc:
    // 0x53c2cc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x53c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_53c2d0:
    // 0x53c2d0: 0x2484d470  addiu       $a0, $a0, -0x2B90
    ctx->pc = 0x53c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956144));
label_53c2d4:
    // 0x53c2d4: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x53c2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_53c2d8:
    // 0x53c2d8: 0x1172821  addu        $a1, $t0, $s7
    ctx->pc = 0x53c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_53c2dc:
    // 0x53c2dc: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x53c2dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_53c2e0:
    // 0x53c2e0: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x53c2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_53c2e4:
    // 0x53c2e4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x53c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_53c2e8:
    // 0x53c2e8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x53c2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_53c2ec:
    // 0x53c2ec: 0x8065007a  lb          $a1, 0x7A($v1)
    ctx->pc = 0x53c2ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_53c2f0:
    // 0x53c2f0: 0x24d00150  addiu       $s0, $a2, 0x150
    ctx->pc = 0x53c2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
label_53c2f4:
    // 0x53c2f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x53c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_53c2f8:
    // 0x53c2f8: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x53c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_53c2fc:
    // 0x53c2fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x53c2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_53c300:
    // 0x53c300: 0xc498fffc  lwc1        $f24, -0x4($a0)
    ctx->pc = 0x53c300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_53c304:
    // 0x53c304: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
label_53c308:
    if (ctx->pc == 0x53C308u) {
        ctx->pc = 0x53C308u;
            // 0x53c308: 0x24d10200  addiu       $s1, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->pc = 0x53C30Cu;
        goto label_53c30c;
    }
    ctx->pc = 0x53C304u;
    {
        const bool branch_taken_0x53c304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C304u;
            // 0x53c308: 0x24d10200  addiu       $s1, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c304) {
            ctx->pc = 0x53C570u;
            goto label_53c570;
        }
    }
    ctx->pc = 0x53C30Cu;
label_53c30c:
    // 0x53c30c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c310:
    // 0x53c310: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c314:
    // 0x53c314: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x53c314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_53c318:
    // 0x53c318: 0x320f809  jalr        $t9
label_53c31c:
    if (ctx->pc == 0x53C31Cu) {
        ctx->pc = 0x53C31Cu;
            // 0x53c31c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53C320u;
        goto label_53c320;
    }
    ctx->pc = 0x53C318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C320u);
        ctx->pc = 0x53C31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C318u;
            // 0x53c31c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C320u; }
            if (ctx->pc != 0x53C320u) { return; }
        }
        }
    }
    ctx->pc = 0x53C320u;
label_53c320:
    // 0x53c320: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c324:
    // 0x53c324: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c328:
    // 0x53c328: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x53c328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_53c32c:
    // 0x53c32c: 0x320f809  jalr        $t9
label_53c330:
    if (ctx->pc == 0x53C330u) {
        ctx->pc = 0x53C330u;
            // 0x53c330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53C334u;
        goto label_53c334;
    }
    ctx->pc = 0x53C32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C334u);
        ctx->pc = 0x53C330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C32Cu;
            // 0x53c330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C334u; }
            if (ctx->pc != 0x53C334u) { return; }
        }
        }
    }
    ctx->pc = 0x53C334u;
label_53c334:
    // 0x53c334: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x53c334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53c338:
    // 0x53c338: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x53c338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_53c33c:
    // 0x53c33c: 0xc64e0018  lwc1        $f14, 0x18($s2)
    ctx->pc = 0x53c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_53c340:
    // 0x53c340: 0xc04cbd8  jal         func_132F60
label_53c344:
    if (ctx->pc == 0x53C344u) {
        ctx->pc = 0x53C344u;
            // 0x53c344: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x53C348u;
        goto label_53c348;
    }
    ctx->pc = 0x53C340u;
    SET_GPR_U32(ctx, 31, 0x53C348u);
    ctx->pc = 0x53C344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C340u;
            // 0x53c344: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C348u; }
        if (ctx->pc != 0x53C348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C348u; }
        if (ctx->pc != 0x53C348u) { return; }
    }
    ctx->pc = 0x53C348u;
label_53c348:
    // 0x53c348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x53c348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53c34c:
    // 0x53c34c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x53c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_53c350:
    // 0x53c350: 0xc075094  jal         func_1D4250
label_53c354:
    if (ctx->pc == 0x53C354u) {
        ctx->pc = 0x53C354u;
            // 0x53c354: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x53C358u;
        goto label_53c358;
    }
    ctx->pc = 0x53C350u;
    SET_GPR_U32(ctx, 31, 0x53C358u);
    ctx->pc = 0x53C354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C350u;
            // 0x53c354: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C358u; }
        if (ctx->pc != 0x53C358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C358u; }
        if (ctx->pc != 0x53C358u) { return; }
    }
    ctx->pc = 0x53C358u;
label_53c358:
    // 0x53c358: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x53c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53c35c:
    // 0x53c35c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x53c35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53c360:
    // 0x53c360: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53c364:
    if (ctx->pc == 0x53C364u) {
        ctx->pc = 0x53C364u;
            // 0x53c364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53C368u;
        goto label_53c368;
    }
    ctx->pc = 0x53C360u;
    {
        const bool branch_taken_0x53c360 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53C364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C360u;
            // 0x53c364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c360) {
            ctx->pc = 0x53C36Cu;
            goto label_53c36c;
        }
    }
    ctx->pc = 0x53C368u;
label_53c368:
    // 0x53c368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x53c368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c36c:
    // 0x53c36c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x53c36cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53c370:
    // 0x53c370: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x53c370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_53c374:
    // 0x53c374: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53c378:
    if (ctx->pc == 0x53C378u) {
        ctx->pc = 0x53C378u;
            // 0x53c378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53C37Cu;
        goto label_53c37c;
    }
    ctx->pc = 0x53C374u;
    {
        const bool branch_taken_0x53c374 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53C378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C374u;
            // 0x53c378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c374) {
            ctx->pc = 0x53C380u;
            goto label_53c380;
        }
    }
    ctx->pc = 0x53C37Cu;
label_53c37c:
    // 0x53c37c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x53c37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c380:
    // 0x53c380: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x53c380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_53c384:
    // 0x53c384: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x53c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_53c388:
    // 0x53c388: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_53c38c:
    if (ctx->pc == 0x53C38Cu) {
        ctx->pc = 0x53C390u;
        goto label_53c390;
    }
    ctx->pc = 0x53C388u;
    {
        const bool branch_taken_0x53c388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c388) {
            ctx->pc = 0x53C548u;
            goto label_53c548;
        }
    }
    ctx->pc = 0x53C390u;
label_53c390:
    // 0x53c390: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x53c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_53c394:
    // 0x53c394: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c398:
    // 0x53c398: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x53c398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_53c39c:
    // 0x53c39c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c3a0:
    // 0x53c3a0: 0x27a500fc  addiu       $a1, $sp, 0xFC
    ctx->pc = 0x53c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_53c3a4:
    // 0x53c3a4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x53c3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_53c3a8:
    // 0x53c3a8: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x53c3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_53c3ac:
    // 0x53c3ac: 0x320f809  jalr        $t9
label_53c3b0:
    if (ctx->pc == 0x53C3B0u) {
        ctx->pc = 0x53C3B0u;
            // 0x53c3b0: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x53C3B4u;
        goto label_53c3b4;
    }
    ctx->pc = 0x53C3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C3B4u);
        ctx->pc = 0x53C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C3ACu;
            // 0x53c3b0: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C3B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C3B4u; }
            if (ctx->pc != 0x53C3B4u) { return; }
        }
        }
    }
    ctx->pc = 0x53C3B4u;
label_53c3b4:
    // 0x53c3b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x53c3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53c3b8:
    // 0x53c3b8: 0x87b000fe  lh          $s0, 0xFE($sp)
    ctx->pc = 0x53c3b8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 254)));
label_53c3bc:
    // 0x53c3bc: 0x87b100fc  lh          $s1, 0xFC($sp)
    ctx->pc = 0x53c3bcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 252)));
label_53c3c0:
    // 0x53c3c0: 0xc04cc1c  jal         func_133070
label_53c3c4:
    if (ctx->pc == 0x53C3C4u) {
        ctx->pc = 0x53C3C4u;
            // 0x53c3c4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x53C3C8u;
        goto label_53c3c8;
    }
    ctx->pc = 0x53C3C0u;
    SET_GPR_U32(ctx, 31, 0x53C3C8u);
    ctx->pc = 0x53C3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C3C0u;
            // 0x53c3c4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C3C8u; }
        if (ctx->pc != 0x53C3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C3C8u; }
        if (ctx->pc != 0x53C3C8u) { return; }
    }
    ctx->pc = 0x53C3C8u;
label_53c3c8:
    // 0x53c3c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x53c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_53c3cc:
    // 0x53c3cc: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x53c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_53c3d0:
    // 0x53c3d0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x53c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_53c3d4:
    // 0x53c3d4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x53c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_53c3d8:
    // 0x53c3d8: 0x1a20005b  blez        $s1, . + 4 + (0x5B << 2)
label_53c3dc:
    if (ctx->pc == 0x53C3DCu) {
        ctx->pc = 0x53C3DCu;
            // 0x53c3dc: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x53C3E0u;
        goto label_53c3e0;
    }
    ctx->pc = 0x53C3D8u;
    {
        const bool branch_taken_0x53c3d8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x53C3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C3D8u;
            // 0x53c3dc: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c3d8) {
            ctx->pc = 0x53C548u;
            goto label_53c548;
        }
    }
    ctx->pc = 0x53C3E0u;
label_53c3e0:
    // 0x53c3e0: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x53c3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_53c3e4:
    // 0x53c3e4: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
label_53c3e8:
    if (ctx->pc == 0x53C3E8u) {
        ctx->pc = 0x53C3ECu;
        goto label_53c3ec;
    }
    ctx->pc = 0x53C3E4u;
    {
        const bool branch_taken_0x53c3e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c3e4) {
            ctx->pc = 0x53C548u;
            goto label_53c548;
        }
    }
    ctx->pc = 0x53C3ECu;
label_53c3ec:
    // 0x53c3ec: 0x1a000056  blez        $s0, . + 4 + (0x56 << 2)
label_53c3f0:
    if (ctx->pc == 0x53C3F0u) {
        ctx->pc = 0x53C3F4u;
        goto label_53c3f4;
    }
    ctx->pc = 0x53C3ECu;
    {
        const bool branch_taken_0x53c3ec = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x53c3ec) {
            ctx->pc = 0x53C548u;
            goto label_53c548;
        }
    }
    ctx->pc = 0x53C3F4u;
label_53c3f4:
    // 0x53c3f4: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x53c3f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_53c3f8:
    // 0x53c3f8: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
label_53c3fc:
    if (ctx->pc == 0x53C3FCu) {
        ctx->pc = 0x53C400u;
        goto label_53c400;
    }
    ctx->pc = 0x53C3F8u;
    {
        const bool branch_taken_0x53c3f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53c3f8) {
            ctx->pc = 0x53C548u;
            goto label_53c548;
        }
    }
    ctx->pc = 0x53C400u;
label_53c400:
    // 0x53c400: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x53c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53c404:
    // 0x53c404: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x53c404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_53c408:
    // 0x53c408: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x53c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53c40c:
    // 0x53c40c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53c40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c410:
    // 0x53c410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x53c410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53c414:
    // 0x53c414: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x53c414u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
label_53c418:
    // 0x53c418: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53c418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53c41c:
    // 0x53c41c: 0x8c44aad0  lw          $a0, -0x5530($v0)
    ctx->pc = 0x53c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945488)));
label_53c420:
    // 0x53c420: 0x46020e42  mul.s       $f25, $f1, $f2
    ctx->pc = 0x53c420u;
    ctx->f[25] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_53c424:
    // 0x53c424: 0xc0506ac  jal         func_141AB0
label_53c428:
    if (ctx->pc == 0x53C428u) {
        ctx->pc = 0x53C428u;
            // 0x53c428: 0x46180582  mul.s       $f22, $f0, $f24 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->pc = 0x53C42Cu;
        goto label_53c42c;
    }
    ctx->pc = 0x53C424u;
    SET_GPR_U32(ctx, 31, 0x53C42Cu);
    ctx->pc = 0x53C428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C424u;
            // 0x53c428: 0x46180582  mul.s       $f22, $f0, $f24 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C42Cu; }
        if (ctx->pc != 0x53C42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C42Cu; }
        if (ctx->pc != 0x53C42Cu) { return; }
    }
    ctx->pc = 0x53C42Cu;
label_53c42c:
    // 0x53c42c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x53c42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_53c430:
    // 0x53c430: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x53c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_53c434:
    // 0x53c434: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x53c434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_53c438:
    // 0x53c438: 0x320f809  jalr        $t9
label_53c43c:
    if (ctx->pc == 0x53C43Cu) {
        ctx->pc = 0x53C43Cu;
            // 0x53c43c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x53C440u;
        goto label_53c440;
    }
    ctx->pc = 0x53C438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C440u);
        ctx->pc = 0x53C43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C438u;
            // 0x53c43c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C440u; }
            if (ctx->pc != 0x53C440u) { return; }
        }
        }
    }
    ctx->pc = 0x53C440u;
label_53c440:
    // 0x53c440: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x53c440u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c444:
    // 0x53c444: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x53c444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_53c448:
    // 0x53c448: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x53c448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_53c44c:
    // 0x53c44c: 0x87c20002  lh          $v0, 0x2($fp)
    ctx->pc = 0x53c44cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_53c450:
    // 0x53c450: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x53c450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53c454:
    // 0x53c454: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x53c454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53c458:
    // 0x53c458: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x53c458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_53c45c:
    // 0x53c45c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x53c45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c460:
    // 0x53c460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53c460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c464:
    // 0x53c464: 0x0  nop
    ctx->pc = 0x53c464u;
    // NOP
label_53c468:
    // 0x53c468: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x53c468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_53c46c:
    // 0x53c46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x53c46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c470:
    // 0x53c470: 0x0  nop
    ctx->pc = 0x53c470u;
    // NOP
label_53c474:
    // 0x53c474: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x53c474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_53c478:
    // 0x53c478: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x53c478u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c47c:
    // 0x53c47c: 0x0  nop
    ctx->pc = 0x53c47cu;
    // NOP
label_53c480:
    // 0x53c480: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x53c480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_53c484:
    // 0x53c484: 0x46190b01  sub.s       $f12, $f1, $f25
    ctx->pc = 0x53c484u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[25]);
label_53c488:
    // 0x53c488: 0x46190b80  add.s       $f14, $f1, $f25
    ctx->pc = 0x53c488u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[25]);
label_53c48c:
    // 0x53c48c: 0x46167b41  sub.s       $f13, $f15, $f22
    ctx->pc = 0x53c48cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[22]);
label_53c490:
    // 0x53c490: 0xc0bc284  jal         func_2F0A10
label_53c494:
    if (ctx->pc == 0x53C494u) {
        ctx->pc = 0x53C494u;
            // 0x53c494: 0x4600bc86  mov.s       $f18, $f23 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x53C498u;
        goto label_53c498;
    }
    ctx->pc = 0x53C490u;
    SET_GPR_U32(ctx, 31, 0x53C498u);
    ctx->pc = 0x53C494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C490u;
            // 0x53c494: 0x4600bc86  mov.s       $f18, $f23 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C498u; }
        if (ctx->pc != 0x53C498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C498u; }
        if (ctx->pc != 0x53C498u) { return; }
    }
    ctx->pc = 0x53C498u;
label_53c498:
    // 0x53c498: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x53c498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_53c49c:
    // 0x53c49c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x53c49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_53c4a0:
    // 0x53c4a0: 0x320f809  jalr        $t9
label_53c4a4:
    if (ctx->pc == 0x53C4A4u) {
        ctx->pc = 0x53C4A4u;
            // 0x53c4a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C4A8u;
        goto label_53c4a8;
    }
    ctx->pc = 0x53C4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C4A8u);
        ctx->pc = 0x53C4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C4A0u;
            // 0x53c4a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C4A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C4A8u; }
            if (ctx->pc != 0x53C4A8u) { return; }
        }
        }
    }
    ctx->pc = 0x53C4A8u;
label_53c4a8:
    // 0x53c4a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x53c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_53c4ac:
    // 0x53c4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x53c4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c4b0:
    // 0x53c4b0: 0x0  nop
    ctx->pc = 0x53c4b0u;
    // NOP
label_53c4b4:
    // 0x53c4b4: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x53c4b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53c4b8:
    // 0x53c4b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_53c4bc:
    if (ctx->pc == 0x53C4BCu) {
        ctx->pc = 0x53C4C0u;
        goto label_53c4c0;
    }
    ctx->pc = 0x53C4B8u;
    {
        const bool branch_taken_0x53c4b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x53c4b8) {
            ctx->pc = 0x53C4C8u;
            goto label_53c4c8;
        }
    }
    ctx->pc = 0x53C4C0u;
label_53c4c0:
    // 0x53c4c0: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x53c4c0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_53c4c4:
    // 0x53c4c4: 0x0  nop
    ctx->pc = 0x53c4c4u;
    // NOP
label_53c4c8:
    // 0x53c4c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x53c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_53c4cc:
    // 0x53c4cc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x53c4ccu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c4d0:
    // 0x53c4d0: 0x0  nop
    ctx->pc = 0x53c4d0u;
    // NOP
label_53c4d4:
    // 0x53c4d4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x53c4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_53c4d8:
    // 0x53c4d8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x53c4d8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c4dc:
    // 0x53c4dc: 0x0  nop
    ctx->pc = 0x53c4dcu;
    // NOP
label_53c4e0:
    // 0x53c4e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x53c4e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_53c4e4:
    // 0x53c4e4: 0x46160341  sub.s       $f13, $f0, $f22
    ctx->pc = 0x53c4e4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_53c4e8:
    // 0x53c4e8: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x53c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53c4ec:
    // 0x53c4ec: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x53c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53c4f0:
    // 0x53c4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x53c4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53c4f4:
    // 0x53c4f4: 0x0  nop
    ctx->pc = 0x53c4f4u;
    // NOP
label_53c4f8:
    // 0x53c4f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x53c4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53c4fc:
    // 0x53c4fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_53c500:
    if (ctx->pc == 0x53C500u) {
        ctx->pc = 0x53C500u;
            // 0x53c500: 0x46021b00  add.s       $f12, $f3, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x53C504u;
        goto label_53c504;
    }
    ctx->pc = 0x53C4FCu;
    {
        const bool branch_taken_0x53c4fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53C500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C4FCu;
            // 0x53c500: 0x46021b00  add.s       $f12, $f3, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c4fc) {
            ctx->pc = 0x53C514u;
            goto label_53c514;
        }
    }
    ctx->pc = 0x53C504u;
label_53c504:
    // 0x53c504: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x53c504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_53c508:
    // 0x53c508: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x53c508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_53c50c:
    // 0x53c50c: 0x10000008  b           . + 4 + (0x8 << 2)
label_53c510:
    if (ctx->pc == 0x53C510u) {
        ctx->pc = 0x53C510u;
            // 0x53c510: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x53C514u;
        goto label_53c514;
    }
    ctx->pc = 0x53C50Cu;
    {
        const bool branch_taken_0x53c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C50Cu;
            // 0x53c510: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c50c) {
            ctx->pc = 0x53C530u;
            goto label_53c530;
        }
    }
    ctx->pc = 0x53C514u;
label_53c514:
    // 0x53c514: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x53c514u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_53c518:
    // 0x53c518: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x53c518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_53c51c:
    // 0x53c51c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x53c51cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_53c520:
    // 0x53c520: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x53c520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_53c524:
    // 0x53c524: 0x0  nop
    ctx->pc = 0x53c524u;
    // NOP
label_53c528:
    // 0x53c528: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x53c528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_53c52c:
    // 0x53c52c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x53c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_53c530:
    // 0x53c530: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x53c530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_53c534:
    // 0x53c534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x53c534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53c538:
    // 0x53c538: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x53c538u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_53c53c:
    // 0x53c53c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x53c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_53c540:
    // 0x53c540: 0xc156bfc  jal         func_55AFF0
label_53c544:
    if (ctx->pc == 0x53C544u) {
        ctx->pc = 0x53C544u;
            // 0x53c544: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x53C548u;
        goto label_53c548;
    }
    ctx->pc = 0x53C540u;
    SET_GPR_U32(ctx, 31, 0x53C548u);
    ctx->pc = 0x53C544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C540u;
            // 0x53c544: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55AFF0u;
    if (runtime->hasFunction(0x55AFF0u)) {
        auto targetFn = runtime->lookupFunction(0x55AFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C548u; }
        if (ctx->pc != 0x53C548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055AFF0_0x55aff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C548u; }
        if (ctx->pc != 0x53C548u) { return; }
    }
    ctx->pc = 0x53C548u;
label_53c548:
    // 0x53c548: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c54c:
    // 0x53c54c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c550:
    // 0x53c550: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x53c550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_53c554:
    // 0x53c554: 0x320f809  jalr        $t9
label_53c558:
    if (ctx->pc == 0x53C558u) {
        ctx->pc = 0x53C558u;
            // 0x53c558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53C55Cu;
        goto label_53c55c;
    }
    ctx->pc = 0x53C554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C55Cu);
        ctx->pc = 0x53C558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C554u;
            // 0x53c558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C55Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C55Cu; }
            if (ctx->pc != 0x53C55Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53C55Cu;
label_53c55c:
    // 0x53c55c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53c55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53c560:
    // 0x53c560: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53c564:
    // 0x53c564: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x53c564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_53c568:
    // 0x53c568: 0x320f809  jalr        $t9
label_53c56c:
    if (ctx->pc == 0x53C56Cu) {
        ctx->pc = 0x53C56Cu;
            // 0x53c56c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C570u;
        goto label_53c570;
    }
    ctx->pc = 0x53C568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C570u);
        ctx->pc = 0x53C56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C568u;
            // 0x53c56c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C570u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C570u; }
            if (ctx->pc != 0x53C570u) { return; }
        }
        }
    }
    ctx->pc = 0x53C570u;
label_53c570:
    // 0x53c570: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x53c570u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_53c574:
    // 0x53c574: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x53c574u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_53c578:
    // 0x53c578: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x53c578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_53c57c:
    // 0x53c57c: 0x1460ff49  bnez        $v1, . + 4 + (-0xB7 << 2)
label_53c580:
    if (ctx->pc == 0x53C580u) {
        ctx->pc = 0x53C580u;
            // 0x53c580: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->pc = 0x53C584u;
        goto label_53c584;
    }
    ctx->pc = 0x53C57Cu;
    {
        const bool branch_taken_0x53c57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53C580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C57Cu;
            // 0x53c580: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c57c) {
            ctx->pc = 0x53C2A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53c2a4;
        }
    }
    ctx->pc = 0x53C584u;
label_53c584:
    // 0x53c584: 0x0  nop
    ctx->pc = 0x53c584u;
    // NOP
label_53c588:
    // 0x53c588: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x53c588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_53c58c:
    // 0x53c58c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x53c58cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_53c590:
    // 0x53c590: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x53c590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_53c594:
    // 0x53c594: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x53c594u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_53c598:
    // 0x53c598: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x53c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_53c59c:
    // 0x53c59c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x53c59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_53c5a0:
    // 0x53c5a0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x53c5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_53c5a4:
    // 0x53c5a4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x53c5a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_53c5a8:
    // 0x53c5a8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x53c5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_53c5ac:
    // 0x53c5ac: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x53c5acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_53c5b0:
    // 0x53c5b0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x53c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_53c5b4:
    // 0x53c5b4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x53c5b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53c5b8:
    // 0x53c5b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x53c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_53c5bc:
    // 0x53c5bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x53c5bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53c5c0:
    // 0x53c5c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x53c5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53c5c4:
    // 0x53c5c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x53c5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53c5c8:
    // 0x53c5c8: 0x3e00008  jr          $ra
label_53c5cc:
    if (ctx->pc == 0x53C5CCu) {
        ctx->pc = 0x53C5CCu;
            // 0x53c5cc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x53C5D0u;
        goto label_fallthrough_0x53c5c8;
    }
    ctx->pc = 0x53C5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53C5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C5C8u;
            // 0x53c5cc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x53c5c8:
    ctx->pc = 0x53C5D0u;
}
