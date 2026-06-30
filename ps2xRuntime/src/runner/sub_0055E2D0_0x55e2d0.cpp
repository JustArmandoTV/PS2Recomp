#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055E2D0
// Address: 0x55e2d0 - 0x55e490
void sub_0055E2D0_0x55e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055E2D0_0x55e2d0");
#endif

    switch (ctx->pc) {
        case 0x55e2d0u: goto label_55e2d0;
        case 0x55e2d4u: goto label_55e2d4;
        case 0x55e2d8u: goto label_55e2d8;
        case 0x55e2dcu: goto label_55e2dc;
        case 0x55e2e0u: goto label_55e2e0;
        case 0x55e2e4u: goto label_55e2e4;
        case 0x55e2e8u: goto label_55e2e8;
        case 0x55e2ecu: goto label_55e2ec;
        case 0x55e2f0u: goto label_55e2f0;
        case 0x55e2f4u: goto label_55e2f4;
        case 0x55e2f8u: goto label_55e2f8;
        case 0x55e2fcu: goto label_55e2fc;
        case 0x55e300u: goto label_55e300;
        case 0x55e304u: goto label_55e304;
        case 0x55e308u: goto label_55e308;
        case 0x55e30cu: goto label_55e30c;
        case 0x55e310u: goto label_55e310;
        case 0x55e314u: goto label_55e314;
        case 0x55e318u: goto label_55e318;
        case 0x55e31cu: goto label_55e31c;
        case 0x55e320u: goto label_55e320;
        case 0x55e324u: goto label_55e324;
        case 0x55e328u: goto label_55e328;
        case 0x55e32cu: goto label_55e32c;
        case 0x55e330u: goto label_55e330;
        case 0x55e334u: goto label_55e334;
        case 0x55e338u: goto label_55e338;
        case 0x55e33cu: goto label_55e33c;
        case 0x55e340u: goto label_55e340;
        case 0x55e344u: goto label_55e344;
        case 0x55e348u: goto label_55e348;
        case 0x55e34cu: goto label_55e34c;
        case 0x55e350u: goto label_55e350;
        case 0x55e354u: goto label_55e354;
        case 0x55e358u: goto label_55e358;
        case 0x55e35cu: goto label_55e35c;
        case 0x55e360u: goto label_55e360;
        case 0x55e364u: goto label_55e364;
        case 0x55e368u: goto label_55e368;
        case 0x55e36cu: goto label_55e36c;
        case 0x55e370u: goto label_55e370;
        case 0x55e374u: goto label_55e374;
        case 0x55e378u: goto label_55e378;
        case 0x55e37cu: goto label_55e37c;
        case 0x55e380u: goto label_55e380;
        case 0x55e384u: goto label_55e384;
        case 0x55e388u: goto label_55e388;
        case 0x55e38cu: goto label_55e38c;
        case 0x55e390u: goto label_55e390;
        case 0x55e394u: goto label_55e394;
        case 0x55e398u: goto label_55e398;
        case 0x55e39cu: goto label_55e39c;
        case 0x55e3a0u: goto label_55e3a0;
        case 0x55e3a4u: goto label_55e3a4;
        case 0x55e3a8u: goto label_55e3a8;
        case 0x55e3acu: goto label_55e3ac;
        case 0x55e3b0u: goto label_55e3b0;
        case 0x55e3b4u: goto label_55e3b4;
        case 0x55e3b8u: goto label_55e3b8;
        case 0x55e3bcu: goto label_55e3bc;
        case 0x55e3c0u: goto label_55e3c0;
        case 0x55e3c4u: goto label_55e3c4;
        case 0x55e3c8u: goto label_55e3c8;
        case 0x55e3ccu: goto label_55e3cc;
        case 0x55e3d0u: goto label_55e3d0;
        case 0x55e3d4u: goto label_55e3d4;
        case 0x55e3d8u: goto label_55e3d8;
        case 0x55e3dcu: goto label_55e3dc;
        case 0x55e3e0u: goto label_55e3e0;
        case 0x55e3e4u: goto label_55e3e4;
        case 0x55e3e8u: goto label_55e3e8;
        case 0x55e3ecu: goto label_55e3ec;
        case 0x55e3f0u: goto label_55e3f0;
        case 0x55e3f4u: goto label_55e3f4;
        case 0x55e3f8u: goto label_55e3f8;
        case 0x55e3fcu: goto label_55e3fc;
        case 0x55e400u: goto label_55e400;
        case 0x55e404u: goto label_55e404;
        case 0x55e408u: goto label_55e408;
        case 0x55e40cu: goto label_55e40c;
        case 0x55e410u: goto label_55e410;
        case 0x55e414u: goto label_55e414;
        case 0x55e418u: goto label_55e418;
        case 0x55e41cu: goto label_55e41c;
        case 0x55e420u: goto label_55e420;
        case 0x55e424u: goto label_55e424;
        case 0x55e428u: goto label_55e428;
        case 0x55e42cu: goto label_55e42c;
        case 0x55e430u: goto label_55e430;
        case 0x55e434u: goto label_55e434;
        case 0x55e438u: goto label_55e438;
        case 0x55e43cu: goto label_55e43c;
        case 0x55e440u: goto label_55e440;
        case 0x55e444u: goto label_55e444;
        case 0x55e448u: goto label_55e448;
        case 0x55e44cu: goto label_55e44c;
        case 0x55e450u: goto label_55e450;
        case 0x55e454u: goto label_55e454;
        case 0x55e458u: goto label_55e458;
        case 0x55e45cu: goto label_55e45c;
        case 0x55e460u: goto label_55e460;
        case 0x55e464u: goto label_55e464;
        case 0x55e468u: goto label_55e468;
        case 0x55e46cu: goto label_55e46c;
        case 0x55e470u: goto label_55e470;
        case 0x55e474u: goto label_55e474;
        case 0x55e478u: goto label_55e478;
        case 0x55e47cu: goto label_55e47c;
        case 0x55e480u: goto label_55e480;
        case 0x55e484u: goto label_55e484;
        case 0x55e488u: goto label_55e488;
        case 0x55e48cu: goto label_55e48c;
        default: break;
    }

    ctx->pc = 0x55e2d0u;

label_55e2d0:
    // 0x55e2d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x55e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_55e2d4:
    // 0x55e2d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e2d8:
    // 0x55e2d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x55e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_55e2dc:
    // 0x55e2dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x55e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_55e2e0:
    // 0x55e2e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x55e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_55e2e4:
    // 0x55e2e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55e2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55e2e8:
    // 0x55e2e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x55e2e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55e2ec:
    // 0x55e2ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55e2f0:
    // 0x55e2f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x55e2f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_55e2f4:
    // 0x55e2f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55e2f8:
    // 0x55e2f8: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x55e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_55e2fc:
    // 0x55e2fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55e2fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55e300:
    // 0x55e300: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x55e300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_55e304:
    // 0x55e304: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x55e304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_55e308:
    // 0x55e308: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x55e308u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_55e30c:
    // 0x55e30c: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x55e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_55e310:
    // 0x55e310: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x55e310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_55e314:
    // 0x55e314: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x55e314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_55e318:
    // 0x55e318: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x55e318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_55e31c:
    // 0x55e31c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x55e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_55e320:
    // 0x55e320: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x55e320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_55e324:
    // 0x55e324: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x55e324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_55e328:
    // 0x55e328: 0xc0a7a88  jal         func_29EA20
label_55e32c:
    if (ctx->pc == 0x55E32Cu) {
        ctx->pc = 0x55E32Cu;
            // 0x55e32c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x55E330u;
        goto label_55e330;
    }
    ctx->pc = 0x55E328u;
    SET_GPR_U32(ctx, 31, 0x55E330u);
    ctx->pc = 0x55E32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E328u;
            // 0x55e32c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E330u; }
        if (ctx->pc != 0x55E330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E330u; }
        if (ctx->pc != 0x55E330u) { return; }
    }
    ctx->pc = 0x55E330u;
label_55e330:
    // 0x55e330: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x55e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_55e334:
    // 0x55e334: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x55e334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e338:
    // 0x55e338: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_55e33c:
    if (ctx->pc == 0x55E33Cu) {
        ctx->pc = 0x55E33Cu;
            // 0x55e33c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55E340u;
        goto label_55e340;
    }
    ctx->pc = 0x55E338u;
    {
        const bool branch_taken_0x55e338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E338u;
            // 0x55e33c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e338) {
            ctx->pc = 0x55E34Cu;
            goto label_55e34c;
        }
    }
    ctx->pc = 0x55E340u;
label_55e340:
    // 0x55e340: 0xc0876f0  jal         func_21DBC0
label_55e344:
    if (ctx->pc == 0x55E344u) {
        ctx->pc = 0x55E344u;
            // 0x55e344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E348u;
        goto label_55e348;
    }
    ctx->pc = 0x55E340u;
    SET_GPR_U32(ctx, 31, 0x55E348u);
    ctx->pc = 0x55E344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E340u;
            // 0x55e344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBC0u;
    if (runtime->hasFunction(0x21DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E348u; }
        if (ctx->pc != 0x55E348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021DBC0_0x21dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E348u; }
        if (ctx->pc != 0x55E348u) { return; }
    }
    ctx->pc = 0x55E348u;
label_55e348:
    // 0x55e348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x55e348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e34c:
    // 0x55e34c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x55e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_55e350:
    // 0x55e350: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x55e350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_55e354:
    // 0x55e354: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x55e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_55e358:
    // 0x55e358: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x55e358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_55e35c:
    // 0x55e35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55e35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55e360:
    // 0x55e360: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x55e360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_55e364:
    // 0x55e364: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x55e364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_55e368:
    // 0x55e368: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x55e368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
label_55e36c:
    // 0x55e36c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x55e36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_55e370:
    // 0x55e370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x55e370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55e374:
    // 0x55e374: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x55e374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55e378:
    // 0x55e378: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x55e378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_55e37c:
    // 0x55e37c: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x55e37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_55e380:
    // 0x55e380: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x55e380u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_55e384:
    // 0x55e384: 0xc087730  jal         func_21DCC0
label_55e388:
    if (ctx->pc == 0x55E388u) {
        ctx->pc = 0x55E388u;
            // 0x55e388: 0xe6200084  swc1        $f0, 0x84($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->pc = 0x55E38Cu;
        goto label_55e38c;
    }
    ctx->pc = 0x55E384u;
    SET_GPR_U32(ctx, 31, 0x55E38Cu);
    ctx->pc = 0x55E388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E384u;
            // 0x55e388: 0xe6200084  swc1        $f0, 0x84($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DCC0u;
    if (runtime->hasFunction(0x21DCC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E38Cu; }
        if (ctx->pc != 0x55E38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021DCC0_0x21dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E38Cu; }
        if (ctx->pc != 0x55E38Cu) { return; }
    }
    ctx->pc = 0x55E38Cu;
label_55e38c:
    // 0x55e38c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e390:
    // 0x55e390: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x55e390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_55e394:
    // 0x55e394: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x55e394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_55e398:
    // 0x55e398: 0xc0a7a88  jal         func_29EA20
label_55e39c:
    if (ctx->pc == 0x55E39Cu) {
        ctx->pc = 0x55E39Cu;
            // 0x55e39c: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x55E3A0u;
        goto label_55e3a0;
    }
    ctx->pc = 0x55E398u;
    SET_GPR_U32(ctx, 31, 0x55E3A0u);
    ctx->pc = 0x55E39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E398u;
            // 0x55e39c: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E3A0u; }
        if (ctx->pc != 0x55E3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E3A0u; }
        if (ctx->pc != 0x55E3A0u) { return; }
    }
    ctx->pc = 0x55E3A0u;
label_55e3a0:
    // 0x55e3a0: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x55e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_55e3a4:
    // 0x55e3a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x55e3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e3a8:
    // 0x55e3a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_55e3ac:
    if (ctx->pc == 0x55E3ACu) {
        ctx->pc = 0x55E3ACu;
            // 0x55e3ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55E3B0u;
        goto label_55e3b0;
    }
    ctx->pc = 0x55E3A8u;
    {
        const bool branch_taken_0x55e3a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E3A8u;
            // 0x55e3ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e3a8) {
            ctx->pc = 0x55E3CCu;
            goto label_55e3cc;
        }
    }
    ctx->pc = 0x55E3B0u;
label_55e3b0:
    // 0x55e3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55e3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55e3b4:
    // 0x55e3b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x55e3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55e3b8:
    // 0x55e3b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x55e3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55e3bc:
    // 0x55e3bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x55e3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55e3c0:
    // 0x55e3c0: 0xc087e24  jal         func_21F890
label_55e3c4:
    if (ctx->pc == 0x55E3C4u) {
        ctx->pc = 0x55E3C4u;
            // 0x55e3c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55E3C8u;
        goto label_55e3c8;
    }
    ctx->pc = 0x55E3C0u;
    SET_GPR_U32(ctx, 31, 0x55E3C8u);
    ctx->pc = 0x55E3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E3C0u;
            // 0x55e3c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F890u;
    if (runtime->hasFunction(0x21F890u)) {
        auto targetFn = runtime->lookupFunction(0x21F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E3C8u; }
        if (ctx->pc != 0x55E3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F890_0x21f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E3C8u; }
        if (ctx->pc != 0x55E3C8u) { return; }
    }
    ctx->pc = 0x55E3C8u;
label_55e3c8:
    // 0x55e3c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x55e3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55e3cc:
    // 0x55e3cc: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x55e3ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_55e3d0:
    // 0x55e3d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_55e3d4:
    if (ctx->pc == 0x55E3D4u) {
        ctx->pc = 0x55E3D8u;
        goto label_55e3d8;
    }
    ctx->pc = 0x55E3D0u;
    {
        const bool branch_taken_0x55e3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55e3d0) {
            ctx->pc = 0x55E410u;
            goto label_55e410;
        }
    }
    ctx->pc = 0x55E3D8u;
label_55e3d8:
    // 0x55e3d8: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x55e3d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_55e3dc:
    // 0x55e3dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x55e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_55e3e0:
    // 0x55e3e0: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x55e3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_55e3e4:
    // 0x55e3e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x55e3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_55e3e8:
    // 0x55e3e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x55e3e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_55e3ec:
    // 0x55e3ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_55e3f0:
    if (ctx->pc == 0x55E3F0u) {
        ctx->pc = 0x55E3F4u;
        goto label_55e3f4;
    }
    ctx->pc = 0x55E3ECu;
    {
        const bool branch_taken_0x55e3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x55e3ec) {
            ctx->pc = 0x55E410u;
            goto label_55e410;
        }
    }
    ctx->pc = 0x55E3F4u;
label_55e3f4:
    // 0x55e3f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_55e3f8:
    if (ctx->pc == 0x55E3F8u) {
        ctx->pc = 0x55E3FCu;
        goto label_55e3fc;
    }
    ctx->pc = 0x55E3F4u;
    {
        const bool branch_taken_0x55e3f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x55e3f4) {
            ctx->pc = 0x55E410u;
            goto label_55e410;
        }
    }
    ctx->pc = 0x55E3FCu;
label_55e3fc:
    // 0x55e3fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x55e3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_55e400:
    // 0x55e400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x55e400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55e404:
    // 0x55e404: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x55e404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_55e408:
    // 0x55e408: 0x320f809  jalr        $t9
label_55e40c:
    if (ctx->pc == 0x55E40Cu) {
        ctx->pc = 0x55E40Cu;
            // 0x55e40c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55E410u;
        goto label_55e410;
    }
    ctx->pc = 0x55E408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55E410u);
        ctx->pc = 0x55E40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E408u;
            // 0x55e40c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55E410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55E410u; }
            if (ctx->pc != 0x55E410u) { return; }
        }
        }
    }
    ctx->pc = 0x55E410u;
label_55e410:
    // 0x55e410: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55e414:
    // 0x55e414: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55e418:
    // 0x55e418: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x55e418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_55e41c:
    // 0x55e41c: 0xc08c5bc  jal         func_2316F0
label_55e420:
    if (ctx->pc == 0x55E420u) {
        ctx->pc = 0x55E420u;
            // 0x55e420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E424u;
        goto label_55e424;
    }
    ctx->pc = 0x55E41Cu;
    SET_GPR_U32(ctx, 31, 0x55E424u);
    ctx->pc = 0x55E420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E41Cu;
            // 0x55e420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2316F0u;
    if (runtime->hasFunction(0x2316F0u)) {
        auto targetFn = runtime->lookupFunction(0x2316F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E424u; }
        if (ctx->pc != 0x55E424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002316F0_0x2316f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E424u; }
        if (ctx->pc != 0x55E424u) { return; }
    }
    ctx->pc = 0x55E424u;
label_55e424:
    // 0x55e424: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x55e424u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_55e428:
    // 0x55e428: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_55e42c:
    if (ctx->pc == 0x55E42Cu) {
        ctx->pc = 0x55E42Cu;
            // 0x55e42c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x55E430u;
        goto label_55e430;
    }
    ctx->pc = 0x55E428u;
    {
        const bool branch_taken_0x55e428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55e428) {
            ctx->pc = 0x55E42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E428u;
            // 0x55e42c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E46Cu;
            goto label_55e46c;
        }
    }
    ctx->pc = 0x55E430u;
label_55e430:
    // 0x55e430: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x55e430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_55e434:
    // 0x55e434: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x55e434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_55e438:
    // 0x55e438: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x55e438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_55e43c:
    // 0x55e43c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x55e43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_55e440:
    // 0x55e440: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x55e440u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_55e444:
    // 0x55e444: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_55e448:
    if (ctx->pc == 0x55E448u) {
        ctx->pc = 0x55E44Cu;
        goto label_55e44c;
    }
    ctx->pc = 0x55E444u;
    {
        const bool branch_taken_0x55e444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55e444) {
            ctx->pc = 0x55E468u;
            goto label_55e468;
        }
    }
    ctx->pc = 0x55E44Cu;
label_55e44c:
    // 0x55e44c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_55e450:
    if (ctx->pc == 0x55E450u) {
        ctx->pc = 0x55E454u;
        goto label_55e454;
    }
    ctx->pc = 0x55E44Cu;
    {
        const bool branch_taken_0x55e44c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x55e44c) {
            ctx->pc = 0x55E468u;
            goto label_55e468;
        }
    }
    ctx->pc = 0x55E454u;
label_55e454:
    // 0x55e454: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x55e454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55e458:
    // 0x55e458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55e458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55e45c:
    // 0x55e45c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x55e45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_55e460:
    // 0x55e460: 0x320f809  jalr        $t9
label_55e464:
    if (ctx->pc == 0x55E464u) {
        ctx->pc = 0x55E464u;
            // 0x55e464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55E468u;
        goto label_55e468;
    }
    ctx->pc = 0x55E460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55E468u);
        ctx->pc = 0x55E464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E460u;
            // 0x55e464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55E468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55E468u; }
            if (ctx->pc != 0x55E468u) { return; }
        }
        }
    }
    ctx->pc = 0x55E468u;
label_55e468:
    // 0x55e468: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x55e468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_55e46c:
    // 0x55e46c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55e470:
    // 0x55e470: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55e470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55e474:
    // 0x55e474: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55e474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55e478:
    // 0x55e478: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55e478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55e47c:
    // 0x55e47c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55e47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55e480:
    // 0x55e480: 0x3e00008  jr          $ra
label_55e484:
    if (ctx->pc == 0x55E484u) {
        ctx->pc = 0x55E484u;
            // 0x55e484: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x55E488u;
        goto label_55e488;
    }
    ctx->pc = 0x55E480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55E484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E480u;
            // 0x55e484: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55E488u;
label_55e488:
    // 0x55e488: 0x0  nop
    ctx->pc = 0x55e488u;
    // NOP
label_55e48c:
    // 0x55e48c: 0x0  nop
    ctx->pc = 0x55e48cu;
    // NOP
}
