#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044BCF0
// Address: 0x44bcf0 - 0x44bd50
void sub_0044BCF0_0x44bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044BCF0_0x44bcf0");
#endif

    switch (ctx->pc) {
        case 0x44bd30u: goto label_44bd30;
        default: break;
    }

    ctx->pc = 0x44bcf0u;

    // 0x44bcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44bcf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44bcf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44bcfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44bcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bd00: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x44BD00u;
    {
        const bool branch_taken_0x44bd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44bd00) {
            ctx->pc = 0x44BD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44BD00u;
            // 0x44bd04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44BD34u;
            goto label_44bd34;
        }
    }
    ctx->pc = 0x44BD08u;
    // 0x44bd08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44bd0c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x44bd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x44bd10: 0x2442d960  addiu       $v0, $v0, -0x26A0
    ctx->pc = 0x44bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
    // 0x44bd14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x44bd14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x44bd18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x44bd1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44bd20: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x44BD20u;
    {
        const bool branch_taken_0x44bd20 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x44BD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BD20u;
            // 0x44bd24: 0xac407590  sw          $zero, 0x7590($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bd20) {
            ctx->pc = 0x44BD30u;
            goto label_44bd30;
        }
    }
    ctx->pc = 0x44BD28u;
    // 0x44bd28: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44BD28u;
    SET_GPR_U32(ctx, 31, 0x44BD30u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BD30u; }
        if (ctx->pc != 0x44BD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BD30u; }
        if (ctx->pc != 0x44BD30u) { return; }
    }
    ctx->pc = 0x44BD30u;
label_44bd30:
    // 0x44bd30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44bd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44bd34:
    // 0x44bd34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44bd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44bd38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44bd38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44bd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x44BD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BD3Cu;
            // 0x44bd40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44BD44u;
    // 0x44bd44: 0x0  nop
    ctx->pc = 0x44bd44u;
    // NOP
    // 0x44bd48: 0x0  nop
    ctx->pc = 0x44bd48u;
    // NOP
    // 0x44bd4c: 0x0  nop
    ctx->pc = 0x44bd4cu;
    // NOP
}
