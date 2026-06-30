#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E988
// Address: 0x19e988 - 0x19e9d8
void sub_0019E988_0x19e988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E988_0x19e988");
#endif

    switch (ctx->pc) {
        case 0x19e9a0u: goto label_19e9a0;
        case 0x19e9bcu: goto label_19e9bc;
        default: break;
    }

    ctx->pc = 0x19e988u;

    // 0x19e988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e990: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19e990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e994: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19e998: 0xc067a76  jal         func_19E9D8
    ctx->pc = 0x19E998u;
    SET_GPR_U32(ctx, 31, 0x19E9A0u);
    ctx->pc = 0x19E99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E998u;
            // 0x19e99c: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9D8u;
    if (runtime->hasFunction(0x19E9D8u)) {
        auto targetFn = runtime->lookupFunction(0x19E9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E9A0u; }
        if (ctx->pc != 0x19E9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E9D8_0x19e9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E9A0u; }
        if (ctx->pc != 0x19E9A0u) { return; }
    }
    ctx->pc = 0x19E9A0u;
label_19e9a0:
    // 0x19e9a0: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x19e9a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19e9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19e9a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19e9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e9ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E9ACu;
    {
        const bool branch_taken_0x19e9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E9ACu;
            // 0x19e9b0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9ac) {
            ctx->pc = 0x19E9C4u;
            goto label_19e9c4;
        }
    }
    ctx->pc = 0x19E9B4u;
    // 0x19e9b4: 0xc06ff8a  jal         func_1BFE28
    ctx->pc = 0x19E9B4u;
    SET_GPR_U32(ctx, 31, 0x19E9BCu);
    ctx->pc = 0x19E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E9B4u;
            // 0x19e9b8: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFE28u;
    if (runtime->hasFunction(0x1BFE28u)) {
        auto targetFn = runtime->lookupFunction(0x1BFE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E9BCu; }
        if (ctx->pc != 0x19E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFE28_0x1bfe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E9BCu; }
        if (ctx->pc != 0x19E9BCu) { return; }
    }
    ctx->pc = 0x19E9BCu;
label_19e9bc:
    // 0x19e9bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19e9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19e9c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19e9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19e9c4:
    // 0x19e9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e9c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x19E9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E9CCu;
            // 0x19e9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E9D4u;
    // 0x19e9d4: 0x0  nop
    ctx->pc = 0x19e9d4u;
    // NOP
}
