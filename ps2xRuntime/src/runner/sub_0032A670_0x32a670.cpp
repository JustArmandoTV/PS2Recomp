#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032A670
// Address: 0x32a670 - 0x32a810
void sub_0032A670_0x32a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A670_0x32a670");
#endif

    switch (ctx->pc) {
        case 0x32a68cu: goto label_32a68c;
        case 0x32a6acu: goto label_32a6ac;
        case 0x32a6f8u: goto label_32a6f8;
        case 0x32a718u: goto label_32a718;
        case 0x32a740u: goto label_32a740;
        case 0x32a7a0u: goto label_32a7a0;
        case 0x32a7acu: goto label_32a7ac;
        case 0x32a7b8u: goto label_32a7b8;
        case 0x32a7c4u: goto label_32a7c4;
        case 0x32a7d0u: goto label_32a7d0;
        case 0x32a7dcu: goto label_32a7dc;
        case 0x32a7f4u: goto label_32a7f4;
        default: break;
    }

    ctx->pc = 0x32a670u;

    // 0x32a670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a674: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32a674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x32a678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32a678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a67c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x32a67cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x32a680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a684: 0xc0caa3c  jal         func_32A8F0
    ctx->pc = 0x32A684u;
    SET_GPR_U32(ctx, 31, 0x32A68Cu);
    ctx->pc = 0x32A688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A684u;
            // 0x32a688: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A8F0u;
    if (runtime->hasFunction(0x32A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x32A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A68Cu; }
        if (ctx->pc != 0x32A68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A8F0_0x32a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A68Cu; }
        if (ctx->pc != 0x32A68Cu) { return; }
    }
    ctx->pc = 0x32A68Cu;
label_32a68c:
    // 0x32a68c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32a690: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a694: 0x24634760  addiu       $v1, $v1, 0x4760
    ctx->pc = 0x32a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18272));
    // 0x32a698: 0x24424798  addiu       $v0, $v0, 0x4798
    ctx->pc = 0x32a698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18328));
    // 0x32a69c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32a6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a6a4: 0xc0caa38  jal         func_32A8E0
    ctx->pc = 0x32A6A4u;
    SET_GPR_U32(ctx, 31, 0x32A6ACu);
    ctx->pc = 0x32A6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A6A4u;
            // 0x32a6a8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A8E0u;
    if (runtime->hasFunction(0x32A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x32A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6ACu; }
        if (ctx->pc != 0x32A6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A8E0_0x32a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6ACu; }
        if (ctx->pc != 0x32A6ACu) { return; }
    }
    ctx->pc = 0x32A6ACu;
label_32a6ac:
    // 0x32a6ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x32a6b0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32a6b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a6b8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x32a6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x32a6bc: 0x244246b0  addiu       $v0, $v0, 0x46B0
    ctx->pc = 0x32a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18096));
    // 0x32a6c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32a6c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a6c8: 0x244246e8  addiu       $v0, $v0, 0x46E8
    ctx->pc = 0x32a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18152));
    // 0x32a6cc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x32a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x32a6d0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x32a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x32a6d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x32a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x32a6d8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x32a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x32a6dc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x32a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x32a6e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32a6e4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x32a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x32a6e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x32a6ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x32a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x32a6f0: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x32A6F0u;
    SET_GPR_U32(ctx, 31, 0x32A6F8u);
    ctx->pc = 0x32A6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A6F0u;
            // 0x32a6f4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6F8u; }
        if (ctx->pc != 0x32A6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A6F8u; }
        if (ctx->pc != 0x32A6F8u) { return; }
    }
    ctx->pc = 0x32A6F8u;
label_32a6f8:
    // 0x32a6f8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x32a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32a6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a700: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A700u;
    {
        const bool branch_taken_0x32a700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A700u;
            // 0x32a704: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a700) {
            ctx->pc = 0x32A71Cu;
            goto label_32a71c;
        }
    }
    ctx->pc = 0x32A708u;
    // 0x32a708: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32a708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x32a70c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x32a70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32a710: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x32A710u;
    SET_GPR_U32(ctx, 31, 0x32A718u);
    ctx->pc = 0x32A714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A710u;
            // 0x32a714: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A718u; }
        if (ctx->pc != 0x32A718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A718u; }
        if (ctx->pc != 0x32A718u) { return; }
    }
    ctx->pc = 0x32A718u;
label_32a718:
    // 0x32a718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a71c:
    // 0x32a71c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x32a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x32a720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a72c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A72Cu;
            // 0x32a730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A734u;
    // 0x32a734: 0x0  nop
    ctx->pc = 0x32a734u;
    // NOP
    // 0x32a738: 0x0  nop
    ctx->pc = 0x32a738u;
    // NOP
    // 0x32a73c: 0x0  nop
    ctx->pc = 0x32a73cu;
    // NOP
label_32a740:
    // 0x32a740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32a748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a74c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a754: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32A754u;
    {
        const bool branch_taken_0x32a754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A754u;
            // 0x32a758: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a754) {
            ctx->pc = 0x32A7F4u;
            goto label_32a7f4;
        }
    }
    ctx->pc = 0x32A75Cu;
    // 0x32a75c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32a760: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a764: 0x24634760  addiu       $v1, $v1, 0x4760
    ctx->pc = 0x32a764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18272));
    // 0x32a768: 0x24424798  addiu       $v0, $v0, 0x4798
    ctx->pc = 0x32a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18328));
    // 0x32a76c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32a770: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32A770u;
    {
        const bool branch_taken_0x32a770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A770u;
            // 0x32a774: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a770) {
            ctx->pc = 0x32A7DCu;
            goto label_32a7dc;
        }
    }
    ctx->pc = 0x32A778u;
    // 0x32a778: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32a77c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a780: 0x24634710  addiu       $v1, $v1, 0x4710
    ctx->pc = 0x32a780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18192));
    // 0x32a784: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a788: 0x24424748  addiu       $v0, $v0, 0x4748
    ctx->pc = 0x32a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18248));
    // 0x32a78c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32a790: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x32a790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x32a794: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x32a794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x32a798: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x32A798u;
    SET_GPR_U32(ctx, 31, 0x32A7A0u);
    ctx->pc = 0x32A79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A798u;
            // 0x32a79c: 0x24a5a2c0  addiu       $a1, $a1, -0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7A0u; }
        if (ctx->pc != 0x32A7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7A0u; }
        if (ctx->pc != 0x32A7A0u) { return; }
    }
    ctx->pc = 0x32A7A0u;
label_32a7a0:
    // 0x32a7a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x32a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x32a7a4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x32A7A4u;
    SET_GPR_U32(ctx, 31, 0x32A7ACu);
    ctx->pc = 0x32A7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A7A4u;
            // 0x32a7a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7ACu; }
        if (ctx->pc != 0x32A7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7ACu; }
        if (ctx->pc != 0x32A7ACu) { return; }
    }
    ctx->pc = 0x32A7ACu;
label_32a7ac:
    // 0x32a7ac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x32a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x32a7b0: 0xc0caa1c  jal         func_32A870
    ctx->pc = 0x32A7B0u;
    SET_GPR_U32(ctx, 31, 0x32A7B8u);
    ctx->pc = 0x32A7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A7B0u;
            // 0x32a7b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A870u;
    if (runtime->hasFunction(0x32A870u)) {
        auto targetFn = runtime->lookupFunction(0x32A870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7B8u; }
        if (ctx->pc != 0x32A7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A870_0x32a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7B8u; }
        if (ctx->pc != 0x32A7B8u) { return; }
    }
    ctx->pc = 0x32A7B8u;
label_32a7b8:
    // 0x32a7b8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x32a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x32a7bc: 0xc0caa1c  jal         func_32A870
    ctx->pc = 0x32A7BCu;
    SET_GPR_U32(ctx, 31, 0x32A7C4u);
    ctx->pc = 0x32A7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A7BCu;
            // 0x32a7c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A870u;
    if (runtime->hasFunction(0x32A870u)) {
        auto targetFn = runtime->lookupFunction(0x32A870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7C4u; }
        if (ctx->pc != 0x32A7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A870_0x32a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7C4u; }
        if (ctx->pc != 0x32A7C4u) { return; }
    }
    ctx->pc = 0x32A7C4u;
label_32a7c4:
    // 0x32a7c4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x32a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x32a7c8: 0xc0caa04  jal         func_32A810
    ctx->pc = 0x32A7C8u;
    SET_GPR_U32(ctx, 31, 0x32A7D0u);
    ctx->pc = 0x32A7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A7C8u;
            // 0x32a7cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A810u;
    if (runtime->hasFunction(0x32A810u)) {
        auto targetFn = runtime->lookupFunction(0x32A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7D0u; }
        if (ctx->pc != 0x32A7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A810_0x32a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7D0u; }
        if (ctx->pc != 0x32A7D0u) { return; }
    }
    ctx->pc = 0x32A7D0u;
label_32a7d0:
    // 0x32a7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a7d4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x32A7D4u;
    SET_GPR_U32(ctx, 31, 0x32A7DCu);
    ctx->pc = 0x32A7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A7D4u;
            // 0x32a7d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7DCu; }
        if (ctx->pc != 0x32A7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7DCu; }
        if (ctx->pc != 0x32A7DCu) { return; }
    }
    ctx->pc = 0x32A7DCu;
label_32a7dc:
    // 0x32a7dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x32a7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x32a7e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a7e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32a7e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A7E4u;
    {
        const bool branch_taken_0x32a7e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32a7e4) {
            ctx->pc = 0x32A7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A7E4u;
            // 0x32a7e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A7F8u;
            goto label_32a7f8;
        }
    }
    ctx->pc = 0x32A7ECu;
    // 0x32a7ec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x32A7ECu;
    SET_GPR_U32(ctx, 31, 0x32A7F4u);
    ctx->pc = 0x32A7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A7ECu;
            // 0x32a7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7F4u; }
        if (ctx->pc != 0x32A7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A7F4u; }
        if (ctx->pc != 0x32A7F4u) { return; }
    }
    ctx->pc = 0x32A7F4u;
label_32a7f4:
    // 0x32a7f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a7f8:
    // 0x32a7f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a804: 0x3e00008  jr          $ra
    ctx->pc = 0x32A804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A804u;
            // 0x32a808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A80Cu;
    // 0x32a80c: 0x0  nop
    ctx->pc = 0x32a80cu;
    // NOP
}
