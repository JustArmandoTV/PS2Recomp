#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022AC40
// Address: 0x22ac40 - 0x22ad50
void sub_0022AC40_0x22ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AC40_0x22ac40");
#endif

    switch (ctx->pc) {
        case 0x22ac40u: goto label_22ac40;
        case 0x22ac44u: goto label_22ac44;
        case 0x22ac48u: goto label_22ac48;
        case 0x22ac4cu: goto label_22ac4c;
        case 0x22ac50u: goto label_22ac50;
        case 0x22ac54u: goto label_22ac54;
        case 0x22ac58u: goto label_22ac58;
        case 0x22ac5cu: goto label_22ac5c;
        case 0x22ac60u: goto label_22ac60;
        case 0x22ac64u: goto label_22ac64;
        case 0x22ac68u: goto label_22ac68;
        case 0x22ac6cu: goto label_22ac6c;
        case 0x22ac70u: goto label_22ac70;
        case 0x22ac74u: goto label_22ac74;
        case 0x22ac78u: goto label_22ac78;
        case 0x22ac7cu: goto label_22ac7c;
        case 0x22ac80u: goto label_22ac80;
        case 0x22ac84u: goto label_22ac84;
        case 0x22ac88u: goto label_22ac88;
        case 0x22ac8cu: goto label_22ac8c;
        case 0x22ac90u: goto label_22ac90;
        case 0x22ac94u: goto label_22ac94;
        case 0x22ac98u: goto label_22ac98;
        case 0x22ac9cu: goto label_22ac9c;
        case 0x22aca0u: goto label_22aca0;
        case 0x22aca4u: goto label_22aca4;
        case 0x22aca8u: goto label_22aca8;
        case 0x22acacu: goto label_22acac;
        case 0x22acb0u: goto label_22acb0;
        case 0x22acb4u: goto label_22acb4;
        case 0x22acb8u: goto label_22acb8;
        case 0x22acbcu: goto label_22acbc;
        case 0x22acc0u: goto label_22acc0;
        case 0x22acc4u: goto label_22acc4;
        case 0x22acc8u: goto label_22acc8;
        case 0x22acccu: goto label_22accc;
        case 0x22acd0u: goto label_22acd0;
        case 0x22acd4u: goto label_22acd4;
        case 0x22acd8u: goto label_22acd8;
        case 0x22acdcu: goto label_22acdc;
        case 0x22ace0u: goto label_22ace0;
        case 0x22ace4u: goto label_22ace4;
        case 0x22ace8u: goto label_22ace8;
        case 0x22acecu: goto label_22acec;
        case 0x22acf0u: goto label_22acf0;
        case 0x22acf4u: goto label_22acf4;
        case 0x22acf8u: goto label_22acf8;
        case 0x22acfcu: goto label_22acfc;
        case 0x22ad00u: goto label_22ad00;
        case 0x22ad04u: goto label_22ad04;
        case 0x22ad08u: goto label_22ad08;
        case 0x22ad0cu: goto label_22ad0c;
        case 0x22ad10u: goto label_22ad10;
        case 0x22ad14u: goto label_22ad14;
        case 0x22ad18u: goto label_22ad18;
        case 0x22ad1cu: goto label_22ad1c;
        case 0x22ad20u: goto label_22ad20;
        case 0x22ad24u: goto label_22ad24;
        case 0x22ad28u: goto label_22ad28;
        case 0x22ad2cu: goto label_22ad2c;
        case 0x22ad30u: goto label_22ad30;
        case 0x22ad34u: goto label_22ad34;
        case 0x22ad38u: goto label_22ad38;
        case 0x22ad3cu: goto label_22ad3c;
        case 0x22ad40u: goto label_22ad40;
        case 0x22ad44u: goto label_22ad44;
        case 0x22ad48u: goto label_22ad48;
        case 0x22ad4cu: goto label_22ad4c;
        default: break;
    }

    ctx->pc = 0x22ac40u;

label_22ac40:
    // 0x22ac40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22ac44:
    // 0x22ac44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22ac48:
    // 0x22ac48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22ac4c:
    // 0x22ac4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22ac50:
    // 0x22ac50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ac54:
    // 0x22ac54: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x22ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_22ac58:
    // 0x22ac58: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x22ac58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22ac5c:
    // 0x22ac5c: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_22ac60:
    if (ctx->pc == 0x22AC60u) {
        ctx->pc = 0x22AC60u;
            // 0x22ac60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AC64u;
        goto label_22ac64;
    }
    ctx->pc = 0x22AC5Cu;
    {
        const bool branch_taken_0x22ac5c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22AC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC5Cu;
            // 0x22ac60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac5c) {
            ctx->pc = 0x22ACA0u;
            goto label_22aca0;
        }
    }
    ctx->pc = 0x22AC64u;
label_22ac64:
    // 0x22ac64: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x22ac64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_22ac68:
    // 0x22ac68: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x22ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22ac6c:
    // 0x22ac6c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22ac70:
    // 0x22ac70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22ac74:
    // 0x22ac74: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_22ac78:
    if (ctx->pc == 0x22AC78u) {
        ctx->pc = 0x22AC7Cu;
        goto label_22ac7c;
    }
    ctx->pc = 0x22AC74u;
    {
        const bool branch_taken_0x22ac74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ac74) {
            ctx->pc = 0x22AC90u;
            goto label_22ac90;
        }
    }
    ctx->pc = 0x22AC7Cu;
label_22ac7c:
    // 0x22ac7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ac7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ac80:
    // 0x22ac80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22ac80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22ac84:
    // 0x22ac84: 0x320f809  jalr        $t9
label_22ac88:
    if (ctx->pc == 0x22AC88u) {
        ctx->pc = 0x22AC88u;
            // 0x22ac88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AC8Cu;
        goto label_22ac8c;
    }
    ctx->pc = 0x22AC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22AC8Cu);
        ctx->pc = 0x22AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC84u;
            // 0x22ac88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22AC8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22AC8Cu; }
            if (ctx->pc != 0x22AC8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22AC8Cu;
label_22ac8c:
    // 0x22ac8c: 0x0  nop
    ctx->pc = 0x22ac8cu;
    // NOP
label_22ac90:
    // 0x22ac90: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22ac90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_22ac94:
    // 0x22ac94: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_22ac98:
    if (ctx->pc == 0x22AC98u) {
        ctx->pc = 0x22AC98u;
            // 0x22ac98: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x22AC9Cu;
        goto label_22ac9c;
    }
    ctx->pc = 0x22AC94u;
    {
        const bool branch_taken_0x22ac94 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x22AC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC94u;
            // 0x22ac98: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac94) {
            ctx->pc = 0x22AC68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ac68;
        }
    }
    ctx->pc = 0x22AC9Cu;
label_22ac9c:
    // 0x22ac9c: 0x0  nop
    ctx->pc = 0x22ac9cu;
    // NOP
label_22aca0:
    // 0x22aca0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22aca4:
    // 0x22aca4: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x22aca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22aca8:
    // 0x22aca8: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_22acac:
    if (ctx->pc == 0x22ACACu) {
        ctx->pc = 0x22ACB0u;
        goto label_22acb0;
    }
    ctx->pc = 0x22ACA8u;
    {
        const bool branch_taken_0x22aca8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x22aca8) {
            ctx->pc = 0x22AD20u;
            goto label_22ad20;
        }
    }
    ctx->pc = 0x22ACB0u;
label_22acb0:
    // 0x22acb0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x22acb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22acb4:
    // 0x22acb4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x22acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22acb8:
    // 0x22acb8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22acbc:
    // 0x22acbc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22acc0:
    // 0x22acc0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_22acc4:
    if (ctx->pc == 0x22ACC4u) {
        ctx->pc = 0x22ACC8u;
        goto label_22acc8;
    }
    ctx->pc = 0x22ACC0u;
    {
        const bool branch_taken_0x22acc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22acc0) {
            ctx->pc = 0x22AD10u;
            goto label_22ad10;
        }
    }
    ctx->pc = 0x22ACC8u;
label_22acc8:
    // 0x22acc8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22accc:
    // 0x22accc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x22acccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22acd0:
    // 0x22acd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22acd4:
    // 0x22acd4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x22acd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22acd8:
    // 0x22acd8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_22acdc:
    if (ctx->pc == 0x22ACDCu) {
        ctx->pc = 0x22ACDCu;
            // 0x22acdc: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
        ctx->pc = 0x22ACE0u;
        goto label_22ace0;
    }
    ctx->pc = 0x22ACD8u;
    {
        const bool branch_taken_0x22acd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACD8u;
            // 0x22acdc: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acd8) {
            ctx->pc = 0x22AD10u;
            goto label_22ad10;
        }
    }
    ctx->pc = 0x22ACE0u;
label_22ace0:
    // 0x22ace0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x22ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22ace4:
    // 0x22ace4: 0x0  nop
    ctx->pc = 0x22ace4u;
    // NOP
label_22ace8:
    // 0x22ace8: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x22ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22acec:
    // 0x22acec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22acecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22acf0:
    // 0x22acf0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x22acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22acf4:
    // 0x22acf4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22acf8:
    // 0x22acf8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22acfc:
    // 0x22acfc: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22ad00:
    // 0x22ad00: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22ad00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22ad04:
    // 0x22ad04: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_22ad08:
    if (ctx->pc == 0x22AD08u) {
        ctx->pc = 0x22AD08u;
            // 0x22ad08: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22AD0Cu;
        goto label_22ad0c;
    }
    ctx->pc = 0x22AD04u;
    {
        const bool branch_taken_0x22ad04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD04u;
            // 0x22ad08: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad04) {
            ctx->pc = 0x22ACE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ace8;
        }
    }
    ctx->pc = 0x22AD0Cu;
label_22ad0c:
    // 0x22ad0c: 0x0  nop
    ctx->pc = 0x22ad0cu;
    // NOP
label_22ad10:
    // 0x22ad10: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x22ad10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_22ad14:
    // 0x22ad14: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_22ad18:
    if (ctx->pc == 0x22AD18u) {
        ctx->pc = 0x22AD18u;
            // 0x22ad18: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x22AD1Cu;
        goto label_22ad1c;
    }
    ctx->pc = 0x22AD14u;
    {
        const bool branch_taken_0x22ad14 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x22AD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD14u;
            // 0x22ad18: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad14) {
            ctx->pc = 0x22ACB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22acb4;
        }
    }
    ctx->pc = 0x22AD1Cu;
label_22ad1c:
    // 0x22ad1c: 0x0  nop
    ctx->pc = 0x22ad1cu;
    // NOP
label_22ad20:
    // 0x22ad20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22ad20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22ad24:
    // 0x22ad24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ad24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ad28:
    // 0x22ad28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ad28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ad2c:
    // 0x22ad2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ad2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ad30:
    // 0x22ad30: 0x3e00008  jr          $ra
label_22ad34:
    if (ctx->pc == 0x22AD34u) {
        ctx->pc = 0x22AD34u;
            // 0x22ad34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22AD38u;
        goto label_22ad38;
    }
    ctx->pc = 0x22AD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD30u;
            // 0x22ad34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AD38u;
label_22ad38:
    // 0x22ad38: 0x0  nop
    ctx->pc = 0x22ad38u;
    // NOP
label_22ad3c:
    // 0x22ad3c: 0x0  nop
    ctx->pc = 0x22ad3cu;
    // NOP
label_22ad40:
    // 0x22ad40: 0x3e00008  jr          $ra
label_22ad44:
    if (ctx->pc == 0x22AD44u) {
        ctx->pc = 0x22AD48u;
        goto label_22ad48;
    }
    ctx->pc = 0x22AD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AD48u;
label_22ad48:
    // 0x22ad48: 0x0  nop
    ctx->pc = 0x22ad48u;
    // NOP
label_22ad4c:
    // 0x22ad4c: 0x0  nop
    ctx->pc = 0x22ad4cu;
    // NOP
}
