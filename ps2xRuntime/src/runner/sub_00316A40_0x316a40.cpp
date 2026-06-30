#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00316A40
// Address: 0x316a40 - 0x316b40
void sub_00316A40_0x316a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316A40_0x316a40");
#endif

    switch (ctx->pc) {
        case 0x316a98u: goto label_316a98;
        case 0x316aa0u: goto label_316aa0;
        default: break;
    }

    ctx->pc = 0x316a40u;

    // 0x316a40: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x316a40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x316a44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x316a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x316a48: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x316a48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x316a4c: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x316a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x316a50: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x316a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x316a54: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x316A54u;
    {
        const bool branch_taken_0x316a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x316a54) {
            ctx->pc = 0x316A60u;
            goto label_316a60;
        }
    }
    ctx->pc = 0x316A5Cu;
    // 0x316a5c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x316a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_316a60:
    // 0x316a60: 0x8d620020  lw          $v0, 0x20($t3)
    ctx->pc = 0x316a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x316a64: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x316a64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x316a68: 0x8c8f0968  lw          $t7, 0x968($a0)
    ctx->pc = 0x316a68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
    // 0x316a6c: 0x30ce0001  andi        $t6, $a2, 0x1
    ctx->pc = 0x316a6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x316a70: 0x8d68000c  lw          $t0, 0xC($t3)
    ctx->pc = 0x316a70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x316a74: 0x30cd0004  andi        $t5, $a2, 0x4
    ctx->pc = 0x316a74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x316a78: 0x2458ffff  addiu       $t8, $v0, -0x1
    ctx->pc = 0x316a78u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316a7c: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x316a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x316a80: 0x181980  sll         $v1, $t8, 6
    ctx->pc = 0x316a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 6));
    // 0x316a84: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x316a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x316a88: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x316a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x316a8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x316a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316a90: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x316a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x316a94: 0x94a90002  lhu         $t1, 0x2($a1)
    ctx->pc = 0x316a94u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_316a98:
    // 0x316a98: 0x300c82d  daddu       $t9, $t8, $zero
    ctx->pc = 0x316a98u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a9c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x316a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_316aa0:
    // 0x316aa0: 0x15e70011  bne         $t7, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x316AA0u;
    {
        const bool branch_taken_0x316aa0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 7));
        if (branch_taken_0x316aa0) {
            ctx->pc = 0x316AE8u;
            goto label_316ae8;
        }
    }
    ctx->pc = 0x316AA8u;
    // 0x316aa8: 0x94ac0000  lhu         $t4, 0x0($a1)
    ctx->pc = 0x316aa8u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x316aac: 0x152c0016  bne         $t1, $t4, . + 4 + (0x16 << 2)
    ctx->pc = 0x316AACu;
    {
        const bool branch_taken_0x316aac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 12));
        if (branch_taken_0x316aac) {
            ctx->pc = 0x316B08u;
            goto label_316b08;
        }
    }
    ctx->pc = 0x316AB4u;
    // 0x316ab4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x316ab4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x316ab8: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x316AB8u;
    {
        const bool branch_taken_0x316ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x316ab8) {
            ctx->pc = 0x316AD0u;
            goto label_316ad0;
        }
    }
    ctx->pc = 0x316AC0u;
    // 0x316ac0: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x316AC0u;
    {
        const bool branch_taken_0x316ac0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x316ac0) {
            ctx->pc = 0x316AD0u;
            goto label_316ad0;
        }
    }
    ctx->pc = 0x316AC8u;
    // 0x316ac8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x316AC8u;
    {
        const bool branch_taken_0x316ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316AC8u;
            // 0x316acc: 0x24a30020  addiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ac8) {
            ctx->pc = 0x316B1Cu;
            goto label_316b1c;
        }
    }
    ctx->pc = 0x316AD0u;
label_316ad0:
    // 0x316ad0: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x316AD0u;
    {
        const bool branch_taken_0x316ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x316ad0) {
            ctx->pc = 0x316B08u;
            goto label_316b08;
        }
    }
    ctx->pc = 0x316AD8u;
    // 0x316ad8: 0x11a0000b  beqz        $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x316AD8u;
    {
        const bool branch_taken_0x316ad8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x316ad8) {
            ctx->pc = 0x316B08u;
            goto label_316b08;
        }
    }
    ctx->pc = 0x316AE0u;
    // 0x316ae0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x316AE0u;
    {
        const bool branch_taken_0x316ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316AE0u;
            // 0x316ae4: 0x24a30020  addiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ae0) {
            ctx->pc = 0x316B1Cu;
            goto label_316b1c;
        }
    }
    ctx->pc = 0x316AE8u;
label_316ae8:
    // 0x316ae8: 0x94ac0000  lhu         $t4, 0x0($a1)
    ctx->pc = 0x316ae8u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x316aec: 0x152c0006  bne         $t1, $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x316AECu;
    {
        const bool branch_taken_0x316aec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 12));
        if (branch_taken_0x316aec) {
            ctx->pc = 0x316B08u;
            goto label_316b08;
        }
    }
    ctx->pc = 0x316AF4u;
    // 0x316af4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x316af4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x316af8: 0x506a0008  beql        $v1, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x316AF8u;
    {
        const bool branch_taken_0x316af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x316af8) {
            ctx->pc = 0x316AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316AF8u;
            // 0x316afc: 0x24a30020  addiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316B1Cu;
            goto label_316b1c;
        }
    }
    ctx->pc = 0x316B00u;
    // 0x316b00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x316B00u;
    {
        const bool branch_taken_0x316b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316B00u;
            // 0x316b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b00) {
            ctx->pc = 0x316B38u;
            goto label_316b38;
        }
    }
    ctx->pc = 0x316B08u;
label_316b08:
    // 0x316b08: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x316b08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x316b0c: 0x1f20ffe4  bgtz        $t9, . + 4 + (-0x1C << 2)
    ctx->pc = 0x316B0Cu;
    {
        const bool branch_taken_0x316b0c = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x316B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316B0Cu;
            // 0x316b10: 0x24a5ffc0  addiu       $a1, $a1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b0c) {
            ctx->pc = 0x316AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316aa0;
        }
    }
    ctx->pc = 0x316B14u;
    // 0x316b14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x316B14u;
    {
        const bool branch_taken_0x316b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316B14u;
            // 0x316b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b14) {
            ctx->pc = 0x316B38u;
            goto label_316b38;
        }
    }
    ctx->pc = 0x316B1Cu;
label_316b1c:
    // 0x316b1c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x316b1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x316b20: 0x5462ffdd  bnel        $v1, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x316B20u;
    {
        const bool branch_taken_0x316b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x316b20) {
            ctx->pc = 0x316B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316B20u;
            // 0x316b24: 0x94a90002  lhu         $t1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316a98;
        }
    }
    ctx->pc = 0x316B28u;
    // 0x316b28: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x316b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x316b2c: 0x3183ffff  andi        $v1, $t4, 0xFFFF
    ctx->pc = 0x316b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x316b30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x316b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316b38:
    // 0x316b38: 0x3e00008  jr          $ra
    ctx->pc = 0x316B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316B40u;
}
