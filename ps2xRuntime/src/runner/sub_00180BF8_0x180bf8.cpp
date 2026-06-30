#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180BF8
// Address: 0x180bf8 - 0x180c38
void sub_00180BF8_0x180bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180BF8_0x180bf8");
#endif

    switch (ctx->pc) {
        case 0x180c14u: goto label_180c14;
        case 0x180c20u: goto label_180c20;
        default: break;
    }

    ctx->pc = 0x180bf8u;

    // 0x180bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180bfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180c0c: 0xc06031a  jal         func_180C68
    ctx->pc = 0x180C0Cu;
    SET_GPR_U32(ctx, 31, 0x180C14u);
    ctx->pc = 0x180C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C0Cu;
            // 0x180c10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C14u; }
        if (ctx->pc != 0x180C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C14u; }
        if (ctx->pc != 0x180C14u) { return; }
    }
    ctx->pc = 0x180C14u;
label_180c14:
    // 0x180c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c18: 0xc06030e  jal         func_180C38
    ctx->pc = 0x180C18u;
    SET_GPR_U32(ctx, 31, 0x180C20u);
    ctx->pc = 0x180C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C18u;
            // 0x180c1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C38u;
    if (runtime->hasFunction(0x180C38u)) {
        auto targetFn = runtime->lookupFunction(0x180C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C20u; }
        if (ctx->pc != 0x180C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C38_0x180c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C20u; }
        if (ctx->pc != 0x180C20u) { return; }
    }
    ctx->pc = 0x180C20u;
label_180c20:
    // 0x180c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180c24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180c2c: 0x806031c  j           func_180C70
    ctx->pc = 0x180C2Cu;
    ctx->pc = 0x180C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C2Cu;
            // 0x180c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180C70_0x180c70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180C34u;
    // 0x180c34: 0x0  nop
    ctx->pc = 0x180c34u;
    // NOP
}
