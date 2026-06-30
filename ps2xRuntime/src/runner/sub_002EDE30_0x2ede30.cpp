#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EDE30
// Address: 0x2ede30 - 0x2ee040
void sub_002EDE30_0x2ede30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDE30_0x2ede30");
#endif

    ctx->pc = 0x2ede30u;

    // 0x2ede30: 0x90880004  lbu         $t0, 0x4($a0)
    ctx->pc = 0x2ede30u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ede34: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ede34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ede38: 0x948b0000  lhu         $t3, 0x0($a0)
    ctx->pc = 0x2ede38u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ede3c: 0x24a51eb0  addiu       $a1, $a1, 0x1EB0
    ctx->pc = 0x2ede3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7856));
    // 0x2ede40: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x2ede40u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ede44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ede44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ede48: 0x90860005  lbu         $a2, 0x5($a0)
    ctx->pc = 0x2ede48u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2ede4c: 0x1004026  xor         $t0, $t0, $zero
    ctx->pc = 0x2ede4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 0));
    // 0x2ede50: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x2ede50u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ede54: 0x31642000  andi        $a0, $t3, 0x2000
    ctx->pc = 0x2ede54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8192);
    // 0x2ede58: 0x38892000  xori        $t1, $a0, 0x2000
    ctx->pc = 0x2ede58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)8192);
    // 0x2ede5c: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x2ede5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2ede60: 0x2d2a0001  sltiu       $t2, $t1, 0x1
    ctx->pc = 0x2ede60u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ede64: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2ede64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ede68: 0x31640004  andi        $a0, $t3, 0x4
    ctx->pc = 0x2ede68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4);
    // 0x2ede6c: 0x38870004  xori        $a3, $a0, 0x4
    ctx->pc = 0x2ede6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x2ede70: 0x31640002  andi        $a0, $t3, 0x2
    ctx->pc = 0x2ede70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2);
    // 0x2ede74: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x2ede74u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ede78: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x2ede78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x2ede7c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2ede7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ede80: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2ede80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ede84: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2ede84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2ede88: 0x10a3003c  beq         $a1, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2EDE88u;
    {
        const bool branch_taken_0x2ede88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EDE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE88u;
            // 0x2ede8c: 0x308700ff  andi        $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede88) {
            ctx->pc = 0x2EDF7Cu;
            goto label_2edf7c;
        }
    }
    ctx->pc = 0x2EDE90u;
    // 0x2ede90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ede90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ede94: 0x50a3001b  beql        $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EDE94u;
    {
        const bool branch_taken_0x2ede94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ede94) {
            ctx->pc = 0x2EDE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE94u;
            // 0x2ede98: 0x310900ff  andi        $t1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDF04u;
            goto label_2edf04;
        }
    }
    ctx->pc = 0x2EDE9Cu;
    // 0x2ede9c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDE9Cu;
    {
        const bool branch_taken_0x2ede9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede9c) {
            ctx->pc = 0x2EDEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE9Cu;
            // 0x2edea0: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDEACu;
            goto label_2edeac;
        }
    }
    ctx->pc = 0x2EDEA4u;
    // 0x2edea4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2EDEA4u;
    {
        const bool branch_taken_0x2edea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edea4) {
            ctx->pc = 0x2EE034u;
            goto label_2ee034;
        }
    }
    ctx->pc = 0x2EDEACu;
label_2edeac:
    // 0x2edeac: 0x18600061  blez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2EDEACu;
    {
        const bool branch_taken_0x2edeac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2edeac) {
            ctx->pc = 0x2EE034u;
            goto label_2ee034;
        }
    }
    ctx->pc = 0x2EDEB4u;
    // 0x2edeb4: 0x314600ff  andi        $a2, $t2, 0xFF
    ctx->pc = 0x2edeb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2edeb8: 0x2404035c  addiu       $a0, $zero, 0x35C
    ctx->pc = 0x2edeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2edebc: 0xc44818  mult        $t1, $a2, $a0
    ctx->pc = 0x2edebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2edec0: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x2edec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2edec4: 0x3c0800af  lui         $t0, 0xAF
    ctx->pc = 0x2edec4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)175 << 16));
    // 0x2edec8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2edec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2edecc: 0x25081630  addiu       $t0, $t0, 0x1630
    ctx->pc = 0x2edeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5680));
    // 0x2eded0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2eded0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2eded4: 0x240601ae  addiu       $a2, $zero, 0x1AE
    ctx->pc = 0x2eded4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2eded8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2eded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ededc: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x2ededcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2edee0: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x2edee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2edee4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2edee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2edee8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2edee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2edeec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2edeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2edef0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2edef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edef4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2edef4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2edef8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2edef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2edefc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2EDEFCu;
    {
        const bool branch_taken_0x2edefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDEFCu;
            // 0x2edf00: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edefc) {
            ctx->pc = 0x2EE034u;
            goto label_2ee034;
        }
    }
    ctx->pc = 0x2EDF04u;
label_2edf04:
    // 0x2edf04: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2edf04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2edf08: 0x314800ff  andi        $t0, $t2, 0xFF
    ctx->pc = 0x2edf08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2edf0c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2edf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2edf10: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x2edf10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2edf14: 0x24c614e8  addiu       $a2, $a2, 0x14E8
    ctx->pc = 0x2edf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5352));
    // 0x2edf18: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x2edf18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2edf1c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2edf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2edf20: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2edf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2edf24: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x2edf24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2edf28: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2edf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2edf2c: 0x18600041  blez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2EDF2Cu;
    {
        const bool branch_taken_0x2edf2c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EDF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDF2Cu;
            // 0x2edf30: 0xa4c40000  sh          $a0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf2c) {
            ctx->pc = 0x2EE034u;
            goto label_2ee034;
        }
    }
    ctx->pc = 0x2EDF34u;
    // 0x2edf34: 0x2404035c  addiu       $a0, $zero, 0x35C
    ctx->pc = 0x2edf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2edf38: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x2edf38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x2edf3c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x2edf3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2edf40: 0x240601ae  addiu       $a2, $zero, 0x1AE
    ctx->pc = 0x2edf40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2edf44: 0x24e71630  addiu       $a3, $a3, 0x1630
    ctx->pc = 0x2edf44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5680));
    // 0x2edf48: 0x71263018  mult1       $a2, $t1, $a2
    ctx->pc = 0x2edf48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2edf4c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2edf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2edf50: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2edf50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2edf54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2edf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2edf58: 0xe82821  addu        $a1, $a3, $t0
    ctx->pc = 0x2edf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2edf5c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2edf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2edf60: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2edf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2edf64: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2edf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2edf68: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2edf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edf6c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2edf6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2edf70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2edf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2edf74: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2EDF74u;
    {
        const bool branch_taken_0x2edf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDF74u;
            // 0x2edf78: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf74) {
            ctx->pc = 0x2EE034u;
            goto label_2ee034;
        }
    }
    ctx->pc = 0x2EDF7Cu;
label_2edf7c:
    // 0x2edf7c: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x2edf7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2edf80: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x2edf80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2edf84: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x2edf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2edf88: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2edf88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2edf8c: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x2edf8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2edf90: 0x24c614e8  addiu       $a2, $a2, 0x14E8
    ctx->pc = 0x2edf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5352));
    // 0x2edf94: 0xc85021  addu        $t2, $a2, $t0
    ctx->pc = 0x2edf94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2edf98: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2edf98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2edf9c: 0x1033021  addu        $a2, $t0, $v1
    ctx->pc = 0x2edf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2edfa0: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x2edfa0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2edfa4: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2edfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2edfa8: 0xca6021  addu        $t4, $a2, $t2
    ctx->pc = 0x2edfa8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2edfac: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2edfacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2edfb0: 0x858b0000  lh          $t3, 0x0($t4)
    ctx->pc = 0x2edfb0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2edfb4: 0x24c614f0  addiu       $a2, $a2, 0x14F0
    ctx->pc = 0x2edfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5360));
    // 0x2edfb8: 0xc85021  addu        $t2, $a2, $t0
    ctx->pc = 0x2edfb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2edfbc: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x2edfbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2edfc0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2edfc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2edfc4: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2edfc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2edfc8: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x2edfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2edfcc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2edfccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2edfd0: 0xa58b0000  sh          $t3, 0x0($t4)
    ctx->pc = 0x2edfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2edfd4: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x2edfd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2edfd8: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x2edfd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2edfdc: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x2edfdcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2edfe0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2edfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2edfe4: 0x18e00013  blez        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EDFE4u;
    {
        const bool branch_taken_0x2edfe4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2EDFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDFE4u;
            // 0x2edfe8: 0xa5060000  sh          $a2, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfe4) {
            ctx->pc = 0x2EE034u;
            goto label_2ee034;
        }
    }
    ctx->pc = 0x2EDFECu;
    // 0x2edfec: 0x2408035c  addiu       $t0, $zero, 0x35C
    ctx->pc = 0x2edfecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2edff0: 0xa93021  addu        $a2, $a1, $t1
    ctx->pc = 0x2edff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2edff4: 0x684018  mult        $t0, $v1, $t0
    ctx->pc = 0x2edff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2edff8: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x2edff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2edffc: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x2edffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x2ee000: 0x24e71630  addiu       $a3, $a3, 0x1630
    ctx->pc = 0x2ee000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5680));
    // 0x2ee004: 0x240301ae  addiu       $v1, $zero, 0x1AE
    ctx->pc = 0x2ee004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2ee008: 0x70832018  mult1       $a0, $a0, $v1
    ctx->pc = 0x2ee008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ee00c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ee00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ee010: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ee010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ee014: 0xe83021  addu        $a2, $a3, $t0
    ctx->pc = 0x2ee014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2ee018: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ee018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ee01c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2ee01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ee020: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ee020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee024: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2ee024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ee028: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2ee028u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee02c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ee02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ee030: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2ee030u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_2ee034:
    // 0x2ee034: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE03Cu;
    // 0x2ee03c: 0x0  nop
    ctx->pc = 0x2ee03cu;
    // NOP
}
