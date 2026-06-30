#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003351F0
// Address: 0x3351f0 - 0x335230
void sub_003351F0_0x3351f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003351F0_0x3351f0");
#endif

    switch (ctx->pc) {
        case 0x335210u: goto label_335210;
        default: break;
    }

    ctx->pc = 0x3351f0u;

    // 0x3351f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3351f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3351f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3351f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3351f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3351f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3351fc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3351fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x335200: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x335200u;
    {
        const bool branch_taken_0x335200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x335204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335200u;
            // 0x335204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335200) {
            ctx->pc = 0x335220u;
            goto label_335220;
        }
    }
    ctx->pc = 0x335208u;
    // 0x335208: 0xc0cd3d4  jal         func_334F50
    ctx->pc = 0x335208u;
    SET_GPR_U32(ctx, 31, 0x335210u);
    ctx->pc = 0x334F50u;
    if (runtime->hasFunction(0x334F50u)) {
        auto targetFn = runtime->lookupFunction(0x334F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335210u; }
        if (ctx->pc != 0x335210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334F50_0x334f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335210u; }
        if (ctx->pc != 0x335210u) { return; }
    }
    ctx->pc = 0x335210u;
label_335210:
    // 0x335210: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x335210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x335214: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x335214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x335218: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x335218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x33521c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x33521cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_335220:
    // 0x335220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335228: 0x3e00008  jr          $ra
    ctx->pc = 0x335228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335228u;
            // 0x33522c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335230u;
}
