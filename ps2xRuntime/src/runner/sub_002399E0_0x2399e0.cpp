#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002399E0
// Address: 0x2399e0 - 0x239af0
void sub_002399E0_0x2399e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002399E0_0x2399e0");
#endif

    switch (ctx->pc) {
        case 0x2399e0u: goto label_2399e0;
        case 0x2399e4u: goto label_2399e4;
        case 0x2399e8u: goto label_2399e8;
        case 0x2399ecu: goto label_2399ec;
        case 0x2399f0u: goto label_2399f0;
        case 0x2399f4u: goto label_2399f4;
        case 0x2399f8u: goto label_2399f8;
        case 0x2399fcu: goto label_2399fc;
        case 0x239a00u: goto label_239a00;
        case 0x239a04u: goto label_239a04;
        case 0x239a08u: goto label_239a08;
        case 0x239a0cu: goto label_239a0c;
        case 0x239a10u: goto label_239a10;
        case 0x239a14u: goto label_239a14;
        case 0x239a18u: goto label_239a18;
        case 0x239a1cu: goto label_239a1c;
        case 0x239a20u: goto label_239a20;
        case 0x239a24u: goto label_239a24;
        case 0x239a28u: goto label_239a28;
        case 0x239a2cu: goto label_239a2c;
        case 0x239a30u: goto label_239a30;
        case 0x239a34u: goto label_239a34;
        case 0x239a38u: goto label_239a38;
        case 0x239a3cu: goto label_239a3c;
        case 0x239a40u: goto label_239a40;
        case 0x239a44u: goto label_239a44;
        case 0x239a48u: goto label_239a48;
        case 0x239a4cu: goto label_239a4c;
        case 0x239a50u: goto label_239a50;
        case 0x239a54u: goto label_239a54;
        case 0x239a58u: goto label_239a58;
        case 0x239a5cu: goto label_239a5c;
        case 0x239a60u: goto label_239a60;
        case 0x239a64u: goto label_239a64;
        case 0x239a68u: goto label_239a68;
        case 0x239a6cu: goto label_239a6c;
        case 0x239a70u: goto label_239a70;
        case 0x239a74u: goto label_239a74;
        case 0x239a78u: goto label_239a78;
        case 0x239a7cu: goto label_239a7c;
        case 0x239a80u: goto label_239a80;
        case 0x239a84u: goto label_239a84;
        case 0x239a88u: goto label_239a88;
        case 0x239a8cu: goto label_239a8c;
        case 0x239a90u: goto label_239a90;
        case 0x239a94u: goto label_239a94;
        case 0x239a98u: goto label_239a98;
        case 0x239a9cu: goto label_239a9c;
        case 0x239aa0u: goto label_239aa0;
        case 0x239aa4u: goto label_239aa4;
        case 0x239aa8u: goto label_239aa8;
        case 0x239aacu: goto label_239aac;
        case 0x239ab0u: goto label_239ab0;
        case 0x239ab4u: goto label_239ab4;
        case 0x239ab8u: goto label_239ab8;
        case 0x239abcu: goto label_239abc;
        case 0x239ac0u: goto label_239ac0;
        case 0x239ac4u: goto label_239ac4;
        case 0x239ac8u: goto label_239ac8;
        case 0x239accu: goto label_239acc;
        case 0x239ad0u: goto label_239ad0;
        case 0x239ad4u: goto label_239ad4;
        case 0x239ad8u: goto label_239ad8;
        case 0x239adcu: goto label_239adc;
        case 0x239ae0u: goto label_239ae0;
        case 0x239ae4u: goto label_239ae4;
        case 0x239ae8u: goto label_239ae8;
        case 0x239aecu: goto label_239aec;
        default: break;
    }

    ctx->pc = 0x2399e0u;

label_2399e0:
    // 0x2399e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2399e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2399e4:
    // 0x2399e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2399e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2399e8:
    // 0x2399e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2399e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2399ec:
    // 0x2399ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2399ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2399f0:
    // 0x2399f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2399f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2399f4:
    // 0x2399f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2399f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2399f8:
    // 0x2399f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2399f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2399fc:
    // 0x2399fc: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2399fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_239a00:
    // 0x239a00: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x239a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_239a04:
    // 0x239a04: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x239a04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239a08:
    // 0x239a08: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
label_239a0c:
    if (ctx->pc == 0x239A0Cu) {
        ctx->pc = 0x239A0Cu;
            // 0x239a0c: 0x2490017c  addiu       $s0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->pc = 0x239A10u;
        goto label_239a10;
    }
    ctx->pc = 0x239A08u;
    {
        const bool branch_taken_0x239a08 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x239A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A08u;
            // 0x239a0c: 0x2490017c  addiu       $s0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a08) {
            ctx->pc = 0x239A48u;
            goto label_239a48;
        }
    }
    ctx->pc = 0x239A10u;
label_239a10:
    // 0x239a10: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x239a10u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_239a14:
    // 0x239a14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239a18:
    // 0x239a18: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x239a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_239a1c:
    // 0x239a1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239a20:
    // 0x239a20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_239a24:
    if (ctx->pc == 0x239A24u) {
        ctx->pc = 0x239A28u;
        goto label_239a28;
    }
    ctx->pc = 0x239A20u;
    {
        const bool branch_taken_0x239a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239a20) {
            ctx->pc = 0x239A38u;
            goto label_239a38;
        }
    }
    ctx->pc = 0x239A28u;
label_239a28:
    // 0x239a28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239a2c:
    // 0x239a2c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x239a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_239a30:
    // 0x239a30: 0x320f809  jalr        $t9
label_239a34:
    if (ctx->pc == 0x239A34u) {
        ctx->pc = 0x239A34u;
            // 0x239a34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239A38u;
        goto label_239a38;
    }
    ctx->pc = 0x239A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239A38u);
        ctx->pc = 0x239A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A30u;
            // 0x239a34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239A38u; }
            if (ctx->pc != 0x239A38u) { return; }
        }
        }
    }
    ctx->pc = 0x239A38u;
label_239a38:
    // 0x239a38: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x239a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_239a3c:
    // 0x239a3c: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_239a40:
    if (ctx->pc == 0x239A40u) {
        ctx->pc = 0x239A40u;
            // 0x239a40: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x239A44u;
        goto label_239a44;
    }
    ctx->pc = 0x239A3Cu;
    {
        const bool branch_taken_0x239a3c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x239A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A3Cu;
            // 0x239a40: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a3c) {
            ctx->pc = 0x239A14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239a14;
        }
    }
    ctx->pc = 0x239A44u;
label_239a44:
    // 0x239a44: 0x0  nop
    ctx->pc = 0x239a44u;
    // NOP
label_239a48:
    // 0x239a48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239a4c:
    // 0x239a4c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x239a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239a50:
    // 0x239a50: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239a54:
    if (ctx->pc == 0x239A54u) {
        ctx->pc = 0x239A58u;
        goto label_239a58;
    }
    ctx->pc = 0x239A50u;
    {
        const bool branch_taken_0x239a50 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239a50) {
            ctx->pc = 0x239AC8u;
            goto label_239ac8;
        }
    }
    ctx->pc = 0x239A58u;
label_239a58:
    // 0x239a58: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239a58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239a5c:
    // 0x239a5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239a60:
    // 0x239a60: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239a64:
    // 0x239a64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239a68:
    // 0x239a68: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_239a6c:
    if (ctx->pc == 0x239A6Cu) {
        ctx->pc = 0x239A70u;
        goto label_239a70;
    }
    ctx->pc = 0x239A68u;
    {
        const bool branch_taken_0x239a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239a68) {
            ctx->pc = 0x239AB8u;
            goto label_239ab8;
        }
    }
    ctx->pc = 0x239A70u;
label_239a70:
    // 0x239a70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239a74:
    // 0x239a74: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239a78:
    // 0x239a78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239a7c:
    // 0x239a7c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x239a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239a80:
    // 0x239a80: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239a84:
    if (ctx->pc == 0x239A84u) {
        ctx->pc = 0x239A84u;
            // 0x239a84: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239A88u;
        goto label_239a88;
    }
    ctx->pc = 0x239A80u;
    {
        const bool branch_taken_0x239a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A80u;
            // 0x239a84: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a80) {
            ctx->pc = 0x239AB8u;
            goto label_239ab8;
        }
    }
    ctx->pc = 0x239A88u;
label_239a88:
    // 0x239a88: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239a88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239a8c:
    // 0x239a8c: 0x0  nop
    ctx->pc = 0x239a8cu;
    // NOP
label_239a90:
    // 0x239a90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239a94:
    // 0x239a94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239a98:
    // 0x239a98: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_239a9c:
    // 0x239a9c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239aa0:
    // 0x239aa0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239aa4:
    // 0x239aa4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239aa8:
    // 0x239aa8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239aa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239aac:
    // 0x239aac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239ab0:
    if (ctx->pc == 0x239AB0u) {
        ctx->pc = 0x239AB0u;
            // 0x239ab0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239AB4u;
        goto label_239ab4;
    }
    ctx->pc = 0x239AACu;
    {
        const bool branch_taken_0x239aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239AACu;
            // 0x239ab0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239aac) {
            ctx->pc = 0x239A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239a90;
        }
    }
    ctx->pc = 0x239AB4u;
label_239ab4:
    // 0x239ab4: 0x0  nop
    ctx->pc = 0x239ab4u;
    // NOP
label_239ab8:
    // 0x239ab8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_239abc:
    // 0x239abc: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239ac0:
    if (ctx->pc == 0x239AC0u) {
        ctx->pc = 0x239AC0u;
            // 0x239ac0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239AC4u;
        goto label_239ac4;
    }
    ctx->pc = 0x239ABCu;
    {
        const bool branch_taken_0x239abc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239ABCu;
            // 0x239ac0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239abc) {
            ctx->pc = 0x239A5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239a5c;
        }
    }
    ctx->pc = 0x239AC4u;
label_239ac4:
    // 0x239ac4: 0x0  nop
    ctx->pc = 0x239ac4u;
    // NOP
label_239ac8:
    // 0x239ac8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_239acc:
    // 0x239acc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x239accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239ad0:
    // 0x239ad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239ad4:
    // 0x239ad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239ad8:
    // 0x239ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_239adc:
    // 0x239adc: 0x3e00008  jr          $ra
label_239ae0:
    if (ctx->pc == 0x239AE0u) {
        ctx->pc = 0x239AE0u;
            // 0x239ae0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239AE4u;
        goto label_239ae4;
    }
    ctx->pc = 0x239ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239ADCu;
            // 0x239ae0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239AE4u;
label_239ae4:
    // 0x239ae4: 0x0  nop
    ctx->pc = 0x239ae4u;
    // NOP
label_239ae8:
    // 0x239ae8: 0x0  nop
    ctx->pc = 0x239ae8u;
    // NOP
label_239aec:
    // 0x239aec: 0x0  nop
    ctx->pc = 0x239aecu;
    // NOP
}
