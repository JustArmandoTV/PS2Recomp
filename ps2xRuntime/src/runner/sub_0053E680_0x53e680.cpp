#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053E680
// Address: 0x53e680 - 0x53e910
void sub_0053E680_0x53e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053E680_0x53e680");
#endif

    switch (ctx->pc) {
        case 0x53e6acu: goto label_53e6ac;
        case 0x53e6ccu: goto label_53e6cc;
        case 0x53e6fcu: goto label_53e6fc;
        case 0x53e708u: goto label_53e708;
        case 0x53e71cu: goto label_53e71c;
        case 0x53e728u: goto label_53e728;
        case 0x53e73cu: goto label_53e73c;
        case 0x53e75cu: goto label_53e75c;
        case 0x53e76cu: goto label_53e76c;
        case 0x53e7bcu: goto label_53e7bc;
        case 0x53e7c8u: goto label_53e7c8;
        case 0x53e7dcu: goto label_53e7dc;
        case 0x53e7e4u: goto label_53e7e4;
        case 0x53e7ecu: goto label_53e7ec;
        case 0x53e808u: goto label_53e808;
        case 0x53e840u: goto label_53e840;
        case 0x53e8a0u: goto label_53e8a0;
        case 0x53e8acu: goto label_53e8ac;
        case 0x53e8b8u: goto label_53e8b8;
        case 0x53e8c4u: goto label_53e8c4;
        case 0x53e8d0u: goto label_53e8d0;
        case 0x53e8dcu: goto label_53e8dc;
        case 0x53e8f4u: goto label_53e8f4;
        default: break;
    }

    ctx->pc = 0x53e680u;

    // 0x53e680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x53e680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x53e684: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x53e684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x53e688: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x53e68c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x53e68cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x53e690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53e690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x53e694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53e694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x53e698: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x53e698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e69c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x53e69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e6a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53e6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53e6a4: 0xc14faec  jal         func_53EBB0
    ctx->pc = 0x53E6A4u;
    SET_GPR_U32(ctx, 31, 0x53E6ACu);
    ctx->pc = 0x53E6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E6A4u;
            // 0x53e6a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53EBB0u;
    if (runtime->hasFunction(0x53EBB0u)) {
        auto targetFn = runtime->lookupFunction(0x53EBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E6ACu; }
        if (ctx->pc != 0x53E6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053EBB0_0x53ebb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E6ACu; }
        if (ctx->pc != 0x53E6ACu) { return; }
    }
    ctx->pc = 0x53E6ACu;
label_53e6ac:
    // 0x53e6ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x53e6b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53e6b4: 0x246375a0  addiu       $v1, $v1, 0x75A0
    ctx->pc = 0x53e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30112));
    // 0x53e6b8: 0x244275d8  addiu       $v0, $v0, 0x75D8
    ctx->pc = 0x53e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30168));
    // 0x53e6bc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x53e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x53e6c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x53e6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e6c4: 0xc14fae8  jal         func_53EBA0
    ctx->pc = 0x53E6C4u;
    SET_GPR_U32(ctx, 31, 0x53E6CCu);
    ctx->pc = 0x53E6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E6C4u;
            // 0x53e6c8: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53EBA0u;
    if (runtime->hasFunction(0x53EBA0u)) {
        auto targetFn = runtime->lookupFunction(0x53EBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E6CCu; }
        if (ctx->pc != 0x53E6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053EBA0_0x53eba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E6CCu; }
        if (ctx->pc != 0x53E6CCu) { return; }
    }
    ctx->pc = 0x53E6CCu;
label_53e6cc:
    // 0x53e6cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x53e6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x53e6d0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x53e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x53e6d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53e6d8: 0x24427550  addiu       $v0, $v0, 0x7550
    ctx->pc = 0x53e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30032));
    // 0x53e6dc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x53e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x53e6e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53e6e4: 0x24427588  addiu       $v0, $v0, 0x7588
    ctx->pc = 0x53e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30088));
    // 0x53e6e8: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x53e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x53e6ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x53e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x53e6f0: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x53e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x53e6f4: 0xc14fae4  jal         func_53EB90
    ctx->pc = 0x53E6F4u;
    SET_GPR_U32(ctx, 31, 0x53E6FCu);
    ctx->pc = 0x53E6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E6F4u;
            // 0x53e6f8: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53EB90u;
    if (runtime->hasFunction(0x53EB90u)) {
        auto targetFn = runtime->lookupFunction(0x53EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E6FCu; }
        if (ctx->pc != 0x53E6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053EB90_0x53eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E6FCu; }
        if (ctx->pc != 0x53E6FCu) { return; }
    }
    ctx->pc = 0x53E6FCu;
label_53e6fc:
    // 0x53e6fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x53e6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e700: 0xc14fad0  jal         func_53EB40
    ctx->pc = 0x53E700u;
    SET_GPR_U32(ctx, 31, 0x53E708u);
    ctx->pc = 0x53E704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E700u;
            // 0x53e704: 0x264400a8  addiu       $a0, $s2, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53EB40u;
    if (runtime->hasFunction(0x53EB40u)) {
        auto targetFn = runtime->lookupFunction(0x53EB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E708u; }
        if (ctx->pc != 0x53E708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053EB40_0x53eb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E708u; }
        if (ctx->pc != 0x53E708u) { return; }
    }
    ctx->pc = 0x53E708u;
label_53e708:
    // 0x53e708: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x53e708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x53e70c: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x53e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x53e710: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x53e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x53e714: 0xc14fae4  jal         func_53EB90
    ctx->pc = 0x53E714u;
    SET_GPR_U32(ctx, 31, 0x53E71Cu);
    ctx->pc = 0x53E718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E714u;
            // 0x53e718: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53EB90u;
    if (runtime->hasFunction(0x53EB90u)) {
        auto targetFn = runtime->lookupFunction(0x53EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E71Cu; }
        if (ctx->pc != 0x53E71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053EB90_0x53eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E71Cu; }
        if (ctx->pc != 0x53E71Cu) { return; }
    }
    ctx->pc = 0x53E71Cu;
label_53e71c:
    // 0x53e71c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x53e71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e720: 0xc14fad0  jal         func_53EB40
    ctx->pc = 0x53E720u;
    SET_GPR_U32(ctx, 31, 0x53E728u);
    ctx->pc = 0x53E724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E720u;
            // 0x53e724: 0x264400c8  addiu       $a0, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53EB40u;
    if (runtime->hasFunction(0x53EB40u)) {
        auto targetFn = runtime->lookupFunction(0x53EB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E728u; }
        if (ctx->pc != 0x53E728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053EB40_0x53eb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E728u; }
        if (ctx->pc != 0x53E728u) { return; }
    }
    ctx->pc = 0x53E728u;
label_53e728:
    // 0x53e728: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53e728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x53e72c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x53e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x53e730: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x53e730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x53e734: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x53E734u;
    SET_GPR_U32(ctx, 31, 0x53E73Cu);
    ctx->pc = 0x53E738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E734u;
            // 0x53e738: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E73Cu; }
        if (ctx->pc != 0x53E73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E73Cu; }
        if (ctx->pc != 0x53E73Cu) { return; }
    }
    ctx->pc = 0x53E73Cu;
label_53e73c:
    // 0x53e73c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x53e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x53e740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53e740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e744: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x53E744u;
    {
        const bool branch_taken_0x53e744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E744u;
            // 0x53e748: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e744) {
            ctx->pc = 0x53E760u;
            goto label_53e760;
        }
    }
    ctx->pc = 0x53E74Cu;
    // 0x53e74c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x53e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x53e750: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x53e750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x53e754: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x53E754u;
    SET_GPR_U32(ctx, 31, 0x53E75Cu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E75Cu; }
        if (ctx->pc != 0x53E75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E75Cu; }
        if (ctx->pc != 0x53E75Cu) { return; }
    }
    ctx->pc = 0x53E75Cu;
label_53e75c:
    // 0x53e75c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53e760:
    // 0x53e760: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x53e760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
    // 0x53e764: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x53e764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x53e768: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x53e768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_53e76c:
    // 0x53e76c: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x53e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x53e770: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x53e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x53e774: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53e774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x53e778: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x53e778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x53e77c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x53e780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x53e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x53e784: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x53e784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x53e788: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x53e788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x53e78c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x53e78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x53e790: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x53e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x53e794: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x53e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x53e798: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x53e798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x53e79c: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x53e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x53e7a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x53e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x53e7a4: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x53e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x53e7a8: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x53e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x53e7ac: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x53e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x53e7b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x53e7b4: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x53E7B4u;
    SET_GPR_U32(ctx, 31, 0x53E7BCu);
    ctx->pc = 0x53E7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E7B4u;
            // 0x53e7b8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E7BCu; }
        if (ctx->pc != 0x53E7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E7BCu; }
        if (ctx->pc != 0x53E7BCu) { return; }
    }
    ctx->pc = 0x53E7BCu;
label_53e7bc:
    // 0x53e7bc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x53e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x53e7c0: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x53E7C0u;
    SET_GPR_U32(ctx, 31, 0x53E7C8u);
    ctx->pc = 0x53E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E7C0u;
            // 0x53e7c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E7C8u; }
        if (ctx->pc != 0x53E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E7C8u; }
        if (ctx->pc != 0x53E7C8u) { return; }
    }
    ctx->pc = 0x53E7C8u;
label_53e7c8:
    // 0x53e7c8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x53e7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x53e7cc: 0x5e00ffe7  bgtzl       $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x53E7CCu;
    {
        const bool branch_taken_0x53e7cc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x53e7cc) {
            ctx->pc = 0x53E7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E7CCu;
            // 0x53e7d0: 0x8e43007c  lw          $v1, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E76Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53e76c;
        }
    }
    ctx->pc = 0x53E7D4u;
    // 0x53e7d4: 0xc0b64ec  jal         func_2D93B0
    ctx->pc = 0x53E7D4u;
    SET_GPR_U32(ctx, 31, 0x53E7DCu);
    ctx->pc = 0x53E7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E7D4u;
            // 0x53e7d8: 0x264400a8  addiu       $a0, $s2, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E7DCu; }
        if (ctx->pc != 0x53E7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E7DCu; }
        if (ctx->pc != 0x53E7DCu) { return; }
    }
    ctx->pc = 0x53E7DCu;
label_53e7dc:
    // 0x53e7dc: 0xc0b64ec  jal         func_2D93B0
    ctx->pc = 0x53E7DCu;
    SET_GPR_U32(ctx, 31, 0x53E7E4u);
    ctx->pc = 0x53E7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E7DCu;
            // 0x53e7e0: 0x264400c8  addiu       $a0, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E7E4u; }
        if (ctx->pc != 0x53E7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E7E4u; }
        if (ctx->pc != 0x53E7E4u) { return; }
    }
    ctx->pc = 0x53E7E4u;
label_53e7e4:
    // 0x53e7e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53e7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e7e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x53e7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e7ec:
    // 0x53e7ec: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x53e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x53e7f0: 0x264400c8  addiu       $a0, $s2, 0xC8
    ctx->pc = 0x53e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    // 0x53e7f4: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x53e7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x53e7f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x53e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x53e7fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x53e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x53e800: 0xc12a70c  jal         func_4A9C30
    ctx->pc = 0x53E800u;
    SET_GPR_U32(ctx, 31, 0x53E808u);
    ctx->pc = 0x53E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E800u;
            // 0x53e804: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C30u;
    if (runtime->hasFunction(0x4A9C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A9C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E808u; }
        if (ctx->pc != 0x53E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9C30_0x4a9c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E808u; }
        if (ctx->pc != 0x53E808u) { return; }
    }
    ctx->pc = 0x53E808u;
label_53e808:
    // 0x53e808: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x53e808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x53e80c: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x53e80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x53e810: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x53E810u;
    {
        const bool branch_taken_0x53e810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x53E814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E810u;
            // 0x53e814: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e810) {
            ctx->pc = 0x53E7ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53e7ec;
        }
    }
    ctx->pc = 0x53E818u;
    // 0x53e818: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x53e818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e81c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53e81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x53e820: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53e820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x53e824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53e824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53e828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53e828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53e82c: 0x3e00008  jr          $ra
    ctx->pc = 0x53E82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53E830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E82Cu;
            // 0x53e830: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53E834u;
    // 0x53e834: 0x0  nop
    ctx->pc = 0x53e834u;
    // NOP
    // 0x53e838: 0x0  nop
    ctx->pc = 0x53e838u;
    // NOP
    // 0x53e83c: 0x0  nop
    ctx->pc = 0x53e83cu;
    // NOP
label_53e840:
    // 0x53e840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x53e844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x53e848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x53e84c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53e84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53e850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53e850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e854: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x53E854u;
    {
        const bool branch_taken_0x53e854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E854u;
            // 0x53e858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e854) {
            ctx->pc = 0x53E8F4u;
            goto label_53e8f4;
        }
    }
    ctx->pc = 0x53E85Cu;
    // 0x53e85c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x53e860: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53e860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53e864: 0x246375a0  addiu       $v1, $v1, 0x75A0
    ctx->pc = 0x53e864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30112));
    // 0x53e868: 0x244275d8  addiu       $v0, $v0, 0x75D8
    ctx->pc = 0x53e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30168));
    // 0x53e86c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x53e870: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x53E870u;
    {
        const bool branch_taken_0x53e870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E870u;
            // 0x53e874: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e870) {
            ctx->pc = 0x53E8DCu;
            goto label_53e8dc;
        }
    }
    ctx->pc = 0x53E878u;
    // 0x53e878: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53e878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x53e87c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53e880: 0x24637500  addiu       $v1, $v1, 0x7500
    ctx->pc = 0x53e880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29952));
    // 0x53e884: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x53e884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x53e888: 0x24427538  addiu       $v0, $v0, 0x7538
    ctx->pc = 0x53e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30008));
    // 0x53e88c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x53e890: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x53e890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x53e894: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x53e894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x53e898: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x53E898u;
    SET_GPR_U32(ctx, 31, 0x53E8A0u);
    ctx->pc = 0x53E89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E898u;
            // 0x53e89c: 0x24a5dcb0  addiu       $a1, $a1, -0x2350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8A0u; }
        if (ctx->pc != 0x53E8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8A0u; }
        if (ctx->pc != 0x53E8A0u) { return; }
    }
    ctx->pc = 0x53E8A0u;
label_53e8a0:
    // 0x53e8a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x53e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x53e8a4: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x53E8A4u;
    SET_GPR_U32(ctx, 31, 0x53E8ACu);
    ctx->pc = 0x53E8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E8A4u;
            // 0x53e8a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8ACu; }
        if (ctx->pc != 0x53E8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8ACu; }
        if (ctx->pc != 0x53E8ACu) { return; }
    }
    ctx->pc = 0x53E8ACu;
label_53e8ac:
    // 0x53e8ac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x53e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x53e8b0: 0xc14fa5c  jal         func_53E970
    ctx->pc = 0x53E8B0u;
    SET_GPR_U32(ctx, 31, 0x53E8B8u);
    ctx->pc = 0x53E8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E8B0u;
            // 0x53e8b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E970u;
    if (runtime->hasFunction(0x53E970u)) {
        auto targetFn = runtime->lookupFunction(0x53E970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8B8u; }
        if (ctx->pc != 0x53E8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E970_0x53e970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8B8u; }
        if (ctx->pc != 0x53E8B8u) { return; }
    }
    ctx->pc = 0x53E8B8u;
label_53e8b8:
    // 0x53e8b8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x53e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x53e8bc: 0xc14fa5c  jal         func_53E970
    ctx->pc = 0x53E8BCu;
    SET_GPR_U32(ctx, 31, 0x53E8C4u);
    ctx->pc = 0x53E8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E8BCu;
            // 0x53e8c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E970u;
    if (runtime->hasFunction(0x53E970u)) {
        auto targetFn = runtime->lookupFunction(0x53E970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8C4u; }
        if (ctx->pc != 0x53E8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E970_0x53e970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8C4u; }
        if (ctx->pc != 0x53E8C4u) { return; }
    }
    ctx->pc = 0x53E8C4u;
label_53e8c4:
    // 0x53e8c4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x53e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x53e8c8: 0xc14fa44  jal         func_53E910
    ctx->pc = 0x53E8C8u;
    SET_GPR_U32(ctx, 31, 0x53E8D0u);
    ctx->pc = 0x53E8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E8C8u;
            // 0x53e8cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E910u;
    if (runtime->hasFunction(0x53E910u)) {
        auto targetFn = runtime->lookupFunction(0x53E910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8D0u; }
        if (ctx->pc != 0x53E8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E910_0x53e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8D0u; }
        if (ctx->pc != 0x53E8D0u) { return; }
    }
    ctx->pc = 0x53E8D0u;
label_53e8d0:
    // 0x53e8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53e8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e8d4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x53E8D4u;
    SET_GPR_U32(ctx, 31, 0x53E8DCu);
    ctx->pc = 0x53E8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E8D4u;
            // 0x53e8d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8DCu; }
        if (ctx->pc != 0x53E8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8DCu; }
        if (ctx->pc != 0x53E8DCu) { return; }
    }
    ctx->pc = 0x53E8DCu;
label_53e8dc:
    // 0x53e8dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x53e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x53e8e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53e8e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x53e8e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x53E8E4u;
    {
        const bool branch_taken_0x53e8e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53e8e4) {
            ctx->pc = 0x53E8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E8E4u;
            // 0x53e8e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E8F8u;
            goto label_53e8f8;
        }
    }
    ctx->pc = 0x53E8ECu;
    // 0x53e8ec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x53E8ECu;
    SET_GPR_U32(ctx, 31, 0x53E8F4u);
    ctx->pc = 0x53E8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E8ECu;
            // 0x53e8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8F4u; }
        if (ctx->pc != 0x53E8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E8F4u; }
        if (ctx->pc != 0x53E8F4u) { return; }
    }
    ctx->pc = 0x53E8F4u;
label_53e8f4:
    // 0x53e8f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53e8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53e8f8:
    // 0x53e8f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53e8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x53e8fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53e8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53e900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53e900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53e904: 0x3e00008  jr          $ra
    ctx->pc = 0x53E904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53E908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E904u;
            // 0x53e908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53E90Cu;
    // 0x53e90c: 0x0  nop
    ctx->pc = 0x53e90cu;
    // NOP
}
