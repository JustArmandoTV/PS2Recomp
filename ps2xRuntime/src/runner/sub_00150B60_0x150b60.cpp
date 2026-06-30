#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150B60
// Address: 0x150b60 - 0x150e40
void sub_00150B60_0x150b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150B60_0x150b60");
#endif

    switch (ctx->pc) {
        case 0x150b88u: goto label_150b88;
        case 0x150be8u: goto label_150be8;
        case 0x150bf8u: goto label_150bf8;
        case 0x150c10u: goto label_150c10;
        case 0x150c30u: goto label_150c30;
        case 0x150dd4u: goto label_150dd4;
        case 0x150e20u: goto label_150e20;
        default: break;
    }

    ctx->pc = 0x150b60u;

    // 0x150b60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x150b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x150b64: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x150b64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x150b68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x150b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x150b6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x150b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x150b74: 0x24e77a80  addiu       $a3, $a3, 0x7A80
    ctx->pc = 0x150b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31360));
    // 0x150b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x150b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150b84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x150b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_150b88:
    // 0x150b88: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x150b88u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x150b8c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x150b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x150b90: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x150b90u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x150b94: 0x29020080  slti        $v0, $t0, 0x80
    ctx->pc = 0x150b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x150b98: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x150b98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x150b9c: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x150b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x150ba0: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x150ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x150ba4: 0xa0e30005  sb          $v1, 0x5($a3)
    ctx->pc = 0x150ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x150ba8: 0xa0e30006  sb          $v1, 0x6($a3)
    ctx->pc = 0x150ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x150bac: 0xa0e30007  sb          $v1, 0x7($a3)
    ctx->pc = 0x150bacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x150bb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x150BB0u;
    {
        const bool branch_taken_0x150bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150BB0u;
            // 0x150bb4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bb0) {
            ctx->pc = 0x150B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150b88;
        }
    }
    ctx->pc = 0x150BB8u;
    // 0x150bb8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x150bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x150bbc: 0x8cd0000c  lw          $s0, 0xC($a2)
    ctx->pc = 0x150bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x150bc0: 0x8cd90010  lw          $t9, 0x10($a2)
    ctx->pc = 0x150bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x150bc4: 0x1840007c  blez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x150BC4u;
    {
        const bool branch_taken_0x150bc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x150BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150BC4u;
            // 0x150bc8: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bc4) {
            ctx->pc = 0x150DB8u;
            goto label_150db8;
        }
    }
    ctx->pc = 0x150BCCu;
    // 0x150bcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x150bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x150bd0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x150bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150bd4: 0x24427a80  addiu       $v0, $v0, 0x7A80
    ctx->pc = 0x150bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
    // 0x150bd8: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x150bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x150bdc: 0x24070403  addiu       $a3, $zero, 0x403
    ctx->pc = 0x150bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x150be0: 0x24081001  addiu       $t0, $zero, 0x1001
    ctx->pc = 0x150be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x150be4: 0x24091003  addiu       $t1, $zero, 0x1003
    ctx->pc = 0x150be4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
label_150be8:
    // 0x150be8: 0x960b0000  lhu         $t3, 0x0($s0)
    ctx->pc = 0x150be8u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150bec: 0x1960006c  blez        $t3, . + 4 + (0x6C << 2)
    ctx->pc = 0x150BECu;
    {
        const bool branch_taken_0x150bec = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x150BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150BECu;
            // 0x150bf0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bec) {
            ctx->pc = 0x150DA0u;
            goto label_150da0;
        }
    }
    ctx->pc = 0x150BF4u;
    // 0x150bf4: 0x0  nop
    ctx->pc = 0x150bf4u;
    // NOP
label_150bf8:
    // 0x150bf8: 0x8ccc0004  lw          $t4, 0x4($a2)
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x150bfc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x150bfcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c00: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x150c00u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c04: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x150c04u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c08: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x150C08u;
    {
        const bool branch_taken_0x150c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150C08u;
            // 0x150c0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c08) {
            ctx->pc = 0x150D28u;
            goto label_150d28;
        }
    }
    ctx->pc = 0x150C10u;
label_150c10:
    // 0x150c10: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x150c10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x150c14: 0x1ca9804  sllv        $s3, $t2, $t6
    ctx->pc = 0x150c14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x150c18: 0x1739824  and         $s3, $t3, $s3
    ctx->pc = 0x150c18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 11) & GPR_U64(ctx, 19));
    // 0x150c1c: 0x13982b  sltu        $s3, $zero, $s3
    ctx->pc = 0x150c1cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x150c20: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x150c20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x150c24: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x150C24u;
    {
        const bool branch_taken_0x150c24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c24) {
            ctx->pc = 0x150C50u;
            goto label_150c50;
        }
    }
    ctx->pc = 0x150C2Cu;
    // 0x150c2c: 0x0  nop
    ctx->pc = 0x150c2cu;
    // NOP
label_150c30:
    // 0x150c30: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x150c34: 0x1ca9804  sllv        $s3, $t2, $t6
    ctx->pc = 0x150c34u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x150c38: 0x1739824  and         $s3, $t3, $s3
    ctx->pc = 0x150c38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 11) & GPR_U64(ctx, 19));
    // 0x150c3c: 0x13982b  sltu        $s3, $zero, $s3
    ctx->pc = 0x150c3cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x150c40: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x150c40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x150c44: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x150C44u;
    {
        const bool branch_taken_0x150c44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x150c44) {
            ctx->pc = 0x150C30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150c30;
        }
    }
    ctx->pc = 0x150C4Cu;
    // 0x150c4c: 0x0  nop
    ctx->pc = 0x150c4cu;
    // NOP
label_150c50:
    // 0x150c50: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x150C50u;
    {
        const bool branch_taken_0x150c50 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c50) {
            ctx->pc = 0x150C60u;
            goto label_150c60;
        }
    }
    ctx->pc = 0x150C58u;
    // 0x150c58: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x150C58u;
    {
        const bool branch_taken_0x150c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c58) {
            ctx->pc = 0x150D18u;
            goto label_150d18;
        }
    }
    ctx->pc = 0x150C60u;
label_150c60:
    // 0x150c60: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150c64: 0x11690024  beq         $t3, $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x150C64u;
    {
        const bool branch_taken_0x150c64 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 9));
        if (branch_taken_0x150c64) {
            ctx->pc = 0x150CF8u;
            goto label_150cf8;
        }
    }
    ctx->pc = 0x150C6Cu;
    // 0x150c6c: 0x11680018  beq         $t3, $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x150C6Cu;
    {
        const bool branch_taken_0x150c6c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 8));
        if (branch_taken_0x150c6c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150C74u;
    // 0x150c74: 0x1167000e  beq         $t3, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x150C74u;
    {
        const bool branch_taken_0x150c74 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 7));
        if (branch_taken_0x150c74) {
            ctx->pc = 0x150CB0u;
            goto label_150cb0;
        }
    }
    ctx->pc = 0x150C7Cu;
    // 0x150c7c: 0x11630004  beq         $t3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x150C7Cu;
    {
        const bool branch_taken_0x150c7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x150c7c) {
            ctx->pc = 0x150C90u;
            goto label_150c90;
        }
    }
    ctx->pc = 0x150C84u;
    // 0x150c84: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x150C84u;
    {
        const bool branch_taken_0x150c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c84) {
            ctx->pc = 0x150D18u;
            goto label_150d18;
        }
    }
    ctx->pc = 0x150C8Cu;
    // 0x150c8c: 0x0  nop
    ctx->pc = 0x150c8cu;
    // NOP
label_150c90:
    // 0x150c90: 0x97380000  lhu         $t8, 0x0($t9)
    ctx->pc = 0x150c90u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x150c94: 0x8cab000c  lw          $t3, 0xC($a1)
    ctx->pc = 0x150c94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x150c98: 0x189840  sll         $s3, $t8, 1
    ctx->pc = 0x150c98u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x150c9c: 0x2789821  addu        $s3, $s3, $t8
    ctx->pc = 0x150c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 24)));
    // 0x150ca0: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x150ca0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x150ca4: 0x1735821  addu        $t3, $t3, $s3
    ctx->pc = 0x150ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x150ca8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x150CA8u;
    {
        const bool branch_taken_0x150ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150CA8u;
            // 0x150cac: 0x2578000c  addiu       $t8, $t3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ca8) {
            ctx->pc = 0x150D18u;
            goto label_150d18;
        }
    }
    ctx->pc = 0x150CB0u;
label_150cb0:
    // 0x150cb0: 0x97380000  lhu         $t8, 0x0($t9)
    ctx->pc = 0x150cb0u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x150cb4: 0x8cab000c  lw          $t3, 0xC($a1)
    ctx->pc = 0x150cb4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x150cb8: 0x1898c0  sll         $s3, $t8, 3
    ctx->pc = 0x150cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x150cbc: 0x2789821  addu        $s3, $s3, $t8
    ctx->pc = 0x150cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 24)));
    // 0x150cc0: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x150cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x150cc4: 0x1735821  addu        $t3, $t3, $s3
    ctx->pc = 0x150cc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x150cc8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x150CC8u;
    {
        const bool branch_taken_0x150cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150CC8u;
            // 0x150ccc: 0x25780018  addiu       $t8, $t3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cc8) {
            ctx->pc = 0x150D18u;
            goto label_150d18;
        }
    }
    ctx->pc = 0x150CD0u;
label_150cd0:
    // 0x150cd0: 0x97330000  lhu         $s3, 0x0($t9)
    ctx->pc = 0x150cd0u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x150cd4: 0x8cab000c  lw          $t3, 0xC($a1)
    ctx->pc = 0x150cd4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x150cd8: 0x137880  sll         $t7, $s3, 2
    ctx->pc = 0x150cd8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x150cdc: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x150cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x150ce0: 0xf7840  sll         $t7, $t7, 1
    ctx->pc = 0x150ce0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x150ce4: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x150ce4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x150ce8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x150ce8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x150cec: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x150cecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x150cf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x150CF0u;
    {
        const bool branch_taken_0x150cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150CF0u;
            // 0x150cf4: 0x256f000c  addiu       $t7, $t3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cf0) {
            ctx->pc = 0x150D18u;
            goto label_150d18;
        }
    }
    ctx->pc = 0x150CF8u;
label_150cf8:
    // 0x150cf8: 0x97330000  lhu         $s3, 0x0($t9)
    ctx->pc = 0x150cf8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x150cfc: 0x8cab000c  lw          $t3, 0xC($a1)
    ctx->pc = 0x150cfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x150d00: 0x1378c0  sll         $t7, $s3, 3
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x150d04: 0x1f37823  subu        $t7, $t7, $s3
    ctx->pc = 0x150d04u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x150d08: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x150d08u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x150d0c: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x150d0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x150d10: 0x256f0018  addiu       $t7, $t3, 0x18
    ctx->pc = 0x150d10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
    // 0x150d14: 0x0  nop
    ctx->pc = 0x150d14u;
    // NOP
label_150d18:
    // 0x150d18: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x150d18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x150d1c: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x150d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x150d20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x150d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x150d24: 0x0  nop
    ctx->pc = 0x150d24u;
    // NOP
label_150d28:
    // 0x150d28: 0x22c582a  slt         $t3, $s1, $t4
    ctx->pc = 0x150d28u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x150d2c: 0x1560ffb8  bnez        $t3, . + 4 + (-0x48 << 2)
    ctx->pc = 0x150D2Cu;
    {
        const bool branch_taken_0x150d2c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x150d2c) {
            ctx->pc = 0x150C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150c10;
        }
    }
    ctx->pc = 0x150D34u;
    // 0x150d34: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x150D34u;
    {
        const bool branch_taken_0x150d34 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d34) {
            ctx->pc = 0x150D58u;
            goto label_150d58;
        }
    }
    ctx->pc = 0x150D3Cu;
    // 0x150d3c: 0x8f0b0000  lw          $t3, 0x0($t8)
    ctx->pc = 0x150d3cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x150d40: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x150d40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x150d44: 0xa16a0000  sb          $t2, 0x0($t3)
    ctx->pc = 0x150d44u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x150d48: 0x8f0b0004  lw          $t3, 0x4($t8)
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x150d4c: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x150d4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x150d50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x150D50u;
    {
        const bool branch_taken_0x150d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150D50u;
            // 0x150d54: 0xa16a0000  sb          $t2, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d50) {
            ctx->pc = 0x150D88u;
            goto label_150d88;
        }
    }
    ctx->pc = 0x150D58u;
label_150d58:
    // 0x150d58: 0x8deb0000  lw          $t3, 0x0($t7)
    ctx->pc = 0x150d58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x150d5c: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x150d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x150d60: 0xa16a0000  sb          $t2, 0x0($t3)
    ctx->pc = 0x150d60u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x150d64: 0x8deb0008  lw          $t3, 0x8($t7)
    ctx->pc = 0x150d64u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x150d68: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x150d68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x150d6c: 0xa16a0000  sb          $t2, 0x0($t3)
    ctx->pc = 0x150d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x150d70: 0x8deb0010  lw          $t3, 0x10($t7)
    ctx->pc = 0x150d70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x150d74: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x150d74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x150d78: 0xa16a0000  sb          $t2, 0x0($t3)
    ctx->pc = 0x150d78u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x150d7c: 0x8deb0018  lw          $t3, 0x18($t7)
    ctx->pc = 0x150d7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x150d80: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x150d80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x150d84: 0xa16a0000  sb          $t2, 0x0($t3)
    ctx->pc = 0x150d84u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
label_150d88:
    // 0x150d88: 0x960b0000  lhu         $t3, 0x0($s0)
    ctx->pc = 0x150d88u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150d8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x150d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x150d90: 0x24b582a  slt         $t3, $s2, $t3
    ctx->pc = 0x150d90u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x150d94: 0x1560ff98  bnez        $t3, . + 4 + (-0x68 << 2)
    ctx->pc = 0x150D94u;
    {
        const bool branch_taken_0x150d94 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x150d94) {
            ctx->pc = 0x150BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150bf8;
        }
    }
    ctx->pc = 0x150D9Cu;
    // 0x150d9c: 0x0  nop
    ctx->pc = 0x150d9cu;
    // NOP
label_150da0:
    // 0x150da0: 0x8ccb0008  lw          $t3, 0x8($a2)
    ctx->pc = 0x150da0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x150da4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x150da4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x150da8: 0x1ab582a  slt         $t3, $t5, $t3
    ctx->pc = 0x150da8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x150dac: 0x1560ff8e  bnez        $t3, . + 4 + (-0x72 << 2)
    ctx->pc = 0x150DACu;
    {
        const bool branch_taken_0x150dac = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x150DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150DACu;
            // 0x150db0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150dac) {
            ctx->pc = 0x150BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150be8;
        }
    }
    ctx->pc = 0x150DB4u;
    // 0x150db4: 0x0  nop
    ctx->pc = 0x150db4u;
    // NOP
label_150db8:
    // 0x150db8: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x150db8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x150dbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x150dbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x150dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150dc4: 0x25087a80  addiu       $t0, $t0, 0x7A80
    ctx->pc = 0x150dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31360));
    // 0x150dc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x150dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150dcc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x150dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x150dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x150dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150dd4:
    // 0x150dd4: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x150dd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x150dd8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150DD8u;
    {
        const bool branch_taken_0x150dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x150dd8) {
            ctx->pc = 0x150E00u;
            goto label_150e00;
        }
    }
    ctx->pc = 0x150DE0u;
    // 0x150de0: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x150de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x150de4: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x150de4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x150de8: 0x24e3c  dsll32      $t1, $v0, 24
    ctx->pc = 0x150de8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 24));
    // 0x150dec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x150decu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x150df0: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x150df0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x150df4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x150df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x150df8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x150df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x150dfc: 0x0  nop
    ctx->pc = 0x150dfcu;
    // NOP
label_150e00:
    // 0x150e00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x150e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x150e04: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x150e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x150e08: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x150E08u;
    {
        const bool branch_taken_0x150e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E08u;
            // 0x150e0c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e08) {
            ctx->pc = 0x150DD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150dd4;
        }
    }
    ctx->pc = 0x150E10u;
    // 0x150e10: 0x9363c  dsll32      $a2, $t1, 24
    ctx->pc = 0x150e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << (32 + 24));
    // 0x150e14: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x150e18: 0xc04fd70  jal         func_13F5C0
    ctx->pc = 0x150E18u;
    SET_GPR_U32(ctx, 31, 0x150E20u);
    ctx->pc = 0x150E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E18u;
            // 0x150e1c: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5C0u;
    if (runtime->hasFunction(0x13F5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E20u; }
        if (ctx->pc != 0x150E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F5C0_0x13f5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E20u; }
        if (ctx->pc != 0x150E20u) { return; }
    }
    ctx->pc = 0x150E20u;
label_150e20:
    // 0x150e20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x150e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150e24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150e34: 0x3e00008  jr          $ra
    ctx->pc = 0x150E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E34u;
            // 0x150e38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150E3Cu;
    // 0x150e3c: 0x0  nop
    ctx->pc = 0x150e3cu;
    // NOP
}
