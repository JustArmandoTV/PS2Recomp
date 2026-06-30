#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B0C0
// Address: 0x51b0c0 - 0x51b120
void sub_0051B0C0_0x51b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B0C0_0x51b0c0");
#endif

    switch (ctx->pc) {
        case 0x51b0e0u: goto label_51b0e0;
        case 0x51b0e8u: goto label_51b0e8;
        default: break;
    }

    ctx->pc = 0x51b0c0u;

    // 0x51b0c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x51b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x51b0c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x51b0c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51b0cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51b0d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x51b0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b0d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51b0d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x51b0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b0dc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x51b0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51b0e0:
    // 0x51b0e0: 0xc05cc84  jal         func_173210
    ctx->pc = 0x51B0E0u;
    SET_GPR_U32(ctx, 31, 0x51B0E8u);
    ctx->pc = 0x51B0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B0E0u;
            // 0x51b0e4: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B0E8u; }
        if (ctx->pc != 0x51B0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B0E8u; }
        if (ctx->pc != 0x51B0E8u) { return; }
    }
    ctx->pc = 0x51B0E8u;
label_51b0e8:
    // 0x51b0e8: 0x924301b4  lbu         $v1, 0x1B4($s2)
    ctx->pc = 0x51b0e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x51b0ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x51b0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x51b0f0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x51b0f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x51b0f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x51B0F4u;
    {
        const bool branch_taken_0x51b0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51B0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B0F4u;
            // 0x51b0f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b0f4) {
            ctx->pc = 0x51B0E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51b0e0;
        }
    }
    ctx->pc = 0x51B0FCu;
    // 0x51b0fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51b0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51b100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51b100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51b104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51b104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b10c: 0x3e00008  jr          $ra
    ctx->pc = 0x51B10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B10Cu;
            // 0x51b110: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B114u;
    // 0x51b114: 0x0  nop
    ctx->pc = 0x51b114u;
    // NOP
    // 0x51b118: 0x0  nop
    ctx->pc = 0x51b118u;
    // NOP
    // 0x51b11c: 0x0  nop
    ctx->pc = 0x51b11cu;
    // NOP
}
