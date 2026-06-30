#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001613B0
// Address: 0x1613b0 - 0x161440
void sub_001613B0_0x1613b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001613B0_0x1613b0");
#endif

    switch (ctx->pc) {
        case 0x1613f0u: goto label_1613f0;
        case 0x161424u: goto label_161424;
        default: break;
    }

    ctx->pc = 0x1613b0u;

    // 0x1613b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1613b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1613b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1613b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1613b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1613b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1613bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1613bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1613c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1613c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613c4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1613C4u;
    {
        const bool branch_taken_0x1613c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1613C4u;
            // 0x1613c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613c4) {
            ctx->pc = 0x161424u;
            goto label_161424;
        }
    }
    ctx->pc = 0x1613CCu;
    // 0x1613cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1613ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1613d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1613d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1613d4: 0x2463ccd0  addiu       $v1, $v1, -0x3330
    ctx->pc = 0x1613d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954192));
    // 0x1613d8: 0x2442ccdc  addiu       $v0, $v0, -0x3324
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954204));
    // 0x1613dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1613dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1613e0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1613e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1613e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1613e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1613e8: 0xc057da8  jal         func_15F6A0
    ctx->pc = 0x1613E8u;
    SET_GPR_U32(ctx, 31, 0x1613F0u);
    ctx->pc = 0x1613ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1613E8u;
            // 0x1613ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F6A0u;
    if (runtime->hasFunction(0x15F6A0u)) {
        auto targetFn = runtime->lookupFunction(0x15F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613F0u; }
        if (ctx->pc != 0x1613F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F6A0_0x15f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613F0u; }
        if (ctx->pc != 0x1613F0u) { return; }
    }
    ctx->pc = 0x1613F0u;
label_1613f0:
    // 0x1613f0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1613F0u;
    {
        const bool branch_taken_0x1613f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613f0) {
            ctx->pc = 0x1613F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1613F0u;
            // 0x1613f4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161410u;
            goto label_161410;
        }
    }
    ctx->pc = 0x1613F8u;
    // 0x1613f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1613f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1613fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1613fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x161400: 0x2463ccf8  addiu       $v1, $v1, -0x3308
    ctx->pc = 0x161400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954232));
    // 0x161404: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x161404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x161408: 0xac40d130  sw          $zero, -0x2ED0($v0)
    ctx->pc = 0x161408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955312), GPR_U32(ctx, 0));
    // 0x16140c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x16140cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_161410:
    // 0x161410: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161410u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x161414: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161414u;
    {
        const bool branch_taken_0x161414 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x161414) {
            ctx->pc = 0x161418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161414u;
            // 0x161418: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161428u;
            goto label_161428;
        }
    }
    ctx->pc = 0x16141Cu;
    // 0x16141c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x16141Cu;
    SET_GPR_U32(ctx, 31, 0x161424u);
    ctx->pc = 0x161420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16141Cu;
            // 0x161420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161424u; }
        if (ctx->pc != 0x161424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161424u; }
        if (ctx->pc != 0x161424u) { return; }
    }
    ctx->pc = 0x161424u;
label_161424:
    // 0x161424: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161428:
    // 0x161428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16142c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16142cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161434: 0x3e00008  jr          $ra
    ctx->pc = 0x161434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161434u;
            // 0x161438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16143Cu;
    // 0x16143c: 0x0  nop
    ctx->pc = 0x16143cu;
    // NOP
}
