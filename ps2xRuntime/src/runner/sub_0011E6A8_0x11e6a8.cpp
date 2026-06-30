#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E6A8
// Address: 0x11e6a8 - 0x11e9c8
void sub_0011E6A8_0x11e6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E6A8_0x11e6a8");
#endif

    switch (ctx->pc) {
        case 0x11e6e8u: goto label_11e6e8;
        case 0x11e6f4u: goto label_11e6f4;
        case 0x11e714u: goto label_11e714;
        case 0x11e724u: goto label_11e724;
        case 0x11e740u: goto label_11e740;
        case 0x11e748u: goto label_11e748;
        case 0x11e768u: goto label_11e768;
        case 0x11e77cu: goto label_11e77c;
        case 0x11e79cu: goto label_11e79c;
        case 0x11e7a8u: goto label_11e7a8;
        case 0x11e808u: goto label_11e808;
        case 0x11e85cu: goto label_11e85c;
        case 0x11e878u: goto label_11e878;
        case 0x11e8a0u: goto label_11e8a0;
        case 0x11e8b4u: goto label_11e8b4;
        case 0x11e928u: goto label_11e928;
        case 0x11e940u: goto label_11e940;
        case 0x11e958u: goto label_11e958;
        case 0x11e970u: goto label_11e970;
        case 0x11e9b8u: goto label_11e9b8;
        default: break;
    }

    ctx->pc = 0x11e6a8u;

label_11e6a8:
    // 0x11e6a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11e6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11e6ac: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x11e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x11e6b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x11e6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11e6b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11e6b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6b8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x11e6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x11e6bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11e6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6c0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x11e6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11e6c4: 0x3c16005d  lui         $s6, 0x5D
    ctx->pc = 0x11e6c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)93 << 16));
    // 0x11e6c8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x11e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x11e6cc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x11e6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x11e6d0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x11e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x11e6d4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x11e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x11e6d8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11e6dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11e6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11e6e0: 0xc0478f4  jal         func_11E3D0
    ctx->pc = 0x11E6E0u;
    SET_GPR_U32(ctx, 31, 0x11E6E8u);
    ctx->pc = 0x11E6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6E0u;
            // 0x11e6e4: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D0u;
    if (runtime->hasFunction(0x11E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E6E8u; }
        if (ctx->pc != 0x11E6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E3D0_0x11e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E6E8u; }
        if (ctx->pc != 0x11E6E8u) { return; }
    }
    ctx->pc = 0x11E6E8u;
label_11e6e8:
    // 0x11e6e8: 0x8ec4fae8  lw          $a0, -0x518($s6)
    ctx->pc = 0x11e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965992)));
    // 0x11e6ec: 0xc0430ec  jal         func_10C3B0
    ctx->pc = 0x11E6ECu;
    SET_GPR_U32(ctx, 31, 0x11E6F4u);
    ctx->pc = 0x10C3B0u;
    if (runtime->hasFunction(0x10C3B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E6F4u; }
        if (ctx->pc != 0x11E6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3B0_0x10c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E6F4u; }
        if (ctx->pc != 0x11E6F4u) { return; }
    }
    ctx->pc = 0x11E6F4u;
label_11e6f4:
    // 0x11e6f4: 0x8ec3fae8  lw          $v1, -0x518($s6)
    ctx->pc = 0x11e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965992)));
    // 0x11e6f8: 0x1462009e  bne         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x11E6F8u;
    {
        const bool branch_taken_0x11e6f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6F8u;
            // 0x11e6fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6f8) {
            ctx->pc = 0x11E974u;
            goto label_11e974;
        }
    }
    ctx->pc = 0x11E700u;
    // 0x11e700: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x11e700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x11e704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e708: 0x0  nop
    ctx->pc = 0x11e708u;
    // NOP
    // 0x11e70c: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x11E70Cu;
    SET_GPR_U32(ctx, 31, 0x11E714u);
    ctx->pc = 0x11E710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E70Cu;
            // 0x11e710: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E714u; }
        if (ctx->pc != 0x11E714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E714u; }
        if (ctx->pc != 0x11E714u) { return; }
    }
    ctx->pc = 0x11E714u;
label_11e714:
    // 0x11e714: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x11E714u;
    {
        const bool branch_taken_0x11e714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E714u;
            // 0x11e718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e714) {
            ctx->pc = 0x11E8A8u;
            goto label_11e8a8;
        }
    }
    ctx->pc = 0x11E71Cu;
    // 0x11e71c: 0xc043eaa  jal         func_10FAA8
    ctx->pc = 0x11E71Cu;
    SET_GPR_U32(ctx, 31, 0x11E724u);
    ctx->pc = 0x11E720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E71Cu;
            // 0x11e720: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA8u;
    if (runtime->hasFunction(0x10FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E724u; }
        if (ctx->pc != 0x11E724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA8_0x10faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E724u; }
        if (ctx->pc != 0x11E724u) { return; }
    }
    ctx->pc = 0x11E724u;
label_11e724:
    // 0x11e724: 0x8e22fb0c  lw          $v0, -0x4F4($s1)
    ctx->pc = 0x11e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966028)));
    // 0x11e728: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11E728u;
    {
        const bool branch_taken_0x11e728 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E728u;
            // 0x11e72c: 0x3c17006c  lui         $s7, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e728) {
            ctx->pc = 0x11E7DCu;
            goto label_11e7dc;
        }
    }
    ctx->pc = 0x11E730u;
    // 0x11e730: 0x3c14005d  lui         $s4, 0x5D
    ctx->pc = 0x11e730u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)93 << 16));
    // 0x11e734: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x11e734u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x11e738: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11E738u;
    {
        const bool branch_taken_0x11e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E738u;
            // 0x11e73c: 0x3c1e006c  lui         $fp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e738) {
            ctx->pc = 0x11E764u;
            goto label_11e764;
        }
    }
    ctx->pc = 0x11E740u;
label_11e740:
    // 0x11e740: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11e740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e744: 0x0  nop
    ctx->pc = 0x11e744u;
    // NOP
label_11e748:
    // 0x11e748: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11e74c: 0x0  nop
    ctx->pc = 0x11e74cu;
    // NOP
    // 0x11e750: 0x0  nop
    ctx->pc = 0x11e750u;
    // NOP
    // 0x11e754: 0x0  nop
    ctx->pc = 0x11e754u;
    // NOP
    // 0x11e758: 0x0  nop
    ctx->pc = 0x11e758u;
    // NOP
    // 0x11e75c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11E75Cu;
    {
        const bool branch_taken_0x11e75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e75c) {
            ctx->pc = 0x11E748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e748;
        }
    }
    ctx->pc = 0x11E764u;
label_11e764:
    // 0x11e764: 0x26f00c00  addiu       $s0, $s7, 0xC00
    ctx->pc = 0x11e764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 3072));
label_11e768:
    // 0x11e768: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11e768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11e76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e770: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x11e770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x11e774: 0xc044094  jal         func_110250
    ctx->pc = 0x11E774u;
    SET_GPR_U32(ctx, 31, 0x11E77Cu);
    ctx->pc = 0x11E778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E774u;
            // 0x11e778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110250u;
    if (runtime->hasFunction(0x110250u)) {
        auto targetFn = runtime->lookupFunction(0x110250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E77Cu; }
        if (ctx->pc != 0x11E77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110250_0x110250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E77Cu; }
        if (ctx->pc != 0x11E77Cu) { return; }
    }
    ctx->pc = 0x11E77Cu;
label_11e77c:
    // 0x11e77c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E77Cu;
    {
        const bool branch_taken_0x11e77c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11e77c) {
            ctx->pc = 0x11E780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E77Cu;
            // 0x11e780: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E784u;
    // 0x11e784: 0x8e82fad0  lw          $v0, -0x530($s4)
    ctx->pc = 0x11e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965968)));
    // 0x11e788: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E788u;
    {
        const bool branch_taken_0x11e788 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E788u;
            // 0x11e78c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e788) {
            ctx->pc = 0x11E7A0u;
            goto label_11e7a0;
        }
    }
    ctx->pc = 0x11E790u;
    // 0x11e790: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x11e790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x11e794: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11E794u;
    SET_GPR_U32(ctx, 31, 0x11E79Cu);
    ctx->pc = 0x11E798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E794u;
            // 0x11e798: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E79Cu; }
        if (ctx->pc != 0x11E79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E79Cu; }
        if (ctx->pc != 0x11E79Cu) { return; }
    }
    ctx->pc = 0x11E79Cu;
label_11e79c:
    // 0x11e79c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11e7a0:
    // 0x11e7a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e7a4: 0x0  nop
    ctx->pc = 0x11e7a4u;
    // NOP
label_11e7a8:
    // 0x11e7a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11e7ac: 0x0  nop
    ctx->pc = 0x11e7acu;
    // NOP
    // 0x11e7b0: 0x0  nop
    ctx->pc = 0x11e7b0u;
    // NOP
    // 0x11e7b4: 0x0  nop
    ctx->pc = 0x11e7b4u;
    // NOP
    // 0x11e7b8: 0x0  nop
    ctx->pc = 0x11e7b8u;
    // NOP
    // 0x11e7bc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11E7BCu;
    {
        const bool branch_taken_0x11e7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e7bc) {
            ctx->pc = 0x11E7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e7a8;
        }
    }
    ctx->pc = 0x11E7C4u;
    // 0x11e7c4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11E7C4u;
    {
        const bool branch_taken_0x11e7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7C4u;
            // 0x11e7c8: 0x26f00c00  addiu       $s0, $s7, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7c4) {
            ctx->pc = 0x11E768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e768;
        }
    }
    ctx->pc = 0x11E7CCu;
label_11e7cc:
    // 0x11e7cc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11E7CCu;
    {
        const bool branch_taken_0x11e7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7CCu;
            // 0x11e7d0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7cc) {
            ctx->pc = 0x11E740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e740;
        }
    }
    ctx->pc = 0x11E7D4u;
    // 0x11e7d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E7D4u;
    {
        const bool branch_taken_0x11e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7D4u;
            // 0x11e7d8: 0xae20fb0c  sw          $zero, -0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294966028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7d4) {
            ctx->pc = 0x11E7E8u;
            goto label_11e7e8;
        }
    }
    ctx->pc = 0x11E7DCu;
label_11e7dc:
    // 0x11e7dc: 0x3c14005d  lui         $s4, 0x5D
    ctx->pc = 0x11e7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)93 << 16));
    // 0x11e7e0: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x11e7e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x11e7e4: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x11e7e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
label_11e7e8:
    // 0x11e7e8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x11e7e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e7ec: 0x26a40a80  addiu       $a0, $s5, 0xA80
    ctx->pc = 0x11e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2688));
    // 0x11e7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7f4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x11e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11e7f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11E7F8u;
    {
        const bool branch_taken_0x11e7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7F8u;
            // 0x11e7fc: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7f8) {
            ctx->pc = 0x11E82Cu;
            goto label_11e82c;
        }
    }
    ctx->pc = 0x11E800u;
    // 0x11e800: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x11e800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x11e804: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11e804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11e808:
    // 0x11e808: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x11e808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x11e80c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E80Cu;
    {
        const bool branch_taken_0x11e80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E80Cu;
            // 0x11e810: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e80c) {
            ctx->pc = 0x11E82Cu;
            goto label_11e82c;
        }
    }
    ctx->pc = 0x11E814u;
    // 0x11e814: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x11e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11e818: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11e818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e81c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11e81cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11e820: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x11e820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11e824: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11E824u;
    {
        const bool branch_taken_0x11e824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e824) {
            ctx->pc = 0x11E828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E824u;
            // 0x11e828: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e808;
        }
    }
    ctx->pc = 0x11E82Cu;
label_11e82c:
    // 0x11e82c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11e830: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E830u;
    {
        const bool branch_taken_0x11e830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E830u;
            // 0x11e834: 0x8e82fad0  lw          $v0, -0x530($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e830) {
            ctx->pc = 0x11E844u;
            goto label_11e844;
        }
    }
    ctx->pc = 0x11E838u;
    // 0x11e838: 0x26a20a80  addiu       $v0, $s5, 0xA80
    ctx->pc = 0x11e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2688));
    // 0x11e83c: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x11e83cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x11e840: 0x8e82fad0  lw          $v0, -0x530($s4)
    ctx->pc = 0x11e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965968)));
label_11e844:
    // 0x11e844: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E844u;
    {
        const bool branch_taken_0x11e844 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11E848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E844u;
            // 0x11e848: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e844) {
            ctx->pc = 0x11E85Cu;
            goto label_11e85c;
        }
    }
    ctx->pc = 0x11E84Cu;
    // 0x11e84c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x11e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x11e850: 0x248401d0  addiu       $a0, $a0, 0x1D0
    ctx->pc = 0x11e850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x11e854: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11E854u;
    SET_GPR_U32(ctx, 31, 0x11E85Cu);
    ctx->pc = 0x11E858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E854u;
            // 0x11e858: 0x24a50aa4  addiu       $a1, $a1, 0xAA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2724));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E85Cu; }
        if (ctx->pc != 0x11E85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E85Cu; }
        if (ctx->pc != 0x11E85Cu) { return; }
    }
    ctx->pc = 0x11E85Cu;
label_11e85c:
    // 0x11e85c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e860: 0x26b00a80  addiu       $s0, $s5, 0xA80
    ctx->pc = 0x11e860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 2688));
    // 0x11e864: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x11e864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x11e868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e86c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x11e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x11e870: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x11E870u;
    SET_GPR_U32(ctx, 31, 0x11E878u);
    ctx->pc = 0x11E874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E870u;
            // 0x11e874: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E878u; }
        if (ctx->pc != 0x11E878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E878u; }
        if (ctx->pc != 0x11E878u) { return; }
    }
    ctx->pc = 0x11E878u;
label_11e878:
    // 0x11e878: 0x26e40c00  addiu       $a0, $s7, 0xC00
    ctx->pc = 0x11e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3072));
    // 0x11e87c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e888: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11e888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e88c: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x11e88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x11e890: 0x27c90bc0  addiu       $t1, $fp, 0xBC0
    ctx->pc = 0x11e890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 3008));
    // 0x11e894: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11e894u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11e898: 0xc04410c  jal         func_110430
    ctx->pc = 0x11E898u;
    SET_GPR_U32(ctx, 31, 0x11E8A0u);
    ctx->pc = 0x11E89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E898u;
            // 0x11e89c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8A0u; }
        if (ctx->pc != 0x11E8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8A0u; }
        if (ctx->pc != 0x11E8A0u) { return; }
    }
    ctx->pc = 0x11E8A0u;
label_11e8a0:
    // 0x11e8a0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E8A0u;
    {
        const bool branch_taken_0x11e8a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8A0u;
            // 0x11e8a4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8a0) {
            ctx->pc = 0x11E8BCu;
            goto label_11e8bc;
        }
    }
    ctx->pc = 0x11E8A8u;
label_11e8a8:
    // 0x11e8a8: 0x8ec4fae8  lw          $a0, -0x518($s6)
    ctx->pc = 0x11e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965992)));
    // 0x11e8ac: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x11E8ACu;
    SET_GPR_U32(ctx, 31, 0x11E8B4u);
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8B4u; }
        if (ctx->pc != 0x11E8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8B4u; }
        if (ctx->pc != 0x11E8B4u) { return; }
    }
    ctx->pc = 0x11E8B4u;
label_11e8b4:
    // 0x11e8b4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x11E8B4u;
    {
        const bool branch_taken_0x11e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8B4u;
            // 0x11e8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8b4) {
            ctx->pc = 0x11E974u;
            goto label_11e974;
        }
    }
    ctx->pc = 0x11E8BCu;
label_11e8bc:
    // 0x11e8bc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11e8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11e8c0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x11e8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11e8c4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x11e8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11e8c8: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x11e8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11e8cc: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x11e8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11e8d0: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x11e8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11e8d4: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x11e8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11e8d8: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x11e8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11e8dc: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x11e8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11e8e0: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x11e8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e8e4: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x11e8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e8e8: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x11e8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e8ec: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x11e8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e8f0: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x11e8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e8f4: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x11e8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e8f8: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x11e8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e8fc: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x11e8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11e900: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x11e900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x11e904: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x11e904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x11e908: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x11e908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11e90c: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x11e90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11e910: 0x8e83fad0  lw          $v1, -0x530($s4)
    ctx->pc = 0x11e910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965968)));
    // 0x11e914: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E914u;
    {
        const bool branch_taken_0x11e914 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11E918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E914u;
            // 0x11e918: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e914) {
            ctx->pc = 0x11E958u;
            goto label_11e958;
        }
    }
    ctx->pc = 0x11E91Cu;
    // 0x11e91c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x11e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x11e920: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11E920u;
    SET_GPR_U32(ctx, 31, 0x11E928u);
    ctx->pc = 0x11E924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E920u;
            // 0x11e924: 0x248401e8  addiu       $a0, $a0, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E928u; }
        if (ctx->pc != 0x11E928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E928u; }
        if (ctx->pc != 0x11E928u) { return; }
    }
    ctx->pc = 0x11E928u;
label_11e928:
    // 0x11e928: 0x8e82fad0  lw          $v0, -0x530($s4)
    ctx->pc = 0x11e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965968)));
    // 0x11e92c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E92Cu;
    {
        const bool branch_taken_0x11e92c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11E930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E92Cu;
            // 0x11e930: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e92c) {
            ctx->pc = 0x11E958u;
            goto label_11e958;
        }
    }
    ctx->pc = 0x11E934u;
    // 0x11e934: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x11e934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11e938: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11E938u;
    SET_GPR_U32(ctx, 31, 0x11E940u);
    ctx->pc = 0x11E93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E938u;
            // 0x11e93c: 0x248401f8  addiu       $a0, $a0, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E940u; }
        if (ctx->pc != 0x11E940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E940u; }
        if (ctx->pc != 0x11E940u) { return; }
    }
    ctx->pc = 0x11E940u;
label_11e940:
    // 0x11e940: 0x8e82fad0  lw          $v0, -0x530($s4)
    ctx->pc = 0x11e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965968)));
    // 0x11e944: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E944u;
    {
        const bool branch_taken_0x11e944 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11E948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E944u;
            // 0x11e948: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e944) {
            ctx->pc = 0x11E958u;
            goto label_11e958;
        }
    }
    ctx->pc = 0x11E94Cu;
    // 0x11e94c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x11e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11e950: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11E950u;
    SET_GPR_U32(ctx, 31, 0x11E958u);
    ctx->pc = 0x11E954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E950u;
            // 0x11e954: 0x24840208  addiu       $a0, $a0, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E958u; }
        if (ctx->pc != 0x11E958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E958u; }
        if (ctx->pc != 0x11E958u) { return; }
    }
    ctx->pc = 0x11E958u;
label_11e958:
    // 0x11e958: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x11e958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x11e95c: 0x27c20bc0  addiu       $v0, $fp, 0xBC0
    ctx->pc = 0x11e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 3008));
    // 0x11e960: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11e960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e964: 0x8ec4fae8  lw          $a0, -0x518($s6)
    ctx->pc = 0x11e964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965992)));
    // 0x11e968: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x11E968u;
    SET_GPR_U32(ctx, 31, 0x11E970u);
    ctx->pc = 0x11E96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E968u;
            // 0x11e96c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E970u; }
        if (ctx->pc != 0x11E970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E970u; }
        if (ctx->pc != 0x11E970u) { return; }
    }
    ctx->pc = 0x11E970u;
label_11e970:
    // 0x11e970: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11e970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e974:
    // 0x11e974: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11e974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11e978: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x11e978u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11e97c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x11e97cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11e980: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x11e980u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e984: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x11e984u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e988: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x11e988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e98c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x11e98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e990: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x11e990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e994: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11e994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e998: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11e998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e99c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E99Cu;
            // 0x11e9a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E9A4u;
    // 0x11e9a4: 0x0  nop
    ctx->pc = 0x11e9a4u;
    // NOP
    // 0x11e9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e9b0: 0xc0479aa  jal         func_11E6A8
    ctx->pc = 0x11E9B0u;
    SET_GPR_U32(ctx, 31, 0x11E9B8u);
    ctx->pc = 0x11E9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9B0u;
            // 0x11e9b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E6A8u;
    goto label_11e6a8;
    ctx->pc = 0x11E9B8u;
label_11e9b8:
    // 0x11e9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x11E9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9BCu;
            // 0x11e9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E9C4u;
    // 0x11e9c4: 0x0  nop
    ctx->pc = 0x11e9c4u;
    // NOP
}
