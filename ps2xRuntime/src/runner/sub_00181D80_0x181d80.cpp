#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181D80
// Address: 0x181d80 - 0x181dc8
void sub_00181D80_0x181d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181D80_0x181d80");
#endif

    switch (ctx->pc) {
        case 0x181d9cu: goto label_181d9c;
        case 0x181da8u: goto label_181da8;
        case 0x181db0u: goto label_181db0;
        default: break;
    }

    ctx->pc = 0x181d80u;

    // 0x181d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181d88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x181d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181d90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181d94: 0xc060704  jal         func_181C10
    ctx->pc = 0x181D94u;
    SET_GPR_U32(ctx, 31, 0x181D9Cu);
    ctx->pc = 0x181D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D94u;
            // 0x181d98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    if (runtime->hasFunction(0x181C10u)) {
        auto targetFn = runtime->lookupFunction(0x181C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D9Cu; }
        if (ctx->pc != 0x181D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C10_0x181c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D9Cu; }
        if (ctx->pc != 0x181D9Cu) { return; }
    }
    ctx->pc = 0x181D9Cu;
label_181d9c:
    // 0x181d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181da0: 0xc060772  jal         func_181DC8
    ctx->pc = 0x181DA0u;
    SET_GPR_U32(ctx, 31, 0x181DA8u);
    ctx->pc = 0x181DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181DA0u;
            // 0x181da4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181DC8u;
    if (runtime->hasFunction(0x181DC8u)) {
        auto targetFn = runtime->lookupFunction(0x181DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DA8u; }
        if (ctx->pc != 0x181DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181DC8_0x181dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DA8u; }
        if (ctx->pc != 0x181DA8u) { return; }
    }
    ctx->pc = 0x181DA8u;
label_181da8:
    // 0x181da8: 0xc06070a  jal         func_181C28
    ctx->pc = 0x181DA8u;
    SET_GPR_U32(ctx, 31, 0x181DB0u);
    ctx->pc = 0x181DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181DA8u;
            // 0x181dac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C28u;
    if (runtime->hasFunction(0x181C28u)) {
        auto targetFn = runtime->lookupFunction(0x181C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DB0u; }
        if (ctx->pc != 0x181DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C28_0x181c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DB0u; }
        if (ctx->pc != 0x181DB0u) { return; }
    }
    ctx->pc = 0x181DB0u;
label_181db0:
    // 0x181db0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181db4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x181DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181DC0u;
            // 0x181dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181DC8u;
}
