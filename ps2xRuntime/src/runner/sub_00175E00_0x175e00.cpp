#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175E00
// Address: 0x175e00 - 0x175e48
void sub_00175E00_0x175e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175E00_0x175e00");
#endif

    switch (ctx->pc) {
        case 0x175e24u: goto label_175e24;
        case 0x175e30u: goto label_175e30;
        default: break;
    }

    ctx->pc = 0x175e00u;

    // 0x175e00: 0x3e00008  jr          $ra
    ctx->pc = 0x175E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175E00u;
            // 0x175e04: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175E08u;
    // 0x175e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175e1c: 0xc0599de  jal         func_166778
    ctx->pc = 0x175E1Cu;
    SET_GPR_U32(ctx, 31, 0x175E24u);
    ctx->pc = 0x175E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E1Cu;
            // 0x175e20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E24u; }
        if (ctx->pc != 0x175E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E24u; }
        if (ctx->pc != 0x175E24u) { return; }
    }
    ctx->pc = 0x175E24u;
label_175e24:
    // 0x175e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e28: 0xc05d792  jal         func_175E48
    ctx->pc = 0x175E28u;
    SET_GPR_U32(ctx, 31, 0x175E30u);
    ctx->pc = 0x175E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E28u;
            // 0x175e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175E48u;
    if (runtime->hasFunction(0x175E48u)) {
        auto targetFn = runtime->lookupFunction(0x175E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E30u; }
        if (ctx->pc != 0x175E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175E48_0x175e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E30u; }
        if (ctx->pc != 0x175E30u) { return; }
    }
    ctx->pc = 0x175E30u;
label_175e30:
    // 0x175e30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175e38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175e3c: 0x80599e0  j           func_166780
    ctx->pc = 0x175E3Cu;
    ctx->pc = 0x175E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E3Cu;
            // 0x175e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175E44u;
    // 0x175e44: 0x0  nop
    ctx->pc = 0x175e44u;
    // NOP
}
