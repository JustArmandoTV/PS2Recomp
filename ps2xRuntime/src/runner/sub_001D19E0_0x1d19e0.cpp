#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D19E0
// Address: 0x1d19e0 - 0x1d1a80
void sub_001D19E0_0x1d19e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D19E0_0x1d19e0");
#endif

    switch (ctx->pc) {
        case 0x1d1a00u: goto label_1d1a00;
        case 0x1d1a34u: goto label_1d1a34;
        case 0x1d1a50u: goto label_1d1a50;
        default: break;
    }

    ctx->pc = 0x1d19e0u;

    // 0x1d19e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d19e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d19e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d19e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d19e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d19e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d19ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d19ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d19f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d19f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d19f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19f8: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x1D19F8u;
    SET_GPR_U32(ctx, 31, 0x1D1A00u);
    ctx->pc = 0x1D19FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19F8u;
            // 0x1d19fc: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A00u; }
        if (ctx->pc != 0x1D1A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A00u; }
        if (ctx->pc != 0x1D1A00u) { return; }
    }
    ctx->pc = 0x1D1A00u;
label_1d1a00:
    // 0x1d1a00: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1d1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1d1a04: 0xa06001b6  sb          $zero, 0x1B6($v1)
    ctx->pc = 0x1d1a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 438), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1a08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1a0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A14u;
            // 0x1d1a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1A1Cu;
    // 0x1d1a1c: 0x0  nop
    ctx->pc = 0x1d1a1cu;
    // NOP
    // 0x1d1a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1a24: 0x248301b7  addiu       $v1, $a0, 0x1B7
    ctx->pc = 0x1d1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 439));
    // 0x1d1a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1a30: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d1a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1a34:
    // 0x1d1a34: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1d1a34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1a38: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1A38u;
    {
        const bool branch_taken_0x1d1a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a38) {
            ctx->pc = 0x1D1A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A38u;
            // 0x1d1a3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1A58u;
            goto label_1d1a58;
        }
    }
    ctx->pc = 0x1D1A40u;
    // 0x1d1a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1a44: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1d1a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1d1a48: 0xc0729f6  jal         func_1CA7D8
    ctx->pc = 0x1D1A48u;
    SET_GPR_U32(ctx, 31, 0x1D1A50u);
    ctx->pc = 0x1D1A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A48u;
            // 0x1d1a4c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7D8u;
    if (runtime->hasFunction(0x1CA7D8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A50u; }
        if (ctx->pc != 0x1D1A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7D8_0x1ca7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A50u; }
        if (ctx->pc != 0x1D1A50u) { return; }
    }
    ctx->pc = 0x1D1A50u;
label_1d1a50:
    // 0x1d1a50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1A50u;
    {
        const bool branch_taken_0x1d1a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A50u;
            // 0x1d1a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a50) {
            ctx->pc = 0x1D1A68u;
            goto label_1d1a68;
        }
    }
    ctx->pc = 0x1D1A58u;
label_1d1a58:
    // 0x1d1a58: 0x2e010100  sltiu       $at, $s0, 0x100
    ctx->pc = 0x1d1a58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1d1a5c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D1A5Cu;
    {
        const bool branch_taken_0x1d1a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A5Cu;
            // 0x1d1a60: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a5c) {
            ctx->pc = 0x1D1A34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1a34;
        }
    }
    ctx->pc = 0x1D1A64u;
    // 0x1d1a64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d1a68:
    // 0x1d1a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A70u;
            // 0x1d1a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1A78u;
    // 0x1d1a78: 0x0  nop
    ctx->pc = 0x1d1a78u;
    // NOP
    // 0x1d1a7c: 0x0  nop
    ctx->pc = 0x1d1a7cu;
    // NOP
}
