#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173078
// Address: 0x173078 - 0x1730b8
void sub_00173078_0x173078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173078_0x173078");
#endif

    switch (ctx->pc) {
        case 0x173094u: goto label_173094;
        case 0x1730a0u: goto label_1730a0;
        default: break;
    }

    ctx->pc = 0x173078u;

    // 0x173078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17307c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17308c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17308Cu;
    SET_GPR_U32(ctx, 31, 0x173094u);
    ctx->pc = 0x173090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17308Cu;
            // 0x173090: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173094u; }
        if (ctx->pc != 0x173094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173094u; }
        if (ctx->pc != 0x173094u) { return; }
    }
    ctx->pc = 0x173094u;
label_173094:
    // 0x173094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173098: 0xc05cc2e  jal         func_1730B8
    ctx->pc = 0x173098u;
    SET_GPR_U32(ctx, 31, 0x1730A0u);
    ctx->pc = 0x17309Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173098u;
            // 0x17309c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1730B8u;
    if (runtime->hasFunction(0x1730B8u)) {
        auto targetFn = runtime->lookupFunction(0x1730B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1730A0u; }
        if (ctx->pc != 0x1730A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001730B8_0x1730b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1730A0u; }
        if (ctx->pc != 0x1730A0u) { return; }
    }
    ctx->pc = 0x1730A0u;
label_1730a0:
    // 0x1730a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1730a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1730a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1730a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1730a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1730a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1730ac: 0x80599e0  j           func_166780
    ctx->pc = 0x1730ACu;
    ctx->pc = 0x1730B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1730ACu;
            // 0x1730b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1730B4u;
    // 0x1730b4: 0x0  nop
    ctx->pc = 0x1730b4u;
    // NOP
}
