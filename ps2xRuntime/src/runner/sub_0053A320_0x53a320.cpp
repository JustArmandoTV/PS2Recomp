#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053A320
// Address: 0x53a320 - 0x53a460
void sub_0053A320_0x53a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053A320_0x53a320");
#endif

    switch (ctx->pc) {
        case 0x53a33cu: goto label_53a33c;
        case 0x53a35cu: goto label_53a35c;
        case 0x53a390u: goto label_53a390;
        case 0x53a3f0u: goto label_53a3f0;
        case 0x53a3fcu: goto label_53a3fc;
        case 0x53a408u: goto label_53a408;
        case 0x53a414u: goto label_53a414;
        case 0x53a420u: goto label_53a420;
        case 0x53a42cu: goto label_53a42c;
        case 0x53a444u: goto label_53a444;
        default: break;
    }

    ctx->pc = 0x53a320u;

    // 0x53a320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53a320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x53a324: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x53a324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x53a328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x53a32c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x53a32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x53a330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53a334: 0xc14e950  jal         func_53A540
    ctx->pc = 0x53A334u;
    SET_GPR_U32(ctx, 31, 0x53A33Cu);
    ctx->pc = 0x53A338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A334u;
            // 0x53a338: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53A540u;
    if (runtime->hasFunction(0x53A540u)) {
        auto targetFn = runtime->lookupFunction(0x53A540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A33Cu; }
        if (ctx->pc != 0x53A33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053A540_0x53a540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A33Cu; }
        if (ctx->pc != 0x53A33Cu) { return; }
    }
    ctx->pc = 0x53A33Cu;
label_53a33c:
    // 0x53a33c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x53a340: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53a340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53a344: 0x24637210  addiu       $v1, $v1, 0x7210
    ctx->pc = 0x53a344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29200));
    // 0x53a348: 0x24427248  addiu       $v0, $v0, 0x7248
    ctx->pc = 0x53a348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29256));
    // 0x53a34c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53a34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x53a350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53a350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53a354: 0xc14e94c  jal         func_53A530
    ctx->pc = 0x53A354u;
    SET_GPR_U32(ctx, 31, 0x53A35Cu);
    ctx->pc = 0x53A358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A354u;
            // 0x53a358: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53A530u;
    if (runtime->hasFunction(0x53A530u)) {
        auto targetFn = runtime->lookupFunction(0x53A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A35Cu; }
        if (ctx->pc != 0x53A35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053A530_0x53a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A35Cu; }
        if (ctx->pc != 0x53A35Cu) { return; }
    }
    ctx->pc = 0x53A35Cu;
label_53a35c:
    // 0x53a35c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x53a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x53a360: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53a360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53a364: 0x24427160  addiu       $v0, $v0, 0x7160
    ctx->pc = 0x53a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29024));
    // 0x53a368: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x53a368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x53a36c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53a370: 0x24427198  addiu       $v0, $v0, 0x7198
    ctx->pc = 0x53a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29080));
    // 0x53a374: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x53a374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x53a378: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53a378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53a37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53a37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53a380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53a380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53a384: 0x3e00008  jr          $ra
    ctx->pc = 0x53A384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A384u;
            // 0x53a388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A38Cu;
    // 0x53a38c: 0x0  nop
    ctx->pc = 0x53a38cu;
    // NOP
label_53a390:
    // 0x53a390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x53a394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x53a398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x53a39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53a3a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53a3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53a3a4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x53A3A4u;
    {
        const bool branch_taken_0x53a3a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A3A4u;
            // 0x53a3a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a3a4) {
            ctx->pc = 0x53A444u;
            goto label_53a444;
        }
    }
    ctx->pc = 0x53A3ACu;
    // 0x53a3ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x53a3b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53a3b4: 0x24637210  addiu       $v1, $v1, 0x7210
    ctx->pc = 0x53a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29200));
    // 0x53a3b8: 0x24427248  addiu       $v0, $v0, 0x7248
    ctx->pc = 0x53a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29256));
    // 0x53a3bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x53a3c0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x53A3C0u;
    {
        const bool branch_taken_0x53a3c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A3C0u;
            // 0x53a3c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a3c0) {
            ctx->pc = 0x53A42Cu;
            goto label_53a42c;
        }
    }
    ctx->pc = 0x53A3C8u;
    // 0x53a3c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x53a3cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53a3d0: 0x246371c0  addiu       $v1, $v1, 0x71C0
    ctx->pc = 0x53a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29120));
    // 0x53a3d4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x53a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x53a3d8: 0x244271f8  addiu       $v0, $v0, 0x71F8
    ctx->pc = 0x53a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29176));
    // 0x53a3dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x53a3e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x53a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x53a3e4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x53a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x53a3e8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x53A3E8u;
    SET_GPR_U32(ctx, 31, 0x53A3F0u);
    ctx->pc = 0x53A3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A3E8u;
            // 0x53a3ec: 0x24a59de0  addiu       $a1, $a1, -0x6220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A3F0u; }
        if (ctx->pc != 0x53A3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A3F0u; }
        if (ctx->pc != 0x53A3F0u) { return; }
    }
    ctx->pc = 0x53A3F0u;
label_53a3f0:
    // 0x53a3f0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x53a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x53a3f4: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x53A3F4u;
    SET_GPR_U32(ctx, 31, 0x53A3FCu);
    ctx->pc = 0x53A3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A3F4u;
            // 0x53a3f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A3FCu; }
        if (ctx->pc != 0x53A3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A3FCu; }
        if (ctx->pc != 0x53A3FCu) { return; }
    }
    ctx->pc = 0x53A3FCu;
label_53a3fc:
    // 0x53a3fc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x53a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x53a400: 0xc14e930  jal         func_53A4C0
    ctx->pc = 0x53A400u;
    SET_GPR_U32(ctx, 31, 0x53A408u);
    ctx->pc = 0x53A404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A400u;
            // 0x53a404: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53A4C0u;
    if (runtime->hasFunction(0x53A4C0u)) {
        auto targetFn = runtime->lookupFunction(0x53A4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A408u; }
        if (ctx->pc != 0x53A408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053A4C0_0x53a4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A408u; }
        if (ctx->pc != 0x53A408u) { return; }
    }
    ctx->pc = 0x53A408u;
label_53a408:
    // 0x53a408: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x53a408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x53a40c: 0xc14e930  jal         func_53A4C0
    ctx->pc = 0x53A40Cu;
    SET_GPR_U32(ctx, 31, 0x53A414u);
    ctx->pc = 0x53A410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A40Cu;
            // 0x53a410: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53A4C0u;
    if (runtime->hasFunction(0x53A4C0u)) {
        auto targetFn = runtime->lookupFunction(0x53A4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A414u; }
        if (ctx->pc != 0x53A414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053A4C0_0x53a4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A414u; }
        if (ctx->pc != 0x53A414u) { return; }
    }
    ctx->pc = 0x53A414u;
label_53a414:
    // 0x53a414: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x53a414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x53a418: 0xc14e918  jal         func_53A460
    ctx->pc = 0x53A418u;
    SET_GPR_U32(ctx, 31, 0x53A420u);
    ctx->pc = 0x53A41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A418u;
            // 0x53a41c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53A460u;
    if (runtime->hasFunction(0x53A460u)) {
        auto targetFn = runtime->lookupFunction(0x53A460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A420u; }
        if (ctx->pc != 0x53A420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053A460_0x53a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A420u; }
        if (ctx->pc != 0x53A420u) { return; }
    }
    ctx->pc = 0x53A420u;
label_53a420:
    // 0x53a420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53a420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53a424: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x53A424u;
    SET_GPR_U32(ctx, 31, 0x53A42Cu);
    ctx->pc = 0x53A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A424u;
            // 0x53a428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A42Cu; }
        if (ctx->pc != 0x53A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A42Cu; }
        if (ctx->pc != 0x53A42Cu) { return; }
    }
    ctx->pc = 0x53A42Cu;
label_53a42c:
    // 0x53a42c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x53a42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x53a430: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53a430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x53a434: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x53A434u;
    {
        const bool branch_taken_0x53a434 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53a434) {
            ctx->pc = 0x53A438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53A434u;
            // 0x53a438: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53A448u;
            goto label_53a448;
        }
    }
    ctx->pc = 0x53A43Cu;
    // 0x53a43c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x53A43Cu;
    SET_GPR_U32(ctx, 31, 0x53A444u);
    ctx->pc = 0x53A440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A43Cu;
            // 0x53a440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A444u; }
        if (ctx->pc != 0x53A444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A444u; }
        if (ctx->pc != 0x53A444u) { return; }
    }
    ctx->pc = 0x53A444u;
label_53a444:
    // 0x53a444: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53a444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53a448:
    // 0x53a448: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53a448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x53a44c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53a44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53a450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53a450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53a454: 0x3e00008  jr          $ra
    ctx->pc = 0x53A454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A454u;
            // 0x53a458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A45Cu;
    // 0x53a45c: 0x0  nop
    ctx->pc = 0x53a45cu;
    // NOP
}
