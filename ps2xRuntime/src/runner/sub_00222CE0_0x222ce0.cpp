#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222CE0
// Address: 0x222ce0 - 0x222da0
void sub_00222CE0_0x222ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222CE0_0x222ce0");
#endif

    switch (ctx->pc) {
        case 0x222d08u: goto label_222d08;
        case 0x222d6cu: goto label_222d6c;
        default: break;
    }

    ctx->pc = 0x222ce0u;

    // 0x222ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x222cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cf4: 0x948301d4  lhu         $v1, 0x1D4($a0)
    ctx->pc = 0x222cf4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x222cf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x222cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cfc: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x222CFCu;
    {
        const bool branch_taken_0x222cfc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x222D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222CFCu;
            // 0x222d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cfc) {
            ctx->pc = 0x222D30u;
            goto label_222d30;
        }
    }
    ctx->pc = 0x222D04u;
    // 0x222d04: 0x8e2401d0  lw          $a0, 0x1D0($s1)
    ctx->pc = 0x222d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
label_222d08:
    // 0x222d08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222d0c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x222D0Cu;
    {
        const bool branch_taken_0x222d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222d0c) {
            ctx->pc = 0x222D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222D0Cu;
            // 0x222d10: 0x962301d4  lhu         $v1, 0x1D4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222D1Cu;
            goto label_222d1c;
        }
    }
    ctx->pc = 0x222D14u;
    // 0x222d14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x222D14u;
    {
        const bool branch_taken_0x222d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222d14) {
            ctx->pc = 0x222D34u;
            goto label_222d34;
        }
    }
    ctx->pc = 0x222D1Cu;
label_222d1c:
    // 0x222d1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x222d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x222d20: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x222d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x222d24: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x222D24u;
    {
        const bool branch_taken_0x222d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222D24u;
            // 0x222d28: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d24) {
            ctx->pc = 0x222D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222d08;
        }
    }
    ctx->pc = 0x222D2Cu;
    // 0x222d2c: 0x0  nop
    ctx->pc = 0x222d2cu;
    // NOP
label_222d30:
    // 0x222d30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_222d34:
    // 0x222d34: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222D34u;
    {
        const bool branch_taken_0x222d34 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x222d34) {
            ctx->pc = 0x222D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222D34u;
            // 0x222d38: 0x962301d6  lhu         $v1, 0x1D6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222D50u;
            goto label_222d50;
        }
    }
    ctx->pc = 0x222D3Cu;
    // 0x222d3c: 0x8e2301d0  lw          $v1, 0x1D0($s1)
    ctx->pc = 0x222d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x222d40: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x222d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x222d44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222d48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x222D48u;
    {
        const bool branch_taken_0x222d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222D48u;
            // 0x222d4c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d48) {
            ctx->pc = 0x222D88u;
            goto label_222d88;
        }
    }
    ctx->pc = 0x222D50u;
label_222d50:
    // 0x222d50: 0x962401d4  lhu         $a0, 0x1D4($s1)
    ctx->pc = 0x222d50u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x222d54: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x222d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x222d58: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x222D58u;
    {
        const bool branch_taken_0x222d58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x222d58) {
            ctx->pc = 0x222D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222D58u;
            // 0x222d5c: 0x962401d4  lhu         $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222D70u;
            goto label_222d70;
        }
    }
    ctx->pc = 0x222D60u;
    // 0x222d60: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x222d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x222d64: 0xc0a7668  jal         func_29D9A0
    ctx->pc = 0x222D64u;
    SET_GPR_U32(ctx, 31, 0x222D6Cu);
    ctx->pc = 0x222D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222D64u;
            // 0x222d68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D9A0u;
    if (runtime->hasFunction(0x29D9A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D6Cu; }
        if (ctx->pc != 0x222D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D9A0_0x29d9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D6Cu; }
        if (ctx->pc != 0x222D6Cu) { return; }
    }
    ctx->pc = 0x222D6Cu;
label_222d6c:
    // 0x222d6c: 0x962401d4  lhu         $a0, 0x1D4($s1)
    ctx->pc = 0x222d6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_222d70:
    // 0x222d70: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x222d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222d74: 0xa62301d4  sh          $v1, 0x1D4($s1)
    ctx->pc = 0x222d74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 468), (uint16_t)GPR_U32(ctx, 3));
    // 0x222d78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x222d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x222d7c: 0x8e2301d0  lw          $v1, 0x1D0($s1)
    ctx->pc = 0x222d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x222d80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222d84: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x222d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_222d88:
    // 0x222d88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222d8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222d90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222d94: 0x3e00008  jr          $ra
    ctx->pc = 0x222D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222D94u;
            // 0x222d98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222D9Cu;
    // 0x222d9c: 0x0  nop
    ctx->pc = 0x222d9cu;
    // NOP
}
