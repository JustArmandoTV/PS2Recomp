#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CAAA8
// Address: 0x1caaa8 - 0x1cab18
void sub_001CAAA8_0x1caaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAAA8_0x1caaa8");
#endif

    switch (ctx->pc) {
        case 0x1caaf0u: goto label_1caaf0;
        default: break;
    }

    ctx->pc = 0x1caaa8u;

    // 0x1caaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1caaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1caaac: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1caaacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1caab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caab4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1caab4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1caab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1caab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1caabc: 0x8e05a70c  lw          $a1, -0x58F4($s0)
    ctx->pc = 0x1caabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1caac0: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1caac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1caac4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CAAC4u;
    {
        const bool branch_taken_0x1caac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAAC4u;
            // 0x1caac8: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caac4) {
            ctx->pc = 0x1CAB04u;
            goto label_1cab04;
        }
    }
    ctx->pc = 0x1CAACCu;
    // 0x1caacc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1caaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1caad0: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAAD0u;
    {
        const bool branch_taken_0x1caad0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAAD0u;
            // 0x1caad4: 0xa0a20ab7  sb          $v0, 0xAB7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caad0) {
            ctx->pc = 0x1CAAF8u;
            goto label_1caaf8;
        }
    }
    ctx->pc = 0x1CAAD8u;
    // 0x1caad8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1caad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caadc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1caadcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1caae0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1caae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1caae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caae8: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CAAE8u;
    SET_GPR_U32(ctx, 31, 0x1CAAF0u);
    ctx->pc = 0x1CAAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAAE8u;
            // 0x1caaec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAAF0u; }
        if (ctx->pc != 0x1CAAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAAF0u; }
        if (ctx->pc != 0x1CAAF0u) { return; }
    }
    ctx->pc = 0x1CAAF0u;
label_1caaf0:
    // 0x1caaf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAAF0u;
    {
        const bool branch_taken_0x1caaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAAF0u;
            // 0x1caaf4: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caaf0) {
            ctx->pc = 0x1CAB00u;
            goto label_1cab00;
        }
    }
    ctx->pc = 0x1CAAF8u;
label_1caaf8:
    // 0x1caaf8: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1caaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1caafc: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1caafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cab00:
    // 0x1cab00: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cab00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cab04:
    // 0x1cab04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cab04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cab08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cab08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cab0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB0Cu;
            // 0x1cab10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAB14u;
    // 0x1cab14: 0x0  nop
    ctx->pc = 0x1cab14u;
    // NOP
}
