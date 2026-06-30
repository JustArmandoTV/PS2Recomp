#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DCE8
// Address: 0x17dce8 - 0x17dd28
void sub_0017DCE8_0x17dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DCE8_0x17dce8");
#endif

    switch (ctx->pc) {
        case 0x17dcfcu: goto label_17dcfc;
        default: break;
    }

    ctx->pc = 0x17dce8u;

    // 0x17dce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17dcec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17dcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17dcf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17dcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17dcf4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17DCF4u;
    SET_GPR_U32(ctx, 31, 0x17DCFCu);
    ctx->pc = 0x17DCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCF4u;
            // 0x17dcf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCFCu; }
        if (ctx->pc != 0x17DCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCFCu; }
        if (ctx->pc != 0x17DCFCu) { return; }
    }
    ctx->pc = 0x17DCFCu;
label_17dcfc:
    // 0x17dcfc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x17dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17dd00: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DD00u;
    {
        const bool branch_taken_0x17dd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17DD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD00u;
            // 0x17dd04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd00) {
            ctx->pc = 0x17DD14u;
            goto label_17dd14;
        }
    }
    ctx->pc = 0x17DD08u;
    // 0x17dd08: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x17dd08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17dd0c: 0x3842002e  xori        $v0, $v0, 0x2E
    ctx->pc = 0x17dd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)46);
    // 0x17dd10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x17dd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_17dd14:
    // 0x17dd14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17dd14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dd18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17dd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17dd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD1Cu;
            // 0x17dd20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DD24u;
    // 0x17dd24: 0x0  nop
    ctx->pc = 0x17dd24u;
    // NOP
}
