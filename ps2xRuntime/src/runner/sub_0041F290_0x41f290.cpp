#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041F290
// Address: 0x41f290 - 0x41f750
void sub_0041F290_0x41f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F290_0x41f290");
#endif

    switch (ctx->pc) {
        case 0x41f2f4u: goto label_41f2f4;
        case 0x41f33cu: goto label_41f33c;
        case 0x41f360u: goto label_41f360;
        case 0x41f37cu: goto label_41f37c;
        case 0x41f390u: goto label_41f390;
        case 0x41f3a4u: goto label_41f3a4;
        case 0x41f3bcu: goto label_41f3bc;
        case 0x41f3ecu: goto label_41f3ec;
        case 0x41f3fcu: goto label_41f3fc;
        case 0x41f408u: goto label_41f408;
        case 0x41f418u: goto label_41f418;
        case 0x41f424u: goto label_41f424;
        case 0x41f4c0u: goto label_41f4c0;
        case 0x41f4ccu: goto label_41f4cc;
        case 0x41f4dcu: goto label_41f4dc;
        case 0x41f540u: goto label_41f540;
        case 0x41f548u: goto label_41f548;
        case 0x41f5acu: goto label_41f5ac;
        case 0x41f5b4u: goto label_41f5b4;
        case 0x41f5c0u: goto label_41f5c0;
        case 0x41f5d0u: goto label_41f5d0;
        case 0x41f5dcu: goto label_41f5dc;
        case 0x41f5ecu: goto label_41f5ec;
        case 0x41f5f8u: goto label_41f5f8;
        case 0x41f668u: goto label_41f668;
        case 0x41f67cu: goto label_41f67c;
        case 0x41f6a8u: goto label_41f6a8;
        case 0x41f6b0u: goto label_41f6b0;
        case 0x41f6bcu: goto label_41f6bc;
        case 0x41f6c4u: goto label_41f6c4;
        case 0x41f6d0u: goto label_41f6d0;
        case 0x41f6e4u: goto label_41f6e4;
        case 0x41f6fcu: goto label_41f6fc;
        case 0x41f708u: goto label_41f708;
        case 0x41f714u: goto label_41f714;
        case 0x41f720u: goto label_41f720;
        default: break;
    }

    ctx->pc = 0x41f290u;

    // 0x41f290: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x41f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x41f294: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x41f298: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x41f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x41f29c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41f29cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f2a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x41f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x41f2a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x41f2a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41f2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f2ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41f2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41f2b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41f2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f2b4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x41f2b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x41f2b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41f2bc: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x41f2bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x41f2c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41f2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f2c4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x41f2c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x41f2c8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x41f2c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x41f2cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x41f2ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x41f2d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x41f2d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x41f2d4: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x41f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x41f2d8: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x41f2d8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x41f2dc: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x41f2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x41f2e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x41f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41f2e4: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x41f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
    // 0x41f2e8: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x41f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x41f2ec: 0xc08914c  jal         func_224530
    ctx->pc = 0x41F2ECu;
    SET_GPR_U32(ctx, 31, 0x41F2F4u);
    ctx->pc = 0x41F2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F2ECu;
            // 0x41f2f0: 0x46006e06  mov.s       $f24, $f13 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F2F4u; }
        if (ctx->pc != 0x41F2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F2F4u; }
        if (ctx->pc != 0x41F2F4u) { return; }
    }
    ctx->pc = 0x41F2F4u;
label_41f2f4:
    // 0x41f2f4: 0x8e480050  lw          $t0, 0x50($s2)
    ctx->pc = 0x41f2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x41f2f8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x41f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x41f2fc: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x41f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x41f300: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41f300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x41f304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41f304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f308: 0x8d050214  lw          $a1, 0x214($t0)
    ctx->pc = 0x41f308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 532)));
    // 0x41f30c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x41f30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x41f310: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x41f310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x41f314: 0xad040214  sw          $a0, 0x214($t0)
    ctx->pc = 0x41f314u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 532), GPR_U32(ctx, 4));
    // 0x41f318: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x41f318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x41f31c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x41f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x41f320: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x41f320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x41f324: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x41f324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x41f328: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x41f328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x41f32c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x41f330: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x41f334: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x41F334u;
    SET_GPR_U32(ctx, 31, 0x41F33Cu);
    ctx->pc = 0x41F338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F334u;
            // 0x41f338: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F33Cu; }
        if (ctx->pc != 0x41F33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F33Cu; }
        if (ctx->pc != 0x41F33Cu) { return; }
    }
    ctx->pc = 0x41F33Cu;
label_41f33c:
    // 0x41f33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41f340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41f340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f344: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x41f344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x41f348: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x41f348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x41f34c: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x41f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41f350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f354: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x41f354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41f358: 0xc0b89e4  jal         func_2E2790
    ctx->pc = 0x41F358u;
    SET_GPR_U32(ctx, 31, 0x41F360u);
    ctx->pc = 0x41F35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F358u;
            // 0x41f35c: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F360u; }
        if (ctx->pc != 0x41F360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F360u; }
        if (ctx->pc != 0x41F360u) { return; }
    }
    ctx->pc = 0x41F360u;
label_41f360:
    // 0x41f360: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x41f364: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x41f364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x41f368: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x41f368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
    // 0x41f36c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x41f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x41f370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x41f370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41f374: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x41F374u;
    SET_GPR_U32(ctx, 31, 0x41F37Cu);
    ctx->pc = 0x41F378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F374u;
            // 0x41f378: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F37Cu; }
        if (ctx->pc != 0x41F37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F37Cu; }
        if (ctx->pc != 0x41F37Cu) { return; }
    }
    ctx->pc = 0x41F37Cu;
label_41f37c:
    // 0x41f37c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x41f37cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x41f380: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x41f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x41f384: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x41f384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x41f388: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x41F388u;
    SET_GPR_U32(ctx, 31, 0x41F390u);
    ctx->pc = 0x41F38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F388u;
            // 0x41f38c: 0x24c6c750  addiu       $a2, $a2, -0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F390u; }
        if (ctx->pc != 0x41F390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F390u; }
        if (ctx->pc != 0x41F390u) { return; }
    }
    ctx->pc = 0x41F390u;
label_41f390:
    // 0x41f390: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x41f390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x41f394: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x41f394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x41f398: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41f398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41f39c: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x41F39Cu;
    SET_GPR_U32(ctx, 31, 0x41F3A4u);
    ctx->pc = 0x41F3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F39Cu;
            // 0x41f3a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F3A4u; }
        if (ctx->pc != 0x41F3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F3A4u; }
        if (ctx->pc != 0x41F3A4u) { return; }
    }
    ctx->pc = 0x41F3A4u;
label_41f3a4:
    // 0x41f3a4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x41f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x41f3a8: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x41f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x41f3ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41f3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41f3b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41f3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f3b4: 0xc0b82c4  jal         func_2E0B10
    ctx->pc = 0x41F3B4u;
    SET_GPR_U32(ctx, 31, 0x41F3BCu);
    ctx->pc = 0x41F3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F3B4u;
            // 0x41f3b8: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F3BCu; }
        if (ctx->pc != 0x41F3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F3BCu; }
        if (ctx->pc != 0x41F3BCu) { return; }
    }
    ctx->pc = 0x41F3BCu;
label_41f3bc:
    // 0x41f3bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x41f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x41f3c0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x41f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x41f3c4: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x41f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
    // 0x41f3c8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x41f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x41f3cc: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x41f3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41f3d0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x41f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f3d4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x41f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f3d8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x41f3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x41f3dc: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x41f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x41f3e0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x41f3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x41f3e4: 0xc089290  jal         func_224A40
    ctx->pc = 0x41F3E4u;
    SET_GPR_U32(ctx, 31, 0x41F3ECu);
    ctx->pc = 0x41F3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F3E4u;
            // 0x41f3e8: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F3ECu; }
        if (ctx->pc != 0x41F3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F3ECu; }
        if (ctx->pc != 0x41F3ECu) { return; }
    }
    ctx->pc = 0x41F3ECu;
label_41f3ec:
    // 0x41f3ec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x41f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x41f3f0: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x41f3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x41f3f4: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x41F3F4u;
    SET_GPR_U32(ctx, 31, 0x41F3FCu);
    ctx->pc = 0x41F3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F3F4u;
            // 0x41f3f8: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F3FCu; }
        if (ctx->pc != 0x41F3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F3FCu; }
        if (ctx->pc != 0x41F3FCu) { return; }
    }
    ctx->pc = 0x41F3FCu;
label_41f3fc:
    // 0x41f3fc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x41f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x41f400: 0xc04cc44  jal         func_133110
    ctx->pc = 0x41F400u;
    SET_GPR_U32(ctx, 31, 0x41F408u);
    ctx->pc = 0x41F404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F400u;
            // 0x41f404: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F408u; }
        if (ctx->pc != 0x41F408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F408u; }
        if (ctx->pc != 0x41F408u) { return; }
    }
    ctx->pc = 0x41F408u;
label_41f408:
    // 0x41f408: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x41f408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x41f40c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x41f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x41f410: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x41F410u;
    SET_GPR_U32(ctx, 31, 0x41F418u);
    ctx->pc = 0x41F414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F410u;
            // 0x41f414: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F418u; }
        if (ctx->pc != 0x41F418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F418u; }
        if (ctx->pc != 0x41F418u) { return; }
    }
    ctx->pc = 0x41F418u;
label_41f418:
    // 0x41f418: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x41f418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x41f41c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x41F41Cu;
    SET_GPR_U32(ctx, 31, 0x41F424u);
    ctx->pc = 0x41F420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F41Cu;
            // 0x41f420: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F424u; }
        if (ctx->pc != 0x41F424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F424u; }
        if (ctx->pc != 0x41F424u) { return; }
    }
    ctx->pc = 0x41F424u;
label_41f424:
    // 0x41f424: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x41f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x41f428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41f428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f42c: 0xc457c760  lwc1        $f23, -0x38A0($v0)
    ctx->pc = 0x41f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x41f430: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x41f430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x41f434: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x41f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f438: 0x26460100  addiu       $a2, $s2, 0x100
    ctx->pc = 0x41f438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x41f43c: 0xc7a30150  lwc1        $f3, 0x150($sp)
    ctx->pc = 0x41f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41f440: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x41f440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x41f444: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x41f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x41f448: 0xafa001bc  sw          $zero, 0x1BC($sp)
    ctx->pc = 0x41f448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 0));
    // 0x41f44c: 0xc440c760  lwc1        $f0, -0x38A0($v0)
    ctx->pc = 0x41f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f450: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x41f450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
    // 0x41f454: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x41f454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x41f458: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x41f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f45c: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x41f45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x41f460: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x41f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x41f464: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x41f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f468: 0xc456c764  lwc1        $f22, -0x389C($v0)
    ctx->pc = 0x41f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x41f46c: 0xe7a101b0  swc1        $f1, 0x1B0($sp)
    ctx->pc = 0x41f46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x41f470: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x41f470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x41f474: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x41f474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x41f478: 0xc455c768  lwc1        $f21, -0x3898($v0)
    ctx->pc = 0x41f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x41f47c: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x41f47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f480: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x41f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f484: 0xc7a20154  lwc1        $f2, 0x154($sp)
    ctx->pc = 0x41f484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41f488: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x41f488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x41f48c: 0xe7a101b8  swc1        $f1, 0x1B8($sp)
    ctx->pc = 0x41f48cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x41f490: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x41f490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x41f494: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x41f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f498: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x41f498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f49c: 0xc454c76c  lwc1        $f20, -0x3894($v0)
    ctx->pc = 0x41f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x41f4a0: 0xe7a301a0  swc1        $f3, 0x1A0($sp)
    ctx->pc = 0x41f4a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x41f4a4: 0xe7a201a4  swc1        $f2, 0x1A4($sp)
    ctx->pc = 0x41f4a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x41f4a8: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x41f4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x41f4ac: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x41f4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x41f4b0: 0xe7b601d4  swc1        $f22, 0x1D4($sp)
    ctx->pc = 0x41f4b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x41f4b4: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x41f4b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x41f4b8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x41F4B8u;
    SET_GPR_U32(ctx, 31, 0x41F4C0u);
    ctx->pc = 0x41F4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F4B8u;
            // 0x41f4bc: 0xe7b401dc  swc1        $f20, 0x1DC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F4C0u; }
        if (ctx->pc != 0x41F4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F4C0u; }
        if (ctx->pc != 0x41F4C0u) { return; }
    }
    ctx->pc = 0x41F4C0u;
label_41f4c0:
    // 0x41f4c0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x41f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x41f4c4: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x41F4C4u;
    SET_GPR_U32(ctx, 31, 0x41F4CCu);
    ctx->pc = 0x41F4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F4C4u;
            // 0x41f4c8: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F4CCu; }
        if (ctx->pc != 0x41F4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F4CCu; }
        if (ctx->pc != 0x41F4CCu) { return; }
    }
    ctx->pc = 0x41F4CCu;
label_41f4cc:
    // 0x41f4cc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x41f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x41f4d0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x41f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x41f4d4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x41F4D4u;
    SET_GPR_U32(ctx, 31, 0x41F4DCu);
    ctx->pc = 0x41F4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F4D4u;
            // 0x41f4d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F4DCu; }
        if (ctx->pc != 0x41F4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F4DCu; }
        if (ctx->pc != 0x41F4DCu) { return; }
    }
    ctx->pc = 0x41F4DCu;
label_41f4dc:
    // 0x41f4dc: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x41f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f4e0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x41f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x41f4e4: 0x26460100  addiu       $a2, $s2, 0x100
    ctx->pc = 0x41f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x41f4e8: 0xe6400210  swc1        $f0, 0x210($s2)
    ctx->pc = 0x41f4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 528), bits); }
    // 0x41f4ec: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x41f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f4f0: 0xe6400214  swc1        $f0, 0x214($s2)
    ctx->pc = 0x41f4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
    // 0x41f4f4: 0xc6400210  lwc1        $f0, 0x210($s2)
    ctx->pc = 0x41f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f4f8: 0x4600c801  sub.s       $f0, $f25, $f0
    ctx->pc = 0x41f4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
    // 0x41f4fc: 0xe6400208  swc1        $f0, 0x208($s2)
    ctx->pc = 0x41f4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
    // 0x41f500: 0xc6400214  lwc1        $f0, 0x214($s2)
    ctx->pc = 0x41f500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f504: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x41f504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x41f508: 0xe640020c  swc1        $f0, 0x20C($s2)
    ctx->pc = 0x41f508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 524), bits); }
    // 0x41f50c: 0x96430130  lhu         $v1, 0x130($s2)
    ctx->pc = 0x41f50cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x41f510: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x41f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x41f514: 0x96470132  lhu         $a3, 0x132($s2)
    ctx->pc = 0x41f514u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 306)));
    // 0x41f518: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x41f518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x41f51c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x41f51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x41f520: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x41f520u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x41f524: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x41f524u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x41f528: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x41f528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x41f52c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x41f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x41f530: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x41f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x41f534: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x41f534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x41f538: 0xc04cc90  jal         func_133240
    ctx->pc = 0x41F538u;
    SET_GPR_U32(ctx, 31, 0x41F540u);
    ctx->pc = 0x41F53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F538u;
            // 0x41f53c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F540u; }
        if (ctx->pc != 0x41F540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F540u; }
        if (ctx->pc != 0x41F540u) { return; }
    }
    ctx->pc = 0x41F540u;
label_41f540:
    // 0x41f540: 0xc04cc14  jal         func_133050
    ctx->pc = 0x41F540u;
    SET_GPR_U32(ctx, 31, 0x41F548u);
    ctx->pc = 0x41F544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F540u;
            // 0x41f544: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F548u; }
        if (ctx->pc != 0x41F548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F548u; }
        if (ctx->pc != 0x41F548u) { return; }
    }
    ctx->pc = 0x41F548u;
label_41f548:
    // 0x41f548: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x41f548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x41f54c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x41f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x41f550: 0xc6410234  lwc1        $f1, 0x234($s2)
    ctx->pc = 0x41f550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f554: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x41f554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41f558: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x41f558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x41f55c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41f55cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41f560: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x41F560u;
    {
        const bool branch_taken_0x41f560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41f560) {
            ctx->pc = 0x41F564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41F560u;
            // 0x41f564: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x41F5B8u;
            goto label_41f5b8;
        }
    }
    ctx->pc = 0x41F568u;
    // 0x41f568: 0x96430130  lhu         $v1, 0x130($s2)
    ctx->pc = 0x41f568u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x41f56c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x41f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x41f570: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x41f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x41f574: 0x26460100  addiu       $a2, $s2, 0x100
    ctx->pc = 0x41f574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x41f578: 0x96450132  lhu         $a1, 0x132($s2)
    ctx->pc = 0x41f578u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 306)));
    // 0x41f57c: 0x38670001  xori        $a3, $v1, 0x1
    ctx->pc = 0x41f57cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x41f580: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x41f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x41f584: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x41f584u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x41f588: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x41f588u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x41f58c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x41f58cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x41f590: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x41f590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x41f594: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x41f594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x41f598: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x41f598u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x41f59c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x41f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x41f5a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x41f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x41f5a4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x41F5A4u;
    SET_GPR_U32(ctx, 31, 0x41F5ACu);
    ctx->pc = 0x41F5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F5A4u;
            // 0x41f5a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5ACu; }
        if (ctx->pc != 0x41F5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5ACu; }
        if (ctx->pc != 0x41F5ACu) { return; }
    }
    ctx->pc = 0x41F5ACu;
label_41f5ac:
    // 0x41f5ac: 0xc04cc14  jal         func_133050
    ctx->pc = 0x41F5ACu;
    SET_GPR_U32(ctx, 31, 0x41F5B4u);
    ctx->pc = 0x41F5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F5ACu;
            // 0x41f5b0: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5B4u; }
        if (ctx->pc != 0x41F5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5B4u; }
        if (ctx->pc != 0x41F5B4u) { return; }
    }
    ctx->pc = 0x41F5B4u;
label_41f5b4:
    // 0x41f5b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x41f5b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_41f5b8:
    // 0x41f5b8: 0xc107c30  jal         func_41F0C0
    ctx->pc = 0x41F5B8u;
    SET_GPR_U32(ctx, 31, 0x41F5C0u);
    ctx->pc = 0x41F5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F5B8u;
            // 0x41f5bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41F0C0u;
    if (runtime->hasFunction(0x41F0C0u)) {
        auto targetFn = runtime->lookupFunction(0x41F0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5C0u; }
        if (ctx->pc != 0x41F5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041F0C0_0x41f0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5C0u; }
        if (ctx->pc != 0x41F5C0u) { return; }
    }
    ctx->pc = 0x41F5C0u;
label_41f5c0:
    // 0x41f5c0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x41f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x41f5c4: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x41f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x41f5c8: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x41F5C8u;
    SET_GPR_U32(ctx, 31, 0x41F5D0u);
    ctx->pc = 0x41F5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F5C8u;
            // 0x41f5cc: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5D0u; }
        if (ctx->pc != 0x41F5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5D0u; }
        if (ctx->pc != 0x41F5D0u) { return; }
    }
    ctx->pc = 0x41F5D0u;
label_41f5d0:
    // 0x41f5d0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x41f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x41f5d4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x41F5D4u;
    SET_GPR_U32(ctx, 31, 0x41F5DCu);
    ctx->pc = 0x41F5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F5D4u;
            // 0x41f5d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5DCu; }
        if (ctx->pc != 0x41F5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5DCu; }
        if (ctx->pc != 0x41F5DCu) { return; }
    }
    ctx->pc = 0x41F5DCu;
label_41f5dc:
    // 0x41f5dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x41f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x41f5e0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x41f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x41f5e4: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x41F5E4u;
    SET_GPR_U32(ctx, 31, 0x41F5ECu);
    ctx->pc = 0x41F5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F5E4u;
            // 0x41f5e8: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5ECu; }
        if (ctx->pc != 0x41F5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5ECu; }
        if (ctx->pc != 0x41F5ECu) { return; }
    }
    ctx->pc = 0x41F5ECu;
label_41f5ec:
    // 0x41f5ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x41f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x41f5f0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x41F5F0u;
    SET_GPR_U32(ctx, 31, 0x41F5F8u);
    ctx->pc = 0x41F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F5F0u;
            // 0x41f5f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5F8u; }
        if (ctx->pc != 0x41F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F5F8u; }
        if (ctx->pc != 0x41F5F8u) { return; }
    }
    ctx->pc = 0x41F5F8u;
label_41f5f8:
    // 0x41f5f8: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x41f5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41f5fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x41f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x41f600: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x41f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f604: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x41f604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x41f608: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x41f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f60c: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x41f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x41f610: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x41f610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x41f614: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x41f614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x41f618: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x41f618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x41f61c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x41f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x41f620: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x41f620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x41f624: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x41f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41f628: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x41f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f62c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x41f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f630: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x41f630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x41f634: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x41f634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x41f638: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x41f638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x41f63c: 0xc7a201e0  lwc1        $f2, 0x1E0($sp)
    ctx->pc = 0x41f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41f640: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x41f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f644: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x41f644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f648: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x41f648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x41f64c: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x41f64cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x41f650: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x41f650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x41f654: 0xe7b70100  swc1        $f23, 0x100($sp)
    ctx->pc = 0x41f654u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x41f658: 0xe7b60104  swc1        $f22, 0x104($sp)
    ctx->pc = 0x41f658u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x41f65c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x41f65cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x41f660: 0xc04c994  jal         func_132650
    ctx->pc = 0x41F660u;
    SET_GPR_U32(ctx, 31, 0x41F668u);
    ctx->pc = 0x41F664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F660u;
            // 0x41f664: 0xe7b4010c  swc1        $f20, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F668u; }
        if (ctx->pc != 0x41F668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F668u; }
        if (ctx->pc != 0x41F668u) { return; }
    }
    ctx->pc = 0x41F668u;
label_41f668:
    // 0x41f668: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x41f668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x41f66c: 0x264401a0  addiu       $a0, $s2, 0x1A0
    ctx->pc = 0x41f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x41f670: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41f670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41f674: 0xc0c6250  jal         func_318940
    ctx->pc = 0x41F674u;
    SET_GPR_U32(ctx, 31, 0x41F67Cu);
    ctx->pc = 0x41F678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F674u;
            // 0x41f678: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F67Cu; }
        if (ctx->pc != 0x41F67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F67Cu; }
        if (ctx->pc != 0x41F67Cu) { return; }
    }
    ctx->pc = 0x41F67Cu;
label_41f67c:
    // 0x41f67c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x41f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x41f680: 0xc64301cc  lwc1        $f3, 0x1CC($s2)
    ctx->pc = 0x41f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41f684: 0xc64201c8  lwc1        $f2, 0x1C8($s2)
    ctx->pc = 0x41f684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41f688: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x41f688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x41f68c: 0xc64101c4  lwc1        $f1, 0x1C4($s2)
    ctx->pc = 0x41f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f690: 0xc64001c0  lwc1        $f0, 0x1C0($s2)
    ctx->pc = 0x41f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f694: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x41f694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x41f698: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x41f698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x41f69c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x41f69cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x41f6a0: 0xc0892a0  jal         func_224A80
    ctx->pc = 0x41F6A0u;
    SET_GPR_U32(ctx, 31, 0x41F6A8u);
    ctx->pc = 0x41F6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F6A0u;
            // 0x41f6a4: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6A8u; }
        if (ctx->pc != 0x41F6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6A8u; }
        if (ctx->pc != 0x41F6A8u) { return; }
    }
    ctx->pc = 0x41F6A8u;
label_41f6a8:
    // 0x41f6a8: 0xc0dc408  jal         func_371020
    ctx->pc = 0x41F6A8u;
    SET_GPR_U32(ctx, 31, 0x41F6B0u);
    ctx->pc = 0x41F6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F6A8u;
            // 0x41f6ac: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6B0u; }
        if (ctx->pc != 0x41F6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6B0u; }
        if (ctx->pc != 0x41F6B0u) { return; }
    }
    ctx->pc = 0x41F6B0u;
label_41f6b0:
    // 0x41f6b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41f6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f6b4: 0xc0dc9bc  jal         func_3726F0
    ctx->pc = 0x41F6B4u;
    SET_GPR_U32(ctx, 31, 0x41F6BCu);
    ctx->pc = 0x41F6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F6B4u;
            // 0x41f6b8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6BCu; }
        if (ctx->pc != 0x41F6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6BCu; }
        if (ctx->pc != 0x41F6BCu) { return; }
    }
    ctx->pc = 0x41F6BCu;
label_41f6bc:
    // 0x41f6bc: 0xc0dc408  jal         func_371020
    ctx->pc = 0x41F6BCu;
    SET_GPR_U32(ctx, 31, 0x41F6C4u);
    ctx->pc = 0x41F6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F6BCu;
            // 0x41f6c0: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6C4u; }
        if (ctx->pc != 0x41F6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6C4u; }
        if (ctx->pc != 0x41F6C4u) { return; }
    }
    ctx->pc = 0x41F6C4u;
label_41f6c4:
    // 0x41f6c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41f6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f6c8: 0xc0dc9a0  jal         func_372680
    ctx->pc = 0x41F6C8u;
    SET_GPR_U32(ctx, 31, 0x41F6D0u);
    ctx->pc = 0x41F6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F6C8u;
            // 0x41f6cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6D0u; }
        if (ctx->pc != 0x41F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6D0u; }
        if (ctx->pc != 0x41F6D0u) { return; }
    }
    ctx->pc = 0x41F6D0u;
label_41f6d0:
    // 0x41f6d0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x41f6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x41f6d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x41f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x41f6d8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x41f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x41f6dc: 0xc107dd4  jal         func_41F750
    ctx->pc = 0x41F6DCu;
    SET_GPR_U32(ctx, 31, 0x41F6E4u);
    ctx->pc = 0x41F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F6DCu;
            // 0x41f6e0: 0x24c6c750  addiu       $a2, $a2, -0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41F750u;
    if (runtime->hasFunction(0x41F750u)) {
        auto targetFn = runtime->lookupFunction(0x41F750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6E4u; }
        if (ctx->pc != 0x41F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041F750_0x41f750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6E4u; }
        if (ctx->pc != 0x41F6E4u) { return; }
    }
    ctx->pc = 0x41F6E4u;
label_41f6e4:
    // 0x41f6e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x41f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x41f6e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x41f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x41f6ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41f6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41f6f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41f6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f6f4: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x41F6F4u;
    SET_GPR_U32(ctx, 31, 0x41F6FCu);
    ctx->pc = 0x41F6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F6F4u;
            // 0x41f6f8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6FCu; }
        if (ctx->pc != 0x41F6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F6FCu; }
        if (ctx->pc != 0x41F6FCu) { return; }
    }
    ctx->pc = 0x41F6FCu;
label_41f6fc:
    // 0x41f6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41f6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f700: 0xc0f8e34  jal         func_3E38D0
    ctx->pc = 0x41F700u;
    SET_GPR_U32(ctx, 31, 0x41F708u);
    ctx->pc = 0x41F704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F700u;
            // 0x41f704: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F708u; }
        if (ctx->pc != 0x41F708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F708u; }
        if (ctx->pc != 0x41F708u) { return; }
    }
    ctx->pc = 0x41F708u;
label_41f708:
    // 0x41f708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41f708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f70c: 0xc0e1b28  jal         func_386CA0
    ctx->pc = 0x41F70Cu;
    SET_GPR_U32(ctx, 31, 0x41F714u);
    ctx->pc = 0x41F710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F70Cu;
            // 0x41f710: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F714u; }
        if (ctx->pc != 0x41F714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F714u; }
        if (ctx->pc != 0x41F714u) { return; }
    }
    ctx->pc = 0x41F714u;
label_41f714:
    // 0x41f714: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x41f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x41f718: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x41F718u;
    SET_GPR_U32(ctx, 31, 0x41F720u);
    ctx->pc = 0x41F71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F718u;
            // 0x41f71c: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F720u; }
        if (ctx->pc != 0x41F720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F720u; }
        if (ctx->pc != 0x41F720u) { return; }
    }
    ctx->pc = 0x41F720u;
label_41f720:
    // 0x41f720: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x41f720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41f724: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x41f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x41f728: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x41f728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41f72c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x41f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x41f730: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41f730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41f734: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x41f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x41f738: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41f738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41f73c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x41f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x41f740: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x41f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x41f744: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x41f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x41f748: 0x3e00008  jr          $ra
    ctx->pc = 0x41F748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F748u;
            // 0x41f74c: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41F750u;
}
