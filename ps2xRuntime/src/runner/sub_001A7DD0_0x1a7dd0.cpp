#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7DD0
// Address: 0x1a7dd0 - 0x1a7e38
void sub_001A7DD0_0x1a7dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7DD0_0x1a7dd0");
#endif

    switch (ctx->pc) {
        case 0x1a7df0u: goto label_1a7df0;
        case 0x1a7e08u: goto label_1a7e08;
        default: break;
    }

    ctx->pc = 0x1a7dd0u;

    // 0x1a7dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ddc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7de0: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x1a7de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x1a7de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7de8: 0xc06e8e4  jal         func_1BA390
    ctx->pc = 0x1A7DE8u;
    SET_GPR_U32(ctx, 31, 0x1A7DF0u);
    ctx->pc = 0x1A7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DE8u;
            // 0x1a7dec: 0x8e050090  lw          $a1, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA390u;
    if (runtime->hasFunction(0x1BA390u)) {
        auto targetFn = runtime->lookupFunction(0x1BA390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DF0u; }
        if (ctx->pc != 0x1A7DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA390_0x1ba390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DF0u; }
        if (ctx->pc != 0x1A7DF0u) { return; }
    }
    ctx->pc = 0x1A7DF0u;
label_1a7df0:
    // 0x1a7df0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7df4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7df8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7DF8u;
    {
        const bool branch_taken_0x1a7df8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DF8u;
            // 0x1a7dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7df8) {
            ctx->pc = 0x1A7E20u;
            goto label_1a7e20;
        }
    }
    ctx->pc = 0x1A7E00u;
    // 0x1a7e00: 0xc069f8e  jal         func_1A7E38
    ctx->pc = 0x1A7E00u;
    SET_GPR_U32(ctx, 31, 0x1A7E08u);
    ctx->pc = 0x1A7E38u;
    if (runtime->hasFunction(0x1A7E38u)) {
        auto targetFn = runtime->lookupFunction(0x1A7E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E08u; }
        if (ctx->pc != 0x1A7E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7E38_0x1a7e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E08u; }
        if (ctx->pc != 0x1A7E08u) { return; }
    }
    ctx->pc = 0x1A7E08u;
label_1a7e08:
    // 0x1a7e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7e18: 0x806e914  j           func_1BA450
    ctx->pc = 0x1A7E18u;
    ctx->pc = 0x1A7E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E18u;
            // 0x1a7e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA450u;
    if (runtime->hasFunction(0x1BA450u)) {
        auto targetFn = runtime->lookupFunction(0x1BA450u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BA450_0x1ba450(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A7E20u;
label_1a7e20:
    // 0x1a7e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7e28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E2Cu;
            // 0x1a7e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7E34u;
    // 0x1a7e34: 0x0  nop
    ctx->pc = 0x1a7e34u;
    // NOP
}
