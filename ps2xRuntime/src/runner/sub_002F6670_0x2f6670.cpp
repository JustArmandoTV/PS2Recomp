#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F6670
// Address: 0x2f6670 - 0x2f66b0
void sub_002F6670_0x2f6670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6670_0x2f6670");
#endif

    switch (ctx->pc) {
        case 0x2f6688u: goto label_2f6688;
        default: break;
    }

    ctx->pc = 0x2f6670u;

    // 0x2f6670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f667c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f667cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6680: 0xc102748  jal         func_409D20
    ctx->pc = 0x2F6680u;
    SET_GPR_U32(ctx, 31, 0x2F6688u);
    ctx->pc = 0x2F6684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6680u;
            // 0x2f6684: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x409D20u;
    if (runtime->hasFunction(0x409D20u)) {
        auto targetFn = runtime->lookupFunction(0x409D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6688u; }
        if (ctx->pc != 0x2F6688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00409D20_0x409d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6688u; }
        if (ctx->pc != 0x2F6688u) { return; }
    }
    ctx->pc = 0x2F6688u;
label_2f6688:
    // 0x2f6688: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6688u;
    {
        const bool branch_taken_0x2f6688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6688) {
            ctx->pc = 0x2F668Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6688u;
            // 0x2f668c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F669Cu;
            goto label_2f669c;
        }
    }
    ctx->pc = 0x2F6690u;
    // 0x2f6690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6694: 0xa20300db  sb          $v1, 0xDB($s0)
    ctx->pc = 0x2f6694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f669c:
    // 0x2f669c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f669cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f66a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F66A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F66A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F66A0u;
            // 0x2f66a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F66A8u;
    // 0x2f66a8: 0x0  nop
    ctx->pc = 0x2f66a8u;
    // NOP
    // 0x2f66ac: 0x0  nop
    ctx->pc = 0x2f66acu;
    // NOP
}
