#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFDE8
// Address: 0x1bfde8 - 0x1bfe28
void sub_001BFDE8_0x1bfde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFDE8_0x1bfde8");
#endif

    switch (ctx->pc) {
        case 0x1bfe18u: goto label_1bfe18;
        default: break;
    }

    ctx->pc = 0x1bfde8u;

    // 0x1bfde8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfdec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFDECu;
    {
        const bool branch_taken_0x1bfdec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDECu;
            // 0x1bfdf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdec) {
            ctx->pc = 0x1BFDFCu;
            goto label_1bfdfc;
        }
    }
    ctx->pc = 0x1BFDF4u;
    // 0x1bfdf4: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFDF4u;
    {
        const bool branch_taken_0x1bfdf4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1BFDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDF4u;
            // 0x1bfdf8: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdf4) {
            ctx->pc = 0x1BFE08u;
            goto label_1bfe08;
        }
    }
    ctx->pc = 0x1BFDFCu;
label_1bfdfc:
    // 0x1bfdfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFDFCu;
    {
        const bool branch_taken_0x1bfdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDFCu;
            // 0x1bfe00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdfc) {
            ctx->pc = 0x1BFE1Cu;
            goto label_1bfe1c;
        }
    }
    ctx->pc = 0x1BFE04u;
    // 0x1bfe04: 0x0  nop
    ctx->pc = 0x1bfe04u;
    // NOP
label_1bfe08:
    // 0x1bfe08: 0x24840012  addiu       $a0, $a0, 0x12
    ctx->pc = 0x1bfe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18));
    // 0x1bfe0c: 0x24a5b7b8  addiu       $a1, $a1, -0x4848
    ctx->pc = 0x1bfe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948792));
    // 0x1bfe10: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1BFE10u;
    SET_GPR_U32(ctx, 31, 0x1BFE18u);
    ctx->pc = 0x1BFE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE10u;
            // 0x1bfe14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE18u; }
        if (ctx->pc != 0x1BFE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE18u; }
        if (ctx->pc != 0x1BFE18u) { return; }
    }
    ctx->pc = 0x1BFE18u;
label_1bfe18:
    // 0x1bfe18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1bfe18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1bfe1c:
    // 0x1bfe1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfe1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfe20: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE20u;
            // 0x1bfe24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFE28u;
}
