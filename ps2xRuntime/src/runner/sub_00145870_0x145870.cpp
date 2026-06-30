#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00145870
// Address: 0x145870 - 0x145990
void sub_00145870_0x145870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145870_0x145870");
#endif

    switch (ctx->pc) {
        case 0x1458c0u: goto label_1458c0;
        case 0x1458dcu: goto label_1458dc;
        case 0x1458f4u: goto label_1458f4;
        case 0x145920u: goto label_145920;
        case 0x145954u: goto label_145954;
        case 0x145964u: goto label_145964;
        default: break;
    }

    ctx->pc = 0x145870u;

    // 0x145870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x145870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x145874: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x145874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x145878: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x145878u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x14587c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14587cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x145880: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x145880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x145884: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x145884u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14588c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14588cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145894: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x145894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14589c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x14589cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1458a0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1458a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1458a4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1458a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1458a8: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1458A8u;
    {
        const bool branch_taken_0x1458a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1458ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1458A8u;
            // 0x1458ac: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1458a8) {
            ctx->pc = 0x145964u;
            goto label_145964;
        }
    }
    ctx->pc = 0x1458B0u;
    // 0x1458b0: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1458b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1458b4: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x1458b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1458b8: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x1458B8u;
    SET_GPR_U32(ctx, 31, 0x1458C0u);
    ctx->pc = 0x1458BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1458B8u;
            // 0x1458bc: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458C0u; }
        if (ctx->pc != 0x1458C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458C0u; }
        if (ctx->pc != 0x1458C0u) { return; }
    }
    ctx->pc = 0x1458C0u;
label_1458c0:
    // 0x1458c0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1458C0u;
    {
        const bool branch_taken_0x1458c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1458c0) {
            ctx->pc = 0x145928u;
            goto label_145928;
        }
    }
    ctx->pc = 0x1458C8u;
    // 0x1458c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1458C8u;
    {
        const bool branch_taken_0x1458c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1458CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1458C8u;
            // 0x1458cc: 0xaf8082d0  sw          $zero, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1458c8) {
            ctx->pc = 0x1458E4u;
            goto label_1458e4;
        }
    }
    ctx->pc = 0x1458D0u;
    // 0x1458d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1458d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1458d4: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x1458D4u;
    SET_GPR_U32(ctx, 31, 0x1458DCu);
    ctx->pc = 0x1458D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1458D4u;
            // 0x1458d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458DCu; }
        if (ctx->pc != 0x1458DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458DCu; }
        if (ctx->pc != 0x1458DCu) { return; }
    }
    ctx->pc = 0x1458DCu;
label_1458dc:
    // 0x1458dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1458DCu;
    {
        const bool branch_taken_0x1458dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1458E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1458DCu;
            // 0x1458e0: 0xaf9082e0  sw          $s0, -0x7D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1458dc) {
            ctx->pc = 0x145900u;
            goto label_145900;
        }
    }
    ctx->pc = 0x1458E4u;
label_1458e4:
    // 0x1458e4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1458e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1458e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1458e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1458ec: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x1458ECu;
    SET_GPR_U32(ctx, 31, 0x1458F4u);
    ctx->pc = 0x1458F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1458ECu;
            // 0x1458f0: 0x24a51230  addiu       $a1, $a1, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458F4u; }
        if (ctx->pc != 0x1458F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458F4u; }
        if (ctx->pc != 0x1458F4u) { return; }
    }
    ctx->pc = 0x1458F4u;
label_1458f4:
    // 0x1458f4: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x1458f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
    // 0x1458f8: 0x26101230  addiu       $s0, $s0, 0x1230
    ctx->pc = 0x1458f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
    // 0x1458fc: 0xaf9082e0  sw          $s0, -0x7D20($gp)
    ctx->pc = 0x1458fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 16));
label_145900:
    // 0x145900: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x145900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145904: 0xaf9182e8  sw          $s1, -0x7D18($gp)
    ctx->pc = 0x145904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935272), GPR_U32(ctx, 17));
    // 0x145908: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14590c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14590cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145910: 0xe78082ec  swc1        $f0, -0x7D14($gp)
    ctx->pc = 0x145910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), bits); }
    // 0x145914: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x145914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x145918: 0xc051514  jal         func_145450
    ctx->pc = 0x145918u;
    SET_GPR_U32(ctx, 31, 0x145920u);
    ctx->pc = 0x14591Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145918u;
            // 0x14591c: 0xaf8282e4  sw          $v0, -0x7D1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145450u;
    if (runtime->hasFunction(0x145450u)) {
        auto targetFn = runtime->lookupFunction(0x145450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145920u; }
        if (ctx->pc != 0x145920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145450_0x145450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145920u; }
        if (ctx->pc != 0x145920u) { return; }
    }
    ctx->pc = 0x145920u;
label_145920:
    // 0x145920: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x145920u;
    {
        const bool branch_taken_0x145920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145920u;
            // 0x145924: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145920) {
            ctx->pc = 0x145968u;
            goto label_145968;
        }
    }
    ctx->pc = 0x145928u;
label_145928:
    // 0x145928: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145928u;
    {
        const bool branch_taken_0x145928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x145928) {
            ctx->pc = 0x145938u;
            goto label_145938;
        }
    }
    ctx->pc = 0x145930u;
    // 0x145930: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145930u;
    {
        const bool branch_taken_0x145930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145930u;
            // 0x145934: 0xaf9082e0  sw          $s0, -0x7D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145930) {
            ctx->pc = 0x145944u;
            goto label_145944;
        }
    }
    ctx->pc = 0x145938u;
label_145938:
    // 0x145938: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x145938u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
    // 0x14593c: 0x26101230  addiu       $s0, $s0, 0x1230
    ctx->pc = 0x14593cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
    // 0x145940: 0xaf9082e0  sw          $s0, -0x7D20($gp)
    ctx->pc = 0x145940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 16));
label_145944:
    // 0x145944: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x145944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x145948: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14594c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14594Cu;
    SET_GPR_U32(ctx, 31, 0x145954u);
    ctx->pc = 0x145950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14594Cu;
            // 0x145950: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145954u; }
        if (ctx->pc != 0x145954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145954u; }
        if (ctx->pc != 0x145954u) { return; }
    }
    ctx->pc = 0x145954u;
label_145954:
    // 0x145954: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145958: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x145958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14595c: 0xc05147c  jal         func_1451F0
    ctx->pc = 0x14595Cu;
    SET_GPR_U32(ctx, 31, 0x145964u);
    ctx->pc = 0x145960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14595Cu;
            // 0x145960: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1451F0u;
    if (runtime->hasFunction(0x1451F0u)) {
        auto targetFn = runtime->lookupFunction(0x1451F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145964u; }
        if (ctx->pc != 0x145964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001451F0_0x1451f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145964u; }
        if (ctx->pc != 0x145964u) { return; }
    }
    ctx->pc = 0x145964u;
label_145964:
    // 0x145964: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x145964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_145968:
    // 0x145968: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x145968u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14596c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14596cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145970: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14597c: 0x3e00008  jr          $ra
    ctx->pc = 0x14597Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14597Cu;
            // 0x145980: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145984u;
    // 0x145984: 0x0  nop
    ctx->pc = 0x145984u;
    // NOP
    // 0x145988: 0x0  nop
    ctx->pc = 0x145988u;
    // NOP
    // 0x14598c: 0x0  nop
    ctx->pc = 0x14598cu;
    // NOP
}
