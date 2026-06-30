#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6B10
// Address: 0x1c6b10 - 0x1c6b90
void sub_001C6B10_0x1c6b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6B10_0x1c6b10");
#endif

    switch (ctx->pc) {
        case 0x1c6b30u: goto label_1c6b30;
        case 0x1c6b40u: goto label_1c6b40;
        case 0x1c6b50u: goto label_1c6b50;
        default: break;
    }

    ctx->pc = 0x1c6b10u;

    // 0x1c6b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6b14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6b18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6b20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c6b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6b28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C6B28u;
    {
        const bool branch_taken_0x1c6b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B28u;
            // 0x1c6b2c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b28) {
            ctx->pc = 0x1C6B60u;
            goto label_1c6b60;
        }
    }
    ctx->pc = 0x1C6B30u;
label_1c6b30:
    // 0x1c6b30: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c6b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c6b34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c6b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c6b38: 0xc071a92  jal         func_1C6A48
    ctx->pc = 0x1C6B38u;
    SET_GPR_U32(ctx, 31, 0x1C6B40u);
    ctx->pc = 0x1C6B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B38u;
            // 0x1c6b3c: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A48u;
    if (runtime->hasFunction(0x1C6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B40u; }
        if (ctx->pc != 0x1C6B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A48_0x1c6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B40u; }
        if (ctx->pc != 0x1C6B40u) { return; }
    }
    ctx->pc = 0x1C6B40u;
label_1c6b40:
    // 0x1c6b40: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x1c6b40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b48: 0xc071a92  jal         func_1C6A48
    ctx->pc = 0x1C6B48u;
    SET_GPR_U32(ctx, 31, 0x1C6B50u);
    ctx->pc = 0x1C6B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B48u;
            // 0x1c6b4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A48u;
    if (runtime->hasFunction(0x1C6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B50u; }
        if (ctx->pc != 0x1C6B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A48_0x1c6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B50u; }
        if (ctx->pc != 0x1C6B50u) { return; }
    }
    ctx->pc = 0x1C6B50u;
label_1c6b50:
    // 0x1c6b50: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6B50u;
    {
        const bool branch_taken_0x1c6b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6b50) {
            ctx->pc = 0x1C6B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B50u;
            // 0x1c6b54: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6B64u;
            goto label_1c6b64;
        }
    }
    ctx->pc = 0x1C6B58u;
    // 0x1c6b58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6B58u;
    {
        const bool branch_taken_0x1c6b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B58u;
            // 0x1c6b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b58) {
            ctx->pc = 0x1C6B74u;
            goto label_1c6b74;
        }
    }
    ctx->pc = 0x1C6B60u;
label_1c6b60:
    // 0x1c6b60: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1c6b60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1c6b64:
    // 0x1c6b64: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C6B64u;
    {
        const bool branch_taken_0x1c6b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B64u;
            // 0x1c6b68: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b64) {
            ctx->pc = 0x1C6B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6b30;
        }
    }
    ctx->pc = 0x1C6B6Cu;
    // 0x1c6b6c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1c6b6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6b70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c6b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c6b74:
    // 0x1c6b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6b7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6b7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B84u;
            // 0x1c6b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6B8Cu;
    // 0x1c6b8c: 0x0  nop
    ctx->pc = 0x1c6b8cu;
    // NOP
}
