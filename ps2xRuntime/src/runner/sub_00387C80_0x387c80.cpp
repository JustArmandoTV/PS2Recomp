#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00387C80
// Address: 0x387c80 - 0x387d30
void sub_00387C80_0x387c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387C80_0x387c80");
#endif

    switch (ctx->pc) {
        case 0x387ca8u: goto label_387ca8;
        case 0x387cb0u: goto label_387cb0;
        case 0x387cb8u: goto label_387cb8;
        case 0x387ce0u: goto label_387ce0;
        case 0x387d20u: goto label_387d20;
        default: break;
    }

    ctx->pc = 0x387c80u;

label_387c80:
    // 0x387c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x387c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x387c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387c88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x387c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x387c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x387c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x387c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x387c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x387c94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x387c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387c98: 0x8c8402e8  lw          $a0, 0x2E8($a0)
    ctx->pc = 0x387c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 744)));
    // 0x387c9c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x387c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x387ca0: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x387CA0u;
    SET_GPR_U32(ctx, 31, 0x387CA8u);
    ctx->pc = 0x387CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387CA0u;
            // 0x387ca4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387CA8u; }
        if (ctx->pc != 0x387CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387CA8u; }
        if (ctx->pc != 0x387CA8u) { return; }
    }
    ctx->pc = 0x387CA8u;
label_387ca8:
    // 0x387ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x387ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387cac: 0xa22202e4  sb          $v0, 0x2E4($s1)
    ctx->pc = 0x387cacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 740), (uint8_t)GPR_U32(ctx, 2));
label_387cb0:
    // 0x387cb0: 0xc0e2240  jal         func_388900
    ctx->pc = 0x387CB0u;
    SET_GPR_U32(ctx, 31, 0x387CB8u);
    ctx->pc = 0x387CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387CB0u;
            // 0x387cb4: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x388900u;
    if (runtime->hasFunction(0x388900u)) {
        auto targetFn = runtime->lookupFunction(0x388900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387CB8u; }
        if (ctx->pc != 0x387CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00388900_0x388900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387CB8u; }
        if (ctx->pc != 0x387CB8u) { return; }
    }
    ctx->pc = 0x387CB8u;
label_387cb8:
    // 0x387cb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x387cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x387cbc: 0x26310140  addiu       $s1, $s1, 0x140
    ctx->pc = 0x387cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x387cc0: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x387cc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x387cc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x387CC4u;
    {
        const bool branch_taken_0x387cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x387cc4) {
            ctx->pc = 0x387CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_387cb0;
        }
    }
    ctx->pc = 0x387CCCu;
    // 0x387ccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x387cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x387cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x387CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387CD8u;
            // 0x387cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387CE0u;
label_387ce0:
    // 0x387ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x387ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x387ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x387ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387cec: 0xa32804  sllv        $a1, $v1, $a1
    ctx->pc = 0x387cecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x387cf0: 0x8c8302e0  lw          $v1, 0x2E0($a0)
    ctx->pc = 0x387cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x387cf4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x387cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x387cf8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x387CF8u;
    {
        const bool branch_taken_0x387cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x387cf8) {
            ctx->pc = 0x387CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387CF8u;
            // 0x387cfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x387D24u;
            goto label_387d24;
        }
    }
    ctx->pc = 0x387D00u;
    // 0x387d00: 0x8c8302e0  lw          $v1, 0x2E0($a0)
    ctx->pc = 0x387d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x387d04: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x387d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x387d08: 0xac8302e0  sw          $v1, 0x2E0($a0)
    ctx->pc = 0x387d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 3));
    // 0x387d0c: 0x908302e4  lbu         $v1, 0x2E4($a0)
    ctx->pc = 0x387d0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 740)));
    // 0x387d10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x387D10u;
    {
        const bool branch_taken_0x387d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x387d10) {
            ctx->pc = 0x387D20u;
            goto label_387d20;
        }
    }
    ctx->pc = 0x387D18u;
    // 0x387d18: 0xc0e1f20  jal         func_387C80
    ctx->pc = 0x387D18u;
    SET_GPR_U32(ctx, 31, 0x387D20u);
    ctx->pc = 0x387C80u;
    goto label_387c80;
    ctx->pc = 0x387D20u;
label_387d20:
    // 0x387d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_387d24:
    // 0x387d24: 0x3e00008  jr          $ra
    ctx->pc = 0x387D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387D24u;
            // 0x387d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387D2Cu;
    // 0x387d2c: 0x0  nop
    ctx->pc = 0x387d2cu;
    // NOP
}
