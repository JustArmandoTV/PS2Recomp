#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003321F0
// Address: 0x3321f0 - 0x332220
void sub_003321F0_0x3321f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003321F0_0x3321f0");
#endif

    switch (ctx->pc) {
        case 0x332208u: goto label_332208;
        default: break;
    }

    ctx->pc = 0x3321f0u;

    // 0x3321f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3321f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3321f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3321f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3321f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3321f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3321fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3321fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332200: 0xc0bc6ec  jal         func_2F1BB0
    ctx->pc = 0x332200u;
    SET_GPR_U32(ctx, 31, 0x332208u);
    ctx->pc = 0x332204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332200u;
            // 0x332204: 0x26040814  addiu       $a0, $s0, 0x814 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2068));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332208u; }
        if (ctx->pc != 0x332208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332208u; }
        if (ctx->pc != 0x332208u) { return; }
    }
    ctx->pc = 0x332208u;
label_332208:
    // 0x332208: 0x92020835  lbu         $v0, 0x835($s0)
    ctx->pc = 0x332208u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2101)));
    // 0x33220c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33220cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332214: 0x3e00008  jr          $ra
    ctx->pc = 0x332214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332214u;
            // 0x332218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33221Cu;
    // 0x33221c: 0x0  nop
    ctx->pc = 0x33221cu;
    // NOP
}
