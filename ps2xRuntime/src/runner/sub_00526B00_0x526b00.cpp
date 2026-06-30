#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00526B00
// Address: 0x526b00 - 0x526b40
void sub_00526B00_0x526b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00526B00_0x526b00");
#endif

    switch (ctx->pc) {
        case 0x526b14u: goto label_526b14;
        default: break;
    }

    ctx->pc = 0x526b00u;

    // 0x526b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x526b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x526b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x526b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x526b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x526b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x526b0c: 0xc0e9be0  jal         func_3A6F80
    ctx->pc = 0x526B0Cu;
    SET_GPR_U32(ctx, 31, 0x526B14u);
    ctx->pc = 0x526B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526B0Cu;
            // 0x526b10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6F80u;
    if (runtime->hasFunction(0x3A6F80u)) {
        auto targetFn = runtime->lookupFunction(0x3A6F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526B14u; }
        if (ctx->pc != 0x526B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6F80_0x3a6f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526B14u; }
        if (ctx->pc != 0x526B14u) { return; }
    }
    ctx->pc = 0x526B14u;
label_526b14:
    // 0x526b14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x526b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x526b18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x526b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x526b1c: 0x24636410  addiu       $v1, $v1, 0x6410
    ctx->pc = 0x526b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25616));
    // 0x526b20: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x526b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x526b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x526b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x526b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x526b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x526B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x526B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526B2Cu;
            // 0x526b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526B34u;
    // 0x526b34: 0x0  nop
    ctx->pc = 0x526b34u;
    // NOP
    // 0x526b38: 0x0  nop
    ctx->pc = 0x526b38u;
    // NOP
    // 0x526b3c: 0x0  nop
    ctx->pc = 0x526b3cu;
    // NOP
}
