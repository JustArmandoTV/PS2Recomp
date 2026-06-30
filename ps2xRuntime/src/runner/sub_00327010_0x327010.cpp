#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00327010
// Address: 0x327010 - 0x327060
void sub_00327010_0x327010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327010_0x327010");
#endif

    switch (ctx->pc) {
        case 0x327040u: goto label_327040;
        default: break;
    }

    ctx->pc = 0x327010u;

    // 0x327010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327014: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x327014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32701c: 0x24c4060c  addiu       $a0, $a2, 0x60C
    ctx->pc = 0x32701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1548));
    // 0x327020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x327024: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x327024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x327028: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x327028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32702c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x32702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x327030: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x327030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327034: 0x24c50610  addiu       $a1, $a2, 0x610
    ctx->pc = 0x327034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1552));
    // 0x327038: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x327038u;
    SET_GPR_U32(ctx, 31, 0x327040u);
    ctx->pc = 0x32703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327038u;
            // 0x32703c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327040u; }
        if (ctx->pc != 0x327040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327040u; }
        if (ctx->pc != 0x327040u) { return; }
    }
    ctx->pc = 0x327040u;
label_327040:
    // 0x327040: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x327040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x327044: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x327044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x327048: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x327048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x32704c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32704cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327054: 0x3e00008  jr          $ra
    ctx->pc = 0x327054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327054u;
            // 0x327058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32705Cu;
    // 0x32705c: 0x0  nop
    ctx->pc = 0x32705cu;
    // NOP
}
