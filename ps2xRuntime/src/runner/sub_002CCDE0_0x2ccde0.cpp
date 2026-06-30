#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CCDE0
// Address: 0x2ccde0 - 0x2cce40
void sub_002CCDE0_0x2ccde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCDE0_0x2ccde0");
#endif

    switch (ctx->pc) {
        case 0x2cce20u: goto label_2cce20;
        default: break;
    }

    ctx->pc = 0x2ccde0u;

    // 0x2ccde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ccde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ccde4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ccde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ccde8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ccdec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ccdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdf0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CCDF0u;
    {
        const bool branch_taken_0x2ccdf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccdf0) {
            ctx->pc = 0x2CCDF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCDF0u;
            // 0x2ccdf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCE24u;
            goto label_2cce24;
        }
    }
    ctx->pc = 0x2CCDF8u;
    // 0x2ccdf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ccdfc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2ccdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2cce00: 0x2442fee8  addiu       $v0, $v0, -0x118
    ctx->pc = 0x2cce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967016));
    // 0x2cce04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cce04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cce08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cce08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2cce0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cce10: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCE10u;
    {
        const bool branch_taken_0x2cce10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CCE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE10u;
            // 0x2cce14: 0xac400e48  sw          $zero, 0xE48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce10) {
            ctx->pc = 0x2CCE20u;
            goto label_2cce20;
        }
    }
    ctx->pc = 0x2CCE18u;
    // 0x2cce18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CCE18u;
    SET_GPR_U32(ctx, 31, 0x2CCE20u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE20u; }
        if (ctx->pc != 0x2CCE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE20u; }
        if (ctx->pc != 0x2CCE20u) { return; }
    }
    ctx->pc = 0x2CCE20u;
label_2cce20:
    // 0x2cce20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cce20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cce24:
    // 0x2cce24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cce24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cce28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cce28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cce2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE2Cu;
            // 0x2cce30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CCE34u;
    // 0x2cce34: 0x0  nop
    ctx->pc = 0x2cce34u;
    // NOP
    // 0x2cce38: 0x0  nop
    ctx->pc = 0x2cce38u;
    // NOP
    // 0x2cce3c: 0x0  nop
    ctx->pc = 0x2cce3cu;
    // NOP
}
