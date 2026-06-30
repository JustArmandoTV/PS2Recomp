#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DE030
// Address: 0x4de030 - 0x4de090
void sub_004DE030_0x4de030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE030_0x4de030");
#endif

    switch (ctx->pc) {
        case 0x4de070u: goto label_4de070;
        default: break;
    }

    ctx->pc = 0x4de030u;

    // 0x4de030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4de030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4de034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4de034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4de038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4de03c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de040: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4DE040u;
    {
        const bool branch_taken_0x4de040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de040) {
            ctx->pc = 0x4DE044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE040u;
            // 0x4de044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE074u;
            goto label_4de074;
        }
    }
    ctx->pc = 0x4DE048u;
    // 0x4de048: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4de048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4de04c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4de04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4de050: 0x24422eb8  addiu       $v0, $v0, 0x2EB8
    ctx->pc = 0x4de050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11960));
    // 0x4de054: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4de054u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4de058: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4de058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4de05c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4de05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4de060: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DE060u;
    {
        const bool branch_taken_0x4de060 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4DE064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE060u;
            // 0x4de064: 0xac40aa70  sw          $zero, -0x5590($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de060) {
            ctx->pc = 0x4DE070u;
            goto label_4de070;
        }
    }
    ctx->pc = 0x4DE068u;
    // 0x4de068: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DE068u;
    SET_GPR_U32(ctx, 31, 0x4DE070u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE070u; }
        if (ctx->pc != 0x4DE070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE070u; }
        if (ctx->pc != 0x4DE070u) { return; }
    }
    ctx->pc = 0x4DE070u;
label_4de070:
    // 0x4de070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4de070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de074:
    // 0x4de074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4de074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de07c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE07Cu;
            // 0x4de080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE084u;
    // 0x4de084: 0x0  nop
    ctx->pc = 0x4de084u;
    // NOP
    // 0x4de088: 0x0  nop
    ctx->pc = 0x4de088u;
    // NOP
    // 0x4de08c: 0x0  nop
    ctx->pc = 0x4de08cu;
    // NOP
}
