#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BE88
// Address: 0x18be88 - 0x18ee68
void sub_0018BE88_0x18be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BE88_0x18be88");
#endif

    switch (ctx->pc) {
        case 0x18c6e8u: goto label_18c6e8;
        case 0x18cbd0u: goto label_18cbd0;
        case 0x18ccc8u: goto label_18ccc8;
        case 0x18cdc0u: goto label_18cdc0;
        case 0x18ce78u: goto label_18ce78;
        case 0x18cea4u: goto label_18cea4;
        case 0x18da80u: goto label_18da80;
        case 0x18daa0u: goto label_18daa0;
        case 0x18e7e0u: goto label_18e7e0;
        case 0x18e7e8u: goto label_18e7e8;
        default: break;
    }

    ctx->pc = 0x18be88u;

    // 0x18be88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18be8c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x18be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x18be90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18be94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18be98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18be98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18be9c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18be9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x18bea0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18bea0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bea4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x18bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x18bea8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x18bea8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18beac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18beb0: 0x26b40180  addiu       $s4, $s5, 0x180
    ctx->pc = 0x18beb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    // 0x18beb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18beb8: 0x2c38824  and         $s1, $s6, $v1
    ctx->pc = 0x18beb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x18bebc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x18bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x18bec0: 0x2d12023  subu        $a0, $s6, $s1
    ctx->pc = 0x18bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x18bec4: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x18bec4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18bec8: 0x8e820438  lw          $v0, 0x438($s4)
    ctx->pc = 0x18bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1080)));
    // 0x18becc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18beccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bed0: 0xae820438  sw          $v0, 0x438($s4)
    ctx->pc = 0x18bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1080), GPR_U32(ctx, 2));
    // 0x18bed4: 0x82320000  lb          $s2, 0x0($s1)
    ctx->pc = 0x18bed4u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bed8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bedc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18bedcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bee4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x18bee4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18beec: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x18beecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bef4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18bef4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bef8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18befc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18befcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bf00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bf00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bf04: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x18bf04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x18bf08: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18bf08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18bf0c: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x18bf0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x18bf10: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18bf10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bf14: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18bf14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18bf18: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x18bf18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x18bf1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bf20: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18bf20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18bf24: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x18bf24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x18bf28: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18bf28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bf2c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18bf2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18bf30: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x18bf30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x18bf34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18bf34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18bf38: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x18bf38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x18bf3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bf3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bf40: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18bf40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18bf44: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18BF44u;
    {
        const bool branch_taken_0x18bf44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF44u;
            // 0x18bf48: 0x2729004  sllv        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 19) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf44) {
            ctx->pc = 0x18BF68u;
            goto label_18bf68;
        }
    }
    ctx->pc = 0x18BF4Cu;
    // 0x18bf4c: 0x131023  negu        $v0, $s3
    ctx->pc = 0x18bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x18bf50: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18bf54: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x18bf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18bf58: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18bf58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18bf5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18BF5Cu;
    {
        const bool branch_taken_0x18bf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF5Cu;
            // 0x18bf60: 0xae820034  sw          $v0, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf5c) {
            ctx->pc = 0x18BF70u;
            goto label_18bf70;
        }
    }
    ctx->pc = 0x18BF64u;
    // 0x18bf64: 0x0  nop
    ctx->pc = 0x18bf64u;
    // NOP
label_18bf68:
    // 0x18bf68: 0xae920034  sw          $s2, 0x34($s4)
    ctx->pc = 0x18bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 18));
    // 0x18bf6c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18bf6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18bf70:
    // 0x18bf70: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18bf70u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bf74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bf74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bf78: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18bf78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bf7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bf7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bf80: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18bf80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18bf84: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18bf84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bf88: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18bf88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18bf8c: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x18bf8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x18bf90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bf90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bf94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18bf94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18bf98: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x18bf98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bf9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bf9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bfa0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18bfa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18bfa4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18bfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18bfa8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18BFA8u;
    {
        const bool branch_taken_0x18bfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFA8u;
            // 0x18bfac: 0x2048025  or          $s0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfa8) {
            ctx->pc = 0x18C020u;
            goto label_18c020;
        }
    }
    ctx->pc = 0x18BFB0u;
    // 0x18bfb0: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x18bfb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x18bfb4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18BFB4u;
    {
        const bool branch_taken_0x18bfb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFB4u;
            // 0x18bfb8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfb4) {
            ctx->pc = 0x18BFD8u;
            goto label_18bfd8;
        }
    }
    ctx->pc = 0x18BFBCu;
    // 0x18bfbc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18bfc0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18bfc4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18bfc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18bfc8: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x18bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18bfcc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18bfccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18bfd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18BFD0u;
    {
        const bool branch_taken_0x18bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFD0u;
            // 0x18bfd4: 0xae830040  sw          $v1, 0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfd0) {
            ctx->pc = 0x18BFE4u;
            goto label_18bfe4;
        }
    }
    ctx->pc = 0x18BFD8u;
label_18bfd8:
    // 0x18bfd8: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x18bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18bfdc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18bfdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfe0: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x18bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_18bfe4:
    // 0x18bfe4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18bfe4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bfe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bfe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bfec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18bfecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bff0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18bff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18bff4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18bff4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18bff8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18bff8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bffc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18bffcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c000: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c004: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c008: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c008u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c00c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c00cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c010: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c014: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c014u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18C018u;
    {
        const bool branch_taken_0x18c018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C018u;
            // 0x18c01c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c018) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18C020u;
label_18c020:
    // 0x18c020: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x18c020u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18c024: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x18c024u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x18c028: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x18c028u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
    // 0x18c02c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18c02cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18c030:
    // 0x18c030: 0x8e830308  lw          $v1, 0x308($s4)
    ctx->pc = 0x18c030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
    // 0x18c034: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C034u;
    {
        const bool branch_taken_0x18c034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C034u;
            // 0x18c038: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c034) {
            ctx->pc = 0x18C044u;
            goto label_18c044;
        }
    }
    ctx->pc = 0x18C03Cu;
    // 0x18c03c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C03Cu;
    {
        const bool branch_taken_0x18c03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c03c) {
            ctx->pc = 0x18C040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C03Cu;
            // 0x18c040: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C060u;
            goto label_18c060;
        }
    }
    ctx->pc = 0x18C044u;
label_18c044:
    // 0x18c044: 0x8e82030c  lw          $v0, 0x30C($s4)
    ctx->pc = 0x18c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 780)));
    // 0x18c048: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C048u;
    {
        const bool branch_taken_0x18c048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C048u;
            // 0x18c04c: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c048) {
            ctx->pc = 0x18C06Cu;
            goto label_18c06c;
        }
    }
    ctx->pc = 0x18C050u;
    // 0x18c050: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18C050u;
    {
        const bool branch_taken_0x18c050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18c050) {
            ctx->pc = 0x18C054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C050u;
            // 0x18c054: 0x8e840420  lw          $a0, 0x420($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1056)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C070u;
            goto label_18c070;
        }
    }
    ctx->pc = 0x18C058u;
    // 0x18c058: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C058u;
    {
        const bool branch_taken_0x18c058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C058u;
            // 0x18c05c: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c058) {
            ctx->pc = 0x18C064u;
            goto label_18c064;
        }
    }
    ctx->pc = 0x18C060u;
label_18c060:
    // 0x18c060: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x18c060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_18c064:
    // 0x18c064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c068: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x18c068u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
label_18c06c:
    // 0x18c06c: 0x8e840420  lw          $a0, 0x420($s4)
    ctx->pc = 0x18c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1056)));
label_18c070:
    // 0x18c070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c074: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18C074u;
    {
        const bool branch_taken_0x18c074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C074u;
            // 0x18c078: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c074) {
            ctx->pc = 0x18C094u;
            goto label_18c094;
        }
    }
    ctx->pc = 0x18C07Cu;
    // 0x18c07c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18c07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18c080: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x18C080u;
    {
        const bool branch_taken_0x18c080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c080) {
            ctx->pc = 0x18C084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C080u;
            // 0x18c084: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C0D4u;
            goto label_18c0d4;
        }
    }
    ctx->pc = 0x18C088u;
    // 0x18c088: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c08c: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18C08Cu;
    {
        const bool branch_taken_0x18c08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c08c) {
            ctx->pc = 0x18C090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C08Cu;
            // 0x18c090: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C0D4u;
            goto label_18c0d4;
        }
    }
    ctx->pc = 0x18C094u;
label_18c094:
    // 0x18c094: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18c098: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18C098u;
    {
        const bool branch_taken_0x18c098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c098) {
            ctx->pc = 0x18C09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C098u;
            // 0x18c09c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C0E0u;
            goto label_18c0e0;
        }
    }
    ctx->pc = 0x18C0A0u;
    // 0x18c0a0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18C0A0u;
    {
        const bool branch_taken_0x18c0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0A0u;
            // 0x18c0a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0a0) {
            ctx->pc = 0x18C0D0u;
            goto label_18c0d0;
        }
    }
    ctx->pc = 0x18C0A8u;
    // 0x18c0a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C0A8u;
    {
        const bool branch_taken_0x18c0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0A8u;
            // 0x18c0ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0a8) {
            ctx->pc = 0x18C0D0u;
            goto label_18c0d0;
        }
    }
    ctx->pc = 0x18C0B0u;
    // 0x18c0b0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18C0B0u;
    {
        const bool branch_taken_0x18c0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0B0u;
            // 0x18c0b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0b0) {
            ctx->pc = 0x18C0D0u;
            goto label_18c0d0;
        }
    }
    ctx->pc = 0x18C0B8u;
    // 0x18c0b8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C0B8u;
    {
        const bool branch_taken_0x18c0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0B8u;
            // 0x18c0bc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0b8) {
            ctx->pc = 0x18C0D0u;
            goto label_18c0d0;
        }
    }
    ctx->pc = 0x18C0C0u;
    // 0x18c0c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C0C0u;
    {
        const bool branch_taken_0x18c0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0C0u;
            // 0x18c0c4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0c0) {
            ctx->pc = 0x18C0D0u;
            goto label_18c0d0;
        }
    }
    ctx->pc = 0x18C0C8u;
    // 0x18c0c8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C0C8u;
    {
        const bool branch_taken_0x18c0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c0c8) {
            ctx->pc = 0x18C0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0C8u;
            // 0x18c0cc: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C0E0u;
            goto label_18c0e0;
        }
    }
    ctx->pc = 0x18C0D0u;
label_18c0d0:
    // 0x18c0d0: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x18c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_18c0d4:
    // 0x18c0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c0d8: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x18c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
    // 0x18c0dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18c0e0:
    // 0x18c0e0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x18c0e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x18c0e4: 0x50400b49  beql        $v0, $zero, . + 4 + (0xB49 << 2)
    ctx->pc = 0x18C0E4u;
    {
        const bool branch_taken_0x18c0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c0e4) {
            ctx->pc = 0x18C0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0E4u;
            // 0x18c0e8: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18EE0Cu;
            goto label_18ee0c;
        }
    }
    ctx->pc = 0x18C0ECu;
    // 0x18c0ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c0f0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x18c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x18c0f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c0f8: 0x8c638220  lw          $v1, -0x7DE0($v1)
    ctx->pc = 0x18c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935072)));
    // 0x18c0fc: 0x600008  jr          $v1
    ctx->pc = 0x18C0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C108u: goto label_18c108;
            case 0x18C718u: goto label_18c718;
            case 0x18CB30u: goto label_18cb30;
            case 0x18CEB0u: goto label_18ceb0;
            case 0x18D3D0u: goto label_18d3d0;
            case 0x18DA78u: goto label_18da78;
            case 0x18DCE0u: goto label_18dce0;
            case 0x18E800u: goto label_18e800;
            case 0x18EC18u: goto label_18ec18;
            case 0x18EE08u: goto label_18ee08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C104u;
    // 0x18c104: 0x0  nop
    ctx->pc = 0x18c104u;
    // NOP
label_18c108:
    // 0x18c108: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x18c108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x18c10c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18C10Cu;
    {
        const bool branch_taken_0x18c10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C10Cu;
            // 0x18c110: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c10c) {
            ctx->pc = 0x18C188u;
            goto label_18c188;
        }
    }
    ctx->pc = 0x18C114u;
    // 0x18c114: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x18c114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x18c118: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C118u;
    {
        const bool branch_taken_0x18c118 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C118u;
            // 0x18c11c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c118) {
            ctx->pc = 0x18C140u;
            goto label_18c140;
        }
    }
    ctx->pc = 0x18C120u;
    // 0x18c120: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c124: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c128: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c128u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c12c: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x18c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c130: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c130u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c134: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18C134u;
    {
        const bool branch_taken_0x18c134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C134u;
            // 0x18c138: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c134) {
            ctx->pc = 0x18C14Cu;
            goto label_18c14c;
        }
    }
    ctx->pc = 0x18C13Cu;
    // 0x18c13c: 0x0  nop
    ctx->pc = 0x18c13cu;
    // NOP
label_18c140:
    // 0x18c140: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x18c140u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c144: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c148: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x18c148u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_18c14c:
    // 0x18c14c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c14cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c154: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c154u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c158: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c15c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c15cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c160: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c160u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c164: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c168: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c16c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c16cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c170: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c174: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c174u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c178: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c17c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c17cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c180: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C180u;
    {
        const bool branch_taken_0x18c180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C180u;
            // 0x18c184: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c180) {
            ctx->pc = 0x18C194u;
            goto label_18c194;
        }
    }
    ctx->pc = 0x18C188u;
label_18c188:
    // 0x18c188: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x18c188u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x18c18c: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x18c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x18c190: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18c190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18c194:
    // 0x18c194: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18c194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18c198: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C198u;
    {
        const bool branch_taken_0x18c198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C198u;
            // 0x18c19c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c198) {
            ctx->pc = 0x18C210u;
            goto label_18c210;
        }
    }
    ctx->pc = 0x18C1A0u;
    // 0x18c1a0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18c1a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18c1a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C1A4u;
    {
        const bool branch_taken_0x18c1a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C1A4u;
            // 0x18c1a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1a4) {
            ctx->pc = 0x18C1C8u;
            goto label_18c1c8;
        }
    }
    ctx->pc = 0x18C1ACu;
    // 0x18c1ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c1b0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c1b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c1b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c1b8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18c1bc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c1c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C1C0u;
    {
        const bool branch_taken_0x18c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C1C0u;
            // 0x18c1c4: 0xae830048  sw          $v1, 0x48($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1c0) {
            ctx->pc = 0x18C1D4u;
            goto label_18c1d4;
        }
    }
    ctx->pc = 0x18C1C8u;
label_18c1c8:
    // 0x18c1c8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18c1cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c1d0: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x18c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
label_18c1d4:
    // 0x18c1d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c1d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c1d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c1dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c1dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c1e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c1e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c1e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c1e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c1ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c1ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c1f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c1f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c1f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c1f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c1fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c1fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c200: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c204: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c204u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C208u;
    {
        const bool branch_taken_0x18c208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C208u;
            // 0x18c20c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c208) {
            ctx->pc = 0x18C21Cu;
            goto label_18c21c;
        }
    }
    ctx->pc = 0x18C210u;
label_18c210:
    // 0x18c210: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18c210u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18c214: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x18c214u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
    // 0x18c218: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18c218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18c21c:
    // 0x18c21c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x18c21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18c220: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C220u;
    {
        const bool branch_taken_0x18c220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C220u;
            // 0x18c224: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c220) {
            ctx->pc = 0x18C298u;
            goto label_18c298;
        }
    }
    ctx->pc = 0x18C228u;
    // 0x18c228: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x18c228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x18c22c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C22Cu;
    {
        const bool branch_taken_0x18c22c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C22Cu;
            // 0x18c230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c22c) {
            ctx->pc = 0x18C250u;
            goto label_18c250;
        }
    }
    ctx->pc = 0x18C234u;
    // 0x18c234: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c234u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c238: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c238u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c23c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c23cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c240: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x18c240u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18c244: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c244u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c248: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C248u;
    {
        const bool branch_taken_0x18c248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C248u;
            // 0x18c24c: 0xae83004c  sw          $v1, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c248) {
            ctx->pc = 0x18C25Cu;
            goto label_18c25c;
        }
    }
    ctx->pc = 0x18C250u;
label_18c250:
    // 0x18c250: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18c250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18c254: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c258: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x18c258u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_18c25c:
    // 0x18c25c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c25cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c260: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c264: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c264u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c26c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c26cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c270: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c274: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c27c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c27cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c280: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c284: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c284u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c288: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c28c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c28cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c290: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C290u;
    {
        const bool branch_taken_0x18c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C290u;
            // 0x18c294: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c290) {
            ctx->pc = 0x18C2A4u;
            goto label_18c2a4;
        }
    }
    ctx->pc = 0x18C298u;
label_18c298:
    // 0x18c298: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x18c298u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18c29c: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x18c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
    // 0x18c2a0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18c2a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18c2a4:
    // 0x18c2a4: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x18c2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18c2a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C2A8u;
    {
        const bool branch_taken_0x18c2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C2A8u;
            // 0x18c2ac: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2a8) {
            ctx->pc = 0x18C320u;
            goto label_18c320;
        }
    }
    ctx->pc = 0x18C2B0u;
    // 0x18c2b0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x18c2b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x18c2b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C2B4u;
    {
        const bool branch_taken_0x18c2b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C2B4u;
            // 0x18c2b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2b4) {
            ctx->pc = 0x18C2D8u;
            goto label_18c2d8;
        }
    }
    ctx->pc = 0x18C2BCu;
    // 0x18c2bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c2c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c2c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c2c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c2c8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x18c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18c2cc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c2ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c2d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C2D0u;
    {
        const bool branch_taken_0x18c2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C2D0u;
            // 0x18c2d4: 0xae830050  sw          $v1, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2d0) {
            ctx->pc = 0x18C2E4u;
            goto label_18c2e4;
        }
    }
    ctx->pc = 0x18C2D8u;
label_18c2d8:
    // 0x18c2d8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18c2dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2e0: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x18c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_18c2e4:
    // 0x18c2e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c2e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c2e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c2ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c2ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c2f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c2f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c2f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c2f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c2fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c2fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c304: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c304u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c308: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c308u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c30c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c30cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c314: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c318: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C318u;
    {
        const bool branch_taken_0x18c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C318u;
            // 0x18c31c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c318) {
            ctx->pc = 0x18C32Cu;
            goto label_18c32c;
        }
    }
    ctx->pc = 0x18C320u;
label_18c320:
    // 0x18c320: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x18c320u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18c324: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x18c324u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x18c328: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18c328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18c32c:
    // 0x18c32c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x18c32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18c330: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C330u;
    {
        const bool branch_taken_0x18c330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C330u;
            // 0x18c334: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c330) {
            ctx->pc = 0x18C3A8u;
            goto label_18c3a8;
        }
    }
    ctx->pc = 0x18C338u;
    // 0x18c338: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x18c338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x18c33c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C33Cu;
    {
        const bool branch_taken_0x18c33c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C33Cu;
            // 0x18c340: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c33c) {
            ctx->pc = 0x18C360u;
            goto label_18c360;
        }
    }
    ctx->pc = 0x18C344u;
    // 0x18c344: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c348: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c34c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c34cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c350: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x18c350u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18c354: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c354u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c358: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C358u;
    {
        const bool branch_taken_0x18c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C358u;
            // 0x18c35c: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c358) {
            ctx->pc = 0x18C36Cu;
            goto label_18c36c;
        }
    }
    ctx->pc = 0x18C360u;
label_18c360:
    // 0x18c360: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18c360u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18c364: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c368: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x18c368u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_18c36c:
    // 0x18c36c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c36cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c370: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c374: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c374u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c378: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c37c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c37cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c380: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c380u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c384: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c38c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c38cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c390: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c390u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c394: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c394u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c398: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c39c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c39cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c3a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C3A0u;
    {
        const bool branch_taken_0x18c3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3A0u;
            // 0x18c3a4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3a0) {
            ctx->pc = 0x18C3B4u;
            goto label_18c3b4;
        }
    }
    ctx->pc = 0x18C3A8u;
label_18c3a8:
    // 0x18c3a8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x18c3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18c3ac: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x18c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x18c3b0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18c3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18c3b4:
    // 0x18c3b4: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x18c3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x18c3b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C3B8u;
    {
        const bool branch_taken_0x18c3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3B8u;
            // 0x18c3bc: 0x121502  srl         $v0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3b8) {
            ctx->pc = 0x18C430u;
            goto label_18c430;
        }
    }
    ctx->pc = 0x18C3C0u;
    // 0x18c3c0: 0x2673ffec  addiu       $s3, $s3, -0x14
    ctx->pc = 0x18c3c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
    // 0x18c3c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C3C4u;
    {
        const bool branch_taken_0x18c3c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3C4u;
            // 0x18c3c8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3c4) {
            ctx->pc = 0x18C3E8u;
            goto label_18c3e8;
        }
    }
    ctx->pc = 0x18C3CCu;
    // 0x18c3cc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c3d0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c3d4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c3d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c3d8: 0x121d02  srl         $v1, $s2, 20
    ctx->pc = 0x18c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    // 0x18c3dc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c3e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C3E0u;
    {
        const bool branch_taken_0x18c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3E0u;
            // 0x18c3e4: 0xae830058  sw          $v1, 0x58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3e0) {
            ctx->pc = 0x18C3F4u;
            goto label_18c3f4;
        }
    }
    ctx->pc = 0x18C3E8u;
label_18c3e8:
    // 0x18c3e8: 0x121502  srl         $v0, $s2, 20
    ctx->pc = 0x18c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    // 0x18c3ec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3f0: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x18c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
label_18c3f4:
    // 0x18c3f4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c3f4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c3f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c3fc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c3fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c400: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c404: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c404u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c408: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c408u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c40c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c40cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c410: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c414: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c414u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c418: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c418u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c41c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c41cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c420: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c424: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c424u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c428: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C428u;
    {
        const bool branch_taken_0x18c428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C428u;
            // 0x18c42c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c428) {
            ctx->pc = 0x18C43Cu;
            goto label_18c43c;
        }
    }
    ctx->pc = 0x18C430u;
label_18c430:
    // 0x18c430: 0x129300  sll         $s2, $s2, 12
    ctx->pc = 0x18c430u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 12));
    // 0x18c434: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x18c434u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    // 0x18c438: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x18c438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_18c43c:
    // 0x18c43c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18c43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18c440: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C440u;
    {
        const bool branch_taken_0x18c440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C440u;
            // 0x18c444: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c440) {
            ctx->pc = 0x18C4B8u;
            goto label_18c4b8;
        }
    }
    ctx->pc = 0x18C448u;
    // 0x18c448: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18c448u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18c44c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C44Cu;
    {
        const bool branch_taken_0x18c44c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C44Cu;
            // 0x18c450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c44c) {
            ctx->pc = 0x18C470u;
            goto label_18c470;
        }
    }
    ctx->pc = 0x18C454u;
    // 0x18c454: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c458: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c458u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c45c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c45cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c460: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18c460u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18c464: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c464u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C468u;
    {
        const bool branch_taken_0x18c468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C468u;
            // 0x18c46c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c468) {
            ctx->pc = 0x18C47Cu;
            goto label_18c47c;
        }
    }
    ctx->pc = 0x18C470u;
label_18c470:
    // 0x18c470: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18c470u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18c474: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c478: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18c478u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18c47c:
    // 0x18c47c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c47cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c484: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c488: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c48c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c48cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c490: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c490u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c494: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c49c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c49cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c4a0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c4a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c4a4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c4a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c4a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c4ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c4acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c4b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C4B0u;
    {
        const bool branch_taken_0x18c4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4B0u;
            // 0x18c4b4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4b0) {
            ctx->pc = 0x18C4C4u;
            goto label_18c4c4;
        }
    }
    ctx->pc = 0x18C4B8u;
label_18c4b8:
    // 0x18c4b8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18c4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18c4bc: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18c4c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18c4c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18c4c4:
    // 0x18c4c4: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x18c4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x18c4c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C4C8u;
    {
        const bool branch_taken_0x18c4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4C8u;
            // 0x18c4cc: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4c8) {
            ctx->pc = 0x18C540u;
            goto label_18c540;
        }
    }
    ctx->pc = 0x18C4D0u;
    // 0x18c4d0: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x18c4d4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C4D4u;
    {
        const bool branch_taken_0x18c4d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4D4u;
            // 0x18c4d8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4d4) {
            ctx->pc = 0x18C4F8u;
            goto label_18c4f8;
        }
    }
    ctx->pc = 0x18C4DCu;
    // 0x18c4dc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c4e0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c4e4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c4e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c4e8: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x18c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c4ec: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c4ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c4f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C4F0u;
    {
        const bool branch_taken_0x18c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4F0u;
            // 0x18c4f4: 0xae83005c  sw          $v1, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4f0) {
            ctx->pc = 0x18C504u;
            goto label_18c504;
        }
    }
    ctx->pc = 0x18C4F8u;
label_18c4f8:
    // 0x18c4f8: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x18c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c4fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c500: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x18c500u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
label_18c504:
    // 0x18c504: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c504u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c508: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c50c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c50cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c510: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c514: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c514u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c518: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c51c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c51cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c520: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c524: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c524u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c528: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c528u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c52c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c52cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c530: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c534: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c534u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c538: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C538u;
    {
        const bool branch_taken_0x18c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C538u;
            // 0x18c53c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c538) {
            ctx->pc = 0x18C54Cu;
            goto label_18c54c;
        }
    }
    ctx->pc = 0x18C540u;
label_18c540:
    // 0x18c540: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x18c540u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x18c544: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x18c544u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x18c548: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18c548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18c54c:
    // 0x18c54c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18c54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18c550: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C550u;
    {
        const bool branch_taken_0x18c550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C550u;
            // 0x18c554: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c550) {
            ctx->pc = 0x18C5C8u;
            goto label_18c5c8;
        }
    }
    ctx->pc = 0x18C558u;
    // 0x18c558: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18c558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18c55c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C55Cu;
    {
        const bool branch_taken_0x18c55c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C55Cu;
            // 0x18c560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c55c) {
            ctx->pc = 0x18C580u;
            goto label_18c580;
        }
    }
    ctx->pc = 0x18C564u;
    // 0x18c564: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c568: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c568u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c56c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c56cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c570: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18c570u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18c574: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c574u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c578: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C578u;
    {
        const bool branch_taken_0x18c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C578u;
            // 0x18c57c: 0xae830060  sw          $v1, 0x60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c578) {
            ctx->pc = 0x18C58Cu;
            goto label_18c58c;
        }
    }
    ctx->pc = 0x18C580u;
label_18c580:
    // 0x18c580: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18c580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18c584: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c588: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x18c588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_18c58c:
    // 0x18c58c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c58cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c590: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c594: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c594u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c598: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c59c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c59cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c5a0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c5a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c5a4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c5a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c5a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c5ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c5acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c5b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c5b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c5b4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c5b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c5b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c5bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c5c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C5C0u;
    {
        const bool branch_taken_0x18c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5C0u;
            // 0x18c5c4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5c0) {
            ctx->pc = 0x18C5D4u;
            goto label_18c5d4;
        }
    }
    ctx->pc = 0x18C5C8u;
label_18c5c8:
    // 0x18c5c8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18c5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18c5cc: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x18c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
    // 0x18c5d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18c5d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18c5d4:
    // 0x18c5d4: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x18c5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18c5d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C5D8u;
    {
        const bool branch_taken_0x18c5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5D8u;
            // 0x18c5dc: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5d8) {
            ctx->pc = 0x18C650u;
            goto label_18c650;
        }
    }
    ctx->pc = 0x18C5E0u;
    // 0x18c5e0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x18c5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x18c5e4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C5E4u;
    {
        const bool branch_taken_0x18c5e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5E4u;
            // 0x18c5e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5e4) {
            ctx->pc = 0x18C608u;
            goto label_18c608;
        }
    }
    ctx->pc = 0x18C5ECu;
    // 0x18c5ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c5f0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c5f4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c5f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c5f8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x18c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18c5fc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C600u;
    {
        const bool branch_taken_0x18c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C600u;
            // 0x18c604: 0xae830064  sw          $v1, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c600) {
            ctx->pc = 0x18C614u;
            goto label_18c614;
        }
    }
    ctx->pc = 0x18C608u;
label_18c608:
    // 0x18c608: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18c608u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18c60c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c610: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x18c610u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_18c614:
    // 0x18c614: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c614u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c618: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c61c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c61cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c620: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c624: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c624u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c628: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c628u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c62c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c62cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c630: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c634: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c634u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c638: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c63c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c63cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c640: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c644: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c644u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c648: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C648u;
    {
        const bool branch_taken_0x18c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C648u;
            // 0x18c64c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c648) {
            ctx->pc = 0x18C65Cu;
            goto label_18c65c;
        }
    }
    ctx->pc = 0x18C650u;
label_18c650:
    // 0x18c650: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x18c650u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18c654: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x18c654u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
    // 0x18c658: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18c658u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18c65c:
    // 0x18c65c: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x18c65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x18c660: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18C660u;
    {
        const bool branch_taken_0x18c660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C660u;
            // 0x18c664: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c660) {
            ctx->pc = 0x18C6A0u;
            goto label_18c6a0;
        }
    }
    ctx->pc = 0x18C668u;
    // 0x18c668: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x18c668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x18c66c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C66Cu;
    {
        const bool branch_taken_0x18c66c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C66Cu;
            // 0x18c670: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c66c) {
            ctx->pc = 0x18C690u;
            goto label_18c690;
        }
    }
    ctx->pc = 0x18C674u;
    // 0x18c674: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c678: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c678u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c67c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c67cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c680: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x18c680u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18c684: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C684u;
    {
        const bool branch_taken_0x18c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C684u;
            // 0x18c688: 0xae830068  sw          $v1, 0x68($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c684) {
            ctx->pc = 0x18C698u;
            goto label_18c698;
        }
    }
    ctx->pc = 0x18C68Cu;
    // 0x18c68c: 0x0  nop
    ctx->pc = 0x18c68cu;
    // NOP
label_18c690:
    // 0x18c690: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x18c690u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18c694: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x18c694u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_18c698:
    // 0x18c698: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C698u;
    {
        const bool branch_taken_0x18c698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C698u;
            // 0x18c69c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c698) {
            ctx->pc = 0x18C6A8u;
            goto label_18c6a8;
        }
    }
    ctx->pc = 0x18C6A0u;
label_18c6a0:
    // 0x18c6a0: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x18c6a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x18c6a4: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x18c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_18c6a8:
    // 0x18c6a8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x18c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x18c6ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c6b0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18C6B0u;
    {
        const bool branch_taken_0x18c6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x18C6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6B0u;
            // 0x18c6b4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6b0) {
            ctx->pc = 0x18C6D0u;
            goto label_18c6d0;
        }
    }
    ctx->pc = 0x18C6B8u;
    // 0x18c6b8: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x18c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
    // 0x18c6bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c6c0: 0xae84004c  sw          $a0, 0x4C($s4)
    ctx->pc = 0x18c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 4));
    // 0x18c6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c6c8: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x18c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
    // 0x18c6cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18c6d0:
    // 0x18c6d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18c6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6d4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x18c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x18c6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c6dc: 0x8c4281e0  lw          $v0, -0x7E20($v0)
    ctx->pc = 0x18c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935008)));
    // 0x18c6e0: 0xc062c12  jal         func_18B048
    ctx->pc = 0x18C6E0u;
    SET_GPR_U32(ctx, 31, 0x18C6E8u);
    ctx->pc = 0x18C6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6E0u;
            // 0x18c6e4: 0xae820318  sw          $v0, 0x318($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B048u;
    if (runtime->hasFunction(0x18B048u)) {
        auto targetFn = runtime->lookupFunction(0x18B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C6E8u; }
        if (ctx->pc != 0x18C6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B048_0x18b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C6E8u; }
        if (ctx->pc != 0x18C6E8u) { return; }
    }
    ctx->pc = 0x18C6E8u;
label_18c6e8:
    // 0x18c6e8: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x18c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x18c6ec: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x18c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x18c6f0: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x18c6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x18c6f4: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x18c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x18c6f8: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x18c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x18c6fc: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x18c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x18c700: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18c700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18c704: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18c704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18c708: 0xae8202d4  sw          $v0, 0x2D4($s4)
    ctx->pc = 0x18c708u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 724), GPR_U32(ctx, 2));
    // 0x18c70c: 0x100009c1  b           . + 4 + (0x9C1 << 2)
    ctx->pc = 0x18C70Cu;
    {
        const bool branch_taken_0x18c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C70Cu;
            // 0x18c710: 0xae8302d8  sw          $v1, 0x2D8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c70c) {
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18C714u;
    // 0x18c714: 0x0  nop
    ctx->pc = 0x18c714u;
    // NOP
label_18c718:
    // 0x18c718: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x18c718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x18c71c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18C71Cu;
    {
        const bool branch_taken_0x18c71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C71Cu;
            // 0x18c720: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c71c) {
            ctx->pc = 0x18C798u;
            goto label_18c798;
        }
    }
    ctx->pc = 0x18C724u;
    // 0x18c724: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x18c724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x18c728: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C728u;
    {
        const bool branch_taken_0x18c728 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C728u;
            // 0x18c72c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c728) {
            ctx->pc = 0x18C750u;
            goto label_18c750;
        }
    }
    ctx->pc = 0x18C730u;
    // 0x18c730: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c734: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c734u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c738: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c738u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c73c: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x18c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x18c740: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c740u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c744: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18C744u;
    {
        const bool branch_taken_0x18c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C744u;
            // 0x18c748: 0xae83006c  sw          $v1, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c744) {
            ctx->pc = 0x18C75Cu;
            goto label_18c75c;
        }
    }
    ctx->pc = 0x18C74Cu;
    // 0x18c74c: 0x0  nop
    ctx->pc = 0x18c74cu;
    // NOP
label_18c750:
    // 0x18c750: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x18c750u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x18c754: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c758: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x18c758u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
label_18c75c:
    // 0x18c75c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c75cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c760: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c764: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c764u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c76c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c76cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c770: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c770u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c774: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c778: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c77c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c77cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c780: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c784: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c784u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c78c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c78cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C790u;
    {
        const bool branch_taken_0x18c790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C790u;
            // 0x18c794: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c790) {
            ctx->pc = 0x18C7A4u;
            goto label_18c7a4;
        }
    }
    ctx->pc = 0x18C798u;
label_18c798:
    // 0x18c798: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x18c798u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x18c79c: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x18c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
    // 0x18c7a0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x18c7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_18c7a4:
    // 0x18c7a4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18c7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18c7a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C7A8u;
    {
        const bool branch_taken_0x18c7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7A8u;
            // 0x18c7ac: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7a8) {
            ctx->pc = 0x18C820u;
            goto label_18c820;
        }
    }
    ctx->pc = 0x18C7B0u;
    // 0x18c7b0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18c7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18c7b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C7B4u;
    {
        const bool branch_taken_0x18c7b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7B4u;
            // 0x18c7b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7b4) {
            ctx->pc = 0x18C7D8u;
            goto label_18c7d8;
        }
    }
    ctx->pc = 0x18C7BCu;
    // 0x18c7bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c7c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c7c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c7c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c7c8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18c7cc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c7ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c7d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C7D0u;
    {
        const bool branch_taken_0x18c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7D0u;
            // 0x18c7d4: 0xae830070  sw          $v1, 0x70($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7d0) {
            ctx->pc = 0x18C7E4u;
            goto label_18c7e4;
        }
    }
    ctx->pc = 0x18C7D8u;
label_18c7d8:
    // 0x18c7d8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18c7dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7e0: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x18c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
label_18c7e4:
    // 0x18c7e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c7e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c7e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c7ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c7ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c7f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c7f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c7f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c7f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c7fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c7fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c804: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c804u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c808: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c80c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c80cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c814: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c814u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C818u;
    {
        const bool branch_taken_0x18c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C818u;
            // 0x18c81c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c818) {
            ctx->pc = 0x18C82Cu;
            goto label_18c82c;
        }
    }
    ctx->pc = 0x18C820u;
label_18c820:
    // 0x18c820: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18c820u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18c824: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x18c824u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
    // 0x18c828: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18c828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18c82c:
    // 0x18c82c: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x18c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x18c830: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x18C830u;
    {
        const bool branch_taken_0x18c830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C830u;
            // 0x18c834: 0x2a620018  slti        $v0, $s3, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c830) {
            ctx->pc = 0x18C9CCu;
            goto label_18c9cc;
        }
    }
    ctx->pc = 0x18C838u;
    // 0x18c838: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C838u;
    {
        const bool branch_taken_0x18c838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C838u;
            // 0x18c83c: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c838) {
            ctx->pc = 0x18C8B0u;
            goto label_18c8b0;
        }
    }
    ctx->pc = 0x18C840u;
    // 0x18c840: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x18c840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x18c844: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C844u;
    {
        const bool branch_taken_0x18c844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C844u;
            // 0x18c848: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c844) {
            ctx->pc = 0x18C868u;
            goto label_18c868;
        }
    }
    ctx->pc = 0x18C84Cu;
    // 0x18c84c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c850: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c850u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c854: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c854u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c858: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x18c858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c85c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c85cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C860u;
    {
        const bool branch_taken_0x18c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C860u;
            // 0x18c864: 0xae830074  sw          $v1, 0x74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c860) {
            ctx->pc = 0x18C874u;
            goto label_18c874;
        }
    }
    ctx->pc = 0x18C868u;
label_18c868:
    // 0x18c868: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x18c868u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c86c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c870: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x18c870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
label_18c874:
    // 0x18c874: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c874u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c87c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c87cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c880: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c884: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c884u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c888: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c888u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c88c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c88cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c890: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c894: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c894u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c898: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c898u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c89c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c89cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c8a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c8a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c8a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C8A8u;
    {
        const bool branch_taken_0x18c8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8A8u;
            // 0x18c8ac: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8a8) {
            ctx->pc = 0x18C8BCu;
            goto label_18c8bc;
        }
    }
    ctx->pc = 0x18C8B0u;
label_18c8b0:
    // 0x18c8b0: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x18c8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x18c8b4: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x18c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
    // 0x18c8b8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18c8b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18c8bc:
    // 0x18c8bc: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x18c8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x18c8c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C8C0u;
    {
        const bool branch_taken_0x18c8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8C0u;
            // 0x18c8c4: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8c0) {
            ctx->pc = 0x18C938u;
            goto label_18c938;
        }
    }
    ctx->pc = 0x18C8C8u;
    // 0x18c8c8: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x18c8c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x18c8cc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C8CCu;
    {
        const bool branch_taken_0x18c8cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8CCu;
            // 0x18c8d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8cc) {
            ctx->pc = 0x18C8F0u;
            goto label_18c8f0;
        }
    }
    ctx->pc = 0x18C8D4u;
    // 0x18c8d4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c8d8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c8dc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c8dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c8e0: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x18c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c8e4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c8e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C8E8u;
    {
        const bool branch_taken_0x18c8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8E8u;
            // 0x18c8ec: 0xae830078  sw          $v1, 0x78($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8e8) {
            ctx->pc = 0x18C8FCu;
            goto label_18c8fc;
        }
    }
    ctx->pc = 0x18C8F0u;
label_18c8f0:
    // 0x18c8f0: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x18c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c8f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8f8: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x18c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
label_18c8fc:
    // 0x18c8fc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c8fcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c900: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c904: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c90c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c90cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c910: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c910u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c914: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c914u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c918: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c91c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c91cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c920: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c920u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c924: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c924u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c928: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c92c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c92cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c930: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C930u;
    {
        const bool branch_taken_0x18c930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C930u;
            // 0x18c934: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c930) {
            ctx->pc = 0x18C944u;
            goto label_18c944;
        }
    }
    ctx->pc = 0x18C938u;
label_18c938:
    // 0x18c938: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x18c938u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x18c93c: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x18c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
    // 0x18c940: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18c940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18c944:
    // 0x18c944: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x18c944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x18c948: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C948u;
    {
        const bool branch_taken_0x18c948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C948u;
            // 0x18c94c: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c948) {
            ctx->pc = 0x18C9C0u;
            goto label_18c9c0;
        }
    }
    ctx->pc = 0x18C950u;
    // 0x18c950: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x18c950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x18c954: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C954u;
    {
        const bool branch_taken_0x18c954 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C954u;
            // 0x18c958: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c954) {
            ctx->pc = 0x18C978u;
            goto label_18c978;
        }
    }
    ctx->pc = 0x18C95Cu;
    // 0x18c95c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c960: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c964: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c964u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c968: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x18c968u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c96c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c96cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c970: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C970u;
    {
        const bool branch_taken_0x18c970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C970u;
            // 0x18c974: 0xae83007c  sw          $v1, 0x7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c970) {
            ctx->pc = 0x18C984u;
            goto label_18c984;
        }
    }
    ctx->pc = 0x18C978u;
label_18c978:
    // 0x18c978: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x18c978u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18c97c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18c97cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c980: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x18c980u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
label_18c984:
    // 0x18c984: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18c984u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c988: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c98c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c98cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c990: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c994: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c994u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c998: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18c998u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c99c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18c99cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18c9a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c9a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c9a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c9a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c9ac: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18c9acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18c9b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c9b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18c9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18c9b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C9B8u;
    {
        const bool branch_taken_0x18c9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9B8u;
            // 0x18c9bc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9b8) {
            ctx->pc = 0x18C9CCu;
            goto label_18c9cc;
        }
    }
    ctx->pc = 0x18C9C0u;
label_18c9c0:
    // 0x18c9c0: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x18c9c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x18c9c4: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x18c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
    // 0x18c9c8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18c9c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18c9cc:
    // 0x18c9cc: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x18c9ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x18c9d0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18C9D0u;
    {
        const bool branch_taken_0x18c9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9D0u;
            // 0x18c9d4: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9d0) {
            ctx->pc = 0x18CA48u;
            goto label_18ca48;
        }
    }
    ctx->pc = 0x18C9D8u;
    // 0x18c9d8: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x18c9d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x18c9dc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C9DCu;
    {
        const bool branch_taken_0x18c9dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9DCu;
            // 0x18c9e0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9dc) {
            ctx->pc = 0x18CA00u;
            goto label_18ca00;
        }
    }
    ctx->pc = 0x18C9E4u;
    // 0x18c9e4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18c9e8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18c9ec: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18c9ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18c9f0: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x18c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x18c9f4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18c9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18c9f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C9F8u;
    {
        const bool branch_taken_0x18c9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9F8u;
            // 0x18c9fc: 0xae830080  sw          $v1, 0x80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9f8) {
            ctx->pc = 0x18CA0Cu;
            goto label_18ca0c;
        }
    }
    ctx->pc = 0x18CA00u;
label_18ca00:
    // 0x18ca00: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x18ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x18ca04: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18ca04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca08: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x18ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_18ca0c:
    // 0x18ca0c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18ca0cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ca10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ca10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ca14: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ca14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ca18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ca18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ca1c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ca1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ca20: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18ca20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ca24: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18ca24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18ca28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ca28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ca2c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ca2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ca30: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ca30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ca34: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18ca34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18ca38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ca38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ca3c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ca3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ca40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CA40u;
    {
        const bool branch_taken_0x18ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA40u;
            // 0x18ca44: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca40) {
            ctx->pc = 0x18CA54u;
            goto label_18ca54;
        }
    }
    ctx->pc = 0x18CA48u;
label_18ca48:
    // 0x18ca48: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x18ca48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x18ca4c: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x18ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x18ca50: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x18ca50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_18ca54:
    // 0x18ca54: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18ca54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18ca58: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18CA58u;
    {
        const bool branch_taken_0x18ca58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA58u;
            // 0x18ca5c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca58) {
            ctx->pc = 0x18CAD0u;
            goto label_18cad0;
        }
    }
    ctx->pc = 0x18CA60u;
    // 0x18ca60: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18ca60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18ca64: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CA64u;
    {
        const bool branch_taken_0x18ca64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA64u;
            // 0x18ca68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca64) {
            ctx->pc = 0x18CA88u;
            goto label_18ca88;
        }
    }
    ctx->pc = 0x18CA6Cu;
    // 0x18ca6c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ca70: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ca74: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18ca74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18ca78: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ca7c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18ca7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18ca80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CA80u;
    {
        const bool branch_taken_0x18ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA80u;
            // 0x18ca84: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca80) {
            ctx->pc = 0x18CA94u;
            goto label_18ca94;
        }
    }
    ctx->pc = 0x18CA88u;
label_18ca88:
    // 0x18ca88: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ca8c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18ca8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca90: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18ca94:
    // 0x18ca94: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18ca94u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ca98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ca98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ca9c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ca9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18caa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18caa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18caa4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18caa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18caa8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18caa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18caac: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18caacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18cab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cab4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cab4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cab8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cab8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cabc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18cabcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18cac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cac4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cac4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CAC8u;
    {
        const bool branch_taken_0x18cac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAC8u;
            // 0x18cacc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cac8) {
            ctx->pc = 0x18CADCu;
            goto label_18cadc;
        }
    }
    ctx->pc = 0x18CAD0u;
label_18cad0:
    // 0x18cad0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18cad0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18cad4: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18cad8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18cad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18cadc:
    // 0x18cadc: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x18cadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x18cae0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18CAE0u;
    {
        const bool branch_taken_0x18cae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAE0u;
            // 0x18cae4: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cae0) {
            ctx->pc = 0x18CB20u;
            goto label_18cb20;
        }
    }
    ctx->pc = 0x18CAE8u;
    // 0x18cae8: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x18cae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x18caec: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CAECu;
    {
        const bool branch_taken_0x18caec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAECu;
            // 0x18caf0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18caec) {
            ctx->pc = 0x18CB10u;
            goto label_18cb10;
        }
    }
    ctx->pc = 0x18CAF4u;
    // 0x18caf4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18caf8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18cafc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18cafcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18cb00: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x18cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x18cb04: 0x100008ba  b           . + 4 + (0x8BA << 2)
    ctx->pc = 0x18CB04u;
    {
        const bool branch_taken_0x18cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB04u;
            // 0x18cb08: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb04) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18CB0Cu;
    // 0x18cb0c: 0x0  nop
    ctx->pc = 0x18cb0cu;
    // NOP
label_18cb10:
    // 0x18cb10: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x18cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x18cb14: 0x100008b6  b           . + 4 + (0x8B6 << 2)
    ctx->pc = 0x18CB14u;
    {
        const bool branch_taken_0x18cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB14u;
            // 0x18cb18: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb14) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18CB1Cu;
    // 0x18cb1c: 0x0  nop
    ctx->pc = 0x18cb1cu;
    // NOP
label_18cb20:
    // 0x18cb20: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x18cb20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
    // 0x18cb24: 0x100008bb  b           . + 4 + (0x8BB << 2)
    ctx->pc = 0x18CB24u;
    {
        const bool branch_taken_0x18cb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB24u;
            // 0x18cb28: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb24) {
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18CB2Cu;
    // 0x18cb2c: 0x0  nop
    ctx->pc = 0x18cb2cu;
    // NOP
label_18cb30:
    // 0x18cb30: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18cb30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18cb34: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18CB34u;
    {
        const bool branch_taken_0x18cb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB34u;
            // 0x18cb38: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb34) {
            ctx->pc = 0x18CBB0u;
            goto label_18cbb0;
        }
    }
    ctx->pc = 0x18CB3Cu;
    // 0x18cb3c: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18cb3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18cb40: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CB40u;
    {
        const bool branch_taken_0x18cb40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB40u;
            // 0x18cb44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb40) {
            ctx->pc = 0x18CB68u;
            goto label_18cb68;
        }
    }
    ctx->pc = 0x18CB48u;
    // 0x18cb48: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18cb4c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18cb50: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18cb50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18cb54: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18cb58: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18cb58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18cb5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18CB5Cu;
    {
        const bool branch_taken_0x18cb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB5Cu;
            // 0x18cb60: 0xae830024  sw          $v1, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb5c) {
            ctx->pc = 0x18CB74u;
            goto label_18cb74;
        }
    }
    ctx->pc = 0x18CB64u;
    // 0x18cb64: 0x0  nop
    ctx->pc = 0x18cb64u;
    // NOP
label_18cb68:
    // 0x18cb68: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18cb6c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18cb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb70: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x18cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_18cb74:
    // 0x18cb74: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18cb74u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cb78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cb7c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cb7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cb80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cb80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cb84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cb84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cb88: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18cb88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cb8c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18cb8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18cb90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cb90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cb94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cb94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cb98: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cb98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cb9c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18cb9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18cba0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cba4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cba4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CBA8u;
    {
        const bool branch_taken_0x18cba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBA8u;
            // 0x18cbac: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cba8) {
            ctx->pc = 0x18CBBCu;
            goto label_18cbbc;
        }
    }
    ctx->pc = 0x18CBB0u;
label_18cbb0:
    // 0x18cbb0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18cbb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18cbb4: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x18cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x18cbb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18cbb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18cbbc:
    // 0x18cbbc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x18cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x18cbc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18CBC0u;
    {
        const bool branch_taken_0x18cbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBC0u;
            // 0x18cbc4: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cbc0) {
            ctx->pc = 0x18CC2Cu;
            goto label_18cc2c;
        }
    }
    ctx->pc = 0x18CBC8u;
    // 0x18cbc8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x18cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18cbcc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18cbccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18cbd0:
    // 0x18cbd0: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x18cbd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18cbd4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18CBD4u;
    {
        const bool branch_taken_0x18cbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cbd4) {
            ctx->pc = 0x18CBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBD4u;
            // 0x18cbd8: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18CC1Cu;
            goto label_18cc1c;
        }
    }
    ctx->pc = 0x18CBDCu;
    // 0x18cbdc: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x18cbdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x18cbe0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18cbe0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18cbe4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18cbe4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cbe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cbec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cbecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cbf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cbf4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cbf8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18cbf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cbfc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18cbfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18cc00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cc04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cc04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cc08: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cc08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cc0c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18cc0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18cc10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cc14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cc14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cc18: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18cc18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_18cc1c:
    // 0x18cc1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18cc20: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18CC20u;
    {
        const bool branch_taken_0x18cc20 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18cc20) {
            ctx->pc = 0x18CC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC20u;
            // 0x18cc24: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18CBD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18cbd0;
        }
    }
    ctx->pc = 0x18CC28u;
    // 0x18cc28: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18cc28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_18cc2c:
    // 0x18cc2c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18CC2Cu;
    {
        const bool branch_taken_0x18cc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC2Cu;
            // 0x18cc30: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc2c) {
            ctx->pc = 0x18CCA8u;
            goto label_18cca8;
        }
    }
    ctx->pc = 0x18CC34u;
    // 0x18cc34: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18cc34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18cc38: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CC38u;
    {
        const bool branch_taken_0x18cc38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC38u;
            // 0x18cc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc38) {
            ctx->pc = 0x18CC60u;
            goto label_18cc60;
        }
    }
    ctx->pc = 0x18CC40u;
    // 0x18cc40: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18cc44: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18cc48: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18cc48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18cc4c: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18cc50: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18cc50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18cc54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18CC54u;
    {
        const bool branch_taken_0x18cc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC54u;
            // 0x18cc58: 0xae830028  sw          $v1, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc54) {
            ctx->pc = 0x18CC6Cu;
            goto label_18cc6c;
        }
    }
    ctx->pc = 0x18CC5Cu;
    // 0x18cc5c: 0x0  nop
    ctx->pc = 0x18cc5cu;
    // NOP
label_18cc60:
    // 0x18cc60: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18cc64: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18cc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc68: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x18cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_18cc6c:
    // 0x18cc6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18cc6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cc70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cc74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cc74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cc78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cc78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cc7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cc80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18cc80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cc84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18cc84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18cc88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cc88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cc8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cc90: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cc90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cc94: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18cc94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18cc98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cc9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CCA0u;
    {
        const bool branch_taken_0x18cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CCA0u;
            // 0x18cca4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cca0) {
            ctx->pc = 0x18CCB4u;
            goto label_18ccb4;
        }
    }
    ctx->pc = 0x18CCA8u;
label_18cca8:
    // 0x18cca8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18cca8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18ccac: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x18ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x18ccb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18ccb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18ccb4:
    // 0x18ccb4: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x18ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x18ccb8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18CCB8u;
    {
        const bool branch_taken_0x18ccb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CCB8u;
            // 0x18ccbc: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ccb8) {
            ctx->pc = 0x18CD24u;
            goto label_18cd24;
        }
    }
    ctx->pc = 0x18CCC0u;
    // 0x18ccc0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x18ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18ccc4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18ccc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18ccc8:
    // 0x18ccc8: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x18ccc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18cccc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18CCCCu;
    {
        const bool branch_taken_0x18cccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cccc) {
            ctx->pc = 0x18CCD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18CCCCu;
            // 0x18ccd0: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18CD14u;
            goto label_18cd14;
        }
    }
    ctx->pc = 0x18CCD4u;
    // 0x18ccd4: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x18ccd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x18ccd8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18ccd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18ccdc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18ccdcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cce0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cce4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cce4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cce8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ccec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ccecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ccf0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18ccf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ccf4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18ccf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18ccf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ccf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ccfc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ccfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cd00: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cd00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cd04: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18cd04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18cd08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cd08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cd0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cd10: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18cd10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_18cd14:
    // 0x18cd14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18cd18: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18CD18u;
    {
        const bool branch_taken_0x18cd18 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18cd18) {
            ctx->pc = 0x18CD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD18u;
            // 0x18cd1c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18CCC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ccc8;
        }
    }
    ctx->pc = 0x18CD20u;
    // 0x18cd20: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18cd20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_18cd24:
    // 0x18cd24: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18CD24u;
    {
        const bool branch_taken_0x18cd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD24u;
            // 0x18cd28: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd24) {
            ctx->pc = 0x18CDA0u;
            goto label_18cda0;
        }
    }
    ctx->pc = 0x18CD2Cu;
    // 0x18cd2c: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18cd2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18cd30: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CD30u;
    {
        const bool branch_taken_0x18cd30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD30u;
            // 0x18cd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd30) {
            ctx->pc = 0x18CD58u;
            goto label_18cd58;
        }
    }
    ctx->pc = 0x18CD38u;
    // 0x18cd38: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18cd3c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18cd40: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18cd40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18cd44: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18cd48: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18cd48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18cd4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18CD4Cu;
    {
        const bool branch_taken_0x18cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD4Cu;
            // 0x18cd50: 0xae830158  sw          $v1, 0x158($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd4c) {
            ctx->pc = 0x18CD64u;
            goto label_18cd64;
        }
    }
    ctx->pc = 0x18CD54u;
    // 0x18cd54: 0x0  nop
    ctx->pc = 0x18cd54u;
    // NOP
label_18cd58:
    // 0x18cd58: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18cd5c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18cd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd60: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x18cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
label_18cd64:
    // 0x18cd64: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18cd64u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cd68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cd68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cd6c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cd6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cd70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cd70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cd74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cd74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cd78: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18cd78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cd7c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18cd7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18cd80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cd80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cd84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cd84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cd88: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cd88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cd8c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18cd8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18cd90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cd90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cd94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cd94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cd98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CD98u;
    {
        const bool branch_taken_0x18cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD98u;
            // 0x18cd9c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd98) {
            ctx->pc = 0x18CDACu;
            goto label_18cdac;
        }
    }
    ctx->pc = 0x18CDA0u;
label_18cda0:
    // 0x18cda0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18cda0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18cda4: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x18cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
    // 0x18cda8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18cda8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18cdac:
    // 0x18cdac: 0x8e820158  lw          $v0, 0x158($s4)
    ctx->pc = 0x18cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x18cdb0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18CDB0u;
    {
        const bool branch_taken_0x18cdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CDB0u;
            // 0x18cdb4: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cdb0) {
            ctx->pc = 0x18CE1Cu;
            goto label_18ce1c;
        }
    }
    ctx->pc = 0x18CDB8u;
    // 0x18cdb8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x18cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18cdbc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18cdbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18cdc0:
    // 0x18cdc0: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x18cdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18cdc4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18CDC4u;
    {
        const bool branch_taken_0x18cdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cdc4) {
            ctx->pc = 0x18CDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18CDC4u;
            // 0x18cdc8: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18CE0Cu;
            goto label_18ce0c;
        }
    }
    ctx->pc = 0x18CDCCu;
    // 0x18cdcc: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x18cdccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x18cdd0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18cdd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18cdd4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18cdd4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cdd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cdd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cddc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cddcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cde0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cde0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cde4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cde4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cde8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18cde8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cdec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18cdecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18cdf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cdf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cdf4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cdf8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cdf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cdfc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18cdfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18ce00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ce00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ce04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ce04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ce08: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18ce08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_18ce0c:
    // 0x18ce0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18ce10: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18CE10u;
    {
        const bool branch_taken_0x18ce10 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18ce10) {
            ctx->pc = 0x18CE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE10u;
            // 0x18ce14: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18CDC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18cdc0;
        }
    }
    ctx->pc = 0x18CE18u;
    // 0x18ce18: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18ce18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_18ce1c:
    // 0x18ce1c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18CE1Cu;
    {
        const bool branch_taken_0x18ce1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE1Cu;
            // 0x18ce20: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce1c) {
            ctx->pc = 0x18CE58u;
            goto label_18ce58;
        }
    }
    ctx->pc = 0x18CE24u;
    // 0x18ce24: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18ce24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18ce28: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x18CE28u;
    {
        const bool branch_taken_0x18ce28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE28u;
            // 0x18ce2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce28) {
            ctx->pc = 0x18CE48u;
            goto label_18ce48;
        }
    }
    ctx->pc = 0x18CE30u;
    // 0x18ce30: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ce34: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ce38: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18ce38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18ce3c: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ce40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE40u;
    {
        const bool branch_taken_0x18ce40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE40u;
            // 0x18ce44: 0xae83015c  sw          $v1, 0x15C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce40) {
            ctx->pc = 0x18CE50u;
            goto label_18ce50;
        }
    }
    ctx->pc = 0x18CE48u;
label_18ce48:
    // 0x18ce48: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ce4c: 0xae82015c  sw          $v0, 0x15C($s4)
    ctx->pc = 0x18ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 2));
label_18ce50:
    // 0x18ce50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE50u;
    {
        const bool branch_taken_0x18ce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE50u;
            // 0x18ce54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce50) {
            ctx->pc = 0x18CE60u;
            goto label_18ce60;
        }
    }
    ctx->pc = 0x18CE58u;
label_18ce58:
    // 0x18ce58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18ce58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18ce5c: 0xae82015c  sw          $v0, 0x15C($s4)
    ctx->pc = 0x18ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 2));
label_18ce60:
    // 0x18ce60: 0x8e82015c  lw          $v0, 0x15C($s4)
    ctx->pc = 0x18ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x18ce64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18CE64u;
    {
        const bool branch_taken_0x18ce64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce64) {
            ctx->pc = 0x18CE9Cu;
            goto label_18ce9c;
        }
    }
    ctx->pc = 0x18CE6Cu;
    // 0x18ce6c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x18ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18ce70: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18ce70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x18ce74: 0x0  nop
    ctx->pc = 0x18ce74u;
    // NOP
label_18ce78:
    // 0x18ce78: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x18ce78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18ce7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE7Cu;
    {
        const bool branch_taken_0x18ce7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE7Cu;
            // 0x18ce80: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce7c) {
            ctx->pc = 0x18CE8Cu;
            goto label_18ce8c;
        }
    }
    ctx->pc = 0x18CE84u;
    // 0x18ce84: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x18ce84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x18ce88: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18ce88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_18ce8c:
    // 0x18ce8c: 0x0  nop
    ctx->pc = 0x18ce8cu;
    // NOP
    // 0x18ce90: 0x0  nop
    ctx->pc = 0x18ce90u;
    // NOP
    // 0x18ce94: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18CE94u;
    {
        const bool branch_taken_0x18ce94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ce94) {
            ctx->pc = 0x18CE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE94u;
            // 0x18ce98: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18CE78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ce78;
        }
    }
    ctx->pc = 0x18CE9Cu;
label_18ce9c:
    // 0x18ce9c: 0xc062c6e  jal         func_18B1B8
    ctx->pc = 0x18CE9Cu;
    SET_GPR_U32(ctx, 31, 0x18CEA4u);
    ctx->pc = 0x18CEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE9Cu;
            // 0x18cea0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B1B8u;
    if (runtime->hasFunction(0x18B1B8u)) {
        auto targetFn = runtime->lookupFunction(0x18B1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEA4u; }
        if (ctx->pc != 0x18CEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B1B8_0x18b1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEA4u; }
        if (ctx->pc != 0x18CEA4u) { return; }
    }
    ctx->pc = 0x18CEA4u;
label_18cea4:
    // 0x18cea4: 0x100007dc  b           . + 4 + (0x7DC << 2)
    ctx->pc = 0x18CEA4u;
    {
        const bool branch_taken_0x18cea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEA4u;
            // 0x18cea8: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cea4) {
            ctx->pc = 0x18EE18u;
            goto label_18ee18;
        }
    }
    ctx->pc = 0x18CEACu;
    // 0x18ceac: 0x0  nop
    ctx->pc = 0x18ceacu;
    // NOP
label_18ceb0:
    // 0x18ceb0: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18ceb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18ceb4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18CEB4u;
    {
        const bool branch_taken_0x18ceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEB4u;
            // 0x18ceb8: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ceb4) {
            ctx->pc = 0x18CF30u;
            goto label_18cf30;
        }
    }
    ctx->pc = 0x18CEBCu;
    // 0x18cebc: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18cebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18cec0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CEC0u;
    {
        const bool branch_taken_0x18cec0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEC0u;
            // 0x18cec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cec0) {
            ctx->pc = 0x18CEE8u;
            goto label_18cee8;
        }
    }
    ctx->pc = 0x18CEC8u;
    // 0x18cec8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18cecc: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ced0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18ced0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18ced4: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ced8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18ced8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18cedc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18CEDCu;
    {
        const bool branch_taken_0x18cedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEDCu;
            // 0x18cee0: 0xae83019c  sw          $v1, 0x19C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cedc) {
            ctx->pc = 0x18CEF4u;
            goto label_18cef4;
        }
    }
    ctx->pc = 0x18CEE4u;
    // 0x18cee4: 0x0  nop
    ctx->pc = 0x18cee4u;
    // NOP
label_18cee8:
    // 0x18cee8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ceec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18ceecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cef0: 0xae82019c  sw          $v0, 0x19C($s4)
    ctx->pc = 0x18cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 2));
label_18cef4:
    // 0x18cef4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18cef4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cef8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cefc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cefcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cf00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cf00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cf04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cf04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cf08: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18cf08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cf0c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18cf0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18cf10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cf10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cf14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cf14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cf18: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cf18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cf1c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18cf1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18cf20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cf20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cf24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cf24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cf28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CF28u;
    {
        const bool branch_taken_0x18cf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF28u;
            // 0x18cf2c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf28) {
            ctx->pc = 0x18CF3Cu;
            goto label_18cf3c;
        }
    }
    ctx->pc = 0x18CF30u;
label_18cf30:
    // 0x18cf30: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18cf30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18cf34: 0xae82019c  sw          $v0, 0x19C($s4)
    ctx->pc = 0x18cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 2));
    // 0x18cf38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18cf38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18cf3c:
    // 0x18cf3c: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x18cf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x18cf40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18CF40u;
    {
        const bool branch_taken_0x18cf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF40u;
            // 0x18cf44: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf40) {
            ctx->pc = 0x18CFB8u;
            goto label_18cfb8;
        }
    }
    ctx->pc = 0x18CF48u;
    // 0x18cf48: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x18cf48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x18cf4c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CF4Cu;
    {
        const bool branch_taken_0x18cf4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF4Cu;
            // 0x18cf50: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf4c) {
            ctx->pc = 0x18CF70u;
            goto label_18cf70;
        }
    }
    ctx->pc = 0x18CF54u;
    // 0x18cf54: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18cf58: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18cf5c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18cf5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18cf60: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x18cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18cf64: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18cf64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18cf68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CF68u;
    {
        const bool branch_taken_0x18cf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF68u;
            // 0x18cf6c: 0xae8301a0  sw          $v1, 0x1A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf68) {
            ctx->pc = 0x18CF7Cu;
            goto label_18cf7c;
        }
    }
    ctx->pc = 0x18CF70u;
label_18cf70:
    // 0x18cf70: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x18cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18cf74: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18cf74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf78: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x18cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
label_18cf7c:
    // 0x18cf7c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18cf7cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cf80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cf80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cf84: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cf84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cf88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cf88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cf8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cf8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cf90: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18cf90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cf94: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18cf94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18cf98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cf98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cf9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cf9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cfa0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cfa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cfa4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18cfa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18cfa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18cfa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18cfac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18cfacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18cfb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CFB0u;
    {
        const bool branch_taken_0x18cfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFB0u;
            // 0x18cfb4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfb0) {
            ctx->pc = 0x18CFC4u;
            goto label_18cfc4;
        }
    }
    ctx->pc = 0x18CFB8u;
label_18cfb8:
    // 0x18cfb8: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x18cfb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x18cfbc: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x18cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
    // 0x18cfc0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18cfc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_18cfc4:
    // 0x18cfc4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18cfc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18cfc8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18CFC8u;
    {
        const bool branch_taken_0x18cfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFC8u;
            // 0x18cfcc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfc8) {
            ctx->pc = 0x18D040u;
            goto label_18d040;
        }
    }
    ctx->pc = 0x18CFD0u;
    // 0x18cfd0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18cfd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18cfd4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CFD4u;
    {
        const bool branch_taken_0x18cfd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFD4u;
            // 0x18cfd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfd4) {
            ctx->pc = 0x18CFF8u;
            goto label_18cff8;
        }
    }
    ctx->pc = 0x18CFDCu;
    // 0x18cfdc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18cfe0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18cfe4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18cfe4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18cfe8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18cfec: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18cfecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18cff0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CFF0u;
    {
        const bool branch_taken_0x18cff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFF0u;
            // 0x18cff4: 0xae8301a4  sw          $v1, 0x1A4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cff0) {
            ctx->pc = 0x18D004u;
            goto label_18d004;
        }
    }
    ctx->pc = 0x18CFF8u;
label_18cff8:
    // 0x18cff8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18cffc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18cffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d000: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x18d000u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
label_18d004:
    // 0x18d004: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d004u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d008: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d00c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d00cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d010: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d014: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d014u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d018: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d01c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d01cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d024: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d024u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d028: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d02c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d02cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d030: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d034: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d034u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D038u;
    {
        const bool branch_taken_0x18d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D038u;
            // 0x18d03c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d038) {
            ctx->pc = 0x18D04Cu;
            goto label_18d04c;
        }
    }
    ctx->pc = 0x18D040u;
label_18d040:
    // 0x18d040: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18d040u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18d044: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x18d044u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
    // 0x18d048: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d04c:
    // 0x18d04c: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x18d04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x18d050: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D050u;
    {
        const bool branch_taken_0x18d050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D050u;
            // 0x18d054: 0x121642  srl         $v0, $s2, 25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d050) {
            ctx->pc = 0x18D0C8u;
            goto label_18d0c8;
        }
    }
    ctx->pc = 0x18D058u;
    // 0x18d058: 0x2673ffe7  addiu       $s3, $s3, -0x19
    ctx->pc = 0x18d058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967271));
    // 0x18d05c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D05Cu;
    {
        const bool branch_taken_0x18d05c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D05Cu;
            // 0x18d060: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d05c) {
            ctx->pc = 0x18D080u;
            goto label_18d080;
        }
    }
    ctx->pc = 0x18D064u;
    // 0x18d064: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d068: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d06c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d06cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d070: 0x121e42  srl         $v1, $s2, 25
    ctx->pc = 0x18d070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x18d074: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d074u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D078u;
    {
        const bool branch_taken_0x18d078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D078u;
            // 0x18d07c: 0xae8301a8  sw          $v1, 0x1A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d078) {
            ctx->pc = 0x18D08Cu;
            goto label_18d08c;
        }
    }
    ctx->pc = 0x18D080u;
label_18d080:
    // 0x18d080: 0x121642  srl         $v0, $s2, 25
    ctx->pc = 0x18d080u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x18d084: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d088: 0xae8201a8  sw          $v0, 0x1A8($s4)
    ctx->pc = 0x18d088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 2));
label_18d08c:
    // 0x18d08c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d08cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d090: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d094: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d094u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d09c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d09cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d0a0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d0a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d0a4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d0a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d0a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d0ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d0b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d0b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d0b4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d0b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d0b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d0bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d0c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D0C0u;
    {
        const bool branch_taken_0x18d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0C0u;
            // 0x18d0c4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0c0) {
            ctx->pc = 0x18D0D4u;
            goto label_18d0d4;
        }
    }
    ctx->pc = 0x18D0C8u;
label_18d0c8:
    // 0x18d0c8: 0x1291c0  sll         $s2, $s2, 7
    ctx->pc = 0x18d0c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x18d0cc: 0xae8201a8  sw          $v0, 0x1A8($s4)
    ctx->pc = 0x18d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 2));
    // 0x18d0d0: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x18d0d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_18d0d4:
    // 0x18d0d4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18d0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18d0d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D0D8u;
    {
        const bool branch_taken_0x18d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0D8u;
            // 0x18d0dc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0d8) {
            ctx->pc = 0x18D150u;
            goto label_18d150;
        }
    }
    ctx->pc = 0x18D0E0u;
    // 0x18d0e0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18d0e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18d0e4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D0E4u;
    {
        const bool branch_taken_0x18d0e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0E4u;
            // 0x18d0e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0e4) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18D0ECu;
    // 0x18d0ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d0f0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d0f4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d0f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d0f8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d0fc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d100: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D100u;
    {
        const bool branch_taken_0x18d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D100u;
            // 0x18d104: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d100) {
            ctx->pc = 0x18D114u;
            goto label_18d114;
        }
    }
    ctx->pc = 0x18D108u;
label_18d108:
    // 0x18d108: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18d108u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d10c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d10cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d110: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18d110u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18d114:
    // 0x18d114: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d114u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d118: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d11c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d11cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d120: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d124: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d124u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d128: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d128u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d12c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d12cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d130: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d134: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d134u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d138: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d13c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d13cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d140: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d144: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d144u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d148: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D148u;
    {
        const bool branch_taken_0x18d148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D148u;
            // 0x18d14c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d148) {
            ctx->pc = 0x18D15Cu;
            goto label_18d15c;
        }
    }
    ctx->pc = 0x18D150u;
label_18d150:
    // 0x18d150: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18d150u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18d154: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18d154u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18d158: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d15c:
    // 0x18d15c: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x18d15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x18d160: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D160u;
    {
        const bool branch_taken_0x18d160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D160u;
            // 0x18d164: 0x121302  srl         $v0, $s2, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d160) {
            ctx->pc = 0x18D1D8u;
            goto label_18d1d8;
        }
    }
    ctx->pc = 0x18D168u;
    // 0x18d168: 0x2673fff4  addiu       $s3, $s3, -0xC
    ctx->pc = 0x18d168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x18d16c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D16Cu;
    {
        const bool branch_taken_0x18d16c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D16Cu;
            // 0x18d170: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d16c) {
            ctx->pc = 0x18D190u;
            goto label_18d190;
        }
    }
    ctx->pc = 0x18D174u;
    // 0x18d174: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d178: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d178u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d17c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d17cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d180: 0x121b02  srl         $v1, $s2, 12
    ctx->pc = 0x18d180u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
    // 0x18d184: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d184u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D188u;
    {
        const bool branch_taken_0x18d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D188u;
            // 0x18d18c: 0xae8301ac  sw          $v1, 0x1AC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d188) {
            ctx->pc = 0x18D19Cu;
            goto label_18d19c;
        }
    }
    ctx->pc = 0x18D190u;
label_18d190:
    // 0x18d190: 0x121302  srl         $v0, $s2, 12
    ctx->pc = 0x18d190u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
    // 0x18d194: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d198: 0xae8201ac  sw          $v0, 0x1AC($s4)
    ctx->pc = 0x18d198u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 2));
label_18d19c:
    // 0x18d19c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d19cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d1a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d1a4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d1a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d1a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d1ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d1acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d1b0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d1b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d1b4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d1b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d1b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d1bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d1c0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d1c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d1c4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d1c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d1c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d1cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d1d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D1D0u;
    {
        const bool branch_taken_0x18d1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1D0u;
            // 0x18d1d4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1d0) {
            ctx->pc = 0x18D1E4u;
            goto label_18d1e4;
        }
    }
    ctx->pc = 0x18D1D8u;
label_18d1d8:
    // 0x18d1d8: 0x129500  sll         $s2, $s2, 20
    ctx->pc = 0x18d1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 20));
    // 0x18d1dc: 0xae8201ac  sw          $v0, 0x1AC($s4)
    ctx->pc = 0x18d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 2));
    // 0x18d1e0: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x18d1e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_18d1e4:
    // 0x18d1e4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18d1e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18d1e8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D1E8u;
    {
        const bool branch_taken_0x18d1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1E8u;
            // 0x18d1ec: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1e8) {
            ctx->pc = 0x18D260u;
            goto label_18d260;
        }
    }
    ctx->pc = 0x18D1F0u;
    // 0x18d1f0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18d1f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18d1f4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D1F4u;
    {
        const bool branch_taken_0x18d1f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1F4u;
            // 0x18d1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1f4) {
            ctx->pc = 0x18D218u;
            goto label_18d218;
        }
    }
    ctx->pc = 0x18D1FCu;
    // 0x18d1fc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d200: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d204: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d204u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d208: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18d208u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d20c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d20cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d210: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D210u;
    {
        const bool branch_taken_0x18d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D210u;
            // 0x18d214: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d210) {
            ctx->pc = 0x18D224u;
            goto label_18d224;
        }
    }
    ctx->pc = 0x18D218u;
label_18d218:
    // 0x18d218: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18d218u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d21c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d220: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18d220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18d224:
    // 0x18d224: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d224u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d228: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d22c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d22cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d230: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d234: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d234u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d238: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d238u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d23c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d23cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d240: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d244: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d244u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d248: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d248u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d24c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d24cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d250: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d254: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d254u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d258: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D258u;
    {
        const bool branch_taken_0x18d258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D258u;
            // 0x18d25c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d258) {
            ctx->pc = 0x18D26Cu;
            goto label_18d26c;
        }
    }
    ctx->pc = 0x18D260u;
label_18d260:
    // 0x18d260: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18d260u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18d264: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18d264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18d268: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d26c:
    // 0x18d26c: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x18d26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18d270: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D270u;
    {
        const bool branch_taken_0x18d270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D270u;
            // 0x18d274: 0x121282  srl         $v0, $s2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d270) {
            ctx->pc = 0x18D2E8u;
            goto label_18d2e8;
        }
    }
    ctx->pc = 0x18D278u;
    // 0x18d278: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x18d278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x18d27c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D27Cu;
    {
        const bool branch_taken_0x18d27c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D27Cu;
            // 0x18d280: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d27c) {
            ctx->pc = 0x18D2A0u;
            goto label_18d2a0;
        }
    }
    ctx->pc = 0x18D284u;
    // 0x18d284: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d288: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d28c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d28cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d290: 0x121a82  srl         $v1, $s2, 10
    ctx->pc = 0x18d290u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x18d294: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d294u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D298u;
    {
        const bool branch_taken_0x18d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D298u;
            // 0x18d29c: 0xae8301b0  sw          $v1, 0x1B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d298) {
            ctx->pc = 0x18D2ACu;
            goto label_18d2ac;
        }
    }
    ctx->pc = 0x18D2A0u;
label_18d2a0:
    // 0x18d2a0: 0x121282  srl         $v0, $s2, 10
    ctx->pc = 0x18d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x18d2a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d2a8: 0xae8201b0  sw          $v0, 0x1B0($s4)
    ctx->pc = 0x18d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 2));
label_18d2ac:
    // 0x18d2ac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d2acu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d2b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d2b4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d2b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d2b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d2bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d2c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d2c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d2c4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d2c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d2c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d2cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d2d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d2d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d2d4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d2d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d2d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d2dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d2e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D2E0u;
    {
        const bool branch_taken_0x18d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2E0u;
            // 0x18d2e4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2e0) {
            ctx->pc = 0x18D2F4u;
            goto label_18d2f4;
        }
    }
    ctx->pc = 0x18D2E8u;
label_18d2e8:
    // 0x18d2e8: 0x129580  sll         $s2, $s2, 22
    ctx->pc = 0x18d2e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 22));
    // 0x18d2ec: 0xae8201b0  sw          $v0, 0x1B0($s4)
    ctx->pc = 0x18d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 2));
    // 0x18d2f0: 0x26730016  addiu       $s3, $s3, 0x16
    ctx->pc = 0x18d2f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
label_18d2f4:
    // 0x18d2f4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18d2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18d2f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D2F8u;
    {
        const bool branch_taken_0x18d2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2F8u;
            // 0x18d2fc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2f8) {
            ctx->pc = 0x18D370u;
            goto label_18d370;
        }
    }
    ctx->pc = 0x18D300u;
    // 0x18d300: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18d300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18d304: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D304u;
    {
        const bool branch_taken_0x18d304 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D304u;
            // 0x18d308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d304) {
            ctx->pc = 0x18D328u;
            goto label_18d328;
        }
    }
    ctx->pc = 0x18D30Cu;
    // 0x18d30c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d310: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d310u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d314: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d314u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d318: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18d318u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d31c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d31cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d320: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D320u;
    {
        const bool branch_taken_0x18d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D320u;
            // 0x18d324: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d320) {
            ctx->pc = 0x18D334u;
            goto label_18d334;
        }
    }
    ctx->pc = 0x18D328u;
label_18d328:
    // 0x18d328: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18d328u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d32c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d330: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18d330u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18d334:
    // 0x18d334: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d334u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d338: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d33c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d33cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d340: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d344: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d344u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d348: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d348u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d34c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d34cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d350: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d354: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d354u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d358: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d358u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d35c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d35cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d360: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d364: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d364u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D368u;
    {
        const bool branch_taken_0x18d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D368u;
            // 0x18d36c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d368) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D370u;
label_18d370:
    // 0x18d370: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18d370u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18d374: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18d374u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18d378: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d37c:
    // 0x18d37c: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x18d37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18d380: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18D380u;
    {
        const bool branch_taken_0x18d380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D380u;
            // 0x18d384: 0x121282  srl         $v0, $s2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d380) {
            ctx->pc = 0x18D3C0u;
            goto label_18d3c0;
        }
    }
    ctx->pc = 0x18D388u;
    // 0x18d388: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x18d388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x18d38c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D38Cu;
    {
        const bool branch_taken_0x18d38c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D38Cu;
            // 0x18d390: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d38c) {
            ctx->pc = 0x18D3B0u;
            goto label_18d3b0;
        }
    }
    ctx->pc = 0x18D394u;
    // 0x18d394: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d398: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d39c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d39cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d3a0: 0x121a82  srl         $v1, $s2, 10
    ctx->pc = 0x18d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x18d3a4: 0x10000692  b           . + 4 + (0x692 << 2)
    ctx->pc = 0x18D3A4u;
    {
        const bool branch_taken_0x18d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3A4u;
            // 0x18d3a8: 0xae8301b4  sw          $v1, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3a4) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18D3ACu;
    // 0x18d3ac: 0x0  nop
    ctx->pc = 0x18d3acu;
    // NOP
label_18d3b0:
    // 0x18d3b0: 0x121282  srl         $v0, $s2, 10
    ctx->pc = 0x18d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x18d3b4: 0x1000068e  b           . + 4 + (0x68E << 2)
    ctx->pc = 0x18D3B4u;
    {
        const bool branch_taken_0x18d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3B4u;
            // 0x18d3b8: 0xae8201b4  sw          $v0, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3b4) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18D3BCu;
    // 0x18d3bc: 0x0  nop
    ctx->pc = 0x18d3bcu;
    // NOP
label_18d3c0:
    // 0x18d3c0: 0x26730016  addiu       $s3, $s3, 0x16
    ctx->pc = 0x18d3c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
    // 0x18d3c4: 0x10000693  b           . + 4 + (0x693 << 2)
    ctx->pc = 0x18D3C4u;
    {
        const bool branch_taken_0x18d3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3C4u;
            // 0x18d3c8: 0xae8201b4  sw          $v0, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3c4) {
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18D3CCu;
    // 0x18d3cc: 0x0  nop
    ctx->pc = 0x18d3ccu;
    // NOP
label_18d3d0:
    // 0x18d3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d3d4: 0x2a63001e  slti        $v1, $s3, 0x1E
    ctx->pc = 0x18d3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18d3d8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D3D8u;
    {
        const bool branch_taken_0x18d3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3D8u;
            // 0x18d3dc: 0xae820310  sw          $v0, 0x310($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3d8) {
            ctx->pc = 0x18D450u;
            goto label_18d450;
        }
    }
    ctx->pc = 0x18D3E0u;
    // 0x18d3e0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x18d3e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x18d3e4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D3E4u;
    {
        const bool branch_taken_0x18d3e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3E4u;
            // 0x18d3e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3e4) {
            ctx->pc = 0x18D408u;
            goto label_18d408;
        }
    }
    ctx->pc = 0x18D3ECu;
    // 0x18d3ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d3f0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d3f4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d3f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d3f8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x18d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18d3fc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D400u;
    {
        const bool branch_taken_0x18d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D400u;
            // 0x18d404: 0xae830088  sw          $v1, 0x88($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d400) {
            ctx->pc = 0x18D414u;
            goto label_18d414;
        }
    }
    ctx->pc = 0x18D408u;
label_18d408:
    // 0x18d408: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18d408u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18d40c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d410: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x18d410u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
label_18d414:
    // 0x18d414: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d414u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d418: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d41c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d41cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d420: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d424: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d424u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d428: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d428u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d42c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d42cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d430: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d434: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d438: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d438u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d43c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d43cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d444: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d444u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d448: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18D448u;
    {
        const bool branch_taken_0x18d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D448u;
            // 0x18d44c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d448) {
            ctx->pc = 0x18D460u;
            goto label_18d460;
        }
    }
    ctx->pc = 0x18D450u;
label_18d450:
    // 0x18d450: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18d450u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18d454: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x18d454u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18d458: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x18d458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    // 0x18d45c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18d45cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18d460:
    // 0x18d460: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x18d460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x18d464: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18D464u;
    {
        const bool branch_taken_0x18d464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D464u;
            // 0x18d468: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d464) {
            ctx->pc = 0x18D4E0u;
            goto label_18d4e0;
        }
    }
    ctx->pc = 0x18D46Cu;
    // 0x18d46c: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x18d46cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x18d470: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D470u;
    {
        const bool branch_taken_0x18d470 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D470u;
            // 0x18d474: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d470) {
            ctx->pc = 0x18D498u;
            goto label_18d498;
        }
    }
    ctx->pc = 0x18D478u;
    // 0x18d478: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d47c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d480: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d480u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d484: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18d488: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d488u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d48c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18D48Cu;
    {
        const bool branch_taken_0x18d48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D48Cu;
            // 0x18d490: 0xae83008c  sw          $v1, 0x8C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d48c) {
            ctx->pc = 0x18D4A4u;
            goto label_18d4a4;
        }
    }
    ctx->pc = 0x18D494u;
    // 0x18d494: 0x0  nop
    ctx->pc = 0x18d494u;
    // NOP
label_18d498:
    // 0x18d498: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x18d498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18d49c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4a0: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x18d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
label_18d4a4:
    // 0x18d4a4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d4a4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d4a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d4ac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d4acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d4b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d4b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d4b8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d4b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d4bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d4bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d4c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d4c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d4c8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d4c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d4cc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d4ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d4d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d4d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d4d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D4D8u;
    {
        const bool branch_taken_0x18d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4D8u;
            // 0x18d4dc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4d8) {
            ctx->pc = 0x18D4ECu;
            goto label_18d4ec;
        }
    }
    ctx->pc = 0x18D4E0u;
label_18d4e0:
    // 0x18d4e0: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x18d4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x18d4e4: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x18d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    // 0x18d4e8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18d4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18d4ec:
    // 0x18d4ec: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x18d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x18d4f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d4f4: 0x146400e2  bne         $v1, $a0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x18D4F4u;
    {
        const bool branch_taken_0x18d4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4F4u;
            // 0x18d4f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4f4) {
            ctx->pc = 0x18D880u;
            goto label_18d880;
        }
    }
    ctx->pc = 0x18D4FCu;
    // 0x18d4fc: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x18d4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x18d500: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D500u;
    {
        const bool branch_taken_0x18d500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D500u;
            // 0x18d504: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d500) {
            ctx->pc = 0x18D578u;
            goto label_18d578;
        }
    }
    ctx->pc = 0x18D508u;
    // 0x18d508: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x18d508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x18d50c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D50Cu;
    {
        const bool branch_taken_0x18d50c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D50Cu;
            // 0x18d510: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d50c) {
            ctx->pc = 0x18D530u;
            goto label_18d530;
        }
    }
    ctx->pc = 0x18D514u;
    // 0x18d514: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d518: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d51c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d51cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d520: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x18d520u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x18d524: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d524u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D528u;
    {
        const bool branch_taken_0x18d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D528u;
            // 0x18d52c: 0xae830090  sw          $v1, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d528) {
            ctx->pc = 0x18D53Cu;
            goto label_18d53c;
        }
    }
    ctx->pc = 0x18D530u;
label_18d530:
    // 0x18d530: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x18d530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x18d534: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d538: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x18d538u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_18d53c:
    // 0x18d53c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d53cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d540: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d544: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d544u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d548: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d54c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d54cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d550: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d550u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d554: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d554u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d55c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d55cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d560: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d560u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d564: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d564u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d568: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d56c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d56cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D570u;
    {
        const bool branch_taken_0x18d570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D570u;
            // 0x18d574: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d570) {
            ctx->pc = 0x18D584u;
            goto label_18d584;
        }
    }
    ctx->pc = 0x18D578u;
label_18d578:
    // 0x18d578: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x18d578u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x18d57c: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x18d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
    // 0x18d580: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x18d580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_18d584:
    // 0x18d584: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18d584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18d588: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D588u;
    {
        const bool branch_taken_0x18d588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D588u;
            // 0x18d58c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d588) {
            ctx->pc = 0x18D600u;
            goto label_18d600;
        }
    }
    ctx->pc = 0x18D590u;
    // 0x18d590: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18d590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18d594: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D594u;
    {
        const bool branch_taken_0x18d594 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D594u;
            // 0x18d598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d594) {
            ctx->pc = 0x18D5B8u;
            goto label_18d5b8;
        }
    }
    ctx->pc = 0x18D59Cu;
    // 0x18d59c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d5a0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d5a4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d5a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d5a8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d5ac: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d5acu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d5b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D5B0u;
    {
        const bool branch_taken_0x18d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5B0u;
            // 0x18d5b4: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5b0) {
            ctx->pc = 0x18D5C4u;
            goto label_18d5c4;
        }
    }
    ctx->pc = 0x18D5B8u;
label_18d5b8:
    // 0x18d5b8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d5bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5c0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18d5c4:
    // 0x18d5c4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d5c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d5c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d5cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d5ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d5d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d5d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d5d8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d5d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d5dc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d5dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d5e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d5e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d5e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d5e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d5ec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d5ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d5f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d5f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d5f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D5F8u;
    {
        const bool branch_taken_0x18d5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5F8u;
            // 0x18d5fc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5f8) {
            ctx->pc = 0x18D60Cu;
            goto label_18d60c;
        }
    }
    ctx->pc = 0x18D600u;
label_18d600:
    // 0x18d600: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18d600u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18d604: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18d604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18d608: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d60c:
    // 0x18d60c: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x18d60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x18d610: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D610u;
    {
        const bool branch_taken_0x18d610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D610u;
            // 0x18d614: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d610) {
            ctx->pc = 0x18D688u;
            goto label_18d688;
        }
    }
    ctx->pc = 0x18D618u;
    // 0x18d618: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x18d618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x18d61c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D61Cu;
    {
        const bool branch_taken_0x18d61c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D61Cu;
            // 0x18d620: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d61c) {
            ctx->pc = 0x18D640u;
            goto label_18d640;
        }
    }
    ctx->pc = 0x18D624u;
    // 0x18d624: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d628: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d62c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d62cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d630: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x18d630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x18d634: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d634u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D638u;
    {
        const bool branch_taken_0x18d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D638u;
            // 0x18d63c: 0xae830094  sw          $v1, 0x94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d638) {
            ctx->pc = 0x18D64Cu;
            goto label_18d64c;
        }
    }
    ctx->pc = 0x18D640u;
label_18d640:
    // 0x18d640: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x18d640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x18d644: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d648: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x18d648u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
label_18d64c:
    // 0x18d64c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d64cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d650: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d654: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d65c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d65cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d660: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d660u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d664: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d664u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d66c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d66cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d670: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d674: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d678: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d67c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d67cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d680: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D680u;
    {
        const bool branch_taken_0x18d680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D680u;
            // 0x18d684: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d680) {
            ctx->pc = 0x18D694u;
            goto label_18d694;
        }
    }
    ctx->pc = 0x18D688u;
label_18d688:
    // 0x18d688: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x18d688u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x18d68c: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x18d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
    // 0x18d690: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x18d690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_18d694:
    // 0x18d694: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x18d694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x18d698: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D698u;
    {
        const bool branch_taken_0x18d698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D698u;
            // 0x18d69c: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d698) {
            ctx->pc = 0x18D710u;
            goto label_18d710;
        }
    }
    ctx->pc = 0x18D6A0u;
    // 0x18d6a0: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x18d6a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x18d6a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D6A4u;
    {
        const bool branch_taken_0x18d6a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6A4u;
            // 0x18d6a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6a4) {
            ctx->pc = 0x18D6C8u;
            goto label_18d6c8;
        }
    }
    ctx->pc = 0x18D6ACu;
    // 0x18d6ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d6b0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d6b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d6b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d6b8: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x18d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18d6bc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d6c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D6C0u;
    {
        const bool branch_taken_0x18d6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6C0u;
            // 0x18d6c4: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6c0) {
            ctx->pc = 0x18D6D4u;
            goto label_18d6d4;
        }
    }
    ctx->pc = 0x18D6C8u;
label_18d6c8:
    // 0x18d6c8: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x18d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18d6cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6d0: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x18d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
label_18d6d4:
    // 0x18d6d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d6d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d6d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d6dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d6dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d6e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d6e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d6e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d6e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d6ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d6ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d6f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d6f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d6f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d6f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d6fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d6fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d700: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d704: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d704u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d708: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D708u;
    {
        const bool branch_taken_0x18d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D708u;
            // 0x18d70c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d708) {
            ctx->pc = 0x18D71Cu;
            goto label_18d71c;
        }
    }
    ctx->pc = 0x18D710u;
label_18d710:
    // 0x18d710: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x18d710u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18d714: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x18d714u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
    // 0x18d718: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x18d718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_18d71c:
    // 0x18d71c: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x18d71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x18d720: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D720u;
    {
        const bool branch_taken_0x18d720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D720u;
            // 0x18d724: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d720) {
            ctx->pc = 0x18D798u;
            goto label_18d798;
        }
    }
    ctx->pc = 0x18D728u;
    // 0x18d728: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x18d728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x18d72c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D72Cu;
    {
        const bool branch_taken_0x18d72c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D72Cu;
            // 0x18d730: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d72c) {
            ctx->pc = 0x18D750u;
            goto label_18d750;
        }
    }
    ctx->pc = 0x18D734u;
    // 0x18d734: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d738: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d738u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d73c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d73cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d740: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x18d740u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18d744: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d744u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d748: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D748u;
    {
        const bool branch_taken_0x18d748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D748u;
            // 0x18d74c: 0xae83009c  sw          $v1, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d748) {
            ctx->pc = 0x18D75Cu;
            goto label_18d75c;
        }
    }
    ctx->pc = 0x18D750u;
label_18d750:
    // 0x18d750: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x18d750u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18d754: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d758: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x18d758u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_18d75c:
    // 0x18d75c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d75cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d760: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d764: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d764u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d76c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d76cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d770: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d770u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d774: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d778: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d77c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d77cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d780: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d784: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d784u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d78c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d78cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D790u;
    {
        const bool branch_taken_0x18d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D790u;
            // 0x18d794: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d790) {
            ctx->pc = 0x18D7A4u;
            goto label_18d7a4;
        }
    }
    ctx->pc = 0x18D798u;
label_18d798:
    // 0x18d798: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x18d798u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18d79c: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x18d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x18d7a0: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x18d7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_18d7a4:
    // 0x18d7a4: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x18d7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x18d7a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D7A8u;
    {
        const bool branch_taken_0x18d7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7A8u;
            // 0x18d7ac: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7a8) {
            ctx->pc = 0x18D820u;
            goto label_18d820;
        }
    }
    ctx->pc = 0x18D7B0u;
    // 0x18d7b0: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x18d7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x18d7b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D7B4u;
    {
        const bool branch_taken_0x18d7b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7B4u;
            // 0x18d7b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7b4) {
            ctx->pc = 0x18D7D8u;
            goto label_18d7d8;
        }
    }
    ctx->pc = 0x18D7BCu;
    // 0x18d7bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d7c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d7c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d7c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d7c8: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x18d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18d7cc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d7ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d7d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D7D0u;
    {
        const bool branch_taken_0x18d7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7D0u;
            // 0x18d7d4: 0xae8300a0  sw          $v1, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7d0) {
            ctx->pc = 0x18D7E4u;
            goto label_18d7e4;
        }
    }
    ctx->pc = 0x18D7D8u;
label_18d7d8:
    // 0x18d7d8: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x18d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18d7dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7e0: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x18d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
label_18d7e4:
    // 0x18d7e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d7e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d7e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d7ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d7ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d7f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d7f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d7f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d7f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d7fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d7fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d804: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d804u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d808: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d80c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d80cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d814: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d814u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D818u;
    {
        const bool branch_taken_0x18d818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D818u;
            // 0x18d81c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d818) {
            ctx->pc = 0x18D82Cu;
            goto label_18d82c;
        }
    }
    ctx->pc = 0x18D820u;
label_18d820:
    // 0x18d820: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x18d820u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18d824: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x18d824u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
    // 0x18d828: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x18d828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_18d82c:
    // 0x18d82c: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x18d82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x18d830: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18D830u;
    {
        const bool branch_taken_0x18d830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D830u;
            // 0x18d834: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d830) {
            ctx->pc = 0x18D870u;
            goto label_18d870;
        }
    }
    ctx->pc = 0x18D838u;
    // 0x18d838: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x18d838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x18d83c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D83Cu;
    {
        const bool branch_taken_0x18d83c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D83Cu;
            // 0x18d840: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d83c) {
            ctx->pc = 0x18D860u;
            goto label_18d860;
        }
    }
    ctx->pc = 0x18D844u;
    // 0x18d844: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d848: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d84c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d84cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d850: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x18d850u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18d854: 0x10000566  b           . + 4 + (0x566 << 2)
    ctx->pc = 0x18D854u;
    {
        const bool branch_taken_0x18d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D854u;
            // 0x18d858: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d854) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18D85Cu;
    // 0x18d85c: 0x0  nop
    ctx->pc = 0x18d85cu;
    // NOP
label_18d860:
    // 0x18d860: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x18d860u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x18d864: 0x10000562  b           . + 4 + (0x562 << 2)
    ctx->pc = 0x18D864u;
    {
        const bool branch_taken_0x18d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D864u;
            // 0x18d868: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d864) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18D86Cu;
    // 0x18d86c: 0x0  nop
    ctx->pc = 0x18d86cu;
    // NOP
label_18d870:
    // 0x18d870: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x18d870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x18d874: 0x10000567  b           . + 4 + (0x567 << 2)
    ctx->pc = 0x18D874u;
    {
        const bool branch_taken_0x18d874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D874u;
            // 0x18d878: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d874) {
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18D87Cu;
    // 0x18d87c: 0x0  nop
    ctx->pc = 0x18d87cu;
    // NOP
label_18d880:
    // 0x18d880: 0x54620565  bnel        $v1, $v0, . + 4 + (0x565 << 2)
    ctx->pc = 0x18D880u;
    {
        const bool branch_taken_0x18d880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d880) {
            ctx->pc = 0x18D884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D880u;
            // 0x18d884: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18EE18u;
            goto label_18ee18;
        }
    }
    ctx->pc = 0x18D888u;
    // 0x18d888: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18d888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18d88c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18D88Cu;
    {
        const bool branch_taken_0x18d88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D88Cu;
            // 0x18d890: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d88c) {
            ctx->pc = 0x18D900u;
            goto label_18d900;
        }
    }
    ctx->pc = 0x18D894u;
    // 0x18d894: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18d894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18d898: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x18D898u;
    {
        const bool branch_taken_0x18d898 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D898u;
            // 0x18d89c: 0x931023  subu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d898) {
            ctx->pc = 0x18D8B8u;
            goto label_18d8b8;
        }
    }
    ctx->pc = 0x18D8A0u;
    // 0x18d8a0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d8a4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d8a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d8a8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d8ac: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d8acu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d8b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D8B0u;
    {
        const bool branch_taken_0x18d8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8B0u;
            // 0x18d8b4: 0xae8300a8  sw          $v1, 0xA8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8b0) {
            ctx->pc = 0x18D8C4u;
            goto label_18d8c4;
        }
    }
    ctx->pc = 0x18D8B8u;
label_18d8b8:
    // 0x18d8b8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d8bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8c0: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x18d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
label_18d8c4:
    // 0x18d8c4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d8c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d8c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d8cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d8ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d8d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d8d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d8d8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d8d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d8dc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d8dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d8e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d8e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d8e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d8e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d8ec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d8ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d8f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d8f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d8f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D8F8u;
    {
        const bool branch_taken_0x18d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8F8u;
            // 0x18d8fc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8f8) {
            ctx->pc = 0x18D90Cu;
            goto label_18d90c;
        }
    }
    ctx->pc = 0x18D900u;
label_18d900:
    // 0x18d900: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18d900u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18d904: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x18d904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    // 0x18d908: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d90c:
    // 0x18d90c: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x18d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x18d910: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18D910u;
    {
        const bool branch_taken_0x18d910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D910u;
            // 0x18d914: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d910) {
            ctx->pc = 0x18D99Cu;
            goto label_18d99c;
        }
    }
    ctx->pc = 0x18D918u;
    // 0x18d918: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D918u;
    {
        const bool branch_taken_0x18d918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D918u;
            // 0x18d91c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d918) {
            ctx->pc = 0x18D990u;
            goto label_18d990;
        }
    }
    ctx->pc = 0x18D920u;
    // 0x18d920: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18d920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18d924: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D924u;
    {
        const bool branch_taken_0x18d924 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D924u;
            // 0x18d928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d924) {
            ctx->pc = 0x18D948u;
            goto label_18d948;
        }
    }
    ctx->pc = 0x18D92Cu;
    // 0x18d92c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d930: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d930u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d934: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d934u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d938: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18d938u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d93c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d93cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D940u;
    {
        const bool branch_taken_0x18d940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D940u;
            // 0x18d944: 0xae8300ac  sw          $v1, 0xAC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d940) {
            ctx->pc = 0x18D954u;
            goto label_18d954;
        }
    }
    ctx->pc = 0x18D948u;
label_18d948:
    // 0x18d948: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18d948u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18d94c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d950: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x18d950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
label_18d954:
    // 0x18d954: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d954u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d958: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d95c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d95cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d960: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d964: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d964u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d968: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d968u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d96c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d96cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d974: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d974u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d978: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d97c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18d97cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18d980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d984: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d984u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d988: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D988u;
    {
        const bool branch_taken_0x18d988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D988u;
            // 0x18d98c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d988) {
            ctx->pc = 0x18D99Cu;
            goto label_18d99c;
        }
    }
    ctx->pc = 0x18D990u;
label_18d990:
    // 0x18d990: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18d990u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18d994: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x18d994u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
    // 0x18d998: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d99c:
    // 0x18d99c: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x18d99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x18d9a0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D9A0u;
    {
        const bool branch_taken_0x18d9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9A0u;
            // 0x18d9a4: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9a0) {
            ctx->pc = 0x18DA18u;
            goto label_18da18;
        }
    }
    ctx->pc = 0x18D9A8u;
    // 0x18d9a8: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x18d9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x18d9ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D9ACu;
    {
        const bool branch_taken_0x18d9ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9ACu;
            // 0x18d9b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9ac) {
            ctx->pc = 0x18D9D0u;
            goto label_18d9d0;
        }
    }
    ctx->pc = 0x18D9B4u;
    // 0x18d9b4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d9b8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18d9bc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18d9bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18d9c0: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x18d9c4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18d9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18d9c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D9C8u;
    {
        const bool branch_taken_0x18d9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9C8u;
            // 0x18d9cc: 0xae8300b0  sw          $v1, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9c8) {
            ctx->pc = 0x18D9DCu;
            goto label_18d9dc;
        }
    }
    ctx->pc = 0x18D9D0u;
label_18d9d0:
    // 0x18d9d0: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x18d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x18d9d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18d9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9d8: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x18d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
label_18d9dc:
    // 0x18d9dc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18d9dcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d9e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d9e4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d9e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d9e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d9ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d9f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18d9f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d9f4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18d9f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18d9f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18d9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18d9fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18da00: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18da00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18da04: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18da04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18da08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18da08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18da0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18da0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18da10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DA10u;
    {
        const bool branch_taken_0x18da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA10u;
            // 0x18da14: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da10) {
            ctx->pc = 0x18DA24u;
            goto label_18da24;
        }
    }
    ctx->pc = 0x18DA18u;
label_18da18:
    // 0x18da18: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x18da18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x18da1c: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x18da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x18da20: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x18da20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_18da24:
    // 0x18da24: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x18da24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x18da28: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18DA28u;
    {
        const bool branch_taken_0x18da28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA28u;
            // 0x18da2c: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da28) {
            ctx->pc = 0x18DA68u;
            goto label_18da68;
        }
    }
    ctx->pc = 0x18DA30u;
    // 0x18da30: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x18da30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x18da34: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DA34u;
    {
        const bool branch_taken_0x18da34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA34u;
            // 0x18da38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da34) {
            ctx->pc = 0x18DA58u;
            goto label_18da58;
        }
    }
    ctx->pc = 0x18DA3Cu;
    // 0x18da3c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18da40: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18da40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18da44: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18da44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18da48: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x18da48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x18da4c: 0x100004e8  b           . + 4 + (0x4E8 << 2)
    ctx->pc = 0x18DA4Cu;
    {
        const bool branch_taken_0x18da4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA4Cu;
            // 0x18da50: 0xae8300b4  sw          $v1, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da4c) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18DA54u;
    // 0x18da54: 0x0  nop
    ctx->pc = 0x18da54u;
    // NOP
label_18da58:
    // 0x18da58: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x18da5c: 0x100004e4  b           . + 4 + (0x4E4 << 2)
    ctx->pc = 0x18DA5Cu;
    {
        const bool branch_taken_0x18da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA5Cu;
            // 0x18da60: 0xae8200b4  sw          $v0, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da5c) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18DA64u;
    // 0x18da64: 0x0  nop
    ctx->pc = 0x18da64u;
    // NOP
label_18da68:
    // 0x18da68: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x18da68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x18da6c: 0x100004e9  b           . + 4 + (0x4E9 << 2)
    ctx->pc = 0x18DA6Cu;
    {
        const bool branch_taken_0x18da6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA6Cu;
            // 0x18da70: 0xae8200b4  sw          $v0, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da6c) {
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18DA74u;
    // 0x18da74: 0x0  nop
    ctx->pc = 0x18da74u;
    // NOP
label_18da78:
    // 0x18da78: 0xc062c3e  jal         func_18B0F8
    ctx->pc = 0x18DA78u;
    SET_GPR_U32(ctx, 31, 0x18DA80u);
    ctx->pc = 0x18DA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA78u;
            // 0x18da7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0F8u;
    if (runtime->hasFunction(0x18B0F8u)) {
        auto targetFn = runtime->lookupFunction(0x18B0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA80u; }
        if (ctx->pc != 0x18DA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B0F8_0x18b0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA80u; }
        if (ctx->pc != 0x18DA80u) { return; }
    }
    ctx->pc = 0x18DA80u;
label_18da80:
    // 0x18da80: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x18da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x18da84: 0x184004e3  blez        $v0, . + 4 + (0x4E3 << 2)
    ctx->pc = 0x18DA84u;
    {
        const bool branch_taken_0x18da84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18DA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA84u;
            // 0x18da88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da84) {
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18DA8Cu;
    // 0x18da8c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x18da8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18da90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18da90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18da94: 0x2685016c  addiu       $a1, $s4, 0x16C
    ctx->pc = 0x18da94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 364));
    // 0x18da98: 0x26840160  addiu       $a0, $s4, 0x160
    ctx->pc = 0x18da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x18da9c: 0x0  nop
    ctx->pc = 0x18da9cu;
    // NOP
label_18daa0:
    // 0x18daa0: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x18daa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18daa4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18DAA4u;
    {
        const bool branch_taken_0x18daa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAA4u;
            // 0x18daa8: 0x121402  srl         $v0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18daa4) {
            ctx->pc = 0x18DB18u;
            goto label_18db18;
        }
    }
    ctx->pc = 0x18DAACu;
    // 0x18daac: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x18daacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x18dab0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DAB0u;
    {
        const bool branch_taken_0x18dab0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAB0u;
            // 0x18dab4: 0x1131023  subu        $v0, $t0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dab0) {
            ctx->pc = 0x18DAD0u;
            goto label_18dad0;
        }
    }
    ctx->pc = 0x18DAB8u;
    // 0x18dab8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18dabc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18dabcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18dac0: 0x121c02  srl         $v1, $s2, 16
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x18dac4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18dac4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18dac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DAC8u;
    {
        const bool branch_taken_0x18dac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAC8u;
            // 0x18dacc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dac8) {
            ctx->pc = 0x18DADCu;
            goto label_18dadc;
        }
    }
    ctx->pc = 0x18DAD0u;
label_18dad0:
    // 0x18dad0: 0x121402  srl         $v0, $s2, 16
    ctx->pc = 0x18dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x18dad4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18dad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dad8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18dadc:
    // 0x18dadc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18dadcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dae0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dae4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18daec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18daecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18daf0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18daf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18daf4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18daf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18daf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18daf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dafc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dafcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18db00: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18db00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18db04: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18db04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18db08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18db08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18db0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18db0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18db10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DB10u;
    {
        const bool branch_taken_0x18db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB10u;
            // 0x18db14: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db10) {
            ctx->pc = 0x18DB24u;
            goto label_18db24;
        }
    }
    ctx->pc = 0x18DB18u;
label_18db18:
    // 0x18db18: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x18db1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x18db20: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x18db20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_18db24:
    // 0x18db24: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18db24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18db28: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18DB28u;
    {
        const bool branch_taken_0x18db28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB28u;
            // 0x18db2c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db28) {
            ctx->pc = 0x18DBA0u;
            goto label_18dba0;
        }
    }
    ctx->pc = 0x18DB30u;
    // 0x18db30: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18db30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18db34: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DB34u;
    {
        const bool branch_taken_0x18db34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB34u;
            // 0x18db38: 0xf31023  subu        $v0, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db34) {
            ctx->pc = 0x18DB58u;
            goto label_18db58;
        }
    }
    ctx->pc = 0x18DB3Cu;
    // 0x18db3c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18db40: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18db40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18db44: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18db44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18db48: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18db48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18db4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18DB4Cu;
    {
        const bool branch_taken_0x18db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB4Cu;
            // 0x18db50: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db4c) {
            ctx->pc = 0x18DB64u;
            goto label_18db64;
        }
    }
    ctx->pc = 0x18DB54u;
    // 0x18db54: 0x0  nop
    ctx->pc = 0x18db54u;
    // NOP
label_18db58:
    // 0x18db58: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18db58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18db5c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18db5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db60: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18db60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18db64:
    // 0x18db64: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18db64u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18db68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18db68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18db6c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18db6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18db70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18db70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18db74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18db74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18db78: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18db78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18db7c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18db7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18db80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18db80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18db84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18db84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18db88: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18db88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18db8c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18db8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18db90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18db90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18db94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18db94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18db98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DB98u;
    {
        const bool branch_taken_0x18db98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB98u;
            // 0x18db9c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db98) {
            ctx->pc = 0x18DBACu;
            goto label_18dbac;
        }
    }
    ctx->pc = 0x18DBA0u;
label_18dba0:
    // 0x18dba0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18dba0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18dba4: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18dba8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18dba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18dbac:
    // 0x18dbac: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x18dbacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18dbb0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18DBB0u;
    {
        const bool branch_taken_0x18dbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBB0u;
            // 0x18dbb4: 0x121402  srl         $v0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbb0) {
            ctx->pc = 0x18DC28u;
            goto label_18dc28;
        }
    }
    ctx->pc = 0x18DBB8u;
    // 0x18dbb8: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x18dbb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x18dbbc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DBBCu;
    {
        const bool branch_taken_0x18dbbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBBCu;
            // 0x18dbc0: 0x1131023  subu        $v0, $t0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbbc) {
            ctx->pc = 0x18DBE0u;
            goto label_18dbe0;
        }
    }
    ctx->pc = 0x18DBC4u;
    // 0x18dbc4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18dbc8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18dbc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18dbcc: 0x121c02  srl         $v1, $s2, 16
    ctx->pc = 0x18dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x18dbd0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18dbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18dbd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18DBD4u;
    {
        const bool branch_taken_0x18dbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBD4u;
            // 0x18dbd8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbd4) {
            ctx->pc = 0x18DBECu;
            goto label_18dbec;
        }
    }
    ctx->pc = 0x18DBDCu;
    // 0x18dbdc: 0x0  nop
    ctx->pc = 0x18dbdcu;
    // NOP
label_18dbe0:
    // 0x18dbe0: 0x121402  srl         $v0, $s2, 16
    ctx->pc = 0x18dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x18dbe4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18dbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dbe8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_18dbec:
    // 0x18dbec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18dbecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dbf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dbf4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dbf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dbf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dbfc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dc00: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18dc00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dc04: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18dc04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18dc08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dc0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dc10: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dc10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dc14: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18dc14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18dc18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dc18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dc1c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dc20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DC20u;
    {
        const bool branch_taken_0x18dc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC20u;
            // 0x18dc24: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc20) {
            ctx->pc = 0x18DC34u;
            goto label_18dc34;
        }
    }
    ctx->pc = 0x18DC28u;
label_18dc28:
    // 0x18dc28: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x18dc28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x18dc2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18dc30: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x18dc30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_18dc34:
    // 0x18dc34: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18dc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18dc38: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18DC38u;
    {
        const bool branch_taken_0x18dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC38u;
            // 0x18dc3c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc38) {
            ctx->pc = 0x18DCB0u;
            goto label_18dcb0;
        }
    }
    ctx->pc = 0x18DC40u;
    // 0x18dc40: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18dc40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18dc44: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DC44u;
    {
        const bool branch_taken_0x18dc44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC44u;
            // 0x18dc48: 0xf31023  subu        $v0, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc44) {
            ctx->pc = 0x18DC68u;
            goto label_18dc68;
        }
    }
    ctx->pc = 0x18DC4Cu;
    // 0x18dc4c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18dc50: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18dc50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18dc54: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18dc58: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18dc58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18dc5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18DC5Cu;
    {
        const bool branch_taken_0x18dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC5Cu;
            // 0x18dc60: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc5c) {
            ctx->pc = 0x18DC74u;
            goto label_18dc74;
        }
    }
    ctx->pc = 0x18DC64u;
    // 0x18dc64: 0x0  nop
    ctx->pc = 0x18dc64u;
    // NOP
label_18dc68:
    // 0x18dc68: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18dc6c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18dc6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc70: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18dc74:
    // 0x18dc74: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18dc74u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dc78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dc78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dc7c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dc7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dc80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dc84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dc84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dc88: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18dc88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dc8c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18dc8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18dc90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dc94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dc94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dc98: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dc98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dc9c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18dc9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18dca0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dca4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dca4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dca8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DCA8u;
    {
        const bool branch_taken_0x18dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCA8u;
            // 0x18dcac: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dca8) {
            ctx->pc = 0x18DCBCu;
            goto label_18dcbc;
        }
    }
    ctx->pc = 0x18DCB0u;
label_18dcb0:
    // 0x18dcb0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18dcb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18dcb4: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18dcb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18dcb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18dcbc:
    // 0x18dcbc: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x18dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x18dcc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18dcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18dcc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x18dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x18dcc8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x18dcc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18dccc: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x18DCCCu;
    {
        const bool branch_taken_0x18dccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCCCu;
            // 0x18dcd0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dccc) {
            ctx->pc = 0x18DAA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18daa0;
        }
    }
    ctx->pc = 0x18DCD4u;
    // 0x18dcd4: 0x10000450  b           . + 4 + (0x450 << 2)
    ctx->pc = 0x18DCD4u;
    {
        const bool branch_taken_0x18dcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCD4u;
            // 0x18dcd8: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcd4) {
            ctx->pc = 0x18EE18u;
            goto label_18ee18;
        }
    }
    ctx->pc = 0x18DCDCu;
    // 0x18dcdc: 0x0  nop
    ctx->pc = 0x18dcdcu;
    // NOP
label_18dce0:
    // 0x18dce0: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x18dce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x18dce4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18DCE4u;
    {
        const bool branch_taken_0x18dce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCE4u;
            // 0x18dce8: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dce4) {
            ctx->pc = 0x18DD60u;
            goto label_18dd60;
        }
    }
    ctx->pc = 0x18DCECu;
    // 0x18dcec: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x18dcecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x18dcf0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18DCF0u;
    {
        const bool branch_taken_0x18dcf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCF0u;
            // 0x18dcf4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcf0) {
            ctx->pc = 0x18DD18u;
            goto label_18dd18;
        }
    }
    ctx->pc = 0x18DCF8u;
    // 0x18dcf8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18dcfc: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18dd00: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18dd00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18dd04: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18dd08: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18dd08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18dd0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18DD0Cu;
    {
        const bool branch_taken_0x18dd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD0Cu;
            // 0x18dd10: 0xae830104  sw          $v1, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd0c) {
            ctx->pc = 0x18DD24u;
            goto label_18dd24;
        }
    }
    ctx->pc = 0x18DD14u;
    // 0x18dd14: 0x0  nop
    ctx->pc = 0x18dd14u;
    // NOP
label_18dd18:
    // 0x18dd18: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x18dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18dd1c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18dd1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd20: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x18dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
label_18dd24:
    // 0x18dd24: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18dd24u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dd28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dd28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dd2c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dd2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dd30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dd30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dd34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dd34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dd38: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18dd38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dd3c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18dd3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18dd40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dd40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dd44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dd44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dd48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dd48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dd4c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18dd4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18dd50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dd50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dd54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dd54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dd58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DD58u;
    {
        const bool branch_taken_0x18dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD58u;
            // 0x18dd5c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd58) {
            ctx->pc = 0x18DD6Cu;
            goto label_18dd6c;
        }
    }
    ctx->pc = 0x18DD60u;
label_18dd60:
    // 0x18dd60: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x18dd60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x18dd64: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x18dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
    // 0x18dd68: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18dd68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18dd6c:
    // 0x18dd6c: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x18dd6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x18dd70: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18DD70u;
    {
        const bool branch_taken_0x18dd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD70u;
            // 0x18dd74: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd70) {
            ctx->pc = 0x18DDE8u;
            goto label_18dde8;
        }
    }
    ctx->pc = 0x18DD78u;
    // 0x18dd78: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x18dd78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x18dd7c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DD7Cu;
    {
        const bool branch_taken_0x18dd7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD7Cu;
            // 0x18dd80: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd7c) {
            ctx->pc = 0x18DDA0u;
            goto label_18dda0;
        }
    }
    ctx->pc = 0x18DD84u;
    // 0x18dd84: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18dd88: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18dd8c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18dd8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18dd90: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x18dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18dd94: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18dd94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18dd98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DD98u;
    {
        const bool branch_taken_0x18dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD98u;
            // 0x18dd9c: 0xae830108  sw          $v1, 0x108($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd98) {
            ctx->pc = 0x18DDACu;
            goto label_18ddac;
        }
    }
    ctx->pc = 0x18DDA0u;
label_18dda0:
    // 0x18dda0: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x18dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18dda4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18dda4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dda8: 0xae820108  sw          $v0, 0x108($s4)
    ctx->pc = 0x18dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
label_18ddac:
    // 0x18ddac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18ddacu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ddb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ddb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ddb4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ddb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ddb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ddb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ddbc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ddbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ddc0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18ddc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ddc4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18ddc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18ddc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ddc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ddcc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ddccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ddd0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ddd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ddd4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18ddd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18ddd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ddd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dddc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dde0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DDE0u;
    {
        const bool branch_taken_0x18dde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDE0u;
            // 0x18dde4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dde0) {
            ctx->pc = 0x18DDF4u;
            goto label_18ddf4;
        }
    }
    ctx->pc = 0x18DDE8u;
label_18dde8:
    // 0x18dde8: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x18dde8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x18ddec: 0xae820108  sw          $v0, 0x108($s4)
    ctx->pc = 0x18ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
    // 0x18ddf0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18ddf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18ddf4:
    // 0x18ddf4: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x18ddf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x18ddf8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18DDF8u;
    {
        const bool branch_taken_0x18ddf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDF8u;
            // 0x18ddfc: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddf8) {
            ctx->pc = 0x18DE70u;
            goto label_18de70;
        }
    }
    ctx->pc = 0x18DE00u;
    // 0x18de00: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x18de00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x18de04: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DE04u;
    {
        const bool branch_taken_0x18de04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE04u;
            // 0x18de08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de04) {
            ctx->pc = 0x18DE28u;
            goto label_18de28;
        }
    }
    ctx->pc = 0x18DE0Cu;
    // 0x18de0c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18de10: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18de10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18de14: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18de14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18de18: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x18de18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18de1c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18de1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18de20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DE20u;
    {
        const bool branch_taken_0x18de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE20u;
            // 0x18de24: 0xae83010c  sw          $v1, 0x10C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de20) {
            ctx->pc = 0x18DE34u;
            goto label_18de34;
        }
    }
    ctx->pc = 0x18DE28u;
label_18de28:
    // 0x18de28: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x18de28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18de2c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18de2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de30: 0xae82010c  sw          $v0, 0x10C($s4)
    ctx->pc = 0x18de30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 2));
label_18de34:
    // 0x18de34: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18de34u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18de38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18de38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18de3c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18de3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18de40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18de40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18de44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18de44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18de48: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18de48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18de4c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18de4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18de50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18de50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18de54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18de54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18de58: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18de58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18de5c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18de5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18de60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18de60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18de64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18de64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18de68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DE68u;
    {
        const bool branch_taken_0x18de68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE68u;
            // 0x18de6c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de68) {
            ctx->pc = 0x18DE7Cu;
            goto label_18de7c;
        }
    }
    ctx->pc = 0x18DE70u;
label_18de70:
    // 0x18de70: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x18de70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x18de74: 0xae82010c  sw          $v0, 0x10C($s4)
    ctx->pc = 0x18de74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 2));
    // 0x18de78: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18de7c:
    // 0x18de7c: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x18de7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x18de80: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18DE80u;
    {
        const bool branch_taken_0x18de80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE80u;
            // 0x18de84: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de80) {
            ctx->pc = 0x18DEF8u;
            goto label_18def8;
        }
    }
    ctx->pc = 0x18DE88u;
    // 0x18de88: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x18de88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x18de8c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DE8Cu;
    {
        const bool branch_taken_0x18de8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE8Cu;
            // 0x18de90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de8c) {
            ctx->pc = 0x18DEB0u;
            goto label_18deb0;
        }
    }
    ctx->pc = 0x18DE94u;
    // 0x18de94: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18de94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18de98: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18de98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18de9c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18de9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18dea0: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x18dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18dea4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18dea4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18dea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DEA8u;
    {
        const bool branch_taken_0x18dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEA8u;
            // 0x18deac: 0xae830110  sw          $v1, 0x110($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dea8) {
            ctx->pc = 0x18DEBCu;
            goto label_18debc;
        }
    }
    ctx->pc = 0x18DEB0u;
label_18deb0:
    // 0x18deb0: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x18deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x18deb4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18deb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18deb8: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x18deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
label_18debc:
    // 0x18debc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18debcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dec0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dec4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dec8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18decc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18deccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ded0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18ded0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ded4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18ded4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18ded8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ded8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dedc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dedcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dee0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dee0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dee4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18dee4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18dee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18deec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18deecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18def0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DEF0u;
    {
        const bool branch_taken_0x18def0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEF0u;
            // 0x18def4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18def0) {
            ctx->pc = 0x18DF04u;
            goto label_18df04;
        }
    }
    ctx->pc = 0x18DEF8u;
label_18def8:
    // 0x18def8: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x18def8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x18defc: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x18defcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
    // 0x18df00: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18df00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18df04:
    // 0x18df04: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x18df04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18df08: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18DF08u;
    {
        const bool branch_taken_0x18df08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF08u;
            // 0x18df0c: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df08) {
            ctx->pc = 0x18DF80u;
            goto label_18df80;
        }
    }
    ctx->pc = 0x18DF10u;
    // 0x18df10: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x18df10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x18df14: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DF14u;
    {
        const bool branch_taken_0x18df14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF14u;
            // 0x18df18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df14) {
            ctx->pc = 0x18DF38u;
            goto label_18df38;
        }
    }
    ctx->pc = 0x18DF1Cu;
    // 0x18df1c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18df20: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18df20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18df24: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18df24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18df28: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x18df28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18df2c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18df2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18df30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DF30u;
    {
        const bool branch_taken_0x18df30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF30u;
            // 0x18df34: 0xae830114  sw          $v1, 0x114($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df30) {
            ctx->pc = 0x18DF44u;
            goto label_18df44;
        }
    }
    ctx->pc = 0x18DF38u;
label_18df38:
    // 0x18df38: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18df38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18df3c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18df3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df40: 0xae820114  sw          $v0, 0x114($s4)
    ctx->pc = 0x18df40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 2));
label_18df44:
    // 0x18df44: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18df44u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18df48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18df48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18df4c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18df4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18df50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18df50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18df54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18df54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18df58: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18df58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18df5c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18df5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18df60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18df60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18df64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18df64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18df68: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18df68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18df6c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18df6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18df70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18df70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18df74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18df74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18df78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DF78u;
    {
        const bool branch_taken_0x18df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF78u;
            // 0x18df7c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df78) {
            ctx->pc = 0x18DF8Cu;
            goto label_18df8c;
        }
    }
    ctx->pc = 0x18DF80u;
label_18df80:
    // 0x18df80: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x18df80u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18df84: 0xae820114  sw          $v0, 0x114($s4)
    ctx->pc = 0x18df84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 2));
    // 0x18df88: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18df88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18df8c:
    // 0x18df8c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x18df8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18df90: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18DF90u;
    {
        const bool branch_taken_0x18df90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF90u;
            // 0x18df94: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df90) {
            ctx->pc = 0x18E008u;
            goto label_18e008;
        }
    }
    ctx->pc = 0x18DF98u;
    // 0x18df98: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x18df98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x18df9c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DF9Cu;
    {
        const bool branch_taken_0x18df9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF9Cu;
            // 0x18dfa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df9c) {
            ctx->pc = 0x18DFC0u;
            goto label_18dfc0;
        }
    }
    ctx->pc = 0x18DFA4u;
    // 0x18dfa4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18dfa8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18dfac: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18dfacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18dfb0: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x18dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18dfb4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18dfb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18dfb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DFB8u;
    {
        const bool branch_taken_0x18dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFB8u;
            // 0x18dfbc: 0xae830118  sw          $v1, 0x118($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfb8) {
            ctx->pc = 0x18DFCCu;
            goto label_18dfcc;
        }
    }
    ctx->pc = 0x18DFC0u;
label_18dfc0:
    // 0x18dfc0: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18dfc4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18dfc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfc8: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x18dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
label_18dfcc:
    // 0x18dfcc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18dfccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dfd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dfd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dfd4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dfd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dfd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dfd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dfdc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dfe0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18dfe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dfe4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18dfe4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18dfe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dfe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dfec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dfecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18dff0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18dff0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dff4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18dff4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18dff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dffc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e000: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E000u;
    {
        const bool branch_taken_0x18e000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E000u;
            // 0x18e004: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e000) {
            ctx->pc = 0x18E014u;
            goto label_18e014;
        }
    }
    ctx->pc = 0x18E008u;
label_18e008:
    // 0x18e008: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x18e008u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18e00c: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x18e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
    // 0x18e010: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18e010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18e014:
    // 0x18e014: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e018: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E018u;
    {
        const bool branch_taken_0x18e018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E018u;
            // 0x18e01c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e018) {
            ctx->pc = 0x18E090u;
            goto label_18e090;
        }
    }
    ctx->pc = 0x18E020u;
    // 0x18e020: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e020u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e024: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E024u;
    {
        const bool branch_taken_0x18e024 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E024u;
            // 0x18e028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e024) {
            ctx->pc = 0x18E048u;
            goto label_18e048;
        }
    }
    ctx->pc = 0x18E02Cu;
    // 0x18e02c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e030: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e030u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e034: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e034u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e038: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e038u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e03c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e03cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E040u;
    {
        const bool branch_taken_0x18e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E040u;
            // 0x18e044: 0xae83011c  sw          $v1, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e040) {
            ctx->pc = 0x18E054u;
            goto label_18e054;
        }
    }
    ctx->pc = 0x18E048u;
label_18e048:
    // 0x18e048: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e048u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e04c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e050: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x18e050u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
label_18e054:
    // 0x18e054: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e054u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e058: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e05c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e05cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e060: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e064: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e064u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e068: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e068u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e06c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e06cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e070: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e074: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e074u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e078: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e078u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e07c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e07cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e080: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e084: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e084u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e088: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E088u;
    {
        const bool branch_taken_0x18e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E088u;
            // 0x18e08c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e088) {
            ctx->pc = 0x18E09Cu;
            goto label_18e09c;
        }
    }
    ctx->pc = 0x18E090u;
label_18e090:
    // 0x18e090: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e090u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e094: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x18e094u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
    // 0x18e098: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e09c:
    // 0x18e09c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e0a0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E0A0u;
    {
        const bool branch_taken_0x18e0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0A0u;
            // 0x18e0a4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0a0) {
            ctx->pc = 0x18E118u;
            goto label_18e118;
        }
    }
    ctx->pc = 0x18E0A8u;
    // 0x18e0a8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e0a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e0ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E0ACu;
    {
        const bool branch_taken_0x18e0ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0ACu;
            // 0x18e0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0ac) {
            ctx->pc = 0x18E0D0u;
            goto label_18e0d0;
        }
    }
    ctx->pc = 0x18E0B4u;
    // 0x18e0b4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e0b8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e0bc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e0bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e0c0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e0c4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e0c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E0C8u;
    {
        const bool branch_taken_0x18e0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0C8u;
            // 0x18e0cc: 0xae830120  sw          $v1, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0c8) {
            ctx->pc = 0x18E0DCu;
            goto label_18e0dc;
        }
    }
    ctx->pc = 0x18E0D0u;
label_18e0d0:
    // 0x18e0d0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e0d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0d8: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x18e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
label_18e0dc:
    // 0x18e0dc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e0dcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e0e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e0e4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e0e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e0e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e0ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e0f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e0f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e0f4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e0f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e0f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e0f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e0fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e100: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e104: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e104u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e108: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e10c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e10cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e110: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E110u;
    {
        const bool branch_taken_0x18e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E110u;
            // 0x18e114: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e110) {
            ctx->pc = 0x18E124u;
            goto label_18e124;
        }
    }
    ctx->pc = 0x18E118u;
label_18e118:
    // 0x18e118: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e118u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e11c: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x18e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
    // 0x18e120: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e124:
    // 0x18e124: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e128: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E128u;
    {
        const bool branch_taken_0x18e128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E128u;
            // 0x18e12c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e128) {
            ctx->pc = 0x18E1A0u;
            goto label_18e1a0;
        }
    }
    ctx->pc = 0x18E130u;
    // 0x18e130: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e134: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E134u;
    {
        const bool branch_taken_0x18e134 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E134u;
            // 0x18e138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e134) {
            ctx->pc = 0x18E158u;
            goto label_18e158;
        }
    }
    ctx->pc = 0x18E13Cu;
    // 0x18e13c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e140: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e140u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e144: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e144u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e148: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e14c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e150: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E150u;
    {
        const bool branch_taken_0x18e150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E150u;
            // 0x18e154: 0xae830124  sw          $v1, 0x124($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e150) {
            ctx->pc = 0x18E164u;
            goto label_18e164;
        }
    }
    ctx->pc = 0x18E158u;
label_18e158:
    // 0x18e158: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e15c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e160: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x18e160u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
label_18e164:
    // 0x18e164: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e164u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e168: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e16c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e16cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e174: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e174u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e178: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e178u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e17c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e17cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e180: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e184: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e184u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e188: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e188u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e18c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e18cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e190: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e194: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e194u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e198: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E198u;
    {
        const bool branch_taken_0x18e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E198u;
            // 0x18e19c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e198) {
            ctx->pc = 0x18E1ACu;
            goto label_18e1ac;
        }
    }
    ctx->pc = 0x18E1A0u;
label_18e1a0:
    // 0x18e1a0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e1a4: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x18e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    // 0x18e1a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e1a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e1ac:
    // 0x18e1ac: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e1b0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E1B0u;
    {
        const bool branch_taken_0x18e1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1B0u;
            // 0x18e1b4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1b0) {
            ctx->pc = 0x18E228u;
            goto label_18e228;
        }
    }
    ctx->pc = 0x18E1B8u;
    // 0x18e1b8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e1b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e1bc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E1BCu;
    {
        const bool branch_taken_0x18e1bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1BCu;
            // 0x18e1c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1bc) {
            ctx->pc = 0x18E1E0u;
            goto label_18e1e0;
        }
    }
    ctx->pc = 0x18E1C4u;
    // 0x18e1c4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e1c8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e1cc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e1ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e1d0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e1d4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e1d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E1D8u;
    {
        const bool branch_taken_0x18e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1D8u;
            // 0x18e1dc: 0xae830128  sw          $v1, 0x128($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1d8) {
            ctx->pc = 0x18E1ECu;
            goto label_18e1ec;
        }
    }
    ctx->pc = 0x18E1E0u;
label_18e1e0:
    // 0x18e1e0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e1e4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1e8: 0xae820128  sw          $v0, 0x128($s4)
    ctx->pc = 0x18e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 2));
label_18e1ec:
    // 0x18e1ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e1ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e1f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e1f4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e1f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e1f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e1fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e200: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e204: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e204u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e208: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e20c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e20cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e210: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e210u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e214: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e214u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e21c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e21cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e220: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E220u;
    {
        const bool branch_taken_0x18e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E220u;
            // 0x18e224: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e220) {
            ctx->pc = 0x18E234u;
            goto label_18e234;
        }
    }
    ctx->pc = 0x18E228u;
label_18e228:
    // 0x18e228: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e228u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e22c: 0xae820128  sw          $v0, 0x128($s4)
    ctx->pc = 0x18e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 2));
    // 0x18e230: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e234:
    // 0x18e234: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e238: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E238u;
    {
        const bool branch_taken_0x18e238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E238u;
            // 0x18e23c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e238) {
            ctx->pc = 0x18E2B0u;
            goto label_18e2b0;
        }
    }
    ctx->pc = 0x18E240u;
    // 0x18e240: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e244: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E244u;
    {
        const bool branch_taken_0x18e244 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E244u;
            // 0x18e248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e244) {
            ctx->pc = 0x18E268u;
            goto label_18e268;
        }
    }
    ctx->pc = 0x18E24Cu;
    // 0x18e24c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e250: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e254: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e254u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e258: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e258u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e25c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e25cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e260: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E260u;
    {
        const bool branch_taken_0x18e260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E260u;
            // 0x18e264: 0xae83012c  sw          $v1, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e260) {
            ctx->pc = 0x18E274u;
            goto label_18e274;
        }
    }
    ctx->pc = 0x18E268u;
label_18e268:
    // 0x18e268: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e268u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e26c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e270: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x18e270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
label_18e274:
    // 0x18e274: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e274u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e27c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e27cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e280: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e284: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e284u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e288: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e288u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e28c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e28cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e290: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e294: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e294u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e298: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e298u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e29c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e29cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e2a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e2a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e2a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E2A8u;
    {
        const bool branch_taken_0x18e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2A8u;
            // 0x18e2ac: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2a8) {
            ctx->pc = 0x18E2BCu;
            goto label_18e2bc;
        }
    }
    ctx->pc = 0x18E2B0u;
label_18e2b0:
    // 0x18e2b0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e2b4: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x18e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
    // 0x18e2b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e2bc:
    // 0x18e2bc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e2c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E2C0u;
    {
        const bool branch_taken_0x18e2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2C0u;
            // 0x18e2c4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2c0) {
            ctx->pc = 0x18E338u;
            goto label_18e338;
        }
    }
    ctx->pc = 0x18E2C8u;
    // 0x18e2c8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e2c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e2cc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E2CCu;
    {
        const bool branch_taken_0x18e2cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2CCu;
            // 0x18e2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2cc) {
            ctx->pc = 0x18E2F0u;
            goto label_18e2f0;
        }
    }
    ctx->pc = 0x18E2D4u;
    // 0x18e2d4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e2d8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e2dc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e2dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e2e0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e2e4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e2e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E2E8u;
    {
        const bool branch_taken_0x18e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2E8u;
            // 0x18e2ec: 0xae830130  sw          $v1, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2e8) {
            ctx->pc = 0x18E2FCu;
            goto label_18e2fc;
        }
    }
    ctx->pc = 0x18E2F0u;
label_18e2f0:
    // 0x18e2f0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e2f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2f8: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x18e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
label_18e2fc:
    // 0x18e2fc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e2fcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e304: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e304u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e308: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e30c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e30cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e310: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e314: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e314u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e318: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e31c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e31cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e320: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e324: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e324u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e328: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e32c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e32cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E330u;
    {
        const bool branch_taken_0x18e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E330u;
            // 0x18e334: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e330) {
            ctx->pc = 0x18E344u;
            goto label_18e344;
        }
    }
    ctx->pc = 0x18E338u;
label_18e338:
    // 0x18e338: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e338u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e33c: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x18e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
    // 0x18e340: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e344:
    // 0x18e344: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e348: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E348u;
    {
        const bool branch_taken_0x18e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E348u;
            // 0x18e34c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e348) {
            ctx->pc = 0x18E3C0u;
            goto label_18e3c0;
        }
    }
    ctx->pc = 0x18E350u;
    // 0x18e350: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e354: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E354u;
    {
        const bool branch_taken_0x18e354 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E354u;
            // 0x18e358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e354) {
            ctx->pc = 0x18E378u;
            goto label_18e378;
        }
    }
    ctx->pc = 0x18E35Cu;
    // 0x18e35c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e360: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e360u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e364: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e364u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e368: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e36c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e36cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e370: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E370u;
    {
        const bool branch_taken_0x18e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E370u;
            // 0x18e374: 0xae830134  sw          $v1, 0x134($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e370) {
            ctx->pc = 0x18E384u;
            goto label_18e384;
        }
    }
    ctx->pc = 0x18E378u;
label_18e378:
    // 0x18e378: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e378u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e37c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e380: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x18e380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_18e384:
    // 0x18e384: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e384u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e38c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e38cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e390: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e394: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e394u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e398: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e398u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e39c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e39cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e3a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e3a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e3a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e3a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e3ac: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e3acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e3b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e3b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e3b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E3B8u;
    {
        const bool branch_taken_0x18e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3B8u;
            // 0x18e3bc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3b8) {
            ctx->pc = 0x18E3CCu;
            goto label_18e3cc;
        }
    }
    ctx->pc = 0x18E3C0u;
label_18e3c0:
    // 0x18e3c0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e3c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e3c4: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x18e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
    // 0x18e3c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e3c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e3cc:
    // 0x18e3cc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e3d0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E3D0u;
    {
        const bool branch_taken_0x18e3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3D0u;
            // 0x18e3d4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3d0) {
            ctx->pc = 0x18E448u;
            goto label_18e448;
        }
    }
    ctx->pc = 0x18E3D8u;
    // 0x18e3d8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e3dc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E3DCu;
    {
        const bool branch_taken_0x18e3dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3DCu;
            // 0x18e3e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3dc) {
            ctx->pc = 0x18E400u;
            goto label_18e400;
        }
    }
    ctx->pc = 0x18E3E4u;
    // 0x18e3e4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e3e8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e3ec: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e3ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e3f0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e3f4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e3f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E3F8u;
    {
        const bool branch_taken_0x18e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3F8u;
            // 0x18e3fc: 0xae830138  sw          $v1, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3f8) {
            ctx->pc = 0x18E40Cu;
            goto label_18e40c;
        }
    }
    ctx->pc = 0x18E400u;
label_18e400:
    // 0x18e400: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e404: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e408: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x18e408u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
label_18e40c:
    // 0x18e40c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e40cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e410: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e414: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e414u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e418: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e41c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e41cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e420: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e420u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e424: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e424u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e428: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e42c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e42cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e430: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e434: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e434u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e438: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e43c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e43cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e440: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E440u;
    {
        const bool branch_taken_0x18e440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E440u;
            // 0x18e444: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e440) {
            ctx->pc = 0x18E454u;
            goto label_18e454;
        }
    }
    ctx->pc = 0x18E448u;
label_18e448:
    // 0x18e448: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e448u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e44c: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x18e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
    // 0x18e450: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e454:
    // 0x18e454: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e458: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E458u;
    {
        const bool branch_taken_0x18e458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E458u;
            // 0x18e45c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e458) {
            ctx->pc = 0x18E4D0u;
            goto label_18e4d0;
        }
    }
    ctx->pc = 0x18E460u;
    // 0x18e460: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e464: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E464u;
    {
        const bool branch_taken_0x18e464 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E464u;
            // 0x18e468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e464) {
            ctx->pc = 0x18E488u;
            goto label_18e488;
        }
    }
    ctx->pc = 0x18E46Cu;
    // 0x18e46c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e470: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e474: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e474u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e478: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e47c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e47cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e480: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E480u;
    {
        const bool branch_taken_0x18e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E480u;
            // 0x18e484: 0xae83013c  sw          $v1, 0x13C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e480) {
            ctx->pc = 0x18E494u;
            goto label_18e494;
        }
    }
    ctx->pc = 0x18E488u;
label_18e488:
    // 0x18e488: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e488u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e48c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e48cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e490: 0xae82013c  sw          $v0, 0x13C($s4)
    ctx->pc = 0x18e490u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 2));
label_18e494:
    // 0x18e494: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e494u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e49c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e49cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e4a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e4a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e4a8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e4a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e4ac: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e4acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e4b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e4b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e4b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e4b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e4bc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e4bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e4c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e4c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e4c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E4C8u;
    {
        const bool branch_taken_0x18e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4C8u;
            // 0x18e4cc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4c8) {
            ctx->pc = 0x18E4DCu;
            goto label_18e4dc;
        }
    }
    ctx->pc = 0x18E4D0u;
label_18e4d0:
    // 0x18e4d0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e4d4: 0xae82013c  sw          $v0, 0x13C($s4)
    ctx->pc = 0x18e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 2));
    // 0x18e4d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e4d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e4dc:
    // 0x18e4dc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e4e0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E4E0u;
    {
        const bool branch_taken_0x18e4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4E0u;
            // 0x18e4e4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4e0) {
            ctx->pc = 0x18E558u;
            goto label_18e558;
        }
    }
    ctx->pc = 0x18E4E8u;
    // 0x18e4e8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e4ec: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E4ECu;
    {
        const bool branch_taken_0x18e4ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4ECu;
            // 0x18e4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4ec) {
            ctx->pc = 0x18E510u;
            goto label_18e510;
        }
    }
    ctx->pc = 0x18E4F4u;
    // 0x18e4f4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e4f8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e4fc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e4fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e500: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e504: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e504u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E508u;
    {
        const bool branch_taken_0x18e508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E508u;
            // 0x18e50c: 0xae830140  sw          $v1, 0x140($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e508) {
            ctx->pc = 0x18E51Cu;
            goto label_18e51c;
        }
    }
    ctx->pc = 0x18E510u;
label_18e510:
    // 0x18e510: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e514: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e518: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x18e518u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
label_18e51c:
    // 0x18e51c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e51cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e520: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e524: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e528: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e52c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e52cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e530: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e530u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e534: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e534u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e53c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e53cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e540: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e544: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e548: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e54c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e54cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e550: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E550u;
    {
        const bool branch_taken_0x18e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E550u;
            // 0x18e554: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e550) {
            ctx->pc = 0x18E564u;
            goto label_18e564;
        }
    }
    ctx->pc = 0x18E558u;
label_18e558:
    // 0x18e558: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e558u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e55c: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x18e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
    // 0x18e560: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e564:
    // 0x18e564: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x18e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x18e568: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x18E568u;
    {
        const bool branch_taken_0x18e568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E568u;
            // 0x18e56c: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e568) {
            ctx->pc = 0x18E7D8u;
            goto label_18e7d8;
        }
    }
    ctx->pc = 0x18E570u;
    // 0x18e570: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E570u;
    {
        const bool branch_taken_0x18e570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E570u;
            // 0x18e574: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e570) {
            ctx->pc = 0x18E5E8u;
            goto label_18e5e8;
        }
    }
    ctx->pc = 0x18E578u;
    // 0x18e578: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e57c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E57Cu;
    {
        const bool branch_taken_0x18e57c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E57Cu;
            // 0x18e580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e57c) {
            ctx->pc = 0x18E5A0u;
            goto label_18e5a0;
        }
    }
    ctx->pc = 0x18E584u;
    // 0x18e584: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e584u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e588: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e588u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e58c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e58cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e590: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e594: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e594u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e598: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E598u;
    {
        const bool branch_taken_0x18e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E598u;
            // 0x18e59c: 0xae830144  sw          $v1, 0x144($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e598) {
            ctx->pc = 0x18E5ACu;
            goto label_18e5ac;
        }
    }
    ctx->pc = 0x18E5A0u;
label_18e5a0:
    // 0x18e5a0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e5a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5a8: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x18e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
label_18e5ac:
    // 0x18e5ac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e5acu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e5b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e5b4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e5b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e5b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e5bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e5c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e5c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e5c4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e5c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e5c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e5cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e5d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e5d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e5d4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e5d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e5d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e5dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e5e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E5E0u;
    {
        const bool branch_taken_0x18e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E5E0u;
            // 0x18e5e4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5e0) {
            ctx->pc = 0x18E5F4u;
            goto label_18e5f4;
        }
    }
    ctx->pc = 0x18E5E8u;
label_18e5e8:
    // 0x18e5e8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e5e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e5ec: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x18e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
    // 0x18e5f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e5f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e5f4:
    // 0x18e5f4: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x18e5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x18e5f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E5F8u;
    {
        const bool branch_taken_0x18e5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E5F8u;
            // 0x18e5fc: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5f8) {
            ctx->pc = 0x18E670u;
            goto label_18e670;
        }
    }
    ctx->pc = 0x18E600u;
    // 0x18e600: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x18e600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x18e604: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E604u;
    {
        const bool branch_taken_0x18e604 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E604u;
            // 0x18e608: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e604) {
            ctx->pc = 0x18E628u;
            goto label_18e628;
        }
    }
    ctx->pc = 0x18E60Cu;
    // 0x18e60c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e610: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e610u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e614: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e614u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e618: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x18e618u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x18e61c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e61cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E620u;
    {
        const bool branch_taken_0x18e620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E620u;
            // 0x18e624: 0xae830148  sw          $v1, 0x148($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e620) {
            ctx->pc = 0x18E634u;
            goto label_18e634;
        }
    }
    ctx->pc = 0x18E628u;
label_18e628:
    // 0x18e628: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x18e628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x18e62c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e630: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x18e630u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
label_18e634:
    // 0x18e634: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e634u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e638: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e63c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e63cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e640: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e644: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e644u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e648: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e648u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e64c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e64cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e650: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e654: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e654u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e658: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e658u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e65c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e65cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e660: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e664: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e664u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e668: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E668u;
    {
        const bool branch_taken_0x18e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E668u;
            // 0x18e66c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e668) {
            ctx->pc = 0x18E67Cu;
            goto label_18e67c;
        }
    }
    ctx->pc = 0x18E670u;
label_18e670:
    // 0x18e670: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x18e670u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x18e674: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x18e674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
    // 0x18e678: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x18e678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_18e67c:
    // 0x18e67c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e680: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E680u;
    {
        const bool branch_taken_0x18e680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E680u;
            // 0x18e684: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e680) {
            ctx->pc = 0x18E6F8u;
            goto label_18e6f8;
        }
    }
    ctx->pc = 0x18E688u;
    // 0x18e688: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e68c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E68Cu;
    {
        const bool branch_taken_0x18e68c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E68Cu;
            // 0x18e690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e68c) {
            ctx->pc = 0x18E6B0u;
            goto label_18e6b0;
        }
    }
    ctx->pc = 0x18E694u;
    // 0x18e694: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e698: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e698u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e69c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e69cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e6a0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e6a4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e6a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e6a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E6A8u;
    {
        const bool branch_taken_0x18e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6A8u;
            // 0x18e6ac: 0xae83014c  sw          $v1, 0x14C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6a8) {
            ctx->pc = 0x18E6BCu;
            goto label_18e6bc;
        }
    }
    ctx->pc = 0x18E6B0u;
label_18e6b0:
    // 0x18e6b0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e6b4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e6b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6b8: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x18e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
label_18e6bc:
    // 0x18e6bc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e6bcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e6c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e6c4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e6c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e6c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e6cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e6d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e6d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e6d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e6d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e6d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e6dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e6e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e6e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e6e4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e6e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e6e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e6ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e6f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E6F0u;
    {
        const bool branch_taken_0x18e6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6F0u;
            // 0x18e6f4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6f0) {
            ctx->pc = 0x18E704u;
            goto label_18e704;
        }
    }
    ctx->pc = 0x18E6F8u;
label_18e6f8:
    // 0x18e6f8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e6fc: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x18e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
    // 0x18e700: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e704:
    // 0x18e704: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x18e704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x18e708: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E708u;
    {
        const bool branch_taken_0x18e708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E708u;
            // 0x18e70c: 0x121642  srl         $v0, $s2, 25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e708) {
            ctx->pc = 0x18E780u;
            goto label_18e780;
        }
    }
    ctx->pc = 0x18E710u;
    // 0x18e710: 0x2673ffe7  addiu       $s3, $s3, -0x19
    ctx->pc = 0x18e710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967271));
    // 0x18e714: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E714u;
    {
        const bool branch_taken_0x18e714 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E714u;
            // 0x18e718: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e714) {
            ctx->pc = 0x18E738u;
            goto label_18e738;
        }
    }
    ctx->pc = 0x18E71Cu;
    // 0x18e71c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e720: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e724: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e724u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e728: 0x121e42  srl         $v1, $s2, 25
    ctx->pc = 0x18e728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x18e72c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e72cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e730: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E730u;
    {
        const bool branch_taken_0x18e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E730u;
            // 0x18e734: 0xae830150  sw          $v1, 0x150($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e730) {
            ctx->pc = 0x18E744u;
            goto label_18e744;
        }
    }
    ctx->pc = 0x18E738u;
label_18e738:
    // 0x18e738: 0x121642  srl         $v0, $s2, 25
    ctx->pc = 0x18e738u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x18e73c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e740: 0xae820150  sw          $v0, 0x150($s4)
    ctx->pc = 0x18e740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 2));
label_18e744:
    // 0x18e744: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e748: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e74c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e74cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e750: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e754: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e754u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e758: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e758u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e75c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e75cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e760: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e764: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e764u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e768: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e76c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e76cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e774: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e774u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e778: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E778u;
    {
        const bool branch_taken_0x18e778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E778u;
            // 0x18e77c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e778) {
            ctx->pc = 0x18E78Cu;
            goto label_18e78c;
        }
    }
    ctx->pc = 0x18E780u;
label_18e780:
    // 0x18e780: 0x1291c0  sll         $s2, $s2, 7
    ctx->pc = 0x18e780u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x18e784: 0xae820150  sw          $v0, 0x150($s4)
    ctx->pc = 0x18e784u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 2));
    // 0x18e788: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x18e788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_18e78c:
    // 0x18e78c: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x18e78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x18e790: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18E790u;
    {
        const bool branch_taken_0x18e790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E790u;
            // 0x18e794: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e790) {
            ctx->pc = 0x18E7D0u;
            goto label_18e7d0;
        }
    }
    ctx->pc = 0x18E798u;
    // 0x18e798: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x18e798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x18e79c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E79Cu;
    {
        const bool branch_taken_0x18e79c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E79Cu;
            // 0x18e7a0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e79c) {
            ctx->pc = 0x18E7C0u;
            goto label_18e7c0;
        }
    }
    ctx->pc = 0x18E7A4u;
    // 0x18e7a4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e7a8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e7ac: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e7acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e7b0: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x18e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18e7b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E7B4u;
    {
        const bool branch_taken_0x18e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7B4u;
            // 0x18e7b8: 0xae830154  sw          $v1, 0x154($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7b4) {
            ctx->pc = 0x18E7C8u;
            goto label_18e7c8;
        }
    }
    ctx->pc = 0x18E7BCu;
    // 0x18e7bc: 0x0  nop
    ctx->pc = 0x18e7bcu;
    // NOP
label_18e7c0:
    // 0x18e7c0: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x18e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x18e7c4: 0xae820154  sw          $v0, 0x154($s4)
    ctx->pc = 0x18e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
label_18e7c8:
    // 0x18e7c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E7C8u;
    {
        const bool branch_taken_0x18e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7C8u;
            // 0x18e7cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7c8) {
            ctx->pc = 0x18E7D8u;
            goto label_18e7d8;
        }
    }
    ctx->pc = 0x18E7D0u;
label_18e7d0:
    // 0x18e7d0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x18e7d4: 0xae820154  sw          $v0, 0x154($s4)
    ctx->pc = 0x18e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
label_18e7d8:
    // 0x18e7d8: 0xc062c12  jal         func_18B048
    ctx->pc = 0x18E7D8u;
    SET_GPR_U32(ctx, 31, 0x18E7E0u);
    ctx->pc = 0x18E7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7D8u;
            // 0x18e7dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B048u;
    if (runtime->hasFunction(0x18B048u)) {
        auto targetFn = runtime->lookupFunction(0x18B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7E0u; }
        if (ctx->pc != 0x18E7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B048_0x18b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7E0u; }
        if (ctx->pc != 0x18E7E0u) { return; }
    }
    ctx->pc = 0x18E7E0u;
label_18e7e0:
    // 0x18e7e0: 0xc062c52  jal         func_18B148
    ctx->pc = 0x18E7E0u;
    SET_GPR_U32(ctx, 31, 0x18E7E8u);
    ctx->pc = 0x18E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7E0u;
            // 0x18e7e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B148u;
    if (runtime->hasFunction(0x18B148u)) {
        auto targetFn = runtime->lookupFunction(0x18B148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7E8u; }
        if (ctx->pc != 0x18E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B148_0x18b148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7E8u; }
        if (ctx->pc != 0x18E7E8u) { return; }
    }
    ctx->pc = 0x18E7E8u;
label_18e7e8:
    // 0x18e7e8: 0x8e8203c4  lw          $v0, 0x3C4($s4)
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 964)));
    // 0x18e7ec: 0x50400189  beql        $v0, $zero, . + 4 + (0x189 << 2)
    ctx->pc = 0x18E7ECu;
    {
        const bool branch_taken_0x18e7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e7ec) {
            ctx->pc = 0x18E7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7ECu;
            // 0x18e7f0: 0xaea00174  sw          $zero, 0x174($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18E7F4u;
    // 0x18e7f4: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x18E7F4u;
    {
        const bool branch_taken_0x18e7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7F4u;
            // 0x18e7f8: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7f4) {
            ctx->pc = 0x18EE18u;
            goto label_18ee18;
        }
    }
    ctx->pc = 0x18E7FCu;
    // 0x18e7fc: 0x0  nop
    ctx->pc = 0x18e7fcu;
    // NOP
label_18e800:
    // 0x18e800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e804: 0x2a630016  slti        $v1, $s3, 0x16
    ctx->pc = 0x18e804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x18e808: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E808u;
    {
        const bool branch_taken_0x18e808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E808u;
            // 0x18e80c: 0xae820314  sw          $v0, 0x314($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e808) {
            ctx->pc = 0x18E880u;
            goto label_18e880;
        }
    }
    ctx->pc = 0x18E810u;
    // 0x18e810: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x18e814: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E814u;
    {
        const bool branch_taken_0x18e814 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E814u;
            // 0x18e818: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e814) {
            ctx->pc = 0x18E838u;
            goto label_18e838;
        }
    }
    ctx->pc = 0x18E81Cu;
    // 0x18e81c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e820: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e820u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e824: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e824u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e828: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x18e828u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x18e82c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e82cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e830: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E830u;
    {
        const bool branch_taken_0x18e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E830u;
            // 0x18e834: 0xae830184  sw          $v1, 0x184($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e830) {
            ctx->pc = 0x18E844u;
            goto label_18e844;
        }
    }
    ctx->pc = 0x18E838u;
label_18e838:
    // 0x18e838: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x18e838u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x18e83c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e83cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e840: 0xae820184  sw          $v0, 0x184($s4)
    ctx->pc = 0x18e840u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 2));
label_18e844:
    // 0x18e844: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e844u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e848: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e84c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e84cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e850: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e854: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e854u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e858: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e858u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e85c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e85cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e864: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e864u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e868: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e868u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e86c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e86cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e870: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e874: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e878: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18E878u;
    {
        const bool branch_taken_0x18e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E878u;
            // 0x18e87c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e878) {
            ctx->pc = 0x18E890u;
            goto label_18e890;
        }
    }
    ctx->pc = 0x18E880u;
label_18e880:
    // 0x18e880: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x18e884: 0x129280  sll         $s2, $s2, 10
    ctx->pc = 0x18e884u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x18e888: 0xae820184  sw          $v0, 0x184($s4)
    ctx->pc = 0x18e888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 2));
    // 0x18e88c: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x18e88cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
label_18e890:
    // 0x18e890: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e894: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18E894u;
    {
        const bool branch_taken_0x18e894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E894u;
            // 0x18e898: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e894) {
            ctx->pc = 0x18E910u;
            goto label_18e910;
        }
    }
    ctx->pc = 0x18E89Cu;
    // 0x18e89c: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e89cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e8a0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E8A0u;
    {
        const bool branch_taken_0x18e8a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8A0u;
            // 0x18e8a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8a0) {
            ctx->pc = 0x18E8C8u;
            goto label_18e8c8;
        }
    }
    ctx->pc = 0x18E8A8u;
    // 0x18e8a8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e8ac: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e8b0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e8b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e8b4: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e8b8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e8bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18E8BCu;
    {
        const bool branch_taken_0x18e8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8BCu;
            // 0x18e8c0: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8bc) {
            ctx->pc = 0x18E8D4u;
            goto label_18e8d4;
        }
    }
    ctx->pc = 0x18E8C4u;
    // 0x18e8c4: 0x0  nop
    ctx->pc = 0x18e8c4u;
    // NOP
label_18e8c8:
    // 0x18e8c8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e8cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8d0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18e8d4:
    // 0x18e8d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e8d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e8d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e8dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e8dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e8e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e8e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e8e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e8e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e8ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e8ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e8f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e8f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e8f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e8f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e8fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e8fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e900: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e904: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e904u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e908: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E908u;
    {
        const bool branch_taken_0x18e908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E908u;
            // 0x18e90c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e908) {
            ctx->pc = 0x18E91Cu;
            goto label_18e91c;
        }
    }
    ctx->pc = 0x18E910u;
label_18e910:
    // 0x18e910: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18e910u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18e914: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18e914u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18e918: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18e91c:
    // 0x18e91c: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x18e91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x18e920: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E920u;
    {
        const bool branch_taken_0x18e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E920u;
            // 0x18e924: 0x121442  srl         $v0, $s2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e920) {
            ctx->pc = 0x18E998u;
            goto label_18e998;
        }
    }
    ctx->pc = 0x18E928u;
    // 0x18e928: 0x2673ffef  addiu       $s3, $s3, -0x11
    ctx->pc = 0x18e928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
    // 0x18e92c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E92Cu;
    {
        const bool branch_taken_0x18e92c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E92Cu;
            // 0x18e930: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e92c) {
            ctx->pc = 0x18E950u;
            goto label_18e950;
        }
    }
    ctx->pc = 0x18E934u;
    // 0x18e934: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e938: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e93c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e93cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e940: 0x121c42  srl         $v1, $s2, 17
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x18e944: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e944u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e948: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E948u;
    {
        const bool branch_taken_0x18e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E948u;
            // 0x18e94c: 0xae830188  sw          $v1, 0x188($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e948) {
            ctx->pc = 0x18E95Cu;
            goto label_18e95c;
        }
    }
    ctx->pc = 0x18E950u;
label_18e950:
    // 0x18e950: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x18e950u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x18e954: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e958: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x18e958u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
label_18e95c:
    // 0x18e95c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e95cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e960: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e964: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e964u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e96c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e96cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e970: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e970u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e974: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18e978: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e97c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e980: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e984: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18e984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18e988: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e98c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e98cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e990: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E990u;
    {
        const bool branch_taken_0x18e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E990u;
            // 0x18e994: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e990) {
            ctx->pc = 0x18E9A4u;
            goto label_18e9a4;
        }
    }
    ctx->pc = 0x18E998u;
label_18e998:
    // 0x18e998: 0x1293c0  sll         $s2, $s2, 15
    ctx->pc = 0x18e998u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x18e99c: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x18e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
    // 0x18e9a0: 0x2673000f  addiu       $s3, $s3, 0xF
    ctx->pc = 0x18e9a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_18e9a4:
    // 0x18e9a4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18e9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18e9a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E9A8u;
    {
        const bool branch_taken_0x18e9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9A8u;
            // 0x18e9ac: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9a8) {
            ctx->pc = 0x18EA20u;
            goto label_18ea20;
        }
    }
    ctx->pc = 0x18E9B0u;
    // 0x18e9b0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18e9b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18e9b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E9B4u;
    {
        const bool branch_taken_0x18e9b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9B4u;
            // 0x18e9b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9b4) {
            ctx->pc = 0x18E9D8u;
            goto label_18e9d8;
        }
    }
    ctx->pc = 0x18E9BCu;
    // 0x18e9bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e9c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18e9c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18e9c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18e9c8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e9cc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18e9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18e9d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E9D0u;
    {
        const bool branch_taken_0x18e9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9D0u;
            // 0x18e9d4: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9d0) {
            ctx->pc = 0x18E9E4u;
            goto label_18e9e4;
        }
    }
    ctx->pc = 0x18E9D8u;
label_18e9d8:
    // 0x18e9d8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18e9dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18e9dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e9e0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18e9e4:
    // 0x18e9e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18e9e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e9e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e9ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18e9ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e9f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e9f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18e9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18e9f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18e9f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e9fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18e9fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18ea00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ea00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ea04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ea04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ea08: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ea08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ea0c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18ea0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18ea10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ea10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ea14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ea14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ea18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EA18u;
    {
        const bool branch_taken_0x18ea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA18u;
            // 0x18ea1c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea18) {
            ctx->pc = 0x18EA2Cu;
            goto label_18ea2c;
        }
    }
    ctx->pc = 0x18EA20u;
label_18ea20:
    // 0x18ea20: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18ea20u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18ea24: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18ea28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18ea28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18ea2c:
    // 0x18ea2c: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x18ea2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x18ea30: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18EA30u;
    {
        const bool branch_taken_0x18ea30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA30u;
            // 0x18ea34: 0x121442  srl         $v0, $s2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea30) {
            ctx->pc = 0x18EAA8u;
            goto label_18eaa8;
        }
    }
    ctx->pc = 0x18EA38u;
    // 0x18ea38: 0x2673ffef  addiu       $s3, $s3, -0x11
    ctx->pc = 0x18ea38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
    // 0x18ea3c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EA3Cu;
    {
        const bool branch_taken_0x18ea3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA3Cu;
            // 0x18ea40: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea3c) {
            ctx->pc = 0x18EA60u;
            goto label_18ea60;
        }
    }
    ctx->pc = 0x18EA44u;
    // 0x18ea44: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ea48: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ea4c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18ea4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18ea50: 0x121c42  srl         $v1, $s2, 17
    ctx->pc = 0x18ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x18ea54: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18ea54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18ea58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EA58u;
    {
        const bool branch_taken_0x18ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA58u;
            // 0x18ea5c: 0xae83018c  sw          $v1, 0x18C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea58) {
            ctx->pc = 0x18EA6Cu;
            goto label_18ea6c;
        }
    }
    ctx->pc = 0x18EA60u;
label_18ea60:
    // 0x18ea60: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x18ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x18ea64: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18ea64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea68: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x18ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
label_18ea6c:
    // 0x18ea6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18ea6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ea70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ea70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ea74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ea74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ea78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ea78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ea7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ea7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ea80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18ea80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ea84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18ea84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18ea88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ea88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ea8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ea8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ea90: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ea90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ea94: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18ea94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18ea98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ea98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ea9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ea9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18eaa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EAA0u;
    {
        const bool branch_taken_0x18eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAA0u;
            // 0x18eaa4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eaa0) {
            ctx->pc = 0x18EAB4u;
            goto label_18eab4;
        }
    }
    ctx->pc = 0x18EAA8u;
label_18eaa8:
    // 0x18eaa8: 0x1293c0  sll         $s2, $s2, 15
    ctx->pc = 0x18eaa8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x18eaac: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x18eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
    // 0x18eab0: 0x2673000f  addiu       $s3, $s3, 0xF
    ctx->pc = 0x18eab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_18eab4:
    // 0x18eab4: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x18eab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18eab8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18EAB8u;
    {
        const bool branch_taken_0x18eab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAB8u;
            // 0x18eabc: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eab8) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EAC0u;
    // 0x18eac0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x18eac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x18eac4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EAC4u;
    {
        const bool branch_taken_0x18eac4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAC4u;
            // 0x18eac8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eac4) {
            ctx->pc = 0x18EAE8u;
            goto label_18eae8;
        }
    }
    ctx->pc = 0x18EACCu;
    // 0x18eacc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ead0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ead4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18ead4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18ead8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x18ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18eadc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18eadcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18eae0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EAE0u;
    {
        const bool branch_taken_0x18eae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAE0u;
            // 0x18eae4: 0xae830190  sw          $v1, 0x190($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eae0) {
            ctx->pc = 0x18EAF4u;
            goto label_18eaf4;
        }
    }
    ctx->pc = 0x18EAE8u;
label_18eae8:
    // 0x18eae8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18eaec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18eaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eaf0: 0xae820190  sw          $v0, 0x190($s4)
    ctx->pc = 0x18eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 2));
label_18eaf4:
    // 0x18eaf4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18eaf4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eaf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18eaf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18eafc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18eafcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eb00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18eb00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18eb04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18eb04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18eb08: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18eb08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eb0c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18eb0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18eb10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18eb10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18eb14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18eb14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18eb18: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18eb18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eb1c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18eb1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18eb20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18eb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18eb24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18eb24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18eb28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EB28u;
    {
        const bool branch_taken_0x18eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB28u;
            // 0x18eb2c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb28) {
            ctx->pc = 0x18EB3Cu;
            goto label_18eb3c;
        }
    }
    ctx->pc = 0x18EB30u;
label_18eb30:
    // 0x18eb30: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x18eb30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18eb34: 0xae820190  sw          $v0, 0x190($s4)
    ctx->pc = 0x18eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 2));
    // 0x18eb38: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18eb38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18eb3c:
    // 0x18eb3c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18eb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18eb40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18EB40u;
    {
        const bool branch_taken_0x18eb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB40u;
            // 0x18eb44: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb40) {
            ctx->pc = 0x18EBB8u;
            goto label_18ebb8;
        }
    }
    ctx->pc = 0x18EB48u;
    // 0x18eb48: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18eb48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18eb4c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EB4Cu;
    {
        const bool branch_taken_0x18eb4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB4Cu;
            // 0x18eb50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb4c) {
            ctx->pc = 0x18EB70u;
            goto label_18eb70;
        }
    }
    ctx->pc = 0x18EB54u;
    // 0x18eb54: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18eb58: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18eb5c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18eb5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18eb60: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18eb64: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18eb64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18eb68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EB68u;
    {
        const bool branch_taken_0x18eb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB68u;
            // 0x18eb6c: 0xae830194  sw          $v1, 0x194($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb68) {
            ctx->pc = 0x18EB7Cu;
            goto label_18eb7c;
        }
    }
    ctx->pc = 0x18EB70u;
label_18eb70:
    // 0x18eb70: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18eb74: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18eb74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb78: 0xae820194  sw          $v0, 0x194($s4)
    ctx->pc = 0x18eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 2));
label_18eb7c:
    // 0x18eb7c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18eb7cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eb80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18eb80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18eb84: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18eb84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eb88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18eb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18eb8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18eb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18eb90: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18eb90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eb94: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18eb94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18eb98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18eb98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18eb9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18eb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18eba0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18eba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eba4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18eba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18eba8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18eba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ebac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ebacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ebb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EBB0u;
    {
        const bool branch_taken_0x18ebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBB0u;
            // 0x18ebb4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebb0) {
            ctx->pc = 0x18EBC4u;
            goto label_18ebc4;
        }
    }
    ctx->pc = 0x18EBB8u;
label_18ebb8:
    // 0x18ebb8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18ebb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18ebbc: 0xae820194  sw          $v0, 0x194($s4)
    ctx->pc = 0x18ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 2));
    // 0x18ebc0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18ebc4:
    // 0x18ebc4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18ebc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18ebc8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18EBC8u;
    {
        const bool branch_taken_0x18ebc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBC8u;
            // 0x18ebcc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebc8) {
            ctx->pc = 0x18EC08u;
            goto label_18ec08;
        }
    }
    ctx->pc = 0x18EBD0u;
    // 0x18ebd0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18ebd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18ebd4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EBD4u;
    {
        const bool branch_taken_0x18ebd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBD4u;
            // 0x18ebd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebd4) {
            ctx->pc = 0x18EBF8u;
            goto label_18ebf8;
        }
    }
    ctx->pc = 0x18EBDCu;
    // 0x18ebdc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ebe0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ebe4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18ebe4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18ebe8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ebec: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x18EBECu;
    {
        const bool branch_taken_0x18ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBECu;
            // 0x18ebf0: 0xae830198  sw          $v1, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebec) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18EBF4u;
    // 0x18ebf4: 0x0  nop
    ctx->pc = 0x18ebf4u;
    // NOP
label_18ebf8:
    // 0x18ebf8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ebfc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x18EBFCu;
    {
        const bool branch_taken_0x18ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBFCu;
            // 0x18ec00: 0xae820198  sw          $v0, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebfc) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18EC04u;
    // 0x18ec04: 0x0  nop
    ctx->pc = 0x18ec04u;
    // NOP
label_18ec08:
    // 0x18ec08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18ec08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18ec0c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x18EC0Cu;
    {
        const bool branch_taken_0x18ec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC0Cu;
            // 0x18ec10: 0xae820198  sw          $v0, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec0c) {
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18EC14u;
    // 0x18ec14: 0x0  nop
    ctx->pc = 0x18ec14u;
    // NOP
label_18ec18:
    // 0x18ec18: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x18ec18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18ec1c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18EC1Cu;
    {
        const bool branch_taken_0x18ec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC1Cu;
            // 0x18ec20: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec1c) {
            ctx->pc = 0x18EC98u;
            goto label_18ec98;
        }
    }
    ctx->pc = 0x18EC24u;
    // 0x18ec24: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x18ec24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x18ec28: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EC28u;
    {
        const bool branch_taken_0x18ec28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC28u;
            // 0x18ec2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec28) {
            ctx->pc = 0x18EC50u;
            goto label_18ec50;
        }
    }
    ctx->pc = 0x18EC30u;
    // 0x18ec30: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ec34: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ec38: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18ec38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18ec3c: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x18ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18ec40: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18ec40u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18ec44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18EC44u;
    {
        const bool branch_taken_0x18ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC44u;
            // 0x18ec48: 0xae830178  sw          $v1, 0x178($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec44) {
            ctx->pc = 0x18EC5Cu;
            goto label_18ec5c;
        }
    }
    ctx->pc = 0x18EC4Cu;
    // 0x18ec4c: 0x0  nop
    ctx->pc = 0x18ec4cu;
    // NOP
label_18ec50:
    // 0x18ec50: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x18ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x18ec54: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18ec54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec58: 0xae820178  sw          $v0, 0x178($s4)
    ctx->pc = 0x18ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 2));
label_18ec5c:
    // 0x18ec5c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18ec5cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ec60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ec60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ec64: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ec64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ec68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ec68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ec6c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ec70: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18ec70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ec74: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18ec74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18ec78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ec78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ec7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ec80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ec80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ec84: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18ec84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18ec88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ec88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ec8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ec8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ec90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EC90u;
    {
        const bool branch_taken_0x18ec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC90u;
            // 0x18ec94: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec90) {
            ctx->pc = 0x18ECA4u;
            goto label_18eca4;
        }
    }
    ctx->pc = 0x18EC98u;
label_18ec98:
    // 0x18ec98: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x18ec98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18ec9c: 0xae820178  sw          $v0, 0x178($s4)
    ctx->pc = 0x18ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 2));
    // 0x18eca0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18eca4:
    // 0x18eca4: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x18eca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x18eca8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18ECA8u;
    {
        const bool branch_taken_0x18eca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECA8u;
            // 0x18ecac: 0x121582  srl         $v0, $s2, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eca8) {
            ctx->pc = 0x18ED20u;
            goto label_18ed20;
        }
    }
    ctx->pc = 0x18ECB0u;
    // 0x18ecb0: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x18ecb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x18ecb4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18ECB4u;
    {
        const bool branch_taken_0x18ecb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECB4u;
            // 0x18ecb8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ecb4) {
            ctx->pc = 0x18ECD8u;
            goto label_18ecd8;
        }
    }
    ctx->pc = 0x18ECBCu;
    // 0x18ecbc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ecc0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ecc4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18ecc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18ecc8: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x18ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x18eccc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18ecccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18ecd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18ECD0u;
    {
        const bool branch_taken_0x18ecd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECD0u;
            // 0x18ecd4: 0xae83017c  sw          $v1, 0x17C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ecd0) {
            ctx->pc = 0x18ECE4u;
            goto label_18ece4;
        }
    }
    ctx->pc = 0x18ECD8u;
label_18ecd8:
    // 0x18ecd8: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x18ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x18ecdc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18ecdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ece0: 0xae82017c  sw          $v0, 0x17C($s4)
    ctx->pc = 0x18ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 2));
label_18ece4:
    // 0x18ece4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18ece4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ece8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ece8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ecec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ececu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ecf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ecf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ecf4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ecf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ecf8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18ecf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ecfc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18ecfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18ed00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ed00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ed04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ed04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ed08: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ed08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ed0c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18ed0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18ed10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ed10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ed14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ed14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ed18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18ED18u;
    {
        const bool branch_taken_0x18ed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ED1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED18u;
            // 0x18ed1c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed18) {
            ctx->pc = 0x18ED2Cu;
            goto label_18ed2c;
        }
    }
    ctx->pc = 0x18ED20u;
label_18ed20:
    // 0x18ed20: 0x129280  sll         $s2, $s2, 10
    ctx->pc = 0x18ed20u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x18ed24: 0xae82017c  sw          $v0, 0x17C($s4)
    ctx->pc = 0x18ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 2));
    // 0x18ed28: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x18ed28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
label_18ed2c:
    // 0x18ed2c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x18ed2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18ed30: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18ED30u;
    {
        const bool branch_taken_0x18ed30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED30u;
            // 0x18ed34: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed30) {
            ctx->pc = 0x18EDA8u;
            goto label_18eda8;
        }
    }
    ctx->pc = 0x18ED38u;
    // 0x18ed38: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x18ed38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x18ed3c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18ED3Cu;
    {
        const bool branch_taken_0x18ed3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED3Cu;
            // 0x18ed40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed3c) {
            ctx->pc = 0x18ED60u;
            goto label_18ed60;
        }
    }
    ctx->pc = 0x18ED44u;
    // 0x18ed44: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ed48: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18ed4c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18ed4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18ed50: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x18ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ed54: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x18ed54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x18ed58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18ED58u;
    {
        const bool branch_taken_0x18ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED58u;
            // 0x18ed5c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed58) {
            ctx->pc = 0x18ED6Cu;
            goto label_18ed6c;
        }
    }
    ctx->pc = 0x18ED60u;
label_18ed60:
    // 0x18ed60: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x18ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x18ed64: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18ed64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed68: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_18ed6c:
    // 0x18ed6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x18ed6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ed70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ed70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ed74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ed74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ed78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ed78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ed7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ed7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ed80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18ed80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ed84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x18ed84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x18ed88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ed88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ed8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ed8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18ed90: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18ed90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ed94: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x18ed94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x18ed98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ed98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ed9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18ed9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18eda0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EDA0u;
    {
        const bool branch_taken_0x18eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDA0u;
            // 0x18eda4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eda0) {
            ctx->pc = 0x18EDB4u;
            goto label_18edb4;
        }
    }
    ctx->pc = 0x18EDA8u;
label_18eda8:
    // 0x18eda8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x18eda8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18edac: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x18edacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x18edb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18edb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18edb4:
    // 0x18edb4: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x18edb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x18edb8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18EDB8u;
    {
        const bool branch_taken_0x18edb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDB8u;
            // 0x18edbc: 0x121582  srl         $v0, $s2, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edb8) {
            ctx->pc = 0x18EDF8u;
            goto label_18edf8;
        }
    }
    ctx->pc = 0x18EDC0u;
    // 0x18edc0: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x18edc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x18edc4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EDC4u;
    {
        const bool branch_taken_0x18edc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDC4u;
            // 0x18edc8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edc4) {
            ctx->pc = 0x18EDE8u;
            goto label_18ede8;
        }
    }
    ctx->pc = 0x18EDCCu;
    // 0x18edcc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x18edccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18edd0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x18edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x18edd4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18edd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18edd8: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x18edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x18eddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EDDCu;
    {
        const bool branch_taken_0x18eddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDDCu;
            // 0x18ede0: 0xae830180  sw          $v1, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eddc) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18EDE4u;
    // 0x18ede4: 0x0  nop
    ctx->pc = 0x18ede4u;
    // NOP
label_18ede8:
    // 0x18ede8: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x18ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x18edec: 0xae820180  sw          $v0, 0x180($s4)
    ctx->pc = 0x18edecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 2));
label_18edf0:
    // 0x18edf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18EDF0u;
    {
        const bool branch_taken_0x18edf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDF0u;
            // 0x18edf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edf0) {
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18EDF8u;
label_18edf8:
    // 0x18edf8: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x18edf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
    // 0x18edfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18EDFCu;
    {
        const bool branch_taken_0x18edfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDFCu;
            // 0x18ee00: 0xae820180  sw          $v0, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edfc) {
            ctx->pc = 0x18EE14u;
            goto label_18ee14;
        }
    }
    ctx->pc = 0x18EE04u;
    // 0x18ee04: 0x0  nop
    ctx->pc = 0x18ee04u;
    // NOP
label_18ee08:
    // 0x18ee08: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x18ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_18ee0c:
    // 0x18ee0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ee10: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x18ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
label_18ee14:
    // 0x18ee14: 0x2361823  subu        $v1, $s1, $s6
    ctx->pc = 0x18ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_18ee18:
    // 0x18ee18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ee18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18ee1c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18ee20: 0xae80030c  sw          $zero, 0x30C($s4)
    ctx->pc = 0x18ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 780), GPR_U32(ctx, 0));
    // 0x18ee24: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x18ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x18ee28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18ee28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee2c: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x18ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x18ee30: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x18ee34: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x18ee34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18ee38: 0xae800308  sw          $zero, 0x308($s4)
    ctx->pc = 0x18ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 776), GPR_U32(ctx, 0));
    // 0x18ee3c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x18ee3cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x18ee40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ee40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ee44: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18ee44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18ee48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18ee48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ee4c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x18ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x18ee50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18ee50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ee54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18ee54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18ee58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x18ee58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ee5c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x18ee5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18ee60: 0x3e00008  jr          $ra
    ctx->pc = 0x18EE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE60u;
            // 0x18ee64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18EE68u;
}
