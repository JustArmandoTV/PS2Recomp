#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170D78
// Address: 0x170d78 - 0x170dc0
void sub_00170D78_0x170d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170D78_0x170d78");
#endif

    switch (ctx->pc) {
        case 0x170d94u: goto label_170d94;
        case 0x170d9cu: goto label_170d9c;
        case 0x170da4u: goto label_170da4;
        default: break;
    }

    ctx->pc = 0x170d78u;

    // 0x170d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170d7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170d80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170d8c: 0xc05c834  jal         func_1720D0
    ctx->pc = 0x170D8Cu;
    SET_GPR_U32(ctx, 31, 0x170D94u);
    ctx->pc = 0x170D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D8Cu;
            // 0x170d90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D94u; }
        if (ctx->pc != 0x170D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D94u; }
        if (ctx->pc != 0x170D94u) { return; }
    }
    ctx->pc = 0x170D94u;
label_170d94:
    // 0x170d94: 0xc05c320  jal         func_170C80
    ctx->pc = 0x170D94u;
    SET_GPR_U32(ctx, 31, 0x170D9Cu);
    ctx->pc = 0x170D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D94u;
            // 0x170d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C80u;
    if (runtime->hasFunction(0x170C80u)) {
        auto targetFn = runtime->lookupFunction(0x170C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D9Cu; }
        if (ctx->pc != 0x170D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C80_0x170c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D9Cu; }
        if (ctx->pc != 0x170D9Cu) { return; }
    }
    ctx->pc = 0x170D9Cu;
label_170d9c:
    // 0x170d9c: 0xc05c83a  jal         func_1720E8
    ctx->pc = 0x170D9Cu;
    SET_GPR_U32(ctx, 31, 0x170DA4u);
    ctx->pc = 0x170DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D9Cu;
            // 0x170da0: 0xae110060  sw          $s1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170DA4u; }
        if (ctx->pc != 0x170DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170DA4u; }
        if (ctx->pc != 0x170DA4u) { return; }
    }
    ctx->pc = 0x170DA4u;
label_170da4:
    // 0x170da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170db4: 0x3e00008  jr          $ra
    ctx->pc = 0x170DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170DB4u;
            // 0x170db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170DBCu;
    // 0x170dbc: 0x0  nop
    ctx->pc = 0x170dbcu;
    // NOP
}
