#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2060
// Address: 0x1b2060 - 0x1b20d0
void sub_001B2060_0x1b2060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2060_0x1b2060");
#endif

    switch (ctx->pc) {
        case 0x1b2074u: goto label_1b2074;
        default: break;
    }

    ctx->pc = 0x1b2060u;

    // 0x1b2060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b206c: 0xc06c530  jal         func_1B14C0
    ctx->pc = 0x1B206Cu;
    SET_GPR_U32(ctx, 31, 0x1B2074u);
    ctx->pc = 0x1B2070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B206Cu;
            // 0x1b2070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14C0u;
    if (runtime->hasFunction(0x1B14C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2074u; }
        if (ctx->pc != 0x1B2074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14C0_0x1b14c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2074u; }
        if (ctx->pc != 0x1B2074u) { return; }
    }
    ctx->pc = 0x1B2074u;
label_1b2074:
    // 0x1b2074: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2074u;
    {
        const bool branch_taken_0x1b2074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2074u;
            // 0x1b2078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2074) {
            ctx->pc = 0x1B2088u;
            goto label_1b2088;
        }
    }
    ctx->pc = 0x1B207Cu;
    // 0x1b207c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B207Cu;
    {
        const bool branch_taken_0x1b207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B207Cu;
            // 0x1b2080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b207c) {
            ctx->pc = 0x1B20A8u;
            goto label_1b20a8;
        }
    }
    ctx->pc = 0x1B2084u;
    // 0x1b2084: 0x0  nop
    ctx->pc = 0x1b2084u;
    // NOP
label_1b2088:
    // 0x1b2088: 0x8e042030  lw          $a0, 0x2030($s0)
    ctx->pc = 0x1b2088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
    // 0x1b208c: 0x24841128  addiu       $a0, $a0, 0x1128
    ctx->pc = 0x1b208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x1b2090: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1b2090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b2094: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2094u;
    {
        const bool branch_taken_0x1b2094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B2098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2094u;
            // 0x1b2098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2094) {
            ctx->pc = 0x1B20A8u;
            goto label_1b20a8;
        }
    }
    ctx->pc = 0x1B209Cu;
    // 0x1b209c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b20a0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1b20a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b20a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b20a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b20a8:
    // 0x1b20a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b20a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b20ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b20acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b20b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B20B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B20B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20B0u;
            // 0x1b20b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B20B8u;
    // 0x1b20b8: 0x8c822030  lw          $v0, 0x2030($a0)
    ctx->pc = 0x1b20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b20bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B20BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B20C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20BCu;
            // 0x1b20c0: 0x24421150  addiu       $v0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B20C4u;
    // 0x1b20c4: 0x0  nop
    ctx->pc = 0x1b20c4u;
    // NOP
    // 0x1b20c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B20C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B20CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20C8u;
            // 0x1b20cc: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B20D0u;
}
