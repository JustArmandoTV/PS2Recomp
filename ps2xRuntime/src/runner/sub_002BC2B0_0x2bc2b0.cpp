#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC2B0
// Address: 0x2bc2b0 - 0x2bc450
void sub_002BC2B0_0x2bc2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC2B0_0x2bc2b0");
#endif

    switch (ctx->pc) {
        case 0x2bc2ccu: goto label_2bc2cc;
        case 0x2bc2ecu: goto label_2bc2ec;
        case 0x2bc338u: goto label_2bc338;
        case 0x2bc358u: goto label_2bc358;
        case 0x2bc380u: goto label_2bc380;
        case 0x2bc3e0u: goto label_2bc3e0;
        case 0x2bc3ecu: goto label_2bc3ec;
        case 0x2bc3f8u: goto label_2bc3f8;
        case 0x2bc404u: goto label_2bc404;
        case 0x2bc410u: goto label_2bc410;
        case 0x2bc41cu: goto label_2bc41c;
        case 0x2bc434u: goto label_2bc434;
        default: break;
    }

    ctx->pc = 0x2bc2b0u;

    // 0x2bc2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bc2b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2bc2b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc2bc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2bc2bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2bc2c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc2c4: 0xc0af1e0  jal         func_2BC780
    ctx->pc = 0x2BC2C4u;
    SET_GPR_U32(ctx, 31, 0x2BC2CCu);
    ctx->pc = 0x2BC2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2C4u;
            // 0x2bc2c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC780u;
    if (runtime->hasFunction(0x2BC780u)) {
        auto targetFn = runtime->lookupFunction(0x2BC780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2CCu; }
        if (ctx->pc != 0x2BC2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC780_0x2bc780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2CCu; }
        if (ctx->pc != 0x2BC2CCu) { return; }
    }
    ctx->pc = 0x2BC2CCu;
label_2bc2cc:
    // 0x2bc2cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc2d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc2d4: 0x246320e0  addiu       $v1, $v1, 0x20E0
    ctx->pc = 0x2bc2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8416));
    // 0x2bc2d8: 0x24422118  addiu       $v0, $v0, 0x2118
    ctx->pc = 0x2bc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8472));
    // 0x2bc2dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bc2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc2e4: 0xc0af1dc  jal         func_2BC770
    ctx->pc = 0x2BC2E4u;
    SET_GPR_U32(ctx, 31, 0x2BC2ECu);
    ctx->pc = 0x2BC2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2E4u;
            // 0x2bc2e8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC770u;
    if (runtime->hasFunction(0x2BC770u)) {
        auto targetFn = runtime->lookupFunction(0x2BC770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2ECu; }
        if (ctx->pc != 0x2BC2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC770_0x2bc770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2ECu; }
        if (ctx->pc != 0x2BC2ECu) { return; }
    }
    ctx->pc = 0x2BC2ECu;
label_2bc2ec:
    // 0x2bc2ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bc2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bc2f0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2bc2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bc2f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bc2f8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2bc2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2bc2fc: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x2bc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
    // 0x2bc300: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bc300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bc304: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bc304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bc308: 0x244250e8  addiu       $v0, $v0, 0x50E8
    ctx->pc = 0x2bc308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20712));
    // 0x2bc30c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bc310: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2bc310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2bc314: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2bc314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2bc318: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2bc318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2bc31c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2bc31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2bc320: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2bc320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2bc324: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2bc324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2bc328: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bc328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2bc32c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2bc32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2bc330: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2BC330u;
    SET_GPR_U32(ctx, 31, 0x2BC338u);
    ctx->pc = 0x2BC334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC330u;
            // 0x2bc334: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC338u; }
        if (ctx->pc != 0x2BC338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC338u; }
        if (ctx->pc != 0x2BC338u) { return; }
    }
    ctx->pc = 0x2BC338u;
label_2bc338:
    // 0x2bc338: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2bc338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bc33c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc340: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC340u;
    {
        const bool branch_taken_0x2bc340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC340u;
            // 0x2bc344: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc340) {
            ctx->pc = 0x2BC35Cu;
            goto label_2bc35c;
        }
    }
    ctx->pc = 0x2BC348u;
    // 0x2bc348: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2bc348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2bc34c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x2bc34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc350: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x2BC350u;
    SET_GPR_U32(ctx, 31, 0x2BC358u);
    ctx->pc = 0x2BC354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC350u;
            // 0x2bc354: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC358u; }
        if (ctx->pc != 0x2BC358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC358u; }
        if (ctx->pc != 0x2BC358u) { return; }
    }
    ctx->pc = 0x2BC358u;
label_2bc358:
    // 0x2bc358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc35c:
    // 0x2bc35c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x2bc35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x2bc360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bc360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc36c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC36Cu;
            // 0x2bc370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC374u;
    // 0x2bc374: 0x0  nop
    ctx->pc = 0x2bc374u;
    // NOP
    // 0x2bc378: 0x0  nop
    ctx->pc = 0x2bc378u;
    // NOP
    // 0x2bc37c: 0x0  nop
    ctx->pc = 0x2bc37cu;
    // NOP
label_2bc380:
    // 0x2bc380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bc384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bc384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bc388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc38c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc394: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BC394u;
    {
        const bool branch_taken_0x2bc394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC394u;
            // 0x2bc398: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc394) {
            ctx->pc = 0x2BC434u;
            goto label_2bc434;
        }
    }
    ctx->pc = 0x2BC39Cu;
    // 0x2bc39c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc3a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc3a4: 0x246320e0  addiu       $v1, $v1, 0x20E0
    ctx->pc = 0x2bc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8416));
    // 0x2bc3a8: 0x24422118  addiu       $v0, $v0, 0x2118
    ctx->pc = 0x2bc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8472));
    // 0x2bc3ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bc3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bc3b0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BC3B0u;
    {
        const bool branch_taken_0x2bc3b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3B0u;
            // 0x2bc3b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3b0) {
            ctx->pc = 0x2BC41Cu;
            goto label_2bc41c;
        }
    }
    ctx->pc = 0x2BC3B8u;
    // 0x2bc3b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc3bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc3c0: 0x24632090  addiu       $v1, $v1, 0x2090
    ctx->pc = 0x2bc3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8336));
    // 0x2bc3c4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bc3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bc3c8: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x2bc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x2bc3cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bc3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bc3d0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bc3d4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2bc3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2bc3d8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2BC3D8u;
    SET_GPR_U32(ctx, 31, 0x2BC3E0u);
    ctx->pc = 0x2BC3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3D8u;
            // 0x2bc3dc: 0x24a5c520  addiu       $a1, $a1, -0x3AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3E0u; }
        if (ctx->pc != 0x2BC3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3E0u; }
        if (ctx->pc != 0x2BC3E0u) { return; }
    }
    ctx->pc = 0x2BC3E0u;
label_2bc3e0:
    // 0x2bc3e0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2bc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2bc3e4: 0xc0ad618  jal         func_2B5860
    ctx->pc = 0x2BC3E4u;
    SET_GPR_U32(ctx, 31, 0x2BC3ECu);
    ctx->pc = 0x2BC3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3E4u;
            // 0x2bc3e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5860u;
    if (runtime->hasFunction(0x2B5860u)) {
        auto targetFn = runtime->lookupFunction(0x2B5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3ECu; }
        if (ctx->pc != 0x2BC3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5860_0x2b5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3ECu; }
        if (ctx->pc != 0x2BC3ECu) { return; }
    }
    ctx->pc = 0x2BC3ECu;
label_2bc3ec:
    // 0x2bc3ec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2bc3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2bc3f0: 0xc0af12c  jal         func_2BC4B0
    ctx->pc = 0x2BC3F0u;
    SET_GPR_U32(ctx, 31, 0x2BC3F8u);
    ctx->pc = 0x2BC3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3F0u;
            // 0x2bc3f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4B0u;
    if (runtime->hasFunction(0x2BC4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3F8u; }
        if (ctx->pc != 0x2BC3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC4B0_0x2bc4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3F8u; }
        if (ctx->pc != 0x2BC3F8u) { return; }
    }
    ctx->pc = 0x2BC3F8u;
label_2bc3f8:
    // 0x2bc3f8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2bc3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2bc3fc: 0xc0af12c  jal         func_2BC4B0
    ctx->pc = 0x2BC3FCu;
    SET_GPR_U32(ctx, 31, 0x2BC404u);
    ctx->pc = 0x2BC400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3FCu;
            // 0x2bc400: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4B0u;
    if (runtime->hasFunction(0x2BC4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC404u; }
        if (ctx->pc != 0x2BC404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC4B0_0x2bc4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC404u; }
        if (ctx->pc != 0x2BC404u) { return; }
    }
    ctx->pc = 0x2BC404u;
label_2bc404:
    // 0x2bc404: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2bc404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2bc408: 0xc0af114  jal         func_2BC450
    ctx->pc = 0x2BC408u;
    SET_GPR_U32(ctx, 31, 0x2BC410u);
    ctx->pc = 0x2BC40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC408u;
            // 0x2bc40c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC450u;
    if (runtime->hasFunction(0x2BC450u)) {
        auto targetFn = runtime->lookupFunction(0x2BC450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC410u; }
        if (ctx->pc != 0x2BC410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC450_0x2bc450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC410u; }
        if (ctx->pc != 0x2BC410u) { return; }
    }
    ctx->pc = 0x2BC410u;
label_2bc410:
    // 0x2bc410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc414: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2BC414u;
    SET_GPR_U32(ctx, 31, 0x2BC41Cu);
    ctx->pc = 0x2BC418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC414u;
            // 0x2bc418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC41Cu; }
        if (ctx->pc != 0x2BC41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC41Cu; }
        if (ctx->pc != 0x2BC41Cu) { return; }
    }
    ctx->pc = 0x2BC41Cu;
label_2bc41c:
    // 0x2bc41c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2bc41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2bc420: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bc420u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bc424: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC424u;
    {
        const bool branch_taken_0x2bc424 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bc424) {
            ctx->pc = 0x2BC428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC424u;
            // 0x2bc428: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC438u;
            goto label_2bc438;
        }
    }
    ctx->pc = 0x2BC42Cu;
    // 0x2bc42c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BC42Cu;
    SET_GPR_U32(ctx, 31, 0x2BC434u);
    ctx->pc = 0x2BC430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC42Cu;
            // 0x2bc430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC434u; }
        if (ctx->pc != 0x2BC434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC434u; }
        if (ctx->pc != 0x2BC434u) { return; }
    }
    ctx->pc = 0x2BC434u;
label_2bc434:
    // 0x2bc434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bc434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc438:
    // 0x2bc438: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bc438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc43c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc444: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC444u;
            // 0x2bc448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC44Cu;
    // 0x2bc44c: 0x0  nop
    ctx->pc = 0x2bc44cu;
    // NOP
}
