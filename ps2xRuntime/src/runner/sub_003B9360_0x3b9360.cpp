#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9360
// Address: 0x3b9360 - 0x3b9480
void sub_003B9360_0x3b9360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9360_0x3b9360");
#endif

    switch (ctx->pc) {
        case 0x3b93c8u: goto label_3b93c8;
        case 0x3b93e0u: goto label_3b93e0;
        case 0x3b93ecu: goto label_3b93ec;
        case 0x3b9410u: goto label_3b9410;
        case 0x3b9434u: goto label_3b9434;
        default: break;
    }

    ctx->pc = 0x3b9360u;

    // 0x3b9360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b9360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b9364: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b9364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3b9368: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b9368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b936c: 0x24638b90  addiu       $v1, $v1, -0x7470
    ctx->pc = 0x3b936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937488));
    // 0x3b9370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b9370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b9374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b937c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9380: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x3b9380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x3b9384: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3b9384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3b9388: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3b9388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3b938c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3b938cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3b9390: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x3b9390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x3b9394: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3b9394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3b9398: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3b9398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3b939c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x3b939cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x3b93a0: 0xa082002c  sb          $v0, 0x2C($a0)
    ctx->pc = 0x3b93a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b93a4: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x3b93a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x3b93a8: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x3b93a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x3b93ac: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x3b93acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x3b93b0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x3b93b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x3b93b4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3b93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3b93b8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x3b93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x3b93bc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3b93bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b93c0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x3B93C0u;
    SET_GPR_U32(ctx, 31, 0x3B93C8u);
    ctx->pc = 0x3B93C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B93C0u;
            // 0x3b93c4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B93C8u; }
        if (ctx->pc != 0x3B93C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B93C8u; }
        if (ctx->pc != 0x3B93C8u) { return; }
    }
    ctx->pc = 0x3B93C8u;
label_3b93c8:
    // 0x3b93c8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3b93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3b93cc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3B93CCu;
    {
        const bool branch_taken_0x3b93cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B93D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B93CCu;
            // 0x3b93d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b93cc) {
            ctx->pc = 0x3B9448u;
            goto label_3b9448;
        }
    }
    ctx->pc = 0x3B93D4u;
    // 0x3b93d4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b93d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3b93d8: 0x8c50b6b0  lw          $s0, -0x4950($v0)
    ctx->pc = 0x3b93d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x3b93dc: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x3b93dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3b93e0:
    // 0x3b93e0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x3b93e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3b93e4: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x3B93E4u;
    SET_GPR_U32(ctx, 31, 0x3B93ECu);
    ctx->pc = 0x3B93E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B93E4u;
            // 0x3b93e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B93ECu; }
        if (ctx->pc != 0x3B93ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B93ECu; }
        if (ctx->pc != 0x3B93ECu) { return; }
    }
    ctx->pc = 0x3B93ECu;
label_3b93ec:
    // 0x3b93ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B93ECu;
    {
        const bool branch_taken_0x3b93ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b93ec) {
            ctx->pc = 0x3B9410u;
            goto label_3b9410;
        }
    }
    ctx->pc = 0x3B93F4u;
    // 0x3b93f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b93f8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3b93f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3b93fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b93fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9404: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3b9404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b9408: 0xc0ee53c  jal         func_3B94F0
    ctx->pc = 0x3B9408u;
    SET_GPR_U32(ctx, 31, 0x3B9410u);
    ctx->pc = 0x3B940Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9408u;
            // 0x3b940c: 0x24c68200  addiu       $a2, $a2, -0x7E00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B94F0u;
    if (runtime->hasFunction(0x3B94F0u)) {
        auto targetFn = runtime->lookupFunction(0x3B94F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9410u; }
        if (ctx->pc != 0x3B9410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B94F0_0x3b94f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9410u; }
        if (ctx->pc != 0x3B9410u) { return; }
    }
    ctx->pc = 0x3B9410u;
label_3b9410:
    // 0x3b9410: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3b9410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x3b9414: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3b9414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3b9418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b9418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b941c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3b941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b9420: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b9420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9424: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x3b9424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x3b9428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b9428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b942c: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x3B942Cu;
    SET_GPR_U32(ctx, 31, 0x3B9434u);
    ctx->pc = 0x3B9430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B942Cu;
            // 0x3b9430: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9434u; }
        if (ctx->pc != 0x3B9434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9434u; }
        if (ctx->pc != 0x3B9434u) { return; }
    }
    ctx->pc = 0x3B9434u;
label_3b9434:
    // 0x3b9434: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3b9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3b9438: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b9438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b943c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3b943cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b9440: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3B9440u;
    {
        const bool branch_taken_0x3b9440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9440) {
            ctx->pc = 0x3B9444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9440u;
            // 0x3b9444: 0x8e440034  lw          $a0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B93E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b93e0;
        }
    }
    ctx->pc = 0x3B9448u;
label_3b9448:
    // 0x3b9448: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3b9448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x3b944c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3b944cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x3b9450: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3b9450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3b9454: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x3b9454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x3b9458: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b9458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b945c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x3b945cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x3b9460: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b9460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b9464: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b9464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b9468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b946c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b946cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9470: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9470u;
            // 0x3b9474: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9478u;
    // 0x3b9478: 0x0  nop
    ctx->pc = 0x3b9478u;
    // NOP
    // 0x3b947c: 0x0  nop
    ctx->pc = 0x3b947cu;
    // NOP
}
