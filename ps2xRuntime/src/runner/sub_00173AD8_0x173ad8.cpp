#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173AD8
// Address: 0x173ad8 - 0x173b10
void sub_00173AD8_0x173ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173AD8_0x173ad8");
#endif

    switch (ctx->pc) {
        case 0x173aecu: goto label_173aec;
        case 0x173af4u: goto label_173af4;
        case 0x173afcu: goto label_173afc;
        default: break;
    }

    ctx->pc = 0x173ad8u;

    // 0x173ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173ae0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173ae4: 0xc0599de  jal         func_166778
    ctx->pc = 0x173AE4u;
    SET_GPR_U32(ctx, 31, 0x173AECu);
    ctx->pc = 0x173AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173AE4u;
            // 0x173ae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AECu; }
        if (ctx->pc != 0x173AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AECu; }
        if (ctx->pc != 0x173AECu) { return; }
    }
    ctx->pc = 0x173AECu;
label_173aec:
    // 0x173aec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x173AECu;
    SET_GPR_U32(ctx, 31, 0x173AF4u);
    ctx->pc = 0x173AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173AECu;
            // 0x173af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B10u;
    if (runtime->hasFunction(0x173B10u)) {
        auto targetFn = runtime->lookupFunction(0x173B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AF4u; }
        if (ctx->pc != 0x173AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B10_0x173b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AF4u; }
        if (ctx->pc != 0x173AF4u) { return; }
    }
    ctx->pc = 0x173AF4u;
label_173af4:
    // 0x173af4: 0xc0599e0  jal         func_166780
    ctx->pc = 0x173AF4u;
    SET_GPR_U32(ctx, 31, 0x173AFCu);
    ctx->pc = 0x173AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173AF4u;
            // 0x173af8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AFCu; }
        if (ctx->pc != 0x173AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AFCu; }
        if (ctx->pc != 0x173AFCu) { return; }
    }
    ctx->pc = 0x173AFCu;
label_173afc:
    // 0x173afc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b08: 0x3e00008  jr          $ra
    ctx->pc = 0x173B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B08u;
            // 0x173b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173B10u;
}
