#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00471A20
// Address: 0x471a20 - 0x471c40
void sub_00471A20_0x471a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471A20_0x471a20");
#endif

    switch (ctx->pc) {
        case 0x471b54u: goto label_471b54;
        case 0x471b88u: goto label_471b88;
        case 0x471c0cu: goto label_471c0c;
        default: break;
    }

    ctx->pc = 0x471a20u;

    // 0x471a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x471a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x471a24: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x471a24u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x471a28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x471a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x471a2c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x471a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x471a30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x471a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x471a34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x471a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x471a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x471a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x471a3c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x471a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x471a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x471a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x471a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471a48: 0x8c643e30  lw          $a0, 0x3E30($v1)
    ctx->pc = 0x471a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
    // 0x471a4c: 0x2483fffd  addiu       $v1, $a0, -0x3
    ctx->pc = 0x471a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x471a50: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x471a50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x471a54: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x471A54u;
    {
        const bool branch_taken_0x471a54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x471A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471A54u;
            // 0x471a58: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471a54) {
            ctx->pc = 0x471B34u;
            goto label_471b34;
        }
    }
    ctx->pc = 0x471A5Cu;
    // 0x471a5c: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x471a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x471a60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x471a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x471a64: 0x24e7f080  addiu       $a3, $a3, -0xF80
    ctx->pc = 0x471a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963328));
    // 0x471a68: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x471a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x471a6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x471a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x471a70: 0x600008  jr          $v1
    ctx->pc = 0x471A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x471A78u: goto label_471a78;
            case 0x471A80u: goto label_471a80;
            case 0x471A8Cu: goto label_471a8c;
            case 0x471B20u: goto label_471b20;
            case 0x471B2Cu: goto label_471b2c;
            case 0x471B34u: goto label_471b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x471A78u;
label_471a78:
    // 0x471a78: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x471A78u;
    {
        const bool branch_taken_0x471a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471A78u;
            // 0x471a7c: 0x2e010004  sltiu       $at, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x471a78) {
            ctx->pc = 0x471B38u;
            goto label_471b38;
        }
    }
    ctx->pc = 0x471A80u;
label_471a80:
    // 0x471a80: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x471a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471a84: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x471A84u;
    {
        const bool branch_taken_0x471a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471A84u;
            // 0x471a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471a84) {
            ctx->pc = 0x471B34u;
            goto label_471b34;
        }
    }
    ctx->pc = 0x471A8Cu;
label_471a8c:
    // 0x471a8c: 0x8e270060  lw          $a3, 0x60($s1)
    ctx->pc = 0x471a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x471a90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x471a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x471a94: 0x50e50016  beql        $a3, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x471A94u;
    {
        const bool branch_taken_0x471a94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x471a94) {
            ctx->pc = 0x471A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471A94u;
            // 0x471a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471AF0u;
            goto label_471af0;
        }
    }
    ctx->pc = 0x471A9Cu;
    // 0x471a9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x471a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x471aa0: 0x10e3000b  beq         $a3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x471AA0u;
    {
        const bool branch_taken_0x471aa0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x471aa0) {
            ctx->pc = 0x471AD0u;
            goto label_471ad0;
        }
    }
    ctx->pc = 0x471AA8u;
    // 0x471aa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x471aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x471aac: 0x50e30003  beql        $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x471AACu;
    {
        const bool branch_taken_0x471aac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x471aac) {
            ctx->pc = 0x471AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471AACu;
            // 0x471ab0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471ABCu;
            goto label_471abc;
        }
    }
    ctx->pc = 0x471AB4u;
    // 0x471ab4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x471AB4u;
    {
        const bool branch_taken_0x471ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471AB4u;
            // 0x471ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471ab4) {
            ctx->pc = 0x471B18u;
            goto label_471b18;
        }
    }
    ctx->pc = 0x471ABCu;
label_471abc:
    // 0x471abc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x471abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x471ac0: 0x90650821  lbu         $a1, 0x821($v1)
    ctx->pc = 0x471ac0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2081)));
    // 0x471ac4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x471ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x471ac8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x471AC8u;
    {
        const bool branch_taken_0x471ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471AC8u;
            // 0x471acc: 0xa0650825  sb          $a1, 0x825($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2085), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471ac8) {
            ctx->pc = 0x471B14u;
            goto label_471b14;
        }
    }
    ctx->pc = 0x471AD0u;
label_471ad0:
    // 0x471ad0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x471ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x471ad4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x471ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x471ad8: 0x90670821  lbu         $a3, 0x821($v1)
    ctx->pc = 0x471ad8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2081)));
    // 0x471adc: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x471adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x471ae0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x471ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x471ae4: 0xa0a70825  sb          $a3, 0x825($a1)
    ctx->pc = 0x471ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2085), (uint8_t)GPR_U32(ctx, 7));
    // 0x471ae8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x471AE8u;
    {
        const bool branch_taken_0x471ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471AE8u;
            // 0x471aec: 0xa0670829  sb          $a3, 0x829($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2089), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471ae8) {
            ctx->pc = 0x471B14u;
            goto label_471b14;
        }
    }
    ctx->pc = 0x471AF0u;
label_471af0:
    // 0x471af0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x471af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x471af4: 0x90680821  lbu         $t0, 0x821($v1)
    ctx->pc = 0x471af4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2081)));
    // 0x471af8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x471af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x471afc: 0x90a50829  lbu         $a1, 0x829($a1)
    ctx->pc = 0x471afcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2089)));
    // 0x471b00: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x471b00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x471b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x471b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471b08: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x471b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x471b0c: 0xa0e80825  sb          $t0, 0x825($a3)
    ctx->pc = 0x471b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2085), (uint8_t)GPR_U32(ctx, 8));
    // 0x471b10: 0xa065082d  sb          $a1, 0x82D($v1)
    ctx->pc = 0x471b10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2093), (uint8_t)GPR_U32(ctx, 5));
label_471b14:
    // 0x471b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x471b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471b18:
    // 0x471b18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x471B18u;
    {
        const bool branch_taken_0x471b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471b18) {
            ctx->pc = 0x471B34u;
            goto label_471b34;
        }
    }
    ctx->pc = 0x471B20u;
label_471b20:
    // 0x471b20: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x471b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x471b24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x471B24u;
    {
        const bool branch_taken_0x471b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471B24u;
            // 0x471b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471b24) {
            ctx->pc = 0x471B34u;
            goto label_471b34;
        }
    }
    ctx->pc = 0x471B2Cu;
label_471b2c:
    // 0x471b2c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x471b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x471b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x471b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471b34:
    // 0x471b34: 0x2e010004  sltiu       $at, $s0, 0x4
    ctx->pc = 0x471b34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_471b38:
    // 0x471b38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x471b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471b3c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x471B3Cu;
    {
        const bool branch_taken_0x471b3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x471B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471B3Cu;
            // 0x471b40: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471b3c) {
            ctx->pc = 0x471B48u;
            goto label_471b48;
        }
    }
    ctx->pc = 0x471B44u;
    // 0x471b44: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x471b44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_471b48:
    // 0x471b48: 0x8e270068  lw          $a3, 0x68($s1)
    ctx->pc = 0x471b48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x471b4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x471b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471b50: 0x24e7006c  addiu       $a3, $a3, 0x6C
    ctx->pc = 0x471b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
label_471b54:
    // 0x471b54: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x471b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x471b58: 0x2d280008  sltiu       $t0, $t1, 0x8
    ctx->pc = 0x471b58u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x471b5c: 0x0  nop
    ctx->pc = 0x471b5cu;
    // NOP
    // 0x471b60: 0x0  nop
    ctx->pc = 0x471b60u;
    // NOP
    // 0x471b64: 0x0  nop
    ctx->pc = 0x471b64u;
    // NOP
    // 0x471b68: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x471B68u;
    {
        const bool branch_taken_0x471b68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x471b68) {
            ctx->pc = 0x471B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_471b54;
        }
    }
    ctx->pc = 0x471B70u;
    // 0x471b70: 0x3c0f0061  lui         $t7, 0x61
    ctx->pc = 0x471b70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)97 << 16));
    // 0x471b74: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x471b74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471b78: 0x25ef0820  addiu       $t7, $t7, 0x820
    ctx->pc = 0x471b78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2080));
    // 0x471b7c: 0x220702d  daddu       $t6, $s1, $zero
    ctx->pc = 0x471b7cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471b80: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x471b80u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471b84: 0x2409ff9f  addiu       $t1, $zero, -0x61
    ctx->pc = 0x471b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967199));
label_471b88:
    // 0x471b88: 0x91c80070  lbu         $t0, 0x70($t6)
    ctx->pc = 0x471b88u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 112)));
    // 0x471b8c: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x471B8Cu;
    {
        const bool branch_taken_0x471b8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x471b8c) {
            ctx->pc = 0x471BC0u;
            goto label_471bc0;
        }
    }
    ctx->pc = 0x471B94u;
    // 0x471b94: 0x8deb0000  lw          $t3, 0x0($t7)
    ctx->pc = 0x471b94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x471b98: 0x31880003  andi        $t0, $t4, 0x3
    ctx->pc = 0x471b98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x471b9c: 0x85140  sll         $t2, $t0, 5
    ctx->pc = 0x471b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x471ba0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x471ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x471ba4: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x471ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x471ba8: 0x91a80000  lbu         $t0, 0x0($t5)
    ctx->pc = 0x471ba8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x471bac: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x471bacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x471bb0: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x471bb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x471bb4: 0xa1a80000  sb          $t0, 0x0($t5)
    ctx->pc = 0x471bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x471bb8: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x471bb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x471bbc: 0x0  nop
    ctx->pc = 0x471bbcu;
    // NOP
label_471bc0:
    // 0x471bc0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x471bc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x471bc4: 0x183402b  sltu        $t0, $t4, $v1
    ctx->pc = 0x471bc4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x471bc8: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x471bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x471bcc: 0x1500ffee  bnez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x471BCCu;
    {
        const bool branch_taken_0x471bcc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x471BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471BCCu;
            // 0x471bd0: 0x25ce005c  addiu       $t6, $t6, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471bcc) {
            ctx->pc = 0x471B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_471b88;
        }
    }
    ctx->pc = 0x471BD4u;
    // 0x471bd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x471bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x471bd8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x471BD8u;
    {
        const bool branch_taken_0x471bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x471bd8) {
            ctx->pc = 0x471BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471BD8u;
            // 0x471bdc: 0x2e430003  sltiu       $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x471BE8u;
            goto label_471be8;
        }
    }
    ctx->pc = 0x471BE0u;
    // 0x471be0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x471BE0u;
    {
        const bool branch_taken_0x471be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471be0) {
            ctx->pc = 0x471BF4u;
            goto label_471bf4;
        }
    }
    ctx->pc = 0x471BE8u;
label_471be8:
    // 0x471be8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x471BE8u;
    {
        const bool branch_taken_0x471be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x471be8) {
            ctx->pc = 0x471BF4u;
            goto label_471bf4;
        }
    }
    ctx->pc = 0x471BF0u;
    // 0x471bf0: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x471bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_471bf4:
    // 0x471bf4: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x471BF4u;
    {
        const bool branch_taken_0x471bf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x471bf4) {
            ctx->pc = 0x471BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471BF4u;
            // 0x471bf8: 0x8e230068  lw          $v1, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471C10u;
            goto label_471c10;
        }
    }
    ctx->pc = 0x471BFCu;
    // 0x471bfc: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x471bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x471c00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x471c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471c04: 0xc0b8f50  jal         func_2E3D40
    ctx->pc = 0x471C04u;
    SET_GPR_U32(ctx, 31, 0x471C0Cu);
    ctx->pc = 0x471C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471C04u;
            // 0x471c08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D40u;
    if (runtime->hasFunction(0x2E3D40u)) {
        auto targetFn = runtime->lookupFunction(0x2E3D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471C0Cu; }
        if (ctx->pc != 0x471C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3D40_0x2e3d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471C0Cu; }
        if (ctx->pc != 0x471C0Cu) { return; }
    }
    ctx->pc = 0x471C0Cu;
label_471c0c:
    // 0x471c0c: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x471c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_471c10:
    // 0x471c10: 0xa070008e  sb          $s0, 0x8E($v1)
    ctx->pc = 0x471c10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 16));
    // 0x471c14: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x471c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x471c18: 0xa072008f  sb          $s2, 0x8F($v1)
    ctx->pc = 0x471c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 143), (uint8_t)GPR_U32(ctx, 18));
    // 0x471c1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x471c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x471c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x471c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x471c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x471c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x471c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x471c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x471c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x471C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471C2Cu;
            // 0x471c30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x471C34u;
    // 0x471c34: 0x0  nop
    ctx->pc = 0x471c34u;
    // NOP
    // 0x471c38: 0x0  nop
    ctx->pc = 0x471c38u;
    // NOP
    // 0x471c3c: 0x0  nop
    ctx->pc = 0x471c3cu;
    // NOP
}
