#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004641E0
// Address: 0x4641e0 - 0x464230
void sub_004641E0_0x4641e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004641E0_0x4641e0");
#endif

    switch (ctx->pc) {
        case 0x464208u: goto label_464208;
        default: break;
    }

    ctx->pc = 0x4641e0u;

    // 0x4641e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4641e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4641e4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x4641e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4641e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4641e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4641ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4641ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4641f0: 0x8c850290  lw          $a1, 0x290($a0)
    ctx->pc = 0x4641f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x4641f4: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x4641f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
    // 0x4641f8: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4641F8u;
    {
        const bool branch_taken_0x4641f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4641FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4641F8u;
            // 0x4641fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4641f8) {
            ctx->pc = 0x464214u;
            goto label_464214;
        }
    }
    ctx->pc = 0x464200u;
    // 0x464200: 0xc1190e4  jal         func_464390
    ctx->pc = 0x464200u;
    SET_GPR_U32(ctx, 31, 0x464208u);
    ctx->pc = 0x464390u;
    if (runtime->hasFunction(0x464390u)) {
        auto targetFn = runtime->lookupFunction(0x464390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464208u; }
        if (ctx->pc != 0x464208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00464390_0x464390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464208u; }
        if (ctx->pc != 0x464208u) { return; }
    }
    ctx->pc = 0x464208u;
label_464208:
    // 0x464208: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x464208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x46420c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x46420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x464210: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x464210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_464214:
    // 0x464214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x464214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46421c: 0x3e00008  jr          $ra
    ctx->pc = 0x46421Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46421Cu;
            // 0x464220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x464224u;
    // 0x464224: 0x0  nop
    ctx->pc = 0x464224u;
    // NOP
    // 0x464228: 0x0  nop
    ctx->pc = 0x464228u;
    // NOP
    // 0x46422c: 0x0  nop
    ctx->pc = 0x46422cu;
    // NOP
}
