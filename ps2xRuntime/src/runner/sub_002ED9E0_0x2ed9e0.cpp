#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED9E0
// Address: 0x2ed9e0 - 0x2ede30
void sub_002ED9E0_0x2ed9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED9E0_0x2ed9e0");
#endif

    ctx->pc = 0x2ed9e0u;

    // 0x2ed9e0: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2ed9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2ed9e4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2ed9e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed9e8: 0x506a00ab  beql        $v1, $t2, . + 4 + (0xAB << 2)
    ctx->pc = 0x2ED9E8u;
    {
        const bool branch_taken_0x2ed9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ed9e8) {
            ctx->pc = 0x2ED9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9E8u;
            // 0x2ed9ec: 0x30c700ff  andi        $a3, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDC98u;
            goto label_2edc98;
        }
    }
    ctx->pc = 0x2ED9F0u;
    // 0x2ed9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed9f4: 0x50620051  beql        $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2ED9F4u;
    {
        const bool branch_taken_0x2ed9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed9f4) {
            ctx->pc = 0x2ED9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9F4u;
            // 0x2ed9f8: 0x30c900ff  andi        $t1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDB3Cu;
            goto label_2edb3c;
        }
    }
    ctx->pc = 0x2ED9FCu;
    // 0x2ed9fc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED9FCu;
    {
        const bool branch_taken_0x2ed9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed9fc) {
            ctx->pc = 0x2EDA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9FCu;
            // 0x2eda00: 0x30c900ff  andi        $t1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA0Cu;
            goto label_2eda0c;
        }
    }
    ctx->pc = 0x2EDA04u;
    // 0x2eda04: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x2EDA04u;
    {
        const bool branch_taken_0x2eda04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA04u;
            // 0x2eda08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda04) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDA0Cu;
label_2eda0c:
    // 0x2eda0c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2eda0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eda10: 0x51280022  beql        $t1, $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2EDA10u;
    {
        const bool branch_taken_0x2eda10 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x2eda10) {
            ctx->pc = 0x2EDA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA10u;
            // 0x2eda14: 0x30a800ff  andi        $t0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA9Cu;
            goto label_2eda9c;
        }
    }
    ctx->pc = 0x2EDA18u;
    // 0x2eda18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2eda18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eda1c: 0x5123000a  beql        $t1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDA1Cu;
    {
        const bool branch_taken_0x2eda1c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eda1c) {
            ctx->pc = 0x2EDA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA1Cu;
            // 0x2eda20: 0x308900ff  andi        $t1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA48u;
            goto label_2eda48;
        }
    }
    ctx->pc = 0x2EDA24u;
    // 0x2eda24: 0x112a0007  beq         $t1, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDA24u;
    {
        const bool branch_taken_0x2eda24 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x2eda24) {
            ctx->pc = 0x2EDA44u;
            goto label_2eda44;
        }
    }
    ctx->pc = 0x2EDA2Cu;
    // 0x2eda2c: 0x11220005  beq         $t1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDA2Cu;
    {
        const bool branch_taken_0x2eda2c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eda2c) {
            ctx->pc = 0x2EDA44u;
            goto label_2eda44;
        }
    }
    ctx->pc = 0x2EDA34u;
    // 0x2eda34: 0x112000fa  beqz        $t1, . + 4 + (0xFA << 2)
    ctx->pc = 0x2EDA34u;
    {
        const bool branch_taken_0x2eda34 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eda34) {
            ctx->pc = 0x2EDE20u;
            goto label_2ede20;
        }
    }
    ctx->pc = 0x2EDA3Cu;
    // 0x2eda3c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2EDA3Cu;
    {
        const bool branch_taken_0x2eda3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eda3c) {
            ctx->pc = 0x2EDE20u;
            goto label_2ede20;
        }
    }
    ctx->pc = 0x2EDA44u;
label_2eda44:
    // 0x2eda44: 0x308900ff  andi        $t1, $a0, 0xFF
    ctx->pc = 0x2eda44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2eda48:
    // 0x2eda48: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2eda48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2eda4c: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2eda4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2eda50: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x2eda50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2eda54: 0x1233818  mult        $a3, $t1, $v1
    ctx->pc = 0x2eda54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2eda58: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x2eda58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2eda5c: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2eda5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2eda60: 0x240501ae  addiu       $a1, $zero, 0x1AE
    ctx->pc = 0x2eda60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2eda64: 0x24c61630  addiu       $a2, $a2, 0x1630
    ctx->pc = 0x2eda64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5680));
    // 0x2eda68: 0x71052818  mult1       $a1, $t0, $a1
    ctx->pc = 0x2eda68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2eda6c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2eda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2eda70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eda70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eda74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eda74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eda78: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x2eda78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2eda7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2eda7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2eda80: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2eda80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2eda84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eda84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eda88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eda88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eda8c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2eda8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eda90: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2eda90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2eda94: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2EDA94u;
    {
        const bool branch_taken_0x2eda94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA94u;
            // 0x2eda98: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda94) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDA9Cu;
label_2eda9c:
    // 0x2eda9c: 0x240701ae  addiu       $a3, $zero, 0x1AE
    ctx->pc = 0x2eda9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2edaa0: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x2edaa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2edaa4: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x2edaa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2edaa8: 0x2405035c  addiu       $a1, $zero, 0x35C
    ctx->pc = 0x2edaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2edaac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2edaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edab0: 0x70c53818  mult1       $a3, $a2, $a1
    ctx->pc = 0x2edab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2edab4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2edab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2edab8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2edab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x2edabc: 0x24a51632  addiu       $a1, $a1, 0x1632
    ctx->pc = 0x2edabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5682));
    // 0x2edac0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2edac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2edac4: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2edac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2edac8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2edac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2edacc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2edaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2edad0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2edad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2edad4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2edad4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2edad8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDAD8u;
    {
        const bool branch_taken_0x2edad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDAD8u;
            // 0x2edadc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edad8) {
            ctx->pc = 0x2EDB04u;
            goto label_2edb04;
        }
    }
    ctx->pc = 0x2EDAE0u;
    // 0x2edae0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2edae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2edae4: 0x24631634  addiu       $v1, $v1, 0x1634
    ctx->pc = 0x2edae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5684));
    // 0x2edae8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2edae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2edaec: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2edaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2edaf0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2edaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2edaf4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2edaf4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2edaf8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDAF8u;
    {
        const bool branch_taken_0x2edaf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edaf8) {
            ctx->pc = 0x2EDB04u;
            goto label_2edb04;
        }
    }
    ctx->pc = 0x2EDB00u;
    // 0x2edb00: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2edb00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edb04:
    // 0x2edb04: 0x512000c7  beql        $t1, $zero, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2EDB04u;
    {
        const bool branch_taken_0x2edb04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb04) {
            ctx->pc = 0x2EDB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB04u;
            // 0x2edb08: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDB0Cu;
    // 0x2edb0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2edb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2edb10: 0x24421636  addiu       $v0, $v0, 0x1636
    ctx->pc = 0x2edb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5686));
    // 0x2edb14: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2edb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2edb18: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2edb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2edb1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2edb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2edb20: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2edb20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2edb24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDB24u;
    {
        const bool branch_taken_0x2edb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edb24) {
            ctx->pc = 0x2EDB30u;
            goto label_2edb30;
        }
    }
    ctx->pc = 0x2EDB2Cu;
    // 0x2edb2c: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x2edb2cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2edb30:
    // 0x2edb30: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2edb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2edb34: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2EDB34u;
    {
        const bool branch_taken_0x2edb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb34) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDB3Cu;
label_2edb3c:
    // 0x2edb3c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2edb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2edb40: 0x5128002d  beql        $t1, $t0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2EDB40u;
    {
        const bool branch_taken_0x2edb40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x2edb40) {
            ctx->pc = 0x2EDB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB40u;
            // 0x2edb44: 0x30a800ff  andi        $t0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDBF8u;
            goto label_2edbf8;
        }
    }
    ctx->pc = 0x2EDB48u;
    // 0x2edb48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2edb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2edb4c: 0x51230015  beql        $t1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EDB4Cu;
    {
        const bool branch_taken_0x2edb4c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x2edb4c) {
            ctx->pc = 0x2EDB50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB4Cu;
            // 0x2edb50: 0x308900ff  andi        $t1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDBA4u;
            goto label_2edba4;
        }
    }
    ctx->pc = 0x2EDB54u;
    // 0x2edb54: 0x112a0012  beq         $t1, $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EDB54u;
    {
        const bool branch_taken_0x2edb54 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x2edb54) {
            ctx->pc = 0x2EDBA0u;
            goto label_2edba0;
        }
    }
    ctx->pc = 0x2EDB5Cu;
    // 0x2edb5c: 0x11220010  beq         $t1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EDB5Cu;
    {
        const bool branch_taken_0x2edb5c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edb5c) {
            ctx->pc = 0x2EDBA0u;
            goto label_2edba0;
        }
    }
    ctx->pc = 0x2EDB64u;
    // 0x2edb64: 0x51200003  beql        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDB64u;
    {
        const bool branch_taken_0x2edb64 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb64) {
            ctx->pc = 0x2EDB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB64u;
            // 0x2edb68: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDB74u;
            goto label_2edb74;
        }
    }
    ctx->pc = 0x2EDB6Cu;
    // 0x2edb6c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2EDB6Cu;
    {
        const bool branch_taken_0x2edb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb6c) {
            ctx->pc = 0x2EDE20u;
            goto label_2ede20;
        }
    }
    ctx->pc = 0x2EDB74u;
label_2edb74:
    // 0x2edb74: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2edb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2edb78: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2edb78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2edb7c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2edb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2edb80: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2edb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2edb84: 0x246314e8  addiu       $v1, $v1, 0x14E8
    ctx->pc = 0x2edb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5352));
    // 0x2edb88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2edb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edb8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2edb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2edb90: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2edb90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2edb94: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2edb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2edb98: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2EDB98u;
    {
        const bool branch_taken_0x2edb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB98u;
            // 0x2edb9c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb98) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDBA0u;
label_2edba0:
    // 0x2edba0: 0x308900ff  andi        $t1, $a0, 0xFF
    ctx->pc = 0x2edba0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2edba4:
    // 0x2edba4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2edba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2edba8: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2edba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2edbac: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x2edbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2edbb0: 0x1233818  mult        $a3, $t1, $v1
    ctx->pc = 0x2edbb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2edbb4: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x2edbb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2edbb8: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2edbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2edbbc: 0x240501ae  addiu       $a1, $zero, 0x1AE
    ctx->pc = 0x2edbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2edbc0: 0x24c61630  addiu       $a2, $a2, 0x1630
    ctx->pc = 0x2edbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5680));
    // 0x2edbc4: 0x71052818  mult1       $a1, $t0, $a1
    ctx->pc = 0x2edbc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2edbc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2edbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2edbcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2edbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2edbd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2edbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edbd4: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x2edbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2edbd8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2edbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2edbdc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2edbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2edbe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2edbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edbe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2edbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2edbe8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2edbe8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2edbec: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2edbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2edbf0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2EDBF0u;
    {
        const bool branch_taken_0x2edbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDBF0u;
            // 0x2edbf4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbf0) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDBF8u;
label_2edbf8:
    // 0x2edbf8: 0x240701ae  addiu       $a3, $zero, 0x1AE
    ctx->pc = 0x2edbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2edbfc: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x2edbfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2edc00: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x2edc00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2edc04: 0x2405035c  addiu       $a1, $zero, 0x35C
    ctx->pc = 0x2edc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2edc08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2edc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edc0c: 0x70c53818  mult1       $a3, $a2, $a1
    ctx->pc = 0x2edc0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2edc10: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2edc10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2edc14: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2edc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x2edc18: 0x24a51632  addiu       $a1, $a1, 0x1632
    ctx->pc = 0x2edc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5682));
    // 0x2edc1c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2edc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2edc20: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2edc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2edc24: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2edc24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2edc28: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2edc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2edc2c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2edc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2edc30: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2edc30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2edc34: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDC34u;
    {
        const bool branch_taken_0x2edc34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDC34u;
            // 0x2edc38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc34) {
            ctx->pc = 0x2EDC60u;
            goto label_2edc60;
        }
    }
    ctx->pc = 0x2EDC3Cu;
    // 0x2edc3c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2edc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2edc40: 0x24631634  addiu       $v1, $v1, 0x1634
    ctx->pc = 0x2edc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5684));
    // 0x2edc44: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2edc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2edc48: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2edc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2edc4c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2edc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2edc50: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2edc50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2edc54: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDC54u;
    {
        const bool branch_taken_0x2edc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edc54) {
            ctx->pc = 0x2EDC60u;
            goto label_2edc60;
        }
    }
    ctx->pc = 0x2EDC5Cu;
    // 0x2edc5c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2edc5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edc60:
    // 0x2edc60: 0x51200070  beql        $t1, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x2EDC60u;
    {
        const bool branch_taken_0x2edc60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edc60) {
            ctx->pc = 0x2EDC64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDC60u;
            // 0x2edc64: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDC68u;
    // 0x2edc68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2edc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2edc6c: 0x24421636  addiu       $v0, $v0, 0x1636
    ctx->pc = 0x2edc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5686));
    // 0x2edc70: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2edc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2edc74: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2edc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2edc78: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2edc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2edc7c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2edc7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2edc80: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDC80u;
    {
        const bool branch_taken_0x2edc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edc80) {
            ctx->pc = 0x2EDC8Cu;
            goto label_2edc8c;
        }
    }
    ctx->pc = 0x2EDC88u;
    // 0x2edc88: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x2edc88u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2edc8c:
    // 0x2edc8c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2edc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2edc90: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2EDC90u;
    {
        const bool branch_taken_0x2edc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edc90) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDC98u;
label_2edc98:
    // 0x2edc98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2edc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2edc9c: 0x50e20036  beql        $a3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2EDC9Cu;
    {
        const bool branch_taken_0x2edc9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edc9c) {
            ctx->pc = 0x2EDCA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDC9Cu;
            // 0x2edca0: 0x310200ff  andi        $v0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDD78u;
            goto label_2edd78;
        }
    }
    ctx->pc = 0x2EDCA4u;
    // 0x2edca4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2edca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2edca8: 0x50e2001d  beql        $a3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EDCA8u;
    {
        const bool branch_taken_0x2edca8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edca8) {
            ctx->pc = 0x2EDCACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDCA8u;
            // 0x2edcac: 0x308700ff  andi        $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDD20u;
            goto label_2edd20;
        }
    }
    ctx->pc = 0x2EDCB0u;
    // 0x2edcb0: 0x10ea001a  beq         $a3, $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EDCB0u;
    {
        const bool branch_taken_0x2edcb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x2edcb0) {
            ctx->pc = 0x2EDD1Cu;
            goto label_2edd1c;
        }
    }
    ctx->pc = 0x2EDCB8u;
    // 0x2edcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edcbc: 0x10e20017  beq         $a3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EDCBCu;
    {
        const bool branch_taken_0x2edcbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edcbc) {
            ctx->pc = 0x2EDD1Cu;
            goto label_2edd1c;
        }
    }
    ctx->pc = 0x2EDCC4u;
    // 0x2edcc4: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDCC4u;
    {
        const bool branch_taken_0x2edcc4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edcc4) {
            ctx->pc = 0x2EDCC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDCC4u;
            // 0x2edcc8: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDCD4u;
            goto label_2edcd4;
        }
    }
    ctx->pc = 0x2EDCCCu;
    // 0x2edccc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2EDCCCu;
    {
        const bool branch_taken_0x2edccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edccc) {
            ctx->pc = 0x2EDE20u;
            goto label_2ede20;
        }
    }
    ctx->pc = 0x2EDCD4u;
label_2edcd4:
    // 0x2edcd4: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x2edcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2edcd8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2edcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2edcdc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2edcdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2edce0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2edce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2edce4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2edce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2edce8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x2edce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2edcec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2edcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2edcf0: 0x246314f0  addiu       $v1, $v1, 0x14F0
    ctx->pc = 0x2edcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5360));
    // 0x2edcf4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2edcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2edcf8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2edcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2edcfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2edcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edd00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2edd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2edd04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2edd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2edd08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2edd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2edd0c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2edd0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2edd10: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2edd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2edd14: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2EDD14u;
    {
        const bool branch_taken_0x2edd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD14u;
            // 0x2edd18: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd14) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDD1Cu;
label_2edd1c:
    // 0x2edd1c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x2edd1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2edd20:
    // 0x2edd20: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2edd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2edd24: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x2edd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2edd28: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2edd28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2edd2c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2edd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edd30: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2edd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2edd34: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x2edd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2edd38: 0x24c61630  addiu       $a2, $a2, 0x1630
    ctx->pc = 0x2edd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5680));
    // 0x2edd3c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x2edd3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2edd40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2edd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2edd44: 0x240301ae  addiu       $v1, $zero, 0x1AE
    ctx->pc = 0x2edd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2edd48: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x2edd48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2edd4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2edd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2edd50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2edd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edd54: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x2edd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2edd58: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2edd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2edd5c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2edd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2edd60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2edd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edd64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2edd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2edd68: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2edd68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2edd6c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2edd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2edd70: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2EDD70u;
    {
        const bool branch_taken_0x2edd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD70u;
            // 0x2edd74: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd70) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDD78u;
label_2edd78:
    // 0x2edd78: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2edd78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2edd7c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x2edd7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2edd80: 0x240501ae  addiu       $a1, $zero, 0x1AE
    ctx->pc = 0x2edd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2edd84: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2edd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2edd88: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2edd88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2edd8c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x2edd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2edd90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2edd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd94: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x2edd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2edd98: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x2edd98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2edd9c: 0x70832018  mult1       $a0, $a0, $v1
    ctx->pc = 0x2edd9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2edda0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2edda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2edda4: 0x24631632  addiu       $v1, $v1, 0x1632
    ctx->pc = 0x2edda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5682));
    // 0x2edda8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2edda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eddac: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x2eddacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2eddb0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2eddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2eddb4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2eddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2eddb8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2eddb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eddbc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDDBCu;
    {
        const bool branch_taken_0x2eddbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDDBCu;
            // 0x2eddc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddbc) {
            ctx->pc = 0x2EDDE8u;
            goto label_2edde8;
        }
    }
    ctx->pc = 0x2EDDC4u;
    // 0x2eddc4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eddc8: 0x24631634  addiu       $v1, $v1, 0x1634
    ctx->pc = 0x2eddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5684));
    // 0x2eddcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eddd0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2eddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2eddd4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2eddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2eddd8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2eddd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2edddc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDDDCu;
    {
        const bool branch_taken_0x2edddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edddc) {
            ctx->pc = 0x2EDDE8u;
            goto label_2edde8;
        }
    }
    ctx->pc = 0x2EDDE4u;
    // 0x2edde4: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x2edde4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2edde8:
    // 0x2edde8: 0x5100000e  beql        $t0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2EDDE8u;
    {
        const bool branch_taken_0x2edde8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edde8) {
            ctx->pc = 0x2EDDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDDE8u;
            // 0x2eddec: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDDF0u;
    // 0x2eddf0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eddf4: 0x24631636  addiu       $v1, $v1, 0x1636
    ctx->pc = 0x2eddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5686));
    // 0x2eddf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eddfc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2eddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ede00: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ede00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ede04: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ede04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ede08: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDE08u;
    {
        const bool branch_taken_0x2ede08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ede08) {
            ctx->pc = 0x2EDE14u;
            goto label_2ede14;
        }
    }
    ctx->pc = 0x2EDE10u;
    // 0x2ede10: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x2ede10u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2ede14:
    // 0x2ede14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ede14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ede18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDE18u;
    {
        const bool branch_taken_0x2ede18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede18) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDE20u;
label_2ede20:
    // 0x2ede20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ede20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ede24:
    // 0x2ede24: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EDE2Cu;
    // 0x2ede2c: 0x0  nop
    ctx->pc = 0x2ede2cu;
    // NOP
}
