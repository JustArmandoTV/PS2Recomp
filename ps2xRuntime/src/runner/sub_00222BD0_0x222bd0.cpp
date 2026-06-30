#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222BD0
// Address: 0x222bd0 - 0x222c90
void sub_00222BD0_0x222bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222BD0_0x222bd0");
#endif

    switch (ctx->pc) {
        case 0x222bf8u: goto label_222bf8;
        case 0x222c5cu: goto label_222c5c;
        default: break;
    }

    ctx->pc = 0x222bd0u;

    // 0x222bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x222be0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222be4: 0x948301e4  lhu         $v1, 0x1E4($a0)
    ctx->pc = 0x222be4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x222be8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x222be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222bec: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x222BECu;
    {
        const bool branch_taken_0x222bec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x222BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BECu;
            // 0x222bf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bec) {
            ctx->pc = 0x222C20u;
            goto label_222c20;
        }
    }
    ctx->pc = 0x222BF4u;
    // 0x222bf4: 0x8e2401e0  lw          $a0, 0x1E0($s1)
    ctx->pc = 0x222bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_222bf8:
    // 0x222bf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222bfc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x222BFCu;
    {
        const bool branch_taken_0x222bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222bfc) {
            ctx->pc = 0x222C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222BFCu;
            // 0x222c00: 0x962301e4  lhu         $v1, 0x1E4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222C0Cu;
            goto label_222c0c;
        }
    }
    ctx->pc = 0x222C04u;
    // 0x222c04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x222C04u;
    {
        const bool branch_taken_0x222c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222c04) {
            ctx->pc = 0x222C24u;
            goto label_222c24;
        }
    }
    ctx->pc = 0x222C0Cu;
label_222c0c:
    // 0x222c0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x222c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x222c10: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x222c10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x222c14: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x222C14u;
    {
        const bool branch_taken_0x222c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C14u;
            // 0x222c18: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c14) {
            ctx->pc = 0x222BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222bf8;
        }
    }
    ctx->pc = 0x222C1Cu;
    // 0x222c1c: 0x0  nop
    ctx->pc = 0x222c1cu;
    // NOP
label_222c20:
    // 0x222c20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_222c24:
    // 0x222c24: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222C24u;
    {
        const bool branch_taken_0x222c24 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x222c24) {
            ctx->pc = 0x222C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222C24u;
            // 0x222c28: 0x962301e6  lhu         $v1, 0x1E6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 486)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222C40u;
            goto label_222c40;
        }
    }
    ctx->pc = 0x222C2Cu;
    // 0x222c2c: 0x8e2301e0  lw          $v1, 0x1E0($s1)
    ctx->pc = 0x222c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x222c30: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x222c30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x222c34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222c38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x222C38u;
    {
        const bool branch_taken_0x222c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C38u;
            // 0x222c3c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c38) {
            ctx->pc = 0x222C78u;
            goto label_222c78;
        }
    }
    ctx->pc = 0x222C40u;
label_222c40:
    // 0x222c40: 0x962401e4  lhu         $a0, 0x1E4($s1)
    ctx->pc = 0x222c40u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x222c44: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x222c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x222c48: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x222C48u;
    {
        const bool branch_taken_0x222c48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x222c48) {
            ctx->pc = 0x222C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222C48u;
            // 0x222c4c: 0x962401e4  lhu         $a0, 0x1E4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222C60u;
            goto label_222c60;
        }
    }
    ctx->pc = 0x222C50u;
    // 0x222c50: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x222c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x222c54: 0xc0a7668  jal         func_29D9A0
    ctx->pc = 0x222C54u;
    SET_GPR_U32(ctx, 31, 0x222C5Cu);
    ctx->pc = 0x222C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222C54u;
            // 0x222c58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D9A0u;
    if (runtime->hasFunction(0x29D9A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222C5Cu; }
        if (ctx->pc != 0x222C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D9A0_0x29d9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222C5Cu; }
        if (ctx->pc != 0x222C5Cu) { return; }
    }
    ctx->pc = 0x222C5Cu;
label_222c5c:
    // 0x222c5c: 0x962401e4  lhu         $a0, 0x1E4($s1)
    ctx->pc = 0x222c5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 484)));
label_222c60:
    // 0x222c60: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x222c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222c64: 0xa62301e4  sh          $v1, 0x1E4($s1)
    ctx->pc = 0x222c64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 484), (uint16_t)GPR_U32(ctx, 3));
    // 0x222c68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x222c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x222c6c: 0x8e2301e0  lw          $v1, 0x1E0($s1)
    ctx->pc = 0x222c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x222c70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222c74: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x222c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_222c78:
    // 0x222c78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222c7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222c84: 0x3e00008  jr          $ra
    ctx->pc = 0x222C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C84u;
            // 0x222c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222C8Cu;
    // 0x222c8c: 0x0  nop
    ctx->pc = 0x222c8cu;
    // NOP
}
