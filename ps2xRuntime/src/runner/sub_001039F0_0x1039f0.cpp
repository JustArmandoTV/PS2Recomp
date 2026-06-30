#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001039F0
// Address: 0x1039f0 - 0x103a78
void sub_001039F0_0x1039f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001039F0_0x1039f0");
#endif

    switch (ctx->pc) {
        case 0x103a30u: goto label_103a30;
        case 0x103a40u: goto label_103a40;
        case 0x103a48u: goto label_103a48;
        default: break;
    }

    ctx->pc = 0x1039f0u;

    // 0x1039f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1039f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1039f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1039f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1039f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1039f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1039fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1039fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103a04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x103a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x103a0c: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x103a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x103a10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x103a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x103a14: 0xc6800b  movn        $s0, $a2, $a2
    ctx->pc = 0x103a14u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x103a18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x103a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x103a1c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x103a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x103a20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103A20u;
    {
        const bool branch_taken_0x103a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A20u;
            // 0x103a24: 0x3c130063  lui         $s3, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a20) {
            ctx->pc = 0x103A58u;
            goto label_103a58;
        }
    }
    ctx->pc = 0x103A28u;
    // 0x103a28: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x103a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x103a2c: 0x0  nop
    ctx->pc = 0x103a2cu;
    // NOP
label_103a30:
    // 0x103a30: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103A30u;
    {
        const bool branch_taken_0x103a30 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x103a30) {
            ctx->pc = 0x103A48u;
            goto label_103a48;
        }
    }
    ctx->pc = 0x103A38u;
    // 0x103a38: 0xc043c12  jal         func_10F048
    ctx->pc = 0x103A38u;
    SET_GPR_U32(ctx, 31, 0x103A40u);
    ctx->pc = 0x103A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A38u;
            // 0x103a3c: 0x2664e5c0  addiu       $a0, $s3, -0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A40u; }
        if (ctx->pc != 0x103A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A40u; }
        if (ctx->pc != 0x103A40u) { return; }
    }
    ctx->pc = 0x103A40u;
label_103a40:
    // 0x103a40: 0xc041046  jal         func_104118
    ctx->pc = 0x103A40u;
    SET_GPR_U32(ctx, 31, 0x103A48u);
    ctx->pc = 0x103A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A40u;
            // 0x103a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104118u;
    if (runtime->hasFunction(0x104118u)) {
        auto targetFn = runtime->lookupFunction(0x104118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A48u; }
        if (ctx->pc != 0x103A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104118_0x104118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A48u; }
        if (ctx->pc != 0x103A48u) { return; }
    }
    ctx->pc = 0x103A48u;
label_103a48:
    // 0x103a48: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x103a4c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x103a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x103a50: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x103A50u;
    {
        const bool branch_taken_0x103a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A50u;
            // 0x103a54: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a50) {
            ctx->pc = 0x103A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_103a30;
        }
    }
    ctx->pc = 0x103A58u;
label_103a58:
    // 0x103a58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x103a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103a5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x103a5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103a60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103a60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103a64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x103A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A6Cu;
            // 0x103a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x103A74u;
    // 0x103a74: 0x0  nop
    ctx->pc = 0x103a74u;
    // NOP
}
