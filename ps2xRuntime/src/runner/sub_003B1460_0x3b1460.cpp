#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B1460
// Address: 0x3b1460 - 0x3b14f0
void sub_003B1460_0x3b1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1460_0x3b1460");
#endif

    switch (ctx->pc) {
        case 0x3b1498u: goto label_3b1498;
        case 0x3b14b4u: goto label_3b14b4;
        case 0x3b14d4u: goto label_3b14d4;
        default: break;
    }

    ctx->pc = 0x3b1460u;

    // 0x3b1460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b1460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b1464: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b1464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3b1468: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b1468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b146c: 0x24638910  addiu       $v1, $v1, -0x76F0
    ctx->pc = 0x3b146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936848));
    // 0x3b1470: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b1470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b1474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b1474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b1478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b147c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b147cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b1480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b1484: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b1484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1488: 0xac830374  sw          $v1, 0x374($a0)
    ctx->pc = 0x3b1488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 3));
    // 0x3b148c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3b148cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1490: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3b1490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3b1494: 0xa0820370  sb          $v0, 0x370($a0)
    ctx->pc = 0x3b1494u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 880), (uint8_t)GPR_U32(ctx, 2));
label_3b1498:
    // 0x3b1498: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x3b1498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3b149c: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x3b149cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x3b14a0: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x3b14a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x3b14a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b14a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b14a8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3b14a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3b14ac: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3B14ACu;
    SET_GPR_U32(ctx, 31, 0x3B14B4u);
    ctx->pc = 0x3B14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B14ACu;
            // 0x3b14b0: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B14B4u; }
        if (ctx->pc != 0x3B14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B14B4u; }
        if (ctx->pc != 0x3B14B4u) { return; }
    }
    ctx->pc = 0x3B14B4u;
label_3b14b4:
    // 0x3b14b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b14b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b14b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b14bc: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3b14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x3b14c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3b14c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b14c4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3B14C4u;
    {
        const bool branch_taken_0x3b14c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B14C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B14C4u;
            // 0x3b14c8: 0x261000b8  addiu       $s0, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14c4) {
            ctx->pc = 0x3B1498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b1498;
        }
    }
    ctx->pc = 0x3B14CCu;
    // 0x3b14cc: 0xc0ec39c  jal         func_3B0E70
    ctx->pc = 0x3B14CCu;
    SET_GPR_U32(ctx, 31, 0x3B14D4u);
    ctx->pc = 0x3B14D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B14CCu;
            // 0x3b14d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0E70u;
    if (runtime->hasFunction(0x3B0E70u)) {
        auto targetFn = runtime->lookupFunction(0x3B0E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B14D4u; }
        if (ctx->pc != 0x3B14D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0E70_0x3b0e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B14D4u; }
        if (ctx->pc != 0x3B14D4u) { return; }
    }
    ctx->pc = 0x3B14D4u;
label_3b14d4:
    // 0x3b14d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b14d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b14d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b14d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b14dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b14dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b14e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b14e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b14e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b14e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b14e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B14E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B14ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B14E8u;
            // 0x3b14ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B14F0u;
}
