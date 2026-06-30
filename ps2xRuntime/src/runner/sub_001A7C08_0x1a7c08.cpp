#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7C08
// Address: 0x1a7c08 - 0x1a7c48
void sub_001A7C08_0x1a7c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7C08_0x1a7c08");
#endif

    switch (ctx->pc) {
        case 0x1a7c1cu: goto label_1a7c1c;
        default: break;
    }

    ctx->pc = 0x1a7c08u;

    // 0x1a7c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7c10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a7c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a7c14: 0xc069f60  jal         func_1A7D80
    ctx->pc = 0x1A7C14u;
    SET_GPR_U32(ctx, 31, 0x1A7C1Cu);
    ctx->pc = 0x1A7C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C14u;
            // 0x1a7c18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7D80u;
    if (runtime->hasFunction(0x1A7D80u)) {
        auto targetFn = runtime->lookupFunction(0x1A7D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C1Cu; }
        if (ctx->pc != 0x1A7C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7D80_0x1a7d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C1Cu; }
        if (ctx->pc != 0x1A7C1Cu) { return; }
    }
    ctx->pc = 0x1A7C1Cu;
label_1a7c1c:
    // 0x1a7c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7C20u;
    {
        const bool branch_taken_0x1a7c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C20u;
            // 0x1a7c24: 0x26050078  addiu       $a1, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c20) {
            ctx->pc = 0x1A7C38u;
            goto label_1a7c38;
        }
    }
    ctx->pc = 0x1A7C28u;
    // 0x1a7c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7c2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a7c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7c30: 0x8069f12  j           func_1A7C48
    ctx->pc = 0x1A7C30u;
    ctx->pc = 0x1A7C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C30u;
            // 0x1a7c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7C48u;
    if (runtime->hasFunction(0x1A7C48u)) {
        auto targetFn = runtime->lookupFunction(0x1A7C48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A7C48_0x1a7c48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A7C38u;
label_1a7c38:
    // 0x1a7c38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7c3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a7c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C40u;
            // 0x1a7c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7C48u;
}
