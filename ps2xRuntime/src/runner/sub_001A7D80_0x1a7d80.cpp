#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7D80
// Address: 0x1a7d80 - 0x1a7dd0
void sub_001A7D80_0x1a7d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7D80_0x1a7d80");
#endif

    switch (ctx->pc) {
        case 0x1a7da4u: goto label_1a7da4;
        default: break;
    }

    ctx->pc = 0x1a7d80u;

    // 0x1a7d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7d88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a7d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a7d90: 0x8e033720  lw          $v1, 0x3720($s0)
    ctx->pc = 0x1a7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
    // 0x1a7d94: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7D94u;
    {
        const bool branch_taken_0x1a7d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D94u;
            // 0x1a7d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d94) {
            ctx->pc = 0x1A7DBCu;
            goto label_1a7dbc;
        }
    }
    ctx->pc = 0x1A7D9Cu;
    // 0x1a7d9c: 0xc06aabc  jal         func_1AAAF0
    ctx->pc = 0x1A7D9Cu;
    SET_GPR_U32(ctx, 31, 0x1A7DA4u);
    ctx->pc = 0x1AAAF0u;
    if (runtime->hasFunction(0x1AAAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1AAAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DA4u; }
        if (ctx->pc != 0x1A7DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAAF0_0x1aaaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DA4u; }
        if (ctx->pc != 0x1A7DA4u) { return; }
    }
    ctx->pc = 0x1A7DA4u;
label_1a7da4:
    // 0x1a7da4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7DA4u;
    {
        const bool branch_taken_0x1a7da4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a7da4) {
            ctx->pc = 0x1A7DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DA4u;
            // 0x1a7da8: 0x8e023720  lw          $v0, 0x3720($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7DB8u;
            goto label_1a7db8;
        }
    }
    ctx->pc = 0x1A7DACu;
    // 0x1a7dac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7DACu;
    {
        const bool branch_taken_0x1a7dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DACu;
            // 0x1a7db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dac) {
            ctx->pc = 0x1A7DBCu;
            goto label_1a7dbc;
        }
    }
    ctx->pc = 0x1A7DB4u;
    // 0x1a7db4: 0x0  nop
    ctx->pc = 0x1a7db4u;
    // NOP
label_1a7db8:
    // 0x1a7db8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1a7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a7dbc:
    // 0x1a7dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7dc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a7dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DC4u;
            // 0x1a7dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7DCCu;
    // 0x1a7dcc: 0x0  nop
    ctx->pc = 0x1a7dccu;
    // NOP
}
