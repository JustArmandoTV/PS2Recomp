#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00251A10
// Address: 0x251a10 - 0x252fe0
void sub_00251A10_0x251a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251A10_0x251a10");
#endif

    switch (ctx->pc) {
        case 0x251a5cu: goto label_251a5c;
        case 0x251ab8u: goto label_251ab8;
        case 0x251b90u: goto label_251b90;
        case 0x252260u: goto label_252260;
        case 0x2522d0u: goto label_2522d0;
        case 0x252340u: goto label_252340;
        case 0x2523ccu: goto label_2523cc;
        case 0x252438u: goto label_252438;
        case 0x2524c4u: goto label_2524c4;
        case 0x252530u: goto label_252530;
        case 0x2525bcu: goto label_2525bc;
        case 0x252628u: goto label_252628;
        case 0x2526d4u: goto label_2526d4;
        case 0x252730u: goto label_252730;
        case 0x2527f8u: goto label_2527f8;
        case 0x252860u: goto label_252860;
        case 0x252928u: goto label_252928;
        case 0x252998u: goto label_252998;
        case 0x252a60u: goto label_252a60;
        case 0x252ac0u: goto label_252ac0;
        case 0x252b50u: goto label_252b50;
        case 0x252ba8u: goto label_252ba8;
        case 0x252c54u: goto label_252c54;
        case 0x252cc0u: goto label_252cc0;
        case 0x252d6cu: goto label_252d6c;
        case 0x252de0u: goto label_252de0;
        case 0x252e8cu: goto label_252e8c;
        case 0x252ee8u: goto label_252ee8;
        case 0x252f00u: goto label_252f00;
        default: break;
    }

    ctx->pc = 0x251a10u;

label_251a10:
    // 0x251a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x251a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x251a14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x251a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x251a18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x251a1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x251a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251a20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x251a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251a28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x251a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a2c: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x251a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x251a30: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x251a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x251a34: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x251A34u;
    {
        const bool branch_taken_0x251a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x251A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251A34u;
            // 0x251a38: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a34) {
            ctx->pc = 0x251A90u;
            goto label_251a90;
        }
    }
    ctx->pc = 0x251A3Cu;
    // 0x251a3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x251a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x251a40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x251a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251a44: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x251a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x251a48: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x251a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x251a4c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251A4Cu;
    {
        const bool branch_taken_0x251a4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x251A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251A4Cu;
            // 0x251a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a4c) {
            ctx->pc = 0x251A60u;
            goto label_251a60;
        }
    }
    ctx->pc = 0x251A54u;
    // 0x251a54: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x251A54u;
    SET_GPR_U32(ctx, 31, 0x251A5Cu);
    ctx->pc = 0x251A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251A54u;
            // 0x251a58: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A5Cu; }
        if (ctx->pc != 0x251A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A5Cu; }
        if (ctx->pc != 0x251A5Cu) { return; }
    }
    ctx->pc = 0x251A5Cu;
label_251a5c:
    // 0x251a5c: 0x0  nop
    ctx->pc = 0x251a5cu;
    // NOP
label_251a60:
    // 0x251a60: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x251a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251a64: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x251a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x251a68: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x251a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x251a6c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x251a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x251a70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x251a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251a74: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x251a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x251a78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x251a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x251a7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x251a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x251a80: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x251a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x251a84: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x251A84u;
    {
        const bool branch_taken_0x251a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251A84u;
            // 0x251a88: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a84) {
            ctx->pc = 0x251B20u;
            goto label_251b20;
        }
    }
    ctx->pc = 0x251A8Cu;
    // 0x251a8c: 0x0  nop
    ctx->pc = 0x251a8cu;
    // NOP
label_251a90:
    // 0x251a90: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x251a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x251a94: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x251a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x251a98: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x251a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x251a9c: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x251a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x251aa0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x251aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x251aa4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x251aa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x251aa8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x251AA8u;
    {
        const bool branch_taken_0x251aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251AA8u;
            // 0x251aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251aa8) {
            ctx->pc = 0x251AE8u;
            goto label_251ae8;
        }
    }
    ctx->pc = 0x251AB0u;
    // 0x251ab0: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x251ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x251ab4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x251ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_251ab8:
    // 0x251ab8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x251ab8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251abc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251ABCu;
    {
        const bool branch_taken_0x251abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x251abc) {
            ctx->pc = 0x251AD0u;
            goto label_251ad0;
        }
    }
    ctx->pc = 0x251AC4u;
    // 0x251ac4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x251AC4u;
    {
        const bool branch_taken_0x251ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ac4) {
            ctx->pc = 0x251AF0u;
            goto label_251af0;
        }
    }
    ctx->pc = 0x251ACCu;
    // 0x251acc: 0x0  nop
    ctx->pc = 0x251accu;
    // NOP
label_251ad0:
    // 0x251ad0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x251ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x251ad4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x251ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x251ad8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x251ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x251adc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x251ADCu;
    {
        const bool branch_taken_0x251adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x251AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251ADCu;
            // 0x251ae0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251adc) {
            ctx->pc = 0x251AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251ab8;
        }
    }
    ctx->pc = 0x251AE4u;
    // 0x251ae4: 0x0  nop
    ctx->pc = 0x251ae4u;
    // NOP
label_251ae8:
    // 0x251ae8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x251ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x251aec: 0x0  nop
    ctx->pc = 0x251aecu;
    // NOP
label_251af0:
    // 0x251af0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x251af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x251af4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x251af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x251af8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x251af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x251afc: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x251afcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x251b00: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x251b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x251b04: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x251b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x251b08: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x251b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x251b0c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x251b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x251b10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x251b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x251b14: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x251b14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251b18: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x251b18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x251b1c: 0x0  nop
    ctx->pc = 0x251b1cu;
    // NOP
label_251b20:
    // 0x251b20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x251b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251b24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251b30: 0x3e00008  jr          $ra
    ctx->pc = 0x251B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B30u;
            // 0x251b34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251B38u;
    // 0x251b38: 0x0  nop
    ctx->pc = 0x251b38u;
    // NOP
    // 0x251b3c: 0x0  nop
    ctx->pc = 0x251b3cu;
    // NOP
    // 0x251b40: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x251b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x251b44: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x251b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x251b48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x251b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x251b4c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x251b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x251b50: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x251b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x251b54: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x251b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x251b58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x251b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x251b5c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x251b5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251b60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x251b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x251b64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x251b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x251b68: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x251b68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251b6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x251b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x251b70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x251b74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x251b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251b7c: 0xafa4020c  sw          $a0, 0x20C($sp)
    ctx->pc = 0x251b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 4));
    // 0x251b80: 0xafa601f0  sw          $a2, 0x1F0($sp)
    ctx->pc = 0x251b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
    // 0x251b84: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x251b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
    // 0x251b88: 0x100004df  b           . + 4 + (0x4DF << 2)
    ctx->pc = 0x251B88u;
    {
        const bool branch_taken_0x251b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B88u;
            // 0x251b8c: 0xafa501d0  sw          $a1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b88) {
            ctx->pc = 0x252F08u;
            goto label_252f08;
        }
    }
    ctx->pc = 0x251B90u;
label_251b90:
    // 0x251b90: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x251b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x251b94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x251b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x251b98: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251b9c: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251ba0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x251ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251ba4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x251ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x251ba8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251bac: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x251bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x251bb0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x251bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251bb4: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251bb8: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x251bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251bbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251bc0: 0x27a30244  addiu       $v1, $sp, 0x244
    ctx->pc = 0x251bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x251bc4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251bc8: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x251bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x251bcc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x251bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251bd0: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251bd4: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x251bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251bd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251bdc: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x251bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x251be0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251be4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x251be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x251be8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x251be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251bec: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251bf0: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x251bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251bf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251bf8: 0x27a3024c  addiu       $v1, $sp, 0x24C
    ctx->pc = 0x251bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x251bfc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251c00: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251c04: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x251c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251c08: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x251c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251c0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251c10: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x251c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x251c14: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x251c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251c18: 0x27a30244  addiu       $v1, $sp, 0x244
    ctx->pc = 0x251c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x251c1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251c20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251c24: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251c28: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251c2c: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x251c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251c30: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x251c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x251c34: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251c38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251c3c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251c40: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251c44: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x251c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251c48: 0x27a3024c  addiu       $v1, $sp, 0x24C
    ctx->pc = 0x251c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x251c4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251c50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251c54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251c58: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x251c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251c5c: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x251c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251c60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x251c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251c64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251C64u;
    {
        const bool branch_taken_0x251c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C64u;
            // 0x251c68: 0xc7a20240  lwc1        $f2, 0x240($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c64) {
            ctx->pc = 0x251C74u;
            goto label_251c74;
        }
    }
    ctx->pc = 0x251C6Cu;
    // 0x251c6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251C6Cu;
    {
        const bool branch_taken_0x251c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C6Cu;
            // 0x251c70: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c6c) {
            ctx->pc = 0x251C7Cu;
            goto label_251c7c;
        }
    }
    ctx->pc = 0x251C74u;
label_251c74:
    // 0x251c74: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x251c74u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x251c78: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x251c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_251c7c:
    // 0x251c7c: 0xe7a20240  swc1        $f2, 0x240($sp)
    ctx->pc = 0x251c7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x251c80: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251c84: 0x27a30244  addiu       $v1, $sp, 0x244
    ctx->pc = 0x251c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x251c88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251c8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251c90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251C90u;
    {
        const bool branch_taken_0x251c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251c90) {
            ctx->pc = 0x251CA0u;
            goto label_251ca0;
        }
    }
    ctx->pc = 0x251C98u;
    // 0x251c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251C98u;
    {
        const bool branch_taken_0x251c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251C98u;
            // 0x251c9c: 0x27a30244  addiu       $v1, $sp, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c98) {
            ctx->pc = 0x251CA8u;
            goto label_251ca8;
        }
    }
    ctx->pc = 0x251CA0u;
label_251ca0:
    // 0x251ca0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251ca0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251ca4: 0x27a30244  addiu       $v1, $sp, 0x244
    ctx->pc = 0x251ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_251ca8:
    // 0x251ca8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x251ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251cac: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x251cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x251cb0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251cb4: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x251cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x251cb8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251cbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251cc0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251CC0u;
    {
        const bool branch_taken_0x251cc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251cc0) {
            ctx->pc = 0x251CD0u;
            goto label_251cd0;
        }
    }
    ctx->pc = 0x251CC8u;
    // 0x251cc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251CC8u;
    {
        const bool branch_taken_0x251cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251CC8u;
            // 0x251ccc: 0x27a30248  addiu       $v1, $sp, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cc8) {
            ctx->pc = 0x251CD8u;
            goto label_251cd8;
        }
    }
    ctx->pc = 0x251CD0u;
label_251cd0:
    // 0x251cd0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251cd0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251cd4: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x251cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_251cd8:
    // 0x251cd8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x251cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251cdc: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x251cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x251ce0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251ce4: 0x27a3024c  addiu       $v1, $sp, 0x24C
    ctx->pc = 0x251ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x251ce8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251cec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251cf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251CF0u;
    {
        const bool branch_taken_0x251cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251cf0) {
            ctx->pc = 0x251D00u;
            goto label_251d00;
        }
    }
    ctx->pc = 0x251CF8u;
    // 0x251cf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251CF8u;
    {
        const bool branch_taken_0x251cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251CF8u;
            // 0x251cfc: 0x27a3024c  addiu       $v1, $sp, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cf8) {
            ctx->pc = 0x251D08u;
            goto label_251d08;
        }
    }
    ctx->pc = 0x251D00u;
label_251d00:
    // 0x251d00: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251d00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251d04: 0x27a3024c  addiu       $v1, $sp, 0x24C
    ctx->pc = 0x251d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
label_251d08:
    // 0x251d08: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x251d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x251d0c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x251d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251d10: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x251d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251d14: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x251d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251d18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251d18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251d1c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x251D1Cu;
    {
        const bool branch_taken_0x251d1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D1Cu;
            // 0x251d20: 0xc7a20240  lwc1        $f2, 0x240($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d1c) {
            ctx->pc = 0x251D2Cu;
            goto label_251d2c;
        }
    }
    ctx->pc = 0x251D24u;
    // 0x251d24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251D24u;
    {
        const bool branch_taken_0x251d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D24u;
            // 0x251d28: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d24) {
            ctx->pc = 0x251D34u;
            goto label_251d34;
        }
    }
    ctx->pc = 0x251D2Cu;
label_251d2c:
    // 0x251d2c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x251d2cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x251d30: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x251d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_251d34:
    // 0x251d34: 0xe7a20240  swc1        $f2, 0x240($sp)
    ctx->pc = 0x251d34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x251d38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251d3c: 0x27a30244  addiu       $v1, $sp, 0x244
    ctx->pc = 0x251d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x251d40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251d44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x251d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251d48: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x251D48u;
    {
        const bool branch_taken_0x251d48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251d48) {
            ctx->pc = 0x251D58u;
            goto label_251d58;
        }
    }
    ctx->pc = 0x251D50u;
    // 0x251d50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251D50u;
    {
        const bool branch_taken_0x251d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D50u;
            // 0x251d54: 0x27a30244  addiu       $v1, $sp, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d50) {
            ctx->pc = 0x251D60u;
            goto label_251d60;
        }
    }
    ctx->pc = 0x251D58u;
label_251d58:
    // 0x251d58: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251d58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251d5c: 0x27a30244  addiu       $v1, $sp, 0x244
    ctx->pc = 0x251d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_251d60:
    // 0x251d60: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x251d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251d64: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x251d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x251d68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251d6c: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x251d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x251d70: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251d74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x251d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251d78: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x251D78u;
    {
        const bool branch_taken_0x251d78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251d78) {
            ctx->pc = 0x251D88u;
            goto label_251d88;
        }
    }
    ctx->pc = 0x251D80u;
    // 0x251d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251D80u;
    {
        const bool branch_taken_0x251d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D80u;
            // 0x251d84: 0x27a30248  addiu       $v1, $sp, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d80) {
            ctx->pc = 0x251D90u;
            goto label_251d90;
        }
    }
    ctx->pc = 0x251D88u;
label_251d88:
    // 0x251d88: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251d88u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251d8c: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x251d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_251d90:
    // 0x251d90: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x251d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251d94: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x251d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x251d98: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251d9c: 0x27a3024c  addiu       $v1, $sp, 0x24C
    ctx->pc = 0x251d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x251da0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251da4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x251da4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251da8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x251DA8u;
    {
        const bool branch_taken_0x251da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251da8) {
            ctx->pc = 0x251DB8u;
            goto label_251db8;
        }
    }
    ctx->pc = 0x251DB0u;
    // 0x251db0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251DB0u;
    {
        const bool branch_taken_0x251db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251DB0u;
            // 0x251db4: 0x27a3024c  addiu       $v1, $sp, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251db0) {
            ctx->pc = 0x251DC0u;
            goto label_251dc0;
        }
    }
    ctx->pc = 0x251DB8u;
label_251db8:
    // 0x251db8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251db8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251dbc: 0x27a3024c  addiu       $v1, $sp, 0x24C
    ctx->pc = 0x251dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
label_251dc0:
    // 0x251dc0: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x251dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x251dc4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x251dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251dc8: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x251dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251dcc: 0x27a30244  addiu       $v1, $sp, 0x244
    ctx->pc = 0x251dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x251dd0: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x251dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251dd4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x251dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x251dd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251ddc: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x251ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x251de0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251de4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x251de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x251de8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251dec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251df0: 0x27a30244  addiu       $v1, $sp, 0x244
    ctx->pc = 0x251df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x251df4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251df8: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x251df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x251dfc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251e00: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x251e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x251e04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251e0c: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x251e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x251e10: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251e14: 0x27a3024c  addiu       $v1, $sp, 0x24C
    ctx->pc = 0x251e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x251e18: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251e1c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x251e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x251e20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251e28: 0x27a3024c  addiu       $v1, $sp, 0x24C
    ctx->pc = 0x251e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x251e2c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251e30: 0x27a30240  addiu       $v1, $sp, 0x240
    ctx->pc = 0x251e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x251e34: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e38: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x251e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x251e3c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x251e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e40: 0x27a30234  addiu       $v1, $sp, 0x234
    ctx->pc = 0x251e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x251e44: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251e48: 0x27a30240  addiu       $v1, $sp, 0x240
    ctx->pc = 0x251e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x251e4c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x251e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e50: 0x27a30238  addiu       $v1, $sp, 0x238
    ctx->pc = 0x251e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x251e54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251e58: 0x27a30240  addiu       $v1, $sp, 0x240
    ctx->pc = 0x251e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x251e5c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x251e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251e60: 0x27a3023c  addiu       $v1, $sp, 0x23C
    ctx->pc = 0x251e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
    // 0x251e64: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251e68: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x251e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x251e6c: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x251e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x251e70: 0xa7a30260  sh          $v1, 0x260($sp)
    ctx->pc = 0x251e70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 608), (uint16_t)GPR_U32(ctx, 3));
    // 0x251e74: 0x27a30234  addiu       $v1, $sp, 0x234
    ctx->pc = 0x251e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x251e78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x251e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251e7c: 0x321c2  srl         $a0, $v1, 7
    ctx->pc = 0x251e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x251e80: 0x27a30262  addiu       $v1, $sp, 0x262
    ctx->pc = 0x251e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 610));
    // 0x251e84: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x251e84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x251e88: 0x27a30238  addiu       $v1, $sp, 0x238
    ctx->pc = 0x251e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x251e8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x251e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251e90: 0x321c2  srl         $a0, $v1, 7
    ctx->pc = 0x251e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x251e94: 0x27a30264  addiu       $v1, $sp, 0x264
    ctx->pc = 0x251e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
    // 0x251e98: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x251e98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x251e9c: 0x27a3023c  addiu       $v1, $sp, 0x23C
    ctx->pc = 0x251e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
    // 0x251ea0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x251ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251ea4: 0x321c2  srl         $a0, $v1, 7
    ctx->pc = 0x251ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x251ea8: 0x27a30266  addiu       $v1, $sp, 0x266
    ctx->pc = 0x251ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 614));
    // 0x251eac: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x251eacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x251eb0: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x251eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x251eb4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x251eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251eb8: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251ebc: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x251ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251ec0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251ec4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x251ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x251ec8: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x251ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x251ecc: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x251eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251ed0: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251ed4: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x251ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251ed8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251edc: 0x27a30224  addiu       $v1, $sp, 0x224
    ctx->pc = 0x251edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x251ee0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251ee4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x251ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x251ee8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x251ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251eec: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251ef0: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x251ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251ef4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251ef8: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x251ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x251efc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251f00: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x251f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x251f04: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x251f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251f08: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251f0c: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x251f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251f10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251f14: 0x27a3022c  addiu       $v1, $sp, 0x22C
    ctx->pc = 0x251f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x251f18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251f1c: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251f20: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x251f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251f24: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x251f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251f28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251f2c: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x251f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x251f30: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x251f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251f34: 0x27a30224  addiu       $v1, $sp, 0x224
    ctx->pc = 0x251f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x251f38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251f40: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251f44: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251f48: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x251f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251f4c: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x251f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x251f50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251f54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251f58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251f5c: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x251f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x251f60: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x251f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251f64: 0x27a3022c  addiu       $v1, $sp, 0x22C
    ctx->pc = 0x251f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x251f68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251f6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251f70: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251f74: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x251f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251f78: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x251f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251f7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x251f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251f80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251F80u;
    {
        const bool branch_taken_0x251f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251F80u;
            // 0x251f84: 0xc7a20220  lwc1        $f2, 0x220($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f80) {
            ctx->pc = 0x251F90u;
            goto label_251f90;
        }
    }
    ctx->pc = 0x251F88u;
    // 0x251f88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251F88u;
    {
        const bool branch_taken_0x251f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251F88u;
            // 0x251f8c: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f88) {
            ctx->pc = 0x251F98u;
            goto label_251f98;
        }
    }
    ctx->pc = 0x251F90u;
label_251f90:
    // 0x251f90: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x251f90u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x251f94: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x251f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_251f98:
    // 0x251f98: 0xe7a20220  swc1        $f2, 0x220($sp)
    ctx->pc = 0x251f98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x251f9c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251fa0: 0x27a30224  addiu       $v1, $sp, 0x224
    ctx->pc = 0x251fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x251fa4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251fa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251fac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251FACu;
    {
        const bool branch_taken_0x251fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251fac) {
            ctx->pc = 0x251FBCu;
            goto label_251fbc;
        }
    }
    ctx->pc = 0x251FB4u;
    // 0x251fb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251FB4u;
    {
        const bool branch_taken_0x251fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251FB4u;
            // 0x251fb8: 0x27a30224  addiu       $v1, $sp, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fb4) {
            ctx->pc = 0x251FC4u;
            goto label_251fc4;
        }
    }
    ctx->pc = 0x251FBCu;
label_251fbc:
    // 0x251fbc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251fbcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251fc0: 0x27a30224  addiu       $v1, $sp, 0x224
    ctx->pc = 0x251fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
label_251fc4:
    // 0x251fc4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x251fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251fc8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x251fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x251fcc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251fd0: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x251fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x251fd4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251fd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251fdc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251FDCu;
    {
        const bool branch_taken_0x251fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251fdc) {
            ctx->pc = 0x251FECu;
            goto label_251fec;
        }
    }
    ctx->pc = 0x251FE4u;
    // 0x251fe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251FE4u;
    {
        const bool branch_taken_0x251fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251FE4u;
            // 0x251fe8: 0x27a30228  addiu       $v1, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fe4) {
            ctx->pc = 0x251FF4u;
            goto label_251ff4;
        }
    }
    ctx->pc = 0x251FECu;
label_251fec:
    // 0x251fec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251fecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251ff0: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x251ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_251ff4:
    // 0x251ff4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x251ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251ff8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x251ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x251ffc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x251ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252000: 0x27a3022c  addiu       $v1, $sp, 0x22C
    ctx->pc = 0x252000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x252004: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x252004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252008: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25200c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25200Cu;
    {
        const bool branch_taken_0x25200c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25200c) {
            ctx->pc = 0x25201Cu;
            goto label_25201c;
        }
    }
    ctx->pc = 0x252014u;
    // 0x252014: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252014u;
    {
        const bool branch_taken_0x252014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252014u;
            // 0x252018: 0x27a3022c  addiu       $v1, $sp, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252014) {
            ctx->pc = 0x252024u;
            goto label_252024;
        }
    }
    ctx->pc = 0x25201Cu;
label_25201c:
    // 0x25201c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25201cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x252020: 0x27a3022c  addiu       $v1, $sp, 0x22C
    ctx->pc = 0x252020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
label_252024:
    // 0x252024: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x252024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x252028: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x252028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25202c: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x25202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252030: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x252030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252034: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252038: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x252038u;
    {
        const bool branch_taken_0x252038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252038u;
            // 0x25203c: 0xc7a20220  lwc1        $f2, 0x220($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252038) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x252040u;
    // 0x252040: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252040u;
    {
        const bool branch_taken_0x252040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252040u;
            // 0x252044: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252040) {
            ctx->pc = 0x252050u;
            goto label_252050;
        }
    }
    ctx->pc = 0x252048u;
label_252048:
    // 0x252048: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x252048u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x25204c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x25204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_252050:
    // 0x252050: 0xe7a20220  swc1        $f2, 0x220($sp)
    ctx->pc = 0x252050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x252054: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x252054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252058: 0x27a30224  addiu       $v1, $sp, 0x224
    ctx->pc = 0x252058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x25205c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252060: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252064: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x252064u;
    {
        const bool branch_taken_0x252064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252064) {
            ctx->pc = 0x252074u;
            goto label_252074;
        }
    }
    ctx->pc = 0x25206Cu;
    // 0x25206c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25206Cu;
    {
        const bool branch_taken_0x25206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25206Cu;
            // 0x252070: 0x27a30224  addiu       $v1, $sp, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25206c) {
            ctx->pc = 0x25207Cu;
            goto label_25207c;
        }
    }
    ctx->pc = 0x252074u;
label_252074:
    // 0x252074: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x252074u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x252078: 0x27a30224  addiu       $v1, $sp, 0x224
    ctx->pc = 0x252078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
label_25207c:
    // 0x25207c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25207cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x252080: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x252080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x252084: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x252084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252088: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x252088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x25208c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252090: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252094: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x252094u;
    {
        const bool branch_taken_0x252094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252094) {
            ctx->pc = 0x2520A4u;
            goto label_2520a4;
        }
    }
    ctx->pc = 0x25209Cu;
    // 0x25209c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25209Cu;
    {
        const bool branch_taken_0x25209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25209Cu;
            // 0x2520a0: 0x27a30228  addiu       $v1, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25209c) {
            ctx->pc = 0x2520ACu;
            goto label_2520ac;
        }
    }
    ctx->pc = 0x2520A4u;
label_2520a4:
    // 0x2520a4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2520a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2520a8: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x2520a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_2520ac:
    // 0x2520ac: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2520acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2520b0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2520b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2520b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2520b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2520b8: 0x27a3022c  addiu       $v1, $sp, 0x22C
    ctx->pc = 0x2520b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x2520bc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2520bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2520c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2520c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2520c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2520C4u;
    {
        const bool branch_taken_0x2520c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2520c4) {
            ctx->pc = 0x2520D4u;
            goto label_2520d4;
        }
    }
    ctx->pc = 0x2520CCu;
    // 0x2520cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2520CCu;
    {
        const bool branch_taken_0x2520cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2520CCu;
            // 0x2520d0: 0x27a3022c  addiu       $v1, $sp, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520cc) {
            ctx->pc = 0x2520DCu;
            goto label_2520dc;
        }
    }
    ctx->pc = 0x2520D4u;
label_2520d4:
    // 0x2520d4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2520d4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2520d8: 0x27a3022c  addiu       $v1, $sp, 0x22C
    ctx->pc = 0x2520d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
label_2520dc:
    // 0x2520dc: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x2520dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x2520e0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2520e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2520e4: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x2520e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2520e8: 0x27a30224  addiu       $v1, $sp, 0x224
    ctx->pc = 0x2520e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x2520ec: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x2520ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2520f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2520f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2520f4: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x2520f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x2520f8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2520f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2520fc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2520fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x252100: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x252100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252104: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x252108: 0x27a30224  addiu       $v1, $sp, 0x224
    ctx->pc = 0x252108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x25210c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25210cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x252110: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x252110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x252114: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x252114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252118: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x252118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25211c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252120: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x252124: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x252124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x252128: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x252128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25212c: 0x27a3022c  addiu       $v1, $sp, 0x22C
    ctx->pc = 0x25212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x252130: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x252130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252134: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x252134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x252138: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x252138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25213c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25213cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x252140: 0x27a3022c  addiu       $v1, $sp, 0x22C
    ctx->pc = 0x252140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x252144: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x252144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x252148: 0x27a30220  addiu       $v1, $sp, 0x220
    ctx->pc = 0x252148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x25214c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252150: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x252150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x252154: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x252154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252158: 0x27a30214  addiu       $v1, $sp, 0x214
    ctx->pc = 0x252158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
    // 0x25215c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25215cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x252160: 0x27a30220  addiu       $v1, $sp, 0x220
    ctx->pc = 0x252160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x252164: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x252164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252168: 0x27a30218  addiu       $v1, $sp, 0x218
    ctx->pc = 0x252168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    // 0x25216c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25216cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x252170: 0x27a30220  addiu       $v1, $sp, 0x220
    ctx->pc = 0x252170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x252174: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x252174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252178: 0x27a3021c  addiu       $v1, $sp, 0x21C
    ctx->pc = 0x252178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x25217c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25217cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x252180: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x252180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x252184: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x252184u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x252188: 0xa7a30250  sh          $v1, 0x250($sp)
    ctx->pc = 0x252188u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 592), (uint16_t)GPR_U32(ctx, 3));
    // 0x25218c: 0x27a30214  addiu       $v1, $sp, 0x214
    ctx->pc = 0x25218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
    // 0x252190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252194: 0x321c2  srl         $a0, $v1, 7
    ctx->pc = 0x252194u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x252198: 0x27a30252  addiu       $v1, $sp, 0x252
    ctx->pc = 0x252198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 594));
    // 0x25219c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x25219cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2521a0: 0x27a30218  addiu       $v1, $sp, 0x218
    ctx->pc = 0x2521a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    // 0x2521a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2521a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2521a8: 0x321c2  srl         $a0, $v1, 7
    ctx->pc = 0x2521a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x2521ac: 0x27a30254  addiu       $v1, $sp, 0x254
    ctx->pc = 0x2521acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x2521b0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2521b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2521b4: 0x27a3021c  addiu       $v1, $sp, 0x21C
    ctx->pc = 0x2521b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x2521b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2521b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2521bc: 0x321c2  srl         $a0, $v1, 7
    ctx->pc = 0x2521bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x2521c0: 0x27a30256  addiu       $v1, $sp, 0x256
    ctx->pc = 0x2521c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 598));
    // 0x2521c4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2521c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2521c8: 0x27a30262  addiu       $v1, $sp, 0x262
    ctx->pc = 0x2521c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 610));
    // 0x2521cc: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x2521ccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2521d0: 0x27a30264  addiu       $v1, $sp, 0x264
    ctx->pc = 0x2521d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
    // 0x2521d4: 0x30d2fffe  andi        $s2, $a2, 0xFFFE
    ctx->pc = 0x2521d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65534);
    // 0x2521d8: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x2521d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2521dc: 0x97a60250  lhu         $a2, 0x250($sp)
    ctx->pc = 0x2521dcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2521e0: 0x27a30252  addiu       $v1, $sp, 0x252
    ctx->pc = 0x2521e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 594));
    // 0x2521e4: 0x30b0fffe  andi        $s0, $a1, 0xFFFE
    ctx->pc = 0x2521e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
    // 0x2521e8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2521e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2521ec: 0x97a50260  lhu         $a1, 0x260($sp)
    ctx->pc = 0x2521ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2521f0: 0x27a30254  addiu       $v1, $sp, 0x254
    ctx->pc = 0x2521f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x2521f4: 0x94680000  lhu         $t0, 0x0($v1)
    ctx->pc = 0x2521f4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2521f8: 0x30b1fffe  andi        $s1, $a1, 0xFFFE
    ctx->pc = 0x2521f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
    // 0x2521fc: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x2521fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x252200: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x252200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x252204: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x252204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x252208: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x252208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x25220c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x25220cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252210: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x252210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x252214: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x252214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x252218: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x252218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x25221c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25221cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252220: 0x35030001  ori         $v1, $t0, 0x1
    ctx->pc = 0x252220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x252224: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x252224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x252228: 0x8cf40000  lw          $s4, 0x0($a3)
    ctx->pc = 0x252228u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25222c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x25222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252230: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x252230u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x252234: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x252234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x252238: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x252238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x25223c: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x25223cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x252240: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x252240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x252244: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252248: 0x83f021  addu        $fp, $a0, $v1
    ctx->pc = 0x252248u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25224c: 0x97c5fffc  lhu         $a1, -0x4($fp)
    ctx->pc = 0x25224cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967292)));
    // 0x252250: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x252250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x252254: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x252254u;
    {
        const bool branch_taken_0x252254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x252258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252254u;
            // 0x252258: 0x34d60001  ori         $s6, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252254) {
            ctx->pc = 0x252308u;
            goto label_252308;
        }
    }
    ctx->pc = 0x25225Cu;
    // 0x25225c: 0x0  nop
    ctx->pc = 0x25225cu;
    // NOP
label_252260:
    // 0x252260: 0x97c3fffe  lhu         $v1, -0x2($fp)
    ctx->pc = 0x252260u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967294)));
    // 0x252264: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x252264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x252268: 0xa7c50000  sh          $a1, 0x0($fp)
    ctx->pc = 0x252268u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x25226c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x25226cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x252270: 0xa7c30002  sh          $v1, 0x2($fp)
    ctx->pc = 0x252270u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x252274: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x252274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252278: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x252278u;
    {
        const bool branch_taken_0x252278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252278u;
            // 0x25227c: 0x653821  addu        $a3, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252278) {
            ctx->pc = 0x2522D8u;
            goto label_2522d8;
        }
    }
    ctx->pc = 0x252280u;
    // 0x252280: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x252280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x252284: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x252284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x252288: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x252288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x25228c: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x25228cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252290: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x252290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252294: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x252294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x252298: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x252298u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x25229c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x25229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2522a0: 0x1054023  subu        $t0, $t0, $a1
    ctx->pc = 0x2522a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2522a4: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x2522a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x2522a8: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x2522a8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2522ac: 0x1041824  and         $v1, $t0, $a0
    ctx->pc = 0x2522acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x2522b0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2522B0u;
    {
        const bool branch_taken_0x2522b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2522b0) {
            ctx->pc = 0x2522E0u;
            goto label_2522e0;
        }
    }
    ctx->pc = 0x2522B8u;
    // 0x2522b8: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x2522b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2522bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2522bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2522c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2522c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2522c4: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x2522c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2522c8: 0xc094648  jal         func_251920
    ctx->pc = 0x2522C8u;
    SET_GPR_U32(ctx, 31, 0x2522D0u);
    ctx->pc = 0x2522CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2522C8u;
            // 0x2522cc: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251920u;
    if (runtime->hasFunction(0x251920u)) {
        auto targetFn = runtime->lookupFunction(0x251920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2522D0u; }
        if (ctx->pc != 0x2522D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251920_0x251920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2522D0u; }
        if (ctx->pc != 0x2522D0u) { return; }
    }
    ctx->pc = 0x2522D0u;
label_2522d0:
    // 0x2522d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2522D0u;
    {
        const bool branch_taken_0x2522d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2522d0) {
            ctx->pc = 0x2522E0u;
            goto label_2522e0;
        }
    }
    ctx->pc = 0x2522D8u;
label_2522d8:
    // 0x2522d8: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x2522d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2522dc: 0xa4e30008  sh          $v1, 0x8($a3)
    ctx->pc = 0x2522dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 3));
label_2522e0:
    // 0x2522e0: 0x27defffc  addiu       $fp, $fp, -0x4
    ctx->pc = 0x2522e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x2522e4: 0xa7d40002  sh          $s4, 0x2($fp)
    ctx->pc = 0x2522e4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x2522e8: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x2522e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2522ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2522ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2522f0: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x2522f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x2522f4: 0x97c5fffc  lhu         $a1, -0x4($fp)
    ctx->pc = 0x2522f4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967292)));
    // 0x2522f8: 0x225182b  sltu        $v1, $s1, $a1
    ctx->pc = 0x2522f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2522fc: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2522FCu;
    {
        const bool branch_taken_0x2522fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2522fc) {
            ctx->pc = 0x252260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252260;
        }
    }
    ctx->pc = 0x252304u;
    // 0x252304: 0x0  nop
    ctx->pc = 0x252304u;
    // NOP
label_252308:
    // 0x252308: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x252308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x25230c: 0xa6630008  sh          $v1, 0x8($s3)
    ctx->pc = 0x25230cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x252310: 0xa7d10000  sh          $s1, 0x0($fp)
    ctx->pc = 0x252310u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x252314: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x252314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x252318: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x252318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x25231c: 0x9664000a  lhu         $a0, 0xA($s3)
    ctx->pc = 0x25231cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x252320: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252324: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x252324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252328: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x252328u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25232c: 0x97c30004  lhu         $v1, 0x4($fp)
    ctx->pc = 0x25232cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x252330: 0x76082b  sltu        $at, $v1, $s6
    ctx->pc = 0x252330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x252334: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x252334u;
    {
        const bool branch_taken_0x252334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x252334) {
            ctx->pc = 0x2523F8u;
            goto label_2523f8;
        }
    }
    ctx->pc = 0x25233Cu;
    // 0x25233c: 0x0  nop
    ctx->pc = 0x25233cu;
    // NOP
label_252340:
    // 0x252340: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x252340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x252344: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x252344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x252348: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x252348u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x25234c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x252350: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x252350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x252354: 0x97c50002  lhu         $a1, 0x2($fp)
    ctx->pc = 0x252354u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x252358: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x252358u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x25235c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25235cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x252360: 0xa7c3fffc  sh          $v1, -0x4($fp)
    ctx->pc = 0x252360u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294967292), (uint16_t)GPR_U32(ctx, 3));
    // 0x252364: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x252364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252368: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x252368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25236c: 0x97c30002  lhu         $v1, 0x2($fp)
    ctx->pc = 0x25236cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x252370: 0xa7c3fffe  sh          $v1, -0x2($fp)
    ctx->pc = 0x252370u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x252374: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x252374u;
    {
        const bool branch_taken_0x252374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252374u;
            // 0x252378: 0xa7d40002  sh          $s4, 0x2($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252374) {
            ctx->pc = 0x2523D8u;
            goto label_2523d8;
        }
    }
    ctx->pc = 0x25237Cu;
    // 0x25237c: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x25237cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252380: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x252380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x252384: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x252384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x252388: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x252388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x25238c: 0x94e40008  lhu         $a0, 0x8($a3)
    ctx->pc = 0x25238cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x252390: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x252390u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x252394: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x252394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252398: 0x1264823  subu        $t1, $t1, $a2
    ctx->pc = 0x252398u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x25239c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2523a0: 0x1054023  subu        $t0, $t0, $a1
    ctx->pc = 0x2523a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2523a4: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x2523a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2523a8: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x2523a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2523ac: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2523ACu;
    {
        const bool branch_taken_0x2523ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2523B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2523ACu;
            // 0x2523b0: 0xa4e40008  sh          $a0, 0x8($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523ac) {
            ctx->pc = 0x2523E8u;
            goto label_2523e8;
        }
    }
    ctx->pc = 0x2523B4u;
    // 0x2523b4: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x2523b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2523b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2523b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2523bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523c0: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x2523c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2523c4: 0xc094648  jal         func_251920
    ctx->pc = 0x2523C4u;
    SET_GPR_U32(ctx, 31, 0x2523CCu);
    ctx->pc = 0x2523C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2523C4u;
            // 0x2523c8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251920u;
    if (runtime->hasFunction(0x251920u)) {
        auto targetFn = runtime->lookupFunction(0x251920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2523CCu; }
        if (ctx->pc != 0x2523CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251920_0x251920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2523CCu; }
        if (ctx->pc != 0x2523CCu) { return; }
    }
    ctx->pc = 0x2523CCu;
label_2523cc:
    // 0x2523cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2523CCu;
    {
        const bool branch_taken_0x2523cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2523cc) {
            ctx->pc = 0x2523E8u;
            goto label_2523e8;
        }
    }
    ctx->pc = 0x2523D4u;
    // 0x2523d4: 0x0  nop
    ctx->pc = 0x2523d4u;
    // NOP
label_2523d8:
    // 0x2523d8: 0x94e3000a  lhu         $v1, 0xA($a3)
    ctx->pc = 0x2523d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x2523dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2523dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2523e0: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x2523e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2523e4: 0x0  nop
    ctx->pc = 0x2523e4u;
    // NOP
label_2523e8:
    // 0x2523e8: 0x97c30004  lhu         $v1, 0x4($fp)
    ctx->pc = 0x2523e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2523ec: 0x76082b  sltu        $at, $v1, $s6
    ctx->pc = 0x2523ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2523f0: 0x1420ffd3  bnez        $at, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2523F0u;
    {
        const bool branch_taken_0x2523f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2523f0) {
            ctx->pc = 0x252340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252340;
        }
    }
    ctx->pc = 0x2523F8u;
label_2523f8:
    // 0x2523f8: 0x97a30190  lhu         $v1, 0x190($sp)
    ctx->pc = 0x2523f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2523fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2523fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252400: 0x9663000a  lhu         $v1, 0xA($s3)
    ctx->pc = 0x252400u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x252404: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x252404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x252408: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25240c: 0xa663000a  sh          $v1, 0xA($s3)
    ctx->pc = 0x25240cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x252410: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x252410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x252414: 0x9664000a  lhu         $a0, 0xA($s3)
    ctx->pc = 0x252414u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x252418: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25241c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25241cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252420: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x252420u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252424: 0x97c4fffc  lhu         $a0, -0x4($fp)
    ctx->pc = 0x252424u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967292)));
    // 0x252428: 0x2c4082b  sltu        $at, $s6, $a0
    ctx->pc = 0x252428u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x25242c: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x25242Cu;
    {
        const bool branch_taken_0x25242c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25242c) {
            ctx->pc = 0x2524F0u;
            goto label_2524f0;
        }
    }
    ctx->pc = 0x252434u;
    // 0x252434: 0x0  nop
    ctx->pc = 0x252434u;
    // NOP
label_252438:
    // 0x252438: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x252438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25243c: 0x27defffc  addiu       $fp, $fp, -0x4
    ctx->pc = 0x25243cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x252440: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x252440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x252444: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252448: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x252448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x25244c: 0x97c50002  lhu         $a1, 0x2($fp)
    ctx->pc = 0x25244cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x252450: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x252450u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x252454: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x252454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x252458: 0xa7c30004  sh          $v1, 0x4($fp)
    ctx->pc = 0x252458u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x25245c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x25245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252460: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x252460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x252464: 0x97c30002  lhu         $v1, 0x2($fp)
    ctx->pc = 0x252464u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x252468: 0xa7c30006  sh          $v1, 0x6($fp)
    ctx->pc = 0x252468u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x25246c: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25246Cu;
    {
        const bool branch_taken_0x25246c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25246Cu;
            // 0x252470: 0xa7d40002  sh          $s4, 0x2($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25246c) {
            ctx->pc = 0x2524D0u;
            goto label_2524d0;
        }
    }
    ctx->pc = 0x252474u;
    // 0x252474: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x252474u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252478: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x252478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x25247c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x25247cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x252480: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x252480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x252484: 0x94e40008  lhu         $a0, 0x8($a3)
    ctx->pc = 0x252484u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x252488: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x252488u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x25248c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x25248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252490: 0x1264823  subu        $t1, $t1, $a2
    ctx->pc = 0x252490u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x252494: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x252494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x252498: 0x1054023  subu        $t0, $t0, $a1
    ctx->pc = 0x252498u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x25249c: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x25249cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2524a0: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x2524a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2524a4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2524A4u;
    {
        const bool branch_taken_0x2524a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2524A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2524A4u;
            // 0x2524a8: 0xa4e40008  sh          $a0, 0x8($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524a4) {
            ctx->pc = 0x2524E0u;
            goto label_2524e0;
        }
    }
    ctx->pc = 0x2524ACu;
    // 0x2524ac: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x2524acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2524b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2524b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2524b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524b8: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x2524b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2524bc: 0xc094684  jal         func_251A10
    ctx->pc = 0x2524BCu;
    SET_GPR_U32(ctx, 31, 0x2524C4u);
    ctx->pc = 0x2524C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2524BCu;
            // 0x2524c0: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251A10u;
    goto label_251a10;
    ctx->pc = 0x2524C4u;
label_2524c4:
    // 0x2524c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2524C4u;
    {
        const bool branch_taken_0x2524c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2524c4) {
            ctx->pc = 0x2524E0u;
            goto label_2524e0;
        }
    }
    ctx->pc = 0x2524CCu;
    // 0x2524cc: 0x0  nop
    ctx->pc = 0x2524ccu;
    // NOP
label_2524d0:
    // 0x2524d0: 0x94e3000a  lhu         $v1, 0xA($a3)
    ctx->pc = 0x2524d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x2524d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2524d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2524d8: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x2524d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2524dc: 0x0  nop
    ctx->pc = 0x2524dcu;
    // NOP
label_2524e0:
    // 0x2524e0: 0x97c4fffc  lhu         $a0, -0x4($fp)
    ctx->pc = 0x2524e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967292)));
    // 0x2524e4: 0x2c4182b  sltu        $v1, $s6, $a0
    ctx->pc = 0x2524e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2524e8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2524E8u;
    {
        const bool branch_taken_0x2524e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2524e8) {
            ctx->pc = 0x252438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252438;
        }
    }
    ctx->pc = 0x2524F0u;
label_2524f0:
    // 0x2524f0: 0x97a30180  lhu         $v1, 0x180($sp)
    ctx->pc = 0x2524f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2524f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2524f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524f8: 0x9663000a  lhu         $v1, 0xA($s3)
    ctx->pc = 0x2524f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x2524fc: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x2524fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x252500: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252504: 0xa663000a  sh          $v1, 0xA($s3)
    ctx->pc = 0x252504u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x252508: 0xa7d60000  sh          $s6, 0x0($fp)
    ctx->pc = 0x252508u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x25250c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x25250cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x252510: 0x96640008  lhu         $a0, 0x8($s3)
    ctx->pc = 0x252510u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x252514: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252518: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x252518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25251c: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x25251cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252520: 0x96c30004  lhu         $v1, 0x4($s6)
    ctx->pc = 0x252520u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x252524: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x252524u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x252528: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x252528u;
    {
        const bool branch_taken_0x252528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x252528) {
            ctx->pc = 0x2525E8u;
            goto label_2525e8;
        }
    }
    ctx->pc = 0x252530u;
label_252530:
    // 0x252530: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x252530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x252534: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x252534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x252538: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x252538u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x25253c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25253cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x252540: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x252540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    // 0x252544: 0x96c50002  lhu         $a1, 0x2($s6)
    ctx->pc = 0x252544u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x252548: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x252548u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x25254c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25254cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x252550: 0xa6c3fffc  sh          $v1, -0x4($s6)
    ctx->pc = 0x252550u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4294967292), (uint16_t)GPR_U32(ctx, 3));
    // 0x252554: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x252554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252558: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x252558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25255c: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x25255cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x252560: 0xa6c3fffe  sh          $v1, -0x2($s6)
    ctx->pc = 0x252560u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x252564: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x252564u;
    {
        const bool branch_taken_0x252564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252564u;
            // 0x252568: 0xa6d40002  sh          $s4, 0x2($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252564) {
            ctx->pc = 0x2525C8u;
            goto label_2525c8;
        }
    }
    ctx->pc = 0x25256Cu;
    // 0x25256c: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x25256cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252570: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x252570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x252574: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x252574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x252578: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x252578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x25257c: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x25257cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x252580: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x252580u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x252584: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x252584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252588: 0x1264823  subu        $t1, $t1, $a2
    ctx->pc = 0x252588u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x25258c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x252590: 0x1054023  subu        $t0, $t0, $a1
    ctx->pc = 0x252590u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x252594: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x252594u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x252598: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x252598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x25259c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x25259Cu;
    {
        const bool branch_taken_0x25259c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2525A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25259Cu;
            // 0x2525a0: 0xa4e4000a  sh          $a0, 0xA($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25259c) {
            ctx->pc = 0x2525D8u;
            goto label_2525d8;
        }
    }
    ctx->pc = 0x2525A4u;
    // 0x2525a4: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x2525a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2525a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2525a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2525acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525b0: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x2525b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2525b4: 0xc094684  jal         func_251A10
    ctx->pc = 0x2525B4u;
    SET_GPR_U32(ctx, 31, 0x2525BCu);
    ctx->pc = 0x2525B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2525B4u;
            // 0x2525b8: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251A10u;
    goto label_251a10;
    ctx->pc = 0x2525BCu;
label_2525bc:
    // 0x2525bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2525BCu;
    {
        const bool branch_taken_0x2525bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2525bc) {
            ctx->pc = 0x2525D8u;
            goto label_2525d8;
        }
    }
    ctx->pc = 0x2525C4u;
    // 0x2525c4: 0x0  nop
    ctx->pc = 0x2525c4u;
    // NOP
label_2525c8:
    // 0x2525c8: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x2525c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2525cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2525ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2525d0: 0xa4e30008  sh          $v1, 0x8($a3)
    ctx->pc = 0x2525d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2525d4: 0x0  nop
    ctx->pc = 0x2525d4u;
    // NOP
label_2525d8:
    // 0x2525d8: 0x96c30004  lhu         $v1, 0x4($s6)
    ctx->pc = 0x2525d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2525dc: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x2525dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2525e0: 0x1420ffd3  bnez        $at, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2525E0u;
    {
        const bool branch_taken_0x2525e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2525e0) {
            ctx->pc = 0x252530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252530;
        }
    }
    ctx->pc = 0x2525E8u;
label_2525e8:
    // 0x2525e8: 0x97a30170  lhu         $v1, 0x170($sp)
    ctx->pc = 0x2525e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2525ec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2525ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525f0: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x2525f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2525f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2525f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2525f8: 0xa6630008  sh          $v1, 0x8($s3)
    ctx->pc = 0x2525f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2525fc: 0xa6d10000  sh          $s1, 0x0($s6)
    ctx->pc = 0x2525fcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x252600: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x252600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x252604: 0x96760000  lhu         $s6, 0x0($s3)
    ctx->pc = 0x252604u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252608: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25260c: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x25260cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x252610: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x252610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252614: 0x9625fffc  lhu         $a1, -0x4($s1)
    ctx->pc = 0x252614u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x252618: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x252618u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x25261c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x25261Cu;
    {
        const bool branch_taken_0x25261c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25261c) {
            ctx->pc = 0x252700u;
            goto label_252700;
        }
    }
    ctx->pc = 0x252624u;
    // 0x252624: 0x0  nop
    ctx->pc = 0x252624u;
    // NOP
label_252628:
    // 0x252628: 0x9623fffe  lhu         $v1, -0x2($s1)
    ctx->pc = 0x252628u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967294)));
    // 0x25262c: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x25262cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x252630: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x252630u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x252634: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x252634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x252638: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x252638u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x25263c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x25263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252640: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x252640u;
    {
        const bool branch_taken_0x252640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252640u;
            // 0x252644: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252640) {
            ctx->pc = 0x2526E0u;
            goto label_2526e0;
        }
    }
    ctx->pc = 0x252648u;
    // 0x252648: 0x966a000a  lhu         $t2, 0xA($s3)
    ctx->pc = 0x252648u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x25264c: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x25264cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x252650: 0x94a9000a  lhu         $t1, 0xA($a1)
    ctx->pc = 0x252650u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x252654: 0x96680008  lhu         $t0, 0x8($s3)
    ctx->pc = 0x252654u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x252658: 0x96670006  lhu         $a3, 0x6($s3)
    ctx->pc = 0x252658u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x25265c: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x25265cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x252660: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x252660u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x252664: 0x1435023  subu        $t2, $t2, $v1
    ctx->pc = 0x252664u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x252668: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x252668u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25266c: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x25266cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x252670: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x252670u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x252674: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x252674u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x252678: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x252678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x25267c: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x25267cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x252680: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x252680u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x252684: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x252684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x252688: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x252688u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x25268c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x25268cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x252690: 0x1463025  or          $a2, $t2, $a2
    ctx->pc = 0x252690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x252694: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x252694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x252698: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x252698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x25269c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x25269cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2526a0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2526a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2526a4: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x2526a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2526a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2526a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2526ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2526acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2526b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2526b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2526b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2526b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2526b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2526b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2526bc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2526bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2526c0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2526C0u;
    {
        const bool branch_taken_0x2526c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2526C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2526C0u;
            // 0x2526c4: 0xa4b60004  sh          $s6, 0x4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526c0) {
            ctx->pc = 0x2526E8u;
            goto label_2526e8;
        }
    }
    ctx->pc = 0x2526C8u;
    // 0x2526c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2526c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526cc: 0xc094608  jal         func_251820
    ctx->pc = 0x2526CCu;
    SET_GPR_U32(ctx, 31, 0x2526D4u);
    ctx->pc = 0x2526D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2526CCu;
            // 0x2526d0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251820u;
    if (runtime->hasFunction(0x251820u)) {
        auto targetFn = runtime->lookupFunction(0x251820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2526D4u; }
        if (ctx->pc != 0x2526D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251820_0x251820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2526D4u; }
        if (ctx->pc != 0x2526D4u) { return; }
    }
    ctx->pc = 0x2526D4u;
label_2526d4:
    // 0x2526d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2526D4u;
    {
        const bool branch_taken_0x2526d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2526d4) {
            ctx->pc = 0x2526E8u;
            goto label_2526e8;
        }
    }
    ctx->pc = 0x2526DCu;
    // 0x2526dc: 0x0  nop
    ctx->pc = 0x2526dcu;
    // NOP
label_2526e0:
    // 0x2526e0: 0xa4b60000  sh          $s6, 0x0($a1)
    ctx->pc = 0x2526e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x2526e4: 0x0  nop
    ctx->pc = 0x2526e4u;
    // NOP
label_2526e8:
    // 0x2526e8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x2526e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2526ec: 0xa6340002  sh          $s4, 0x2($s1)
    ctx->pc = 0x2526ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x2526f0: 0x9625fffc  lhu         $a1, -0x4($s1)
    ctx->pc = 0x2526f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x2526f4: 0x245182b  sltu        $v1, $s2, $a1
    ctx->pc = 0x2526f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2526f8: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2526F8u;
    {
        const bool branch_taken_0x2526f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2526FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2526F8u;
            // 0x2526fc: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526f8) {
            ctx->pc = 0x252628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252628;
        }
    }
    ctx->pc = 0x252700u;
label_252700:
    // 0x252700: 0xa6760000  sh          $s6, 0x0($s3)
    ctx->pc = 0x252700u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x252704: 0xa6320000  sh          $s2, 0x0($s1)
    ctx->pc = 0x252704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x252708: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x252708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x25270c: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x25270cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252710: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252714: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x252714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252718: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x252718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25271c: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x25271cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252720: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x252720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x252724: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x252724u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x252728: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x252728u;
    {
        const bool branch_taken_0x252728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25272Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252728u;
            // 0x25272c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252728) {
            ctx->pc = 0x252828u;
            goto label_252828;
        }
    }
    ctx->pc = 0x252730u;
label_252730:
    // 0x252730: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x252730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x252734: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x252734u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252738: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x252738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25273c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x25273cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252740: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x252740u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x252744: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x252744u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x252748: 0xa623fffc  sh          $v1, -0x4($s1)
    ctx->pc = 0x252748u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967292), (uint16_t)GPR_U32(ctx, 3));
    // 0x25274c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x25274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252750: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x252750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x252754: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x252754u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252758: 0xa623fffe  sh          $v1, -0x2($s1)
    ctx->pc = 0x252758u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x25275c: 0x14800028  bnez        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x25275Cu;
    {
        const bool branch_taken_0x25275c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25275Cu;
            // 0x252760: 0xa6340002  sh          $s4, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25275c) {
            ctx->pc = 0x252800u;
            goto label_252800;
        }
    }
    ctx->pc = 0x252764u;
    // 0x252764: 0x9664000a  lhu         $a0, 0xA($s3)
    ctx->pc = 0x252764u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x252768: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x252768u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25276c: 0x94aa000a  lhu         $t2, 0xA($a1)
    ctx->pc = 0x25276cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x252770: 0x96690008  lhu         $t1, 0x8($s3)
    ctx->pc = 0x252770u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x252774: 0x96680006  lhu         $t0, 0x6($s3)
    ctx->pc = 0x252774u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x252778: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x252778u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x25277c: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x25277cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x252780: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x252780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x252784: 0x35c3c  dsll32      $t3, $v1, 16
    ctx->pc = 0x252784u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 16));
    // 0x252788: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x252788u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25278c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x25278cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252790: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x252790u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x252794: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x252794u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x252798: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x252798u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x25279c: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x25279cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2527a0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2527a0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2527a4: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x2527a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2527a8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2527a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2527ac: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x2527acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2527b0: 0x1673825  or          $a3, $t3, $a3
    ctx->pc = 0x2527b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x2527b4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2527b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2527b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2527b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2527bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2527bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2527c0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2527c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2527c4: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x2527c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x2527c8: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x2527c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2527cc: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2527ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2527d0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2527d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2527d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2527d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2527d8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2527d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2527dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2527dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2527e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2527e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2527e4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2527e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2527e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2527E8u;
    {
        const bool branch_taken_0x2527e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2527ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2527E8u;
            // 0x2527ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527e8) {
            ctx->pc = 0x252810u;
            goto label_252810;
        }
    }
    ctx->pc = 0x2527F0u;
    // 0x2527f0: 0xc094608  jal         func_251820
    ctx->pc = 0x2527F0u;
    SET_GPR_U32(ctx, 31, 0x2527F8u);
    ctx->pc = 0x2527F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2527F0u;
            // 0x2527f4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251820u;
    if (runtime->hasFunction(0x251820u)) {
        auto targetFn = runtime->lookupFunction(0x251820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2527F8u; }
        if (ctx->pc != 0x2527F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251820_0x251820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2527F8u; }
        if (ctx->pc != 0x2527F8u) { return; }
    }
    ctx->pc = 0x2527F8u;
label_2527f8:
    // 0x2527f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2527F8u;
    {
        const bool branch_taken_0x2527f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2527f8) {
            ctx->pc = 0x252810u;
            goto label_252810;
        }
    }
    ctx->pc = 0x252800u;
label_252800:
    // 0x252800: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x252800u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x252804: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252808: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x252808u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x25280c: 0x0  nop
    ctx->pc = 0x25280cu;
    // NOP
label_252810:
    // 0x252810: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x252810u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252814: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x252814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x252818: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x252818u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25281c: 0x1420ffc4  bnez        $at, . + 4 + (-0x3C << 2)
    ctx->pc = 0x25281Cu;
    {
        const bool branch_taken_0x25281c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25281c) {
            ctx->pc = 0x252730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252730;
        }
    }
    ctx->pc = 0x252824u;
    // 0x252824: 0x0  nop
    ctx->pc = 0x252824u;
    // NOP
label_252828:
    // 0x252828: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x252828u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25282c: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x25282cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x252830: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252834: 0xa6630004  sh          $v1, 0x4($s3)
    ctx->pc = 0x252834u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x252838: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x252838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x25283c: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x25283cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252840: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252844: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x252844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252848: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x252848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25284c: 0x9624fffc  lhu         $a0, -0x4($s1)
    ctx->pc = 0x25284cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x252850: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x252850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x252854: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x252854u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x252858: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x252858u;
    {
        const bool branch_taken_0x252858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252858u;
            // 0x25285c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252858) {
            ctx->pc = 0x252958u;
            goto label_252958;
        }
    }
    ctx->pc = 0x252860u;
label_252860:
    // 0x252860: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x252860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x252864: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x252864u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252868: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x252868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25286c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x25286cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252870: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x252870u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x252874: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x252874u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x252878: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x252878u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x25287c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x25287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252880: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x252880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x252884: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x252884u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252888: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x252888u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x25288c: 0x14800028  bnez        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x25288Cu;
    {
        const bool branch_taken_0x25288c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25288Cu;
            // 0x252890: 0xa6340002  sh          $s4, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25288c) {
            ctx->pc = 0x252930u;
            goto label_252930;
        }
    }
    ctx->pc = 0x252894u;
    // 0x252894: 0x9664000a  lhu         $a0, 0xA($s3)
    ctx->pc = 0x252894u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x252898: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x252898u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25289c: 0x94aa000a  lhu         $t2, 0xA($a1)
    ctx->pc = 0x25289cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2528a0: 0x96690008  lhu         $t1, 0x8($s3)
    ctx->pc = 0x2528a0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2528a4: 0x96680006  lhu         $t0, 0x6($s3)
    ctx->pc = 0x2528a4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x2528a8: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x2528a8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2528ac: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x2528acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2528b0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2528b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2528b4: 0x35c3c  dsll32      $t3, $v1, 16
    ctx->pc = 0x2528b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2528b8: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x2528b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2528bc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2528bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2528c0: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x2528c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2528c4: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x2528c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x2528c8: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x2528c8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x2528cc: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x2528ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2528d0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2528d0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2528d4: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x2528d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2528d8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2528d8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2528dc: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x2528dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2528e0: 0x1673825  or          $a3, $t3, $a3
    ctx->pc = 0x2528e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x2528e4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2528e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2528e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2528e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2528ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2528ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2528f0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2528f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2528f4: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x2528f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x2528f8: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x2528f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2528fc: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2528fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x252900: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x252900u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x252904: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x252904u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x252908: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x252908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x25290c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x25290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x252910: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x252910u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x252914: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x252914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x252918: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x252918u;
    {
        const bool branch_taken_0x252918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252918u;
            // 0x25291c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252918) {
            ctx->pc = 0x252940u;
            goto label_252940;
        }
    }
    ctx->pc = 0x252920u;
    // 0x252920: 0xc094628  jal         func_2518A0
    ctx->pc = 0x252920u;
    SET_GPR_U32(ctx, 31, 0x252928u);
    ctx->pc = 0x252924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252920u;
            // 0x252924: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2518A0u;
    if (runtime->hasFunction(0x2518A0u)) {
        auto targetFn = runtime->lookupFunction(0x2518A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252928u; }
        if (ctx->pc != 0x252928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002518A0_0x2518a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252928u; }
        if (ctx->pc != 0x252928u) { return; }
    }
    ctx->pc = 0x252928u;
label_252928:
    // 0x252928: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252928u;
    {
        const bool branch_taken_0x252928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252928) {
            ctx->pc = 0x252940u;
            goto label_252940;
        }
    }
    ctx->pc = 0x252930u;
label_252930:
    // 0x252930: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x252930u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x252934: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x252934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x252938: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x252938u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x25293c: 0x0  nop
    ctx->pc = 0x25293cu;
    // NOP
label_252940:
    // 0x252940: 0x9624fffc  lhu         $a0, -0x4($s1)
    ctx->pc = 0x252940u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x252944: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x252944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x252948: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x252948u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x25294c: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x25294Cu;
    {
        const bool branch_taken_0x25294c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25294c) {
            ctx->pc = 0x252860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252860;
        }
    }
    ctx->pc = 0x252954u;
    // 0x252954: 0x0  nop
    ctx->pc = 0x252954u;
    // NOP
label_252958:
    // 0x252958: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x252958u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25295c: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x25295cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x252960: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252964: 0xa6630004  sh          $v1, 0x4($s3)
    ctx->pc = 0x252964u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x252968: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x252968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x25296c: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x25296cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x252970: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x252970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x252974: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x252974u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252978: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25297c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25297cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252980: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x252980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252984: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x252984u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252988: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x252988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x25298c: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x25298Cu;
    {
        const bool branch_taken_0x25298c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x252990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25298Cu;
            // 0x252990: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25298c) {
            ctx->pc = 0x252A88u;
            goto label_252a88;
        }
    }
    ctx->pc = 0x252994u;
    // 0x252994: 0x0  nop
    ctx->pc = 0x252994u;
    // NOP
label_252998:
    // 0x252998: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x252998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x25299c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x25299cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2529a0: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x2529a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2529a4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2529a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2529a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2529a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2529ac: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2529acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2529b0: 0xa623fffc  sh          $v1, -0x4($s1)
    ctx->pc = 0x2529b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967292), (uint16_t)GPR_U32(ctx, 3));
    // 0x2529b4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2529b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2529b8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2529b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2529bc: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x2529bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2529c0: 0xa623fffe  sh          $v1, -0x2($s1)
    ctx->pc = 0x2529c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x2529c4: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2529C4u;
    {
        const bool branch_taken_0x2529c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2529C4u;
            // 0x2529c8: 0xa6340002  sh          $s4, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529c4) {
            ctx->pc = 0x252A68u;
            goto label_252a68;
        }
    }
    ctx->pc = 0x2529CCu;
    // 0x2529cc: 0x9664000a  lhu         $a0, 0xA($s3)
    ctx->pc = 0x2529ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x2529d0: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x2529d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2529d4: 0x94aa000a  lhu         $t2, 0xA($a1)
    ctx->pc = 0x2529d4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2529d8: 0x96690008  lhu         $t1, 0x8($s3)
    ctx->pc = 0x2529d8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2529dc: 0x96680006  lhu         $t0, 0x6($s3)
    ctx->pc = 0x2529dcu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x2529e0: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x2529e0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2529e4: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x2529e4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2529e8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2529e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2529ec: 0x35c3c  dsll32      $t3, $v1, 16
    ctx->pc = 0x2529ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2529f0: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x2529f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2529f4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x2529f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2529f8: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x2529f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2529fc: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x2529fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x252a00: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x252a00u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x252a04: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x252a04u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x252a08: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x252a08u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x252a0c: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x252a0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x252a10: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x252a10u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x252a14: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x252a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x252a18: 0x1673825  or          $a3, $t3, $a3
    ctx->pc = 0x252a18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x252a1c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x252a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x252a20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252a24: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x252a24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x252a28: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x252a28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x252a2c: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x252a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x252a30: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x252a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x252a34: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x252a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x252a38: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x252a38u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x252a3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x252a3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x252a40: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x252a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x252a44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x252a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x252a48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x252a48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x252a4c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x252a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x252a50: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x252A50u;
    {
        const bool branch_taken_0x252a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252A50u;
            // 0x252a54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a50) {
            ctx->pc = 0x252A78u;
            goto label_252a78;
        }
    }
    ctx->pc = 0x252A58u;
    // 0x252a58: 0xc094628  jal         func_2518A0
    ctx->pc = 0x252A58u;
    SET_GPR_U32(ctx, 31, 0x252A60u);
    ctx->pc = 0x252A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252A58u;
            // 0x252a5c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2518A0u;
    if (runtime->hasFunction(0x2518A0u)) {
        auto targetFn = runtime->lookupFunction(0x2518A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252A60u; }
        if (ctx->pc != 0x252A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002518A0_0x2518a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252A60u; }
        if (ctx->pc != 0x252A60u) { return; }
    }
    ctx->pc = 0x252A60u;
label_252a60:
    // 0x252a60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252A60u;
    {
        const bool branch_taken_0x252a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252a60) {
            ctx->pc = 0x252A78u;
            goto label_252a78;
        }
    }
    ctx->pc = 0x252A68u;
label_252a68:
    // 0x252a68: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x252a68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252a6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252a70: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x252a70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x252a74: 0x0  nop
    ctx->pc = 0x252a74u;
    // NOP
label_252a78:
    // 0x252a78: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x252a78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252a7c: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x252a7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x252a80: 0x1420ffc5  bnez        $at, . + 4 + (-0x3B << 2)
    ctx->pc = 0x252A80u;
    {
        const bool branch_taken_0x252a80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x252a80) {
            ctx->pc = 0x252998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252998;
        }
    }
    ctx->pc = 0x252A88u;
label_252a88:
    // 0x252a88: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x252a88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252a8c: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x252a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x252a90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252a94: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x252a94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x252a98: 0xa6320000  sh          $s2, 0x0($s1)
    ctx->pc = 0x252a98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x252a9c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x252a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x252aa0: 0x96720002  lhu         $s2, 0x2($s3)
    ctx->pc = 0x252aa0u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x252aa4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252aa8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x252aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x252aac: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x252aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252ab0: 0x9625fffc  lhu         $a1, -0x4($s1)
    ctx->pc = 0x252ab0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x252ab4: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x252ab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x252ab8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x252AB8u;
    {
        const bool branch_taken_0x252ab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ab8) {
            ctx->pc = 0x252B78u;
            goto label_252b78;
        }
    }
    ctx->pc = 0x252AC0u;
label_252ac0:
    // 0x252ac0: 0x9623fffe  lhu         $v1, -0x2($s1)
    ctx->pc = 0x252ac0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967294)));
    // 0x252ac4: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x252ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x252ac8: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x252ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x252acc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x252accu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x252ad0: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x252ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x252ad4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x252ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252ad8: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x252AD8u;
    {
        const bool branch_taken_0x252ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252AD8u;
            // 0x252adc: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ad8) {
            ctx->pc = 0x252B58u;
            goto label_252b58;
        }
    }
    ctx->pc = 0x252AE0u;
    // 0x252ae0: 0x966a0004  lhu         $t2, 0x4($s3)
    ctx->pc = 0x252ae0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252ae4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x252ae4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252ae8: 0x94a90004  lhu         $t1, 0x4($a1)
    ctx->pc = 0x252ae8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x252aec: 0x96680000  lhu         $t0, 0x0($s3)
    ctx->pc = 0x252aecu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252af0: 0x9667000a  lhu         $a3, 0xA($s3)
    ctx->pc = 0x252af0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x252af4: 0x94a60008  lhu         $a2, 0x8($a1)
    ctx->pc = 0x252af4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x252af8: 0x94a4000a  lhu         $a0, 0xA($a1)
    ctx->pc = 0x252af8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x252afc: 0x1435023  subu        $t2, $t2, $v1
    ctx->pc = 0x252afcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x252b00: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x252b00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x252b04: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x252b04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x252b08: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x252b08u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x252b0c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x252b0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x252b10: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x252b10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x252b14: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x252b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x252b18: 0x1463025  or          $a2, $t2, $a2
    ctx->pc = 0x252b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x252b1c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x252b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x252b20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x252b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x252b24: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x252b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x252b28: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x252b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x252b2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x252b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x252b30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x252b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x252b34: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x252b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x252b38: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x252b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x252b3c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x252B3Cu;
    {
        const bool branch_taken_0x252b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252B3Cu;
            // 0x252b40: 0xa4b20006  sh          $s2, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b3c) {
            ctx->pc = 0x252B60u;
            goto label_252b60;
        }
    }
    ctx->pc = 0x252B44u;
    // 0x252b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x252b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b48: 0xc094608  jal         func_251820
    ctx->pc = 0x252B48u;
    SET_GPR_U32(ctx, 31, 0x252B50u);
    ctx->pc = 0x252B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252B48u;
            // 0x252b4c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251820u;
    if (runtime->hasFunction(0x251820u)) {
        auto targetFn = runtime->lookupFunction(0x251820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B50u; }
        if (ctx->pc != 0x252B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251820_0x251820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B50u; }
        if (ctx->pc != 0x252B50u) { return; }
    }
    ctx->pc = 0x252B50u;
label_252b50:
    // 0x252b50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252B50u;
    {
        const bool branch_taken_0x252b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b50) {
            ctx->pc = 0x252B60u;
            goto label_252b60;
        }
    }
    ctx->pc = 0x252B58u;
label_252b58:
    // 0x252b58: 0xa4b20002  sh          $s2, 0x2($a1)
    ctx->pc = 0x252b58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x252b5c: 0x0  nop
    ctx->pc = 0x252b5cu;
    // NOP
label_252b60:
    // 0x252b60: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x252b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x252b64: 0xa6340002  sh          $s4, 0x2($s1)
    ctx->pc = 0x252b64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x252b68: 0x9625fffc  lhu         $a1, -0x4($s1)
    ctx->pc = 0x252b68u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x252b6c: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x252b6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x252b70: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x252B70u;
    {
        const bool branch_taken_0x252b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252B70u;
            // 0x252b74: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b70) {
            ctx->pc = 0x252AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252ac0;
        }
    }
    ctx->pc = 0x252B78u;
label_252b78:
    // 0x252b78: 0xa6720002  sh          $s2, 0x2($s3)
    ctx->pc = 0x252b78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x252b7c: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x252b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x252b80: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x252b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x252b84: 0x96640006  lhu         $a0, 0x6($s3)
    ctx->pc = 0x252b84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x252b88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252b8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x252b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252b90: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x252b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252b94: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x252b94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252b98: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x252b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x252b9c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x252b9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x252ba0: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x252BA0u;
    {
        const bool branch_taken_0x252ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x252BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252BA0u;
            // 0x252ba4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ba0) {
            ctx->pc = 0x252C88u;
            goto label_252c88;
        }
    }
    ctx->pc = 0x252BA8u;
label_252ba8:
    // 0x252ba8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x252ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x252bac: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x252bacu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252bb0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x252bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x252bb4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x252bb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252bb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x252bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x252bbc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x252bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x252bc0: 0xa623fffc  sh          $v1, -0x4($s1)
    ctx->pc = 0x252bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967292), (uint16_t)GPR_U32(ctx, 3));
    // 0x252bc4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x252bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252bc8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x252bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x252bcc: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x252bccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252bd0: 0xa623fffe  sh          $v1, -0x2($s1)
    ctx->pc = 0x252bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x252bd4: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x252BD4u;
    {
        const bool branch_taken_0x252bd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252BD4u;
            // 0x252bd8: 0xa6340002  sh          $s4, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bd4) {
            ctx->pc = 0x252C60u;
            goto label_252c60;
        }
    }
    ctx->pc = 0x252BDCu;
    // 0x252bdc: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x252bdcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252be0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x252be0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252be4: 0x94aa0004  lhu         $t2, 0x4($a1)
    ctx->pc = 0x252be4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x252be8: 0x96690000  lhu         $t1, 0x0($s3)
    ctx->pc = 0x252be8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252bec: 0x9668000a  lhu         $t0, 0xA($s3)
    ctx->pc = 0x252becu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x252bf0: 0x94a70008  lhu         $a3, 0x8($a1)
    ctx->pc = 0x252bf0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x252bf4: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x252bf4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x252bf8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x252bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x252bfc: 0x96640008  lhu         $a0, 0x8($s3)
    ctx->pc = 0x252bfcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x252c00: 0x306bffff  andi        $t3, $v1, 0xFFFF
    ctx->pc = 0x252c00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x252c04: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x252c04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x252c08: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x252c08u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x252c0c: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x252c0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x252c10: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x252c10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x252c14: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x252c14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x252c18: 0x1673825  or          $a3, $t3, $a3
    ctx->pc = 0x252c18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x252c1c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x252c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x252c20: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x252c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x252c24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252c28: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x252c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x252c2c: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x252c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x252c30: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x252c30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x252c34: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x252c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x252c38: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x252c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x252c3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x252c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x252c40: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x252c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x252c44: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x252C44u;
    {
        const bool branch_taken_0x252c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252C44u;
            // 0x252c48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c44) {
            ctx->pc = 0x252C70u;
            goto label_252c70;
        }
    }
    ctx->pc = 0x252C4Cu;
    // 0x252c4c: 0xc094608  jal         func_251820
    ctx->pc = 0x252C4Cu;
    SET_GPR_U32(ctx, 31, 0x252C54u);
    ctx->pc = 0x252C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252C4Cu;
            // 0x252c50: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251820u;
    if (runtime->hasFunction(0x251820u)) {
        auto targetFn = runtime->lookupFunction(0x251820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C54u; }
        if (ctx->pc != 0x252C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251820_0x251820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C54u; }
        if (ctx->pc != 0x252C54u) { return; }
    }
    ctx->pc = 0x252C54u;
label_252c54:
    // 0x252c54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x252C54u;
    {
        const bool branch_taken_0x252c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252c54) {
            ctx->pc = 0x252C70u;
            goto label_252c70;
        }
    }
    ctx->pc = 0x252C5Cu;
    // 0x252c5c: 0x0  nop
    ctx->pc = 0x252c5cu;
    // NOP
label_252c60:
    // 0x252c60: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x252c60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x252c64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252c68: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x252c68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x252c6c: 0x0  nop
    ctx->pc = 0x252c6cu;
    // NOP
label_252c70:
    // 0x252c70: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x252c70u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252c74: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x252c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x252c78: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x252c78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x252c7c: 0x1420ffca  bnez        $at, . + 4 + (-0x36 << 2)
    ctx->pc = 0x252C7Cu;
    {
        const bool branch_taken_0x252c7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x252c7c) {
            ctx->pc = 0x252BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252ba8;
        }
    }
    ctx->pc = 0x252C84u;
    // 0x252c84: 0x0  nop
    ctx->pc = 0x252c84u;
    // NOP
label_252c88:
    // 0x252c88: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x252c88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x252c8c: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x252c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x252c90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252c94: 0xa6630006  sh          $v1, 0x6($s3)
    ctx->pc = 0x252c94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x252c98: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x252c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x252c9c: 0x96640006  lhu         $a0, 0x6($s3)
    ctx->pc = 0x252c9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x252ca0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252ca4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x252ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252ca8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x252ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252cac: 0x9624fffc  lhu         $a0, -0x4($s1)
    ctx->pc = 0x252cacu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x252cb0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x252cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x252cb4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x252cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x252cb8: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x252CB8u;
    {
        const bool branch_taken_0x252cb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252CB8u;
            // 0x252cbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cb8) {
            ctx->pc = 0x252DA0u;
            goto label_252da0;
        }
    }
    ctx->pc = 0x252CC0u;
label_252cc0:
    // 0x252cc0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x252cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x252cc4: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x252cc4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252cc8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x252cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x252ccc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x252cccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252cd0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x252cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x252cd4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x252cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x252cd8: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x252cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x252cdc: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x252cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252ce0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x252ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x252ce4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x252ce4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252ce8: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x252ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x252cec: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x252CECu;
    {
        const bool branch_taken_0x252cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252CECu;
            // 0x252cf0: 0xa6340002  sh          $s4, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cec) {
            ctx->pc = 0x252D78u;
            goto label_252d78;
        }
    }
    ctx->pc = 0x252CF4u;
    // 0x252cf4: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x252cf4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252cf8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x252cf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252cfc: 0x94aa0004  lhu         $t2, 0x4($a1)
    ctx->pc = 0x252cfcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x252d00: 0x96690000  lhu         $t1, 0x0($s3)
    ctx->pc = 0x252d00u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252d04: 0x9668000a  lhu         $t0, 0xA($s3)
    ctx->pc = 0x252d04u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x252d08: 0x94a70008  lhu         $a3, 0x8($a1)
    ctx->pc = 0x252d08u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x252d0c: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x252d0cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x252d10: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x252d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x252d14: 0x96640008  lhu         $a0, 0x8($s3)
    ctx->pc = 0x252d14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x252d18: 0x306bffff  andi        $t3, $v1, 0xFFFF
    ctx->pc = 0x252d18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x252d1c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x252d1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x252d20: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x252d20u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x252d24: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x252d24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x252d28: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x252d28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x252d2c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x252d2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x252d30: 0x1673825  or          $a3, $t3, $a3
    ctx->pc = 0x252d30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x252d34: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x252d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x252d38: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x252d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x252d3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x252d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x252d40: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x252d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x252d44: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x252d44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x252d48: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x252d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x252d4c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x252d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x252d50: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x252d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x252d54: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x252d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x252d58: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x252d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x252d5c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x252D5Cu;
    {
        const bool branch_taken_0x252d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D5Cu;
            // 0x252d60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d5c) {
            ctx->pc = 0x252D88u;
            goto label_252d88;
        }
    }
    ctx->pc = 0x252D64u;
    // 0x252d64: 0xc094628  jal         func_2518A0
    ctx->pc = 0x252D64u;
    SET_GPR_U32(ctx, 31, 0x252D6Cu);
    ctx->pc = 0x252D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252D64u;
            // 0x252d68: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2518A0u;
    if (runtime->hasFunction(0x2518A0u)) {
        auto targetFn = runtime->lookupFunction(0x2518A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D6Cu; }
        if (ctx->pc != 0x252D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002518A0_0x2518a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D6Cu; }
        if (ctx->pc != 0x252D6Cu) { return; }
    }
    ctx->pc = 0x252D6Cu;
label_252d6c:
    // 0x252d6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x252D6Cu;
    {
        const bool branch_taken_0x252d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252d6c) {
            ctx->pc = 0x252D88u;
            goto label_252d88;
        }
    }
    ctx->pc = 0x252D74u;
    // 0x252d74: 0x0  nop
    ctx->pc = 0x252d74u;
    // NOP
label_252d78:
    // 0x252d78: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x252d78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x252d7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x252d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x252d80: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x252d80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x252d84: 0x0  nop
    ctx->pc = 0x252d84u;
    // NOP
label_252d88:
    // 0x252d88: 0x9624fffc  lhu         $a0, -0x4($s1)
    ctx->pc = 0x252d88u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x252d8c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x252d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x252d90: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x252d90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x252d94: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x252D94u;
    {
        const bool branch_taken_0x252d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252d94) {
            ctx->pc = 0x252CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252cc0;
        }
    }
    ctx->pc = 0x252D9Cu;
    // 0x252d9c: 0x0  nop
    ctx->pc = 0x252d9cu;
    // NOP
label_252da0:
    // 0x252da0: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x252da0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x252da4: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x252da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x252da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252dac: 0xa6630006  sh          $v1, 0x6($s3)
    ctx->pc = 0x252dacu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x252db0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x252db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x252db4: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x252db4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x252db8: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x252db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x252dbc: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x252dbcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x252dc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252dc4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x252dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252dc8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x252dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252dcc: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x252dccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252dd0: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x252dd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x252dd4: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x252DD4u;
    {
        const bool branch_taken_0x252dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DD4u;
            // 0x252dd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dd4) {
            ctx->pc = 0x252EB8u;
            goto label_252eb8;
        }
    }
    ctx->pc = 0x252DDCu;
    // 0x252ddc: 0x0  nop
    ctx->pc = 0x252ddcu;
    // NOP
label_252de0:
    // 0x252de0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x252de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x252de4: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x252de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x252de8: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x252de8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252dec: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x252decu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252df0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x252df0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x252df4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x252df4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x252df8: 0xa623fffc  sh          $v1, -0x4($s1)
    ctx->pc = 0x252df8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967292), (uint16_t)GPR_U32(ctx, 3));
    // 0x252dfc: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x252dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x252e00: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x252e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x252e04: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x252e04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x252e08: 0xa623fffe  sh          $v1, -0x2($s1)
    ctx->pc = 0x252e08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x252e0c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x252E0Cu;
    {
        const bool branch_taken_0x252e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E0Cu;
            // 0x252e10: 0xa6340002  sh          $s4, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e0c) {
            ctx->pc = 0x252E98u;
            goto label_252e98;
        }
    }
    ctx->pc = 0x252E14u;
    // 0x252e14: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x252e14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x252e18: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x252e18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252e1c: 0x94aa0004  lhu         $t2, 0x4($a1)
    ctx->pc = 0x252e1cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x252e20: 0x96690000  lhu         $t1, 0x0($s3)
    ctx->pc = 0x252e20u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252e24: 0x9668000a  lhu         $t0, 0xA($s3)
    ctx->pc = 0x252e24u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x252e28: 0x94a70008  lhu         $a3, 0x8($a1)
    ctx->pc = 0x252e28u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x252e2c: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x252e2cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x252e30: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x252e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x252e34: 0x96640008  lhu         $a0, 0x8($s3)
    ctx->pc = 0x252e34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x252e38: 0x306bffff  andi        $t3, $v1, 0xFFFF
    ctx->pc = 0x252e38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x252e3c: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x252e3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x252e40: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x252e40u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x252e44: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x252e44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x252e48: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x252e48u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x252e4c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x252e4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x252e50: 0x1673825  or          $a3, $t3, $a3
    ctx->pc = 0x252e50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x252e54: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x252e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x252e58: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x252e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x252e5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252e60: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x252e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x252e64: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x252e64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x252e68: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x252e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x252e6c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x252e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x252e70: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x252e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x252e74: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x252e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x252e78: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x252e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x252e7c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x252E7Cu;
    {
        const bool branch_taken_0x252e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E7Cu;
            // 0x252e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e7c) {
            ctx->pc = 0x252EA8u;
            goto label_252ea8;
        }
    }
    ctx->pc = 0x252E84u;
    // 0x252e84: 0xc094628  jal         func_2518A0
    ctx->pc = 0x252E84u;
    SET_GPR_U32(ctx, 31, 0x252E8Cu);
    ctx->pc = 0x252E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252E84u;
            // 0x252e88: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2518A0u;
    if (runtime->hasFunction(0x2518A0u)) {
        auto targetFn = runtime->lookupFunction(0x2518A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E8Cu; }
        if (ctx->pc != 0x252E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002518A0_0x2518a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E8Cu; }
        if (ctx->pc != 0x252E8Cu) { return; }
    }
    ctx->pc = 0x252E8Cu;
label_252e8c:
    // 0x252e8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x252E8Cu;
    {
        const bool branch_taken_0x252e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e8c) {
            ctx->pc = 0x252EA8u;
            goto label_252ea8;
        }
    }
    ctx->pc = 0x252E94u;
    // 0x252e94: 0x0  nop
    ctx->pc = 0x252e94u;
    // NOP
label_252e98:
    // 0x252e98: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x252e98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x252e9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252ea0: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x252ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x252ea4: 0x0  nop
    ctx->pc = 0x252ea4u;
    // NOP
label_252ea8:
    // 0x252ea8: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x252ea8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252eac: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x252eacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x252eb0: 0x1420ffcb  bnez        $at, . + 4 + (-0x35 << 2)
    ctx->pc = 0x252EB0u;
    {
        const bool branch_taken_0x252eb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x252eb0) {
            ctx->pc = 0x252DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252de0;
        }
    }
    ctx->pc = 0x252EB8u;
label_252eb8:
    // 0x252eb8: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x252eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x252ebc: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x252ebcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x252ec0: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x252ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x252ec4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x252ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x252ec8: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x252ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x252ecc: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x252eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x252ed0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x252ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x252ed4: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x252ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
    // 0x252ed8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x252ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x252edc: 0xa6630002  sh          $v1, 0x2($s3)
    ctx->pc = 0x252edcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x252ee0: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x252ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x252ee4: 0x0  nop
    ctx->pc = 0x252ee4u;
    // NOP
label_252ee8:
    // 0x252ee8: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x252ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x252eec: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x252eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x252ef0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x252ef0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x252ef4: 0x1460fb26  bnez        $v1, . + 4 + (-0x4DA << 2)
    ctx->pc = 0x252EF4u;
    {
        const bool branch_taken_0x252ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252ef4) {
            ctx->pc = 0x251B90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251b90;
        }
    }
    ctx->pc = 0x252EFCu;
    // 0x252efc: 0x0  nop
    ctx->pc = 0x252efcu;
    // NOP
label_252f00:
    // 0x252f00: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x252F00u;
    {
        const bool branch_taken_0x252f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252f00) {
            ctx->pc = 0x252FB0u;
            goto label_252fb0;
        }
    }
    ctx->pc = 0x252F08u;
label_252f08:
    // 0x252f08: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x252f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x252f0c: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x252f0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x252f10: 0x1020fffb  beqz        $at, . + 4 + (-0x5 << 2)
    ctx->pc = 0x252F10u;
    {
        const bool branch_taken_0x252f10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x252f10) {
            ctx->pc = 0x252F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252f00;
        }
    }
    ctx->pc = 0x252F18u;
    // 0x252f18: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x252f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x252f1c: 0x2463007c  addiu       $v1, $v1, 0x7C
    ctx->pc = 0x252f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
    // 0x252f20: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x252f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x252f24: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x252f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x252f28: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x252f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x252f2c: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x252f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x252f30: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x252f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x252f34: 0x24630094  addiu       $v1, $v1, 0x94
    ctx->pc = 0x252f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x252f38: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x252f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x252f3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x252f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x252f40: 0x2463cf94  addiu       $v1, $v1, -0x306C
    ctx->pc = 0x252f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954900));
    // 0x252f44: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x252f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x252f48: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x252f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x252f4c: 0x2463cf98  addiu       $v1, $v1, -0x3068
    ctx->pc = 0x252f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954904));
    // 0x252f50: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x252f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x252f54: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x252f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x252f58: 0x2463cf9c  addiu       $v1, $v1, -0x3064
    ctx->pc = 0x252f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954908));
    // 0x252f5c: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x252f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x252f60: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x252f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x252f64: 0x2463f934  addiu       $v1, $v1, -0x6CC
    ctx->pc = 0x252f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965556));
    // 0x252f68: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x252f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x252f6c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x252f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x252f70: 0x2463f938  addiu       $v1, $v1, -0x6C8
    ctx->pc = 0x252f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965560));
    // 0x252f74: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x252f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x252f78: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x252f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x252f7c: 0x2463f93c  addiu       $v1, $v1, -0x6C4
    ctx->pc = 0x252f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965564));
    // 0x252f80: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x252f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x252f84: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x252f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x252f88: 0x2463f904  addiu       $v1, $v1, -0x6FC
    ctx->pc = 0x252f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965508));
    // 0x252f8c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x252f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x252f90: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x252f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x252f94: 0x2463f908  addiu       $v1, $v1, -0x6F8
    ctx->pc = 0x252f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965512));
    // 0x252f98: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x252f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x252f9c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x252f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x252fa0: 0x2463f90c  addiu       $v1, $v1, -0x6F4
    ctx->pc = 0x252fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965516));
    // 0x252fa4: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x252FA4u;
    {
        const bool branch_taken_0x252fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252FA4u;
            // 0x252fa8: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fa4) {
            ctx->pc = 0x252EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252ee8;
        }
    }
    ctx->pc = 0x252FACu;
    // 0x252fac: 0x0  nop
    ctx->pc = 0x252facu;
    // NOP
label_252fb0:
    // 0x252fb0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x252fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x252fb4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x252fb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252fb8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x252fb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252fbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x252fbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252fc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x252fc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252fc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x252fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252fc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x252fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x252fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x252FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252FD8u;
            // 0x252fdc: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252FE0u;
}
