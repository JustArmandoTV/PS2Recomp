#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00318190
// Address: 0x318190 - 0x3181d0
void sub_00318190_0x318190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318190_0x318190");
#endif

    switch (ctx->pc) {
        case 0x3181b4u: goto label_3181b4;
        default: break;
    }

    ctx->pc = 0x318190u;

    // 0x318190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x318190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x318194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x318194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x318198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x318198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31819c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31819cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181a0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3181a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3181a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3181A4u;
    {
        const bool branch_taken_0x3181a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3181a4) {
            ctx->pc = 0x3181A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3181A4u;
            // 0x3181a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3181BCu;
            goto label_3181bc;
        }
    }
    ctx->pc = 0x3181ACu;
    // 0x3181ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3181ACu;
    SET_GPR_U32(ctx, 31, 0x3181B4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3181B4u; }
        if (ctx->pc != 0x3181B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3181B4u; }
        if (ctx->pc != 0x3181B4u) { return; }
    }
    ctx->pc = 0x3181B4u;
label_3181b4:
    // 0x3181b4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3181b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3181b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3181b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3181bc:
    // 0x3181bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3181bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3181c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3181C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3181C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3181C0u;
            // 0x3181c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3181C8u;
    // 0x3181c8: 0x0  nop
    ctx->pc = 0x3181c8u;
    // NOP
    // 0x3181cc: 0x0  nop
    ctx->pc = 0x3181ccu;
    // NOP
}
