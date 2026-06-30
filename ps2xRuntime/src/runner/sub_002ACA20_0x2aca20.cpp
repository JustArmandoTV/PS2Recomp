#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ACA20
// Address: 0x2aca20 - 0x2acb20
void sub_002ACA20_0x2aca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACA20_0x2aca20");
#endif

    ctx->pc = 0x2aca20u;

    // 0x2aca20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aca24: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2aca24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2aca28: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x2aca28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2aca2c: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x2aca2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2aca30: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2aca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2aca34: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x2aca34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2aca38: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2aca38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2aca3c: 0x348c2  srl         $t1, $v1, 3
    ctx->pc = 0x2aca3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x2aca40: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x2aca40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2aca44: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x2aca44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x2aca48: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2aca48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2aca4c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2aca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2aca50: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2aca50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2aca54: 0x1473021  addu        $a2, $t2, $a3
    ctx->pc = 0x2aca54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2aca58: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x2aca58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x2aca5c: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x2aca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2aca60: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACA60u;
    {
        const bool branch_taken_0x2aca60 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2ACA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA60u;
            // 0x2aca64: 0x64083  sra         $t0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca60) {
            ctx->pc = 0x2ACA70u;
            goto label_2aca70;
        }
    }
    ctx->pc = 0x2ACA68u;
    // 0x2aca68: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x2aca68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2aca6c: 0x64083  sra         $t0, $a2, 2
    ctx->pc = 0x2aca6cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 2));
label_2aca70:
    // 0x2aca70: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2aca70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aca74: 0xca3823  subu        $a3, $a2, $t2
    ctx->pc = 0x2aca74u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2aca78: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACA78u;
    {
        const bool branch_taken_0x2aca78 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2ACA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA78u;
            // 0x2aca7c: 0x73083  sra         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca78) {
            ctx->pc = 0x2ACA88u;
            goto label_2aca88;
        }
    }
    ctx->pc = 0x2ACA80u;
    // 0x2aca80: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x2aca80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2aca84: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x2aca84u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_2aca88:
    // 0x2aca88: 0x1263821  addu        $a3, $t1, $a2
    ctx->pc = 0x2aca88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2aca8c: 0x4e30003  bgezl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACA8Cu;
    {
        const bool branch_taken_0x2aca8c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2aca8c) {
            ctx->pc = 0x2ACA90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA8Cu;
            // 0x2aca90: 0xe8302a  slt         $a2, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACA9Cu;
            goto label_2aca9c;
        }
    }
    ctx->pc = 0x2ACA94u;
    // 0x2aca94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACA94u;
    {
        const bool branch_taken_0x2aca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA94u;
            // 0x2aca98: 0xe83821  addu        $a3, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca94) {
            ctx->pc = 0x2ACAA8u;
            goto label_2acaa8;
        }
    }
    ctx->pc = 0x2ACA9Cu;
label_2aca9c:
    // 0x2aca9c: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACA9Cu;
    {
        const bool branch_taken_0x2aca9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aca9c) {
            ctx->pc = 0x2ACAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA9Cu;
            // 0x2acaa0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACAACu;
            goto label_2acaac;
        }
    }
    ctx->pc = 0x2ACAA4u;
    // 0x2acaa4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x2acaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2acaa8:
    // 0x2acaa8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2acaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2acaac:
    // 0x2acaac: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2acaacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2acab0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2acab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2acab4: 0xc75021  addu        $t2, $a2, $a3
    ctx->pc = 0x2acab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2acab8: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x2acab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x2acabc: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x2acabcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2acac0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2acac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2acac4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACAC4u;
    {
        const bool branch_taken_0x2acac4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACAC4u;
            // 0x2acac8: 0x8fa90004  lw          $t1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acac4) {
            ctx->pc = 0x2ACAD4u;
            goto label_2acad4;
        }
    }
    ctx->pc = 0x2ACACCu;
    // 0x2acacc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACACCu;
    {
        const bool branch_taken_0x2acacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACACCu;
            // 0x2acad0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acacc) {
            ctx->pc = 0x2ACAD8u;
            goto label_2acad8;
        }
    }
    ctx->pc = 0x2ACAD4u;
label_2acad4:
    // 0x2acad4: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x2acad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2acad8:
    // 0x2acad8: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x2acad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2acadc: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x2acadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x2acae0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2acae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2acae4: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x2acae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x2acae8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2acae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2acaec: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2acaecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2acaf0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2acaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2acaf4: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2acaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2acaf8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2acaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2acafc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2acafcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2acb00: 0x24c30320  addiu       $v1, $a2, 0x320
    ctx->pc = 0x2acb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 800));
    // 0x2acb04: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2acb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2acb08: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x2acb08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x2acb0c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2acb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2acb10: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACB10u;
            // 0x2acb14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ACB18u;
    // 0x2acb18: 0x0  nop
    ctx->pc = 0x2acb18u;
    // NOP
    // 0x2acb1c: 0x0  nop
    ctx->pc = 0x2acb1cu;
    // NOP
}
