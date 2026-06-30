#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9BF8
// Address: 0x1c9bf8 - 0x1c9d00
void sub_001C9BF8_0x1c9bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9BF8_0x1c9bf8");
#endif

    switch (ctx->pc) {
        case 0x1c9c68u: goto label_1c9c68;
        default: break;
    }

    ctx->pc = 0x1c9bf8u;

    // 0x1c9bf8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1c9bf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bfc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1c9bfcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c00: 0x2d230030  sltiu       $v1, $t1, 0x30
    ctx->pc = 0x1c9c00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9c04: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c9c04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9c08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c0c: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C9C0Cu;
    {
        const bool branch_taken_0x1c9c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C0Cu;
            // 0x1c9c10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c0c) {
            ctx->pc = 0x1C9CD4u;
            goto label_1c9cd4;
        }
    }
    ctx->pc = 0x1C9C14u;
    // 0x1c9c14: 0x3c0e0060  lui         $t6, 0x60
    ctx->pc = 0x1c9c14u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)96 << 16));
    // 0x1c9c18: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x1c9c18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1c9c1c: 0x25cca70c  addiu       $t4, $t6, -0x58F4
    ctx->pc = 0x1c9c1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944524));
    // 0x1c9c20: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x1c9c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1c9c24: 0x24e40008  addiu       $a0, $a3, 0x8
    ctx->pc = 0x1c9c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1c9c28: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x1c9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1c9c2c: 0x8c431880  lw          $v1, 0x1880($v0)
    ctx->pc = 0x1c9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6272)));
    // 0x1c9c30: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C9C30u;
    {
        const bool branch_taken_0x1c9c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c30) {
            ctx->pc = 0x1C9C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C30u;
            // 0x1c9c34: 0x240dfffe  addiu       $t5, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9CD0u;
            goto label_1c9cd0;
        }
    }
    ctx->pc = 0x1C9C38u;
    // 0x1c9c38: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x1c9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1c9c3c: 0x90430080  lbu         $v1, 0x80($v0)
    ctx->pc = 0x1c9c3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1c9c40: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C9C40u;
    {
        const bool branch_taken_0x1c9c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c40) {
            ctx->pc = 0x1C9C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C40u;
            // 0x1c9c44: 0x240dfffd  addiu       $t5, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9CD0u;
            goto label_1c9cd0;
        }
    }
    ctx->pc = 0x1C9C48u;
    // 0x1c9c48: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c9c4c: 0x8c43a708  lw          $v1, -0x58F8($v0)
    ctx->pc = 0x1c9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944520)));
    // 0x1c9c50: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C9C50u;
    {
        const bool branch_taken_0x1c9c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C50u;
            // 0x1c9c54: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c50) {
            ctx->pc = 0x1C9CA8u;
            goto label_1c9ca8;
        }
    }
    ctx->pc = 0x1C9C58u;
    // 0x1c9c58: 0x1120000b  beqz        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9C58u;
    {
        const bool branch_taken_0x1c9c58 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C58u;
            // 0x1c9c5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c58) {
            ctx->pc = 0x1C9C88u;
            goto label_1c9c88;
        }
    }
    ctx->pc = 0x1C9C60u;
    // 0x1c9c60: 0x24e71948  addiu       $a3, $a3, 0x1948
    ctx->pc = 0x1c9c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6472));
    // 0x1c9c64: 0x0  nop
    ctx->pc = 0x1c9c64u;
    // NOP
label_1c9c68:
    // 0x1c9c68: 0x8ce4ff40  lw          $a0, -0xC0($a3)
    ctx->pc = 0x1c9c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967104)));
    // 0x1c9c6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c9c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c9c70: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1c9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c9c74: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1c9c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1c9c78: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x1c9c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9c7c: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x1c9c7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1c9c80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C9C80u;
    {
        const bool branch_taken_0x1c9c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C80u;
            // 0x1c9c84: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c80) {
            ctx->pc = 0x1C9C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9c68;
        }
    }
    ctx->pc = 0x1C9C88u;
label_1c9c88:
    // 0x1c9c88: 0x8dc2a70c  lw          $v0, -0x58F4($t6)
    ctx->pc = 0x1c9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294944524)));
    // 0x1c9c8c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1c9c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1c9c90: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1c9c94: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x1c9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c9c98: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1c9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1c9c9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c9c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1c9ca0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C9CA0u;
    {
        const bool branch_taken_0x1c9ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CA0u;
            // 0x1c9ca4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ca0) {
            ctx->pc = 0x1C9CD0u;
            goto label_1c9cd0;
        }
    }
    ctx->pc = 0x1C9CA8u;
label_1c9ca8:
    // 0x1c9ca8: 0x8ce300b0  lw          $v1, 0xB0($a3)
    ctx->pc = 0x1c9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x1c9cac: 0x8c821a00  lw          $v0, 0x1A00($a0)
    ctx->pc = 0x1c9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6656)));
    // 0x1c9cb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9cb4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1c9cb8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1c9cbc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1c9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1c9cc0: 0x8c431ac8  lw          $v1, 0x1AC8($v0)
    ctx->pc = 0x1c9cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6856)));
    // 0x1c9cc4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1c9cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1c9cc8: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1c9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1c9ccc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1c9cccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1c9cd0:
    // 0x1c9cd0: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1c9cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1c9cd4:
    // 0x1c9cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9CDCu;
    // 0x1c9cdc: 0x0  nop
    ctx->pc = 0x1c9cdcu;
    // NOP
    // 0x1c9ce0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x1c9ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x1c9ce4: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x1c9ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x1c9ce8: 0x8cc2a70c  lw          $v0, -0x58F4($a2)
    ctx->pc = 0x1c9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944524)));
    // 0x1c9cec: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x1c9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c9cf0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c9cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CF4u;
            // 0x1c9cf8: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9CFCu;
    // 0x1c9cfc: 0x0  nop
    ctx->pc = 0x1c9cfcu;
    // NOP
}
