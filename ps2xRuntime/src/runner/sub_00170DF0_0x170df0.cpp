#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170DF0
// Address: 0x170df0 - 0x170e58
void sub_00170DF0_0x170df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170DF0_0x170df0");
#endif

    switch (ctx->pc) {
        case 0x170e04u: goto label_170e04;
        default: break;
    }

    ctx->pc = 0x170df0u;

    // 0x170df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170df8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170dfc: 0xc05c834  jal         func_1720D0
    ctx->pc = 0x170DFCu;
    SET_GPR_U32(ctx, 31, 0x170E04u);
    ctx->pc = 0x170E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170DFCu;
            // 0x170e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E04u; }
        if (ctx->pc != 0x170E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E04u; }
        if (ctx->pc != 0x170E04u) { return; }
    }
    ctx->pc = 0x170E04u;
label_170e04:
    // 0x170e04: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x170e04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170e08: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x170e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x170e0c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x170e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x170e10: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x170e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x170e14: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x170e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x170e18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x170e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x170e1c: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x170E1Cu;
    {
        const bool branch_taken_0x170e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x170E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E1Cu;
            // 0x170e20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e1c) {
            ctx->pc = 0x170E40u;
            goto label_170e40;
        }
    }
    ctx->pc = 0x170E24u;
    // 0x170e24: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x170e24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x170e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170e2c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170E2Cu;
    {
        const bool branch_taken_0x170e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x170E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E2Cu;
            // 0x170e30: 0xa202004c  sb          $v0, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e2c) {
            ctx->pc = 0x170E48u;
            goto label_170e48;
        }
    }
    ctx->pc = 0x170E34u;
    // 0x170e34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x170E34u;
    {
        const bool branch_taken_0x170e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E34u;
            // 0x170e38: 0xa200004b  sb          $zero, 0x4B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e34) {
            ctx->pc = 0x170E48u;
            goto label_170e48;
        }
    }
    ctx->pc = 0x170E3Cu;
    // 0x170e3c: 0x0  nop
    ctx->pc = 0x170e3cu;
    // NOP
label_170e40:
    // 0x170e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170e44: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x170e44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_170e48:
    // 0x170e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170e50: 0x805c83a  j           func_1720E8
    ctx->pc = 0x170E50u;
    ctx->pc = 0x170E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170E50u;
            // 0x170e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001720E8_0x1720e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170E58u;
}
