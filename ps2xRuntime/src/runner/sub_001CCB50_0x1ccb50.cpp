#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CCB50
// Address: 0x1ccb50 - 0x1ccfb0
void sub_001CCB50_0x1ccb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCB50_0x1ccb50");
#endif

    switch (ctx->pc) {
        case 0x1ccea4u: goto label_1ccea4;
        case 0x1ccf14u: goto label_1ccf14;
        default: break;
    }

    ctx->pc = 0x1ccb50u;

    // 0x1ccb50: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1ccb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1ccb54: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1ccb54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccb5c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1ccb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1ccb60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccb64: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1CCB64u;
    {
        const bool branch_taken_0x1ccb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB64u;
            // 0x1ccb68: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb64) {
            ctx->pc = 0x1CCC98u;
            goto label_1ccc98;
        }
    }
    ctx->pc = 0x1CCB6Cu;
    // 0x1ccb6c: 0x3c02a009  lui         $v0, 0xA009
    ctx->pc = 0x1ccb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40969 << 16));
    // 0x1ccb70: 0x51020047  beql        $t0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1CCB70u;
    {
        const bool branch_taken_0x1ccb70 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccb70) {
            ctx->pc = 0x1CCB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB70u;
            // 0x1ccb74: 0x30c2007f  andi        $v0, $a2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC90u;
            goto label_1ccc90;
        }
    }
    ctx->pc = 0x1CCB78u;
    // 0x1ccb78: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1ccb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1ccb7c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CCB7Cu;
    {
        const bool branch_taken_0x1ccb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB7Cu;
            // 0x1ccb80: 0x3c02a028  lui         $v0, 0xA028 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41000 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb7c) {
            ctx->pc = 0x1CCBF0u;
            goto label_1ccbf0;
        }
    }
    ctx->pc = 0x1CCB84u;
    // 0x1ccb84: 0x3c02a003  lui         $v0, 0xA003
    ctx->pc = 0x1ccb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40963 << 16));
    // 0x1ccb88: 0x11020043  beq         $t0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1CCB88u;
    {
        const bool branch_taken_0x1ccb88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB88u;
            // 0x1ccb8c: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb88) {
            ctx->pc = 0x1CCC98u;
            goto label_1ccc98;
        }
    }
    ctx->pc = 0x1CCB90u;
    // 0x1ccb90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CCB90u;
    {
        const bool branch_taken_0x1ccb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB90u;
            // 0x1ccb94: 0x3c02a005  lui         $v0, 0xA005 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40965 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb90) {
            ctx->pc = 0x1CCBB8u;
            goto label_1ccbb8;
        }
    }
    ctx->pc = 0x1CCB98u;
    // 0x1ccb98: 0x3c02a001  lui         $v0, 0xA001
    ctx->pc = 0x1ccb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40961 << 16));
    // 0x1ccb9c: 0x1102003c  beq         $t0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1CCB9Cu;
    {
        const bool branch_taken_0x1ccb9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB9Cu;
            // 0x1ccba0: 0x30c2007f  andi        $v0, $a2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb9c) {
            ctx->pc = 0x1CCC90u;
            goto label_1ccc90;
        }
    }
    ctx->pc = 0x1CCBA4u;
    // 0x1ccba4: 0x3c02a002  lui         $v0, 0xA002
    ctx->pc = 0x1ccba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40962 << 16));
    // 0x1ccba8: 0x1102003b  beq         $t0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1CCBA8u;
    {
        const bool branch_taken_0x1ccba8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBA8u;
            // 0x1ccbac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccba8) {
            ctx->pc = 0x1CCC98u;
            goto label_1ccc98;
        }
    }
    ctx->pc = 0x1CCBB0u;
    // 0x1ccbb0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1CCBB0u;
    {
        const bool branch_taken_0x1ccbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBB0u;
            // 0x1ccbb4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbb0) {
            ctx->pc = 0x1CCD54u;
            goto label_1ccd54;
        }
    }
    ctx->pc = 0x1CCBB8u;
label_1ccbb8:
    // 0x1ccbb8: 0x51020030  beql        $t0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CCBB8u;
    {
        const bool branch_taken_0x1ccbb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccbb8) {
            ctx->pc = 0x1CCBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBB8u;
            // 0x1ccbbc: 0x24c20040  addiu       $v0, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC7Cu;
            goto label_1ccc7c;
        }
    }
    ctx->pc = 0x1CCBC0u;
    // 0x1ccbc0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1ccbc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1ccbc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCBC4u;
    {
        const bool branch_taken_0x1ccbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBC4u;
            // 0x1ccbc8: 0x3c02a007  lui         $v0, 0xA007 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40967 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbc4) {
            ctx->pc = 0x1CCBE0u;
            goto label_1ccbe0;
        }
    }
    ctx->pc = 0x1CCBCCu;
    // 0x1ccbcc: 0x3c02a004  lui         $v0, 0xA004
    ctx->pc = 0x1ccbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40964 << 16));
    // 0x1ccbd0: 0x11020027  beq         $t0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CCBD0u;
    {
        const bool branch_taken_0x1ccbd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBD0u;
            // 0x1ccbd4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbd0) {
            ctx->pc = 0x1CCC70u;
            goto label_1ccc70;
        }
    }
    ctx->pc = 0x1CCBD8u;
    // 0x1ccbd8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1CCBD8u;
    {
        const bool branch_taken_0x1ccbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBD8u;
            // 0x1ccbdc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbd8) {
            ctx->pc = 0x1CCD54u;
            goto label_1ccd54;
        }
    }
    ctx->pc = 0x1CCBE0u;
label_1ccbe0:
    // 0x1ccbe0: 0x11020025  beq         $t0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CCBE0u;
    {
        const bool branch_taken_0x1ccbe0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBE0u;
            // 0x1ccbe4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbe0) {
            ctx->pc = 0x1CCC78u;
            goto label_1ccc78;
        }
    }
    ctx->pc = 0x1CCBE8u;
    // 0x1ccbe8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1CCBE8u;
    {
        const bool branch_taken_0x1ccbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBE8u;
            // 0x1ccbec: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbe8) {
            ctx->pc = 0x1CCD54u;
            goto label_1ccd54;
        }
    }
    ctx->pc = 0x1CCBF0u;
label_1ccbf0:
    // 0x1ccbf0: 0x11020025  beq         $t0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CCBF0u;
    {
        const bool branch_taken_0x1ccbf0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBF0u;
            // 0x1ccbf4: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbf0) {
            ctx->pc = 0x1CCC88u;
            goto label_1ccc88;
        }
    }
    ctx->pc = 0x1CCBF8u;
    // 0x1ccbf8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CCBF8u;
    {
        const bool branch_taken_0x1ccbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBF8u;
            // 0x1ccbfc: 0x3c02a031  lui         $v0, 0xA031 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41009 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbf8) {
            ctx->pc = 0x1CCC40u;
            goto label_1ccc40;
        }
    }
    ctx->pc = 0x1CCC00u;
    // 0x1ccc00: 0x3c02a010  lui         $v0, 0xA010
    ctx->pc = 0x1ccc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40976 << 16));
    // 0x1ccc04: 0x51020022  beql        $t0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CCC04u;
    {
        const bool branch_taken_0x1ccc04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccc04) {
            ctx->pc = 0x1CCC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC04u;
            // 0x1ccc08: 0x30c2007f  andi        $v0, $a2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC90u;
            goto label_1ccc90;
        }
    }
    ctx->pc = 0x1CCC0Cu;
    // 0x1ccc0c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1ccc0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1ccc10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCC10u;
    {
        const bool branch_taken_0x1ccc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC10u;
            // 0x1ccc14: 0x3c02a011  lui         $v0, 0xA011 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40977 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc10) {
            ctx->pc = 0x1CCC30u;
            goto label_1ccc30;
        }
    }
    ctx->pc = 0x1CCC18u;
    // 0x1ccc18: 0x3c02a00a  lui         $v0, 0xA00A
    ctx->pc = 0x1ccc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40970 << 16));
    // 0x1ccc1c: 0x11020014  beq         $t0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CCC1Cu;
    {
        const bool branch_taken_0x1ccc1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC1Cu;
            // 0x1ccc20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc1c) {
            ctx->pc = 0x1CCC70u;
            goto label_1ccc70;
        }
    }
    ctx->pc = 0x1CCC24u;
    // 0x1ccc24: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1CCC24u;
    {
        const bool branch_taken_0x1ccc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC24u;
            // 0x1ccc28: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc24) {
            ctx->pc = 0x1CCD54u;
            goto label_1ccd54;
        }
    }
    ctx->pc = 0x1CCC2Cu;
    // 0x1ccc2c: 0x0  nop
    ctx->pc = 0x1ccc2cu;
    // NOP
label_1ccc30:
    // 0x1ccc30: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CCC30u;
    {
        const bool branch_taken_0x1ccc30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC30u;
            // 0x1ccc34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc30) {
            ctx->pc = 0x1CCC78u;
            goto label_1ccc78;
        }
    }
    ctx->pc = 0x1CCC38u;
    // 0x1ccc38: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1CCC38u;
    {
        const bool branch_taken_0x1ccc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC38u;
            // 0x1ccc3c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc38) {
            ctx->pc = 0x1CCD54u;
            goto label_1ccd54;
        }
    }
    ctx->pc = 0x1CCC40u;
label_1ccc40:
    // 0x1ccc40: 0x51020013  beql        $t0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CCC40u;
    {
        const bool branch_taken_0x1ccc40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccc40) {
            ctx->pc = 0x1CCC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC40u;
            // 0x1ccc44: 0x30c2007f  andi        $v0, $a2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC90u;
            goto label_1ccc90;
        }
    }
    ctx->pc = 0x1CCC48u;
    // 0x1ccc48: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1ccc48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1ccc4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCC4Cu;
    {
        const bool branch_taken_0x1ccc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC4Cu;
            // 0x1ccc50: 0x3c02a032  lui         $v0, 0xA032 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41010 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc4c) {
            ctx->pc = 0x1CCC68u;
            goto label_1ccc68;
        }
    }
    ctx->pc = 0x1CCC54u;
    // 0x1ccc54: 0x3c02a029  lui         $v0, 0xA029
    ctx->pc = 0x1ccc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41001 << 16));
    // 0x1ccc58: 0x1102000b  beq         $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CCC58u;
    {
        const bool branch_taken_0x1ccc58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC58u;
            // 0x1ccc5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc58) {
            ctx->pc = 0x1CCC88u;
            goto label_1ccc88;
        }
    }
    ctx->pc = 0x1CCC60u;
    // 0x1ccc60: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1CCC60u;
    {
        const bool branch_taken_0x1ccc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC60u;
            // 0x1ccc64: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc60) {
            ctx->pc = 0x1CCD54u;
            goto label_1ccd54;
        }
    }
    ctx->pc = 0x1CCC68u;
label_1ccc68:
    // 0x1ccc68: 0x15020039  bne         $t0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1CCC68u;
    {
        const bool branch_taken_0x1ccc68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CCC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC68u;
            // 0x1ccc6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc68) {
            ctx->pc = 0x1CCD50u;
            goto label_1ccd50;
        }
    }
    ctx->pc = 0x1CCC70u;
label_1ccc70:
    // 0x1ccc70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCC70u;
    {
        const bool branch_taken_0x1ccc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC70u;
            // 0x1ccc74: 0x30c2007f  andi        $v0, $a2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc70) {
            ctx->pc = 0x1CCC90u;
            goto label_1ccc90;
        }
    }
    ctx->pc = 0x1CCC78u;
label_1ccc78:
    // 0x1ccc78: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x1ccc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_1ccc7c:
    // 0x1ccc7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCC7Cu;
    {
        const bool branch_taken_0x1ccc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC7Cu;
            // 0x1ccc80: 0x3042007f  andi        $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc7c) {
            ctx->pc = 0x1CCC90u;
            goto label_1ccc90;
        }
    }
    ctx->pc = 0x1CCC84u;
    // 0x1ccc84: 0x0  nop
    ctx->pc = 0x1ccc84u;
    // NOP
label_1ccc88:
    // 0x1ccc88: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1ccc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ccc8c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1ccc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1ccc90:
    // 0x1ccc90: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ccc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ccc94: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x1ccc94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ccc98:
    // 0x1ccc98: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1ccc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1ccc9c: 0x34420500  ori         $v0, $v0, 0x500
    ctx->pc = 0x1ccc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x1ccca0: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCCA0u;
    {
        const bool branch_taken_0x1ccca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccca0) {
            ctx->pc = 0x1CCCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCA0u;
            // 0x1ccca4: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCB8u;
            goto label_1cccb8;
        }
    }
    ctx->pc = 0x1CCCA8u;
    // 0x1ccca8: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1ccca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1cccac: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x1cccacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x1cccb0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCCB0u;
    {
        const bool branch_taken_0x1cccb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cccb0) {
            ctx->pc = 0x1CCCB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCB0u;
            // 0x1cccb4: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCB8u;
            goto label_1cccb8;
        }
    }
    ctx->pc = 0x1CCCB8u;
label_1cccb8:
    // 0x1cccb8: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1cccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1cccbc: 0x34420900  ori         $v0, $v0, 0x900
    ctx->pc = 0x1cccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2304);
    // 0x1cccc0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CCCC0u;
    {
        const bool branch_taken_0x1cccc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCC0u;
            // 0x1cccc4: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccc0) {
            ctx->pc = 0x1CCD00u;
            goto label_1ccd00;
        }
    }
    ctx->pc = 0x1CCCC8u;
    // 0x1cccc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCCC8u;
    {
        const bool branch_taken_0x1cccc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cccc8) {
            ctx->pc = 0x1CCCE8u;
            goto label_1ccce8;
        }
    }
    ctx->pc = 0x1CCCD0u;
    // 0x1cccd0: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1cccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1cccd4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1cccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1cccd8: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCCD8u;
    {
        const bool branch_taken_0x1cccd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCD8u;
            // 0x1cccdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccd8) {
            ctx->pc = 0x1CCD10u;
            goto label_1ccd10;
        }
    }
    ctx->pc = 0x1CCCE0u;
    // 0x1ccce0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1CCCE0u;
    {
        const bool branch_taken_0x1ccce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCE0u;
            // 0x1ccce4: 0x30e5ffff  andi        $a1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccce0) {
            ctx->pc = 0x1CCD38u;
            goto label_1ccd38;
        }
    }
    ctx->pc = 0x1CCCE8u;
label_1ccce8:
    // 0x1ccce8: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1ccce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1cccec: 0x34422900  ori         $v0, $v0, 0x2900
    ctx->pc = 0x1cccecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10496);
    // 0x1cccf0: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CCCF0u;
    {
        const bool branch_taken_0x1cccf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCF0u;
            // 0x1cccf4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccf0) {
            ctx->pc = 0x1CCD20u;
            goto label_1ccd20;
        }
    }
    ctx->pc = 0x1CCCF8u;
    // 0x1cccf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CCCF8u;
    {
        const bool branch_taken_0x1cccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCF8u;
            // 0x1cccfc: 0x30e5ffff  andi        $a1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccf8) {
            ctx->pc = 0x1CCD38u;
            goto label_1ccd38;
        }
    }
    ctx->pc = 0x1CCD00u;
label_1ccd00:
    // 0x1ccd00: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ccd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ccd04: 0x8c43a70c  lw          $v1, -0x58F4($v0)
    ctx->pc = 0x1ccd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
    // 0x1ccd08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CCD08u;
    {
        const bool branch_taken_0x1ccd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD08u;
            // 0x1ccd0c: 0xac600abc  sw          $zero, 0xABC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2748), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd08) {
            ctx->pc = 0x1CCD30u;
            goto label_1ccd30;
        }
    }
    ctx->pc = 0x1CCD10u;
label_1ccd10:
    // 0x1ccd10: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ccd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ccd14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCD14u;
    {
        const bool branch_taken_0x1ccd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD14u;
            // 0x1ccd18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd14) {
            ctx->pc = 0x1CCD28u;
            goto label_1ccd28;
        }
    }
    ctx->pc = 0x1CCD1Cu;
    // 0x1ccd1c: 0x0  nop
    ctx->pc = 0x1ccd1cu;
    // NOP
label_1ccd20:
    // 0x1ccd20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ccd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ccd24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ccd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ccd28:
    // 0x1ccd28: 0x8c43a70c  lw          $v1, -0x58F4($v0)
    ctx->pc = 0x1ccd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
    // 0x1ccd2c: 0xac640abc  sw          $a0, 0xABC($v1)
    ctx->pc = 0x1ccd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2748), GPR_U32(ctx, 4));
label_1ccd30:
    // 0x1ccd30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccd34: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x1ccd34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1ccd38:
    // 0x1ccd38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ccd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccd3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ccd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccd40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ccd44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd48: 0x8072900  j           func_1CA400
    ctx->pc = 0x1CCD48u;
    ctx->pc = 0x1CCD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD48u;
            // 0x1ccd4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA400_0x1ca400(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CCD50u;
label_1ccd50:
    // 0x1ccd50: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ccd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ccd54:
    // 0x1ccd54: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD54u;
            // 0x1ccd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCD5Cu;
    // 0x1ccd5c: 0x0  nop
    ctx->pc = 0x1ccd5cu;
    // NOP
    // 0x1ccd60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ccd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ccd64: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ccd64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ccd68: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x1ccd68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1ccd6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ccd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ccd70: 0x59600  sll         $s2, $a1, 24
    ctx->pc = 0x1ccd70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1ccd74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccd78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccd7c: 0x2464021  addu        $t0, $s2, $a2
    ctx->pc = 0x1ccd7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1ccd80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ccd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ccd84: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x1CCD84u;
    {
        const bool branch_taken_0x1ccd84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD84u;
            // 0x1ccd88: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd84) {
            ctx->pc = 0x1CCF58u;
            goto label_1ccf58;
        }
    }
    ctx->pc = 0x1CCD8Cu;
    // 0x1ccd8c: 0x3c02b010  lui         $v0, 0xB010
    ctx->pc = 0x1ccd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45072 << 16));
    // 0x1ccd90: 0x10c2004d  beq         $a2, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1CCD90u;
    {
        const bool branch_taken_0x1ccd90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD90u;
            // 0x1ccd94: 0x46102b  sltu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd90) {
            ctx->pc = 0x1CCEC8u;
            goto label_1ccec8;
        }
    }
    ctx->pc = 0x1CCD98u;
    // 0x1ccd98: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CCD98u;
    {
        const bool branch_taken_0x1ccd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD98u;
            // 0x1ccd9c: 0x3c02b02d  lui         $v0, 0xB02D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45101 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd98) {
            ctx->pc = 0x1CCDE8u;
            goto label_1ccde8;
        }
    }
    ctx->pc = 0x1CCDA0u;
    // 0x1ccda0: 0x3c02b007  lui         $v0, 0xB007
    ctx->pc = 0x1ccda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45063 << 16));
    // 0x1ccda4: 0x50c20024  beql        $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CCDA4u;
    {
        const bool branch_taken_0x1ccda4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccda4) {
            ctx->pc = 0x1CCDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDA4u;
            // 0x1ccda8: 0x30e2007f  andi        $v0, $a3, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE38u;
            goto label_1cce38;
        }
    }
    ctx->pc = 0x1CCDACu;
    // 0x1ccdac: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1ccdacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ccdb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCDB0u;
    {
        const bool branch_taken_0x1ccdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDB0u;
            // 0x1ccdb4: 0x3c02b00a  lui         $v0, 0xB00A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45066 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdb0) {
            ctx->pc = 0x1CCDD0u;
            goto label_1ccdd0;
        }
    }
    ctx->pc = 0x1CCDB8u;
    // 0x1ccdb8: 0x3c02a011  lui         $v0, 0xA011
    ctx->pc = 0x1ccdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40977 << 16));
    // 0x1ccdbc: 0x10c20020  beq         $a2, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CCDBCu;
    {
        const bool branch_taken_0x1ccdbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDBCu;
            // 0x1ccdc0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdbc) {
            ctx->pc = 0x1CCE40u;
            goto label_1cce40;
        }
    }
    ctx->pc = 0x1CCDC4u;
    // 0x1ccdc4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1CCDC4u;
    {
        const bool branch_taken_0x1ccdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDC4u;
            // 0x1ccdc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdc4) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCDCCu;
    // 0x1ccdcc: 0x0  nop
    ctx->pc = 0x1ccdccu;
    // NOP
label_1ccdd0:
    // 0x1ccdd0: 0x10c2001b  beq         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CCDD0u;
    {
        const bool branch_taken_0x1ccdd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDD0u;
            // 0x1ccdd4: 0x3c02b00d  lui         $v0, 0xB00D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45069 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdd0) {
            ctx->pc = 0x1CCE40u;
            goto label_1cce40;
        }
    }
    ctx->pc = 0x1CCDD8u;
    // 0x1ccdd8: 0x50c20017  beql        $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CCDD8u;
    {
        const bool branch_taken_0x1ccdd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccdd8) {
            ctx->pc = 0x1CCDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDD8u;
            // 0x1ccddc: 0x30e2007f  andi        $v0, $a3, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE38u;
            goto label_1cce38;
        }
    }
    ctx->pc = 0x1CCDE0u;
    // 0x1ccde0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1CCDE0u;
    {
        const bool branch_taken_0x1ccde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDE0u;
            // 0x1ccde4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccde0) {
            ctx->pc = 0x1CCF90u;
            goto label_1ccf90;
        }
    }
    ctx->pc = 0x1CCDE8u;
label_1ccde8:
    // 0x1ccde8: 0x50c20013  beql        $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CCDE8u;
    {
        const bool branch_taken_0x1ccde8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccde8) {
            ctx->pc = 0x1CCDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDE8u;
            // 0x1ccdec: 0x30e2007f  andi        $v0, $a3, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE38u;
            goto label_1cce38;
        }
    }
    ctx->pc = 0x1CCDF0u;
    // 0x1ccdf0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1ccdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ccdf4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCDF4u;
    {
        const bool branch_taken_0x1ccdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDF4u;
            // 0x1ccdf8: 0x3c02b030  lui         $v0, 0xB030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdf4) {
            ctx->pc = 0x1CCE20u;
            goto label_1cce20;
        }
    }
    ctx->pc = 0x1CCDFCu;
    // 0x1ccdfc: 0x3c02b027  lui         $v0, 0xB027
    ctx->pc = 0x1ccdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45095 << 16));
    // 0x1cce00: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCE00u;
    {
        const bool branch_taken_0x1cce00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE00u;
            // 0x1cce04: 0x30e2007f  andi        $v0, $a3, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce00) {
            ctx->pc = 0x1CCE38u;
            goto label_1cce38;
        }
    }
    ctx->pc = 0x1CCE08u;
    // 0x1cce08: 0x3c02b02a  lui         $v0, 0xB02A
    ctx->pc = 0x1cce08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45098 << 16));
    // 0x1cce0c: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CCE0Cu;
    {
        const bool branch_taken_0x1cce0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE0Cu;
            // 0x1cce10: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce0c) {
            ctx->pc = 0x1CCE40u;
            goto label_1cce40;
        }
    }
    ctx->pc = 0x1CCE14u;
    // 0x1cce14: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1CCE14u;
    {
        const bool branch_taken_0x1cce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE14u;
            // 0x1cce18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce14) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCE1Cu;
    // 0x1cce1c: 0x0  nop
    ctx->pc = 0x1cce1cu;
    // NOP
label_1cce20:
    // 0x1cce20: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCE20u;
    {
        const bool branch_taken_0x1cce20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE20u;
            // 0x1cce24: 0x3c02b078  lui         $v0, 0xB078 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45176 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce20) {
            ctx->pc = 0x1CCE58u;
            goto label_1cce58;
        }
    }
    ctx->pc = 0x1CCE28u;
    // 0x1cce28: 0x10c2004b  beq         $a2, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1CCE28u;
    {
        const bool branch_taken_0x1cce28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE28u;
            // 0x1cce2c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce28) {
            ctx->pc = 0x1CCF58u;
            goto label_1ccf58;
        }
    }
    ctx->pc = 0x1CCE30u;
    // 0x1cce30: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1CCE30u;
    {
        const bool branch_taken_0x1cce30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE30u;
            // 0x1cce34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce30) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCE38u;
label_1cce38:
    // 0x1cce38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCE38u;
    {
        const bool branch_taken_0x1cce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE38u;
            // 0x1cce3c: 0x3090ffff  andi        $s0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce38) {
            ctx->pc = 0x1CCE4Cu;
            goto label_1cce4c;
        }
    }
    ctx->pc = 0x1CCE40u;
label_1cce40:
    // 0x1cce40: 0x24e20040  addiu       $v0, $a3, 0x40
    ctx->pc = 0x1cce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cce44: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1cce44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1cce48: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1cce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_1cce4c:
    // 0x1cce4c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1cce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1cce50: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1CCE50u;
    {
        const bool branch_taken_0x1cce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE50u;
            // 0x1cce54: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce50) {
            ctx->pc = 0x1CCF5Cu;
            goto label_1ccf5c;
        }
    }
    ctx->pc = 0x1CCE58u;
label_1cce58:
    // 0x1cce58: 0x24110064  addiu       $s1, $zero, 0x64
    ctx->pc = 0x1cce58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cce5c: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1cce5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1cce60: 0xf1001a  div         $zero, $a3, $s1
    ctx->pc = 0x1cce60u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cce64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cce64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce68: 0x3c02b031  lui         $v0, 0xB031
    ctx->pc = 0x1cce68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45105 << 16));
    // 0x1cce6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cce70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cce74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cce78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce7c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCE7Cu;
    {
        const bool branch_taken_0x1cce7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cce7c) {
            ctx->pc = 0x1CCE80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE7Cu;
            // 0x1cce80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE84u;
            goto label_1cce84;
        }
    }
    ctx->pc = 0x1CCE84u;
label_1cce84:
    // 0x1cce84: 0x4012  mflo        $t0
    ctx->pc = 0x1cce84u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1cce88: 0x9810  mfhi        $s3
    ctx->pc = 0x1cce88u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x1cce8c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x1cce8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1cce90: 0x3108007f  andi        $t0, $t0, 0x7F
    ctx->pc = 0x1cce90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
    // 0x1cce94: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1cce94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1cce98: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x1cce98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x1cce9c: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CCE9Cu;
    SET_GPR_U32(ctx, 31, 0x1CCEA4u);
    ctx->pc = 0x1CCEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE9Cu;
            // 0x1ccea0: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEA4u; }
        if (ctx->pc != 0x1CCEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEA4u; }
        if (ctx->pc != 0x1CCEA4u) { return; }
    }
    ctx->pc = 0x1CCEA4u;
label_1ccea4:
    // 0x1ccea4: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x1CCEA4u;
    {
        const bool branch_taken_0x1ccea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccea4) {
            ctx->pc = 0x1CCEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEA4u;
            // 0x1ccea8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCEACu;
    // 0x1cceac: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x1cceacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1cceb0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1cceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cceb4: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1cceb4u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cceb8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ccebc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1CCEBCu;
    {
        const bool branch_taken_0x1ccebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEBCu;
            // 0x1ccec0: 0x3c05b032  lui         $a1, 0xB032 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccebc) {
            ctx->pc = 0x1CCF30u;
            goto label_1ccf30;
        }
    }
    ctx->pc = 0x1CCEC4u;
    // 0x1ccec4: 0x0  nop
    ctx->pc = 0x1ccec4u;
    // NOP
label_1ccec8:
    // 0x1ccec8: 0x24110064  addiu       $s1, $zero, 0x64
    ctx->pc = 0x1ccec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ccecc: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1cceccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1cced0: 0xf1001a  div         $zero, $a3, $s1
    ctx->pc = 0x1cced0u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cced4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cced4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cced8: 0x3c02b011  lui         $v0, 0xB011
    ctx->pc = 0x1cced8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45073 << 16));
    // 0x1ccedc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ccedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ccee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccee4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ccee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccee8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ccee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cceec: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCEECu;
    {
        const bool branch_taken_0x1cceec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cceec) {
            ctx->pc = 0x1CCEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEECu;
            // 0x1ccef0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCEF4u;
            goto label_1ccef4;
        }
    }
    ctx->pc = 0x1CCEF4u;
label_1ccef4:
    // 0x1ccef4: 0x4012  mflo        $t0
    ctx->pc = 0x1ccef4u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1ccef8: 0x9810  mfhi        $s3
    ctx->pc = 0x1ccef8u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x1ccefc: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x1ccefcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1ccf00: 0x3108007f  andi        $t0, $t0, 0x7F
    ctx->pc = 0x1ccf00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
    // 0x1ccf04: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1ccf04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1ccf08: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x1ccf08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x1ccf0c: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CCF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF14u);
    ctx->pc = 0x1CCF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF0Cu;
            // 0x1ccf10: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF14u; }
        if (ctx->pc != 0x1CCF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF14u; }
        if (ctx->pc != 0x1CCF14u) { return; }
    }
    ctx->pc = 0x1CCF14u;
label_1ccf14:
    // 0x1ccf14: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CCF14u;
    {
        const bool branch_taken_0x1ccf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf14) {
            ctx->pc = 0x1CCF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF14u;
            // 0x1ccf18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCF1Cu;
    // 0x1ccf1c: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x1ccf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1ccf20: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1ccf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ccf24: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1ccf24u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ccf28: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1ccf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ccf2c: 0x3c05b012  lui         $a1, 0xB012
    ctx->pc = 0x1ccf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45074 << 16));
label_1ccf30:
    // 0x1ccf30: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCF30u;
    {
        const bool branch_taken_0x1ccf30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf30) {
            ctx->pc = 0x1CCF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF30u;
            // 0x1ccf34: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCF38u;
            goto label_1ccf38;
        }
    }
    ctx->pc = 0x1CCF38u;
label_1ccf38:
    // 0x1ccf38: 0x1012  mflo        $v0
    ctx->pc = 0x1ccf38u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ccf3c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1ccf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ccf40: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1ccf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1ccf44: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ccf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ccf48: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ccf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ccf4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCF4Cu;
    {
        const bool branch_taken_0x1ccf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF4Cu;
            // 0x1ccf50: 0x454021  addu        $t0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf4c) {
            ctx->pc = 0x1CCF5Cu;
            goto label_1ccf5c;
        }
    }
    ctx->pc = 0x1CCF54u;
    // 0x1ccf54: 0x0  nop
    ctx->pc = 0x1ccf54u;
    // NOP
label_1ccf58:
    // 0x1ccf58: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1ccf58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1ccf5c:
    // 0x1ccf5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ccf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccf64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ccf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ccf6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ccf70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ccf74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ccf78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccf78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ccf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccf80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ccf80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf84: 0x8072900  j           func_1CA400
    ctx->pc = 0x1CCF84u;
    ctx->pc = 0x1CCF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF84u;
            // 0x1ccf88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA400_0x1ca400(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CCF8Cu;
    // 0x1ccf8c: 0x0  nop
    ctx->pc = 0x1ccf8cu;
    // NOP
label_1ccf90:
    // 0x1ccf90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccf94:
    // 0x1ccf94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ccf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ccf9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ccfa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ccfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFA4u;
            // 0x1ccfa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCFACu;
    // 0x1ccfac: 0x0  nop
    ctx->pc = 0x1ccfacu;
    // NOP
}
