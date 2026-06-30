#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238CC0
// Address: 0x238cc0 - 0x238d40
void sub_00238CC0_0x238cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238CC0_0x238cc0");
#endif

    switch (ctx->pc) {
        case 0x238cf0u: goto label_238cf0;
        case 0x238d04u: goto label_238d04;
        default: break;
    }

    ctx->pc = 0x238cc0u;

    // 0x238cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x238cc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x238cc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x238cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x238ccc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x238cd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x238cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238cd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x238cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x238ce0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x238ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x238ce4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x238CE4u;
    {
        const bool branch_taken_0x238ce4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x238CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CE4u;
            // 0x238ce8: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ce4) {
            ctx->pc = 0x238D18u;
            goto label_238d18;
        }
    }
    ctx->pc = 0x238CECu;
    // 0x238cec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x238cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238cf0:
    // 0x238cf0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x238cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x238cf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x238cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x238cf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x238cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238cfc: 0xc09241c  jal         func_249070
    ctx->pc = 0x238CFCu;
    SET_GPR_U32(ctx, 31, 0x238D04u);
    ctx->pc = 0x238D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238CFCu;
            // 0x238d00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249070u;
    if (runtime->hasFunction(0x249070u)) {
        auto targetFn = runtime->lookupFunction(0x249070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D04u; }
        if (ctx->pc != 0x238D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249070_0x249070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D04u; }
        if (ctx->pc != 0x238D04u) { return; }
    }
    ctx->pc = 0x238D04u;
label_238d04:
    // 0x238d04: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x238d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x238d08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x238d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x238d0c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x238d0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238d10: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x238D10u;
    {
        const bool branch_taken_0x238d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x238D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D10u;
            // 0x238d14: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d10) {
            ctx->pc = 0x238CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238cf0;
        }
    }
    ctx->pc = 0x238D18u;
label_238d18:
    // 0x238d18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x238d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238d1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x238d1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238d20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x238d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x238D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D2Cu;
            // 0x238d30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238D34u;
    // 0x238d34: 0x0  nop
    ctx->pc = 0x238d34u;
    // NOP
    // 0x238d38: 0x0  nop
    ctx->pc = 0x238d38u;
    // NOP
    // 0x238d3c: 0x0  nop
    ctx->pc = 0x238d3cu;
    // NOP
}
