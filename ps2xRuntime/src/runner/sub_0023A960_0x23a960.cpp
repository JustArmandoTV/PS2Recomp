#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A960
// Address: 0x23a960 - 0x23aa70
void sub_0023A960_0x23a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A960_0x23a960");
#endif

    switch (ctx->pc) {
        case 0x23a960u: goto label_23a960;
        case 0x23a964u: goto label_23a964;
        case 0x23a968u: goto label_23a968;
        case 0x23a96cu: goto label_23a96c;
        case 0x23a970u: goto label_23a970;
        case 0x23a974u: goto label_23a974;
        case 0x23a978u: goto label_23a978;
        case 0x23a97cu: goto label_23a97c;
        case 0x23a980u: goto label_23a980;
        case 0x23a984u: goto label_23a984;
        case 0x23a988u: goto label_23a988;
        case 0x23a98cu: goto label_23a98c;
        case 0x23a990u: goto label_23a990;
        case 0x23a994u: goto label_23a994;
        case 0x23a998u: goto label_23a998;
        case 0x23a99cu: goto label_23a99c;
        case 0x23a9a0u: goto label_23a9a0;
        case 0x23a9a4u: goto label_23a9a4;
        case 0x23a9a8u: goto label_23a9a8;
        case 0x23a9acu: goto label_23a9ac;
        case 0x23a9b0u: goto label_23a9b0;
        case 0x23a9b4u: goto label_23a9b4;
        case 0x23a9b8u: goto label_23a9b8;
        case 0x23a9bcu: goto label_23a9bc;
        case 0x23a9c0u: goto label_23a9c0;
        case 0x23a9c4u: goto label_23a9c4;
        case 0x23a9c8u: goto label_23a9c8;
        case 0x23a9ccu: goto label_23a9cc;
        case 0x23a9d0u: goto label_23a9d0;
        case 0x23a9d4u: goto label_23a9d4;
        case 0x23a9d8u: goto label_23a9d8;
        case 0x23a9dcu: goto label_23a9dc;
        case 0x23a9e0u: goto label_23a9e0;
        case 0x23a9e4u: goto label_23a9e4;
        case 0x23a9e8u: goto label_23a9e8;
        case 0x23a9ecu: goto label_23a9ec;
        case 0x23a9f0u: goto label_23a9f0;
        case 0x23a9f4u: goto label_23a9f4;
        case 0x23a9f8u: goto label_23a9f8;
        case 0x23a9fcu: goto label_23a9fc;
        case 0x23aa00u: goto label_23aa00;
        case 0x23aa04u: goto label_23aa04;
        case 0x23aa08u: goto label_23aa08;
        case 0x23aa0cu: goto label_23aa0c;
        case 0x23aa10u: goto label_23aa10;
        case 0x23aa14u: goto label_23aa14;
        case 0x23aa18u: goto label_23aa18;
        case 0x23aa1cu: goto label_23aa1c;
        case 0x23aa20u: goto label_23aa20;
        case 0x23aa24u: goto label_23aa24;
        case 0x23aa28u: goto label_23aa28;
        case 0x23aa2cu: goto label_23aa2c;
        case 0x23aa30u: goto label_23aa30;
        case 0x23aa34u: goto label_23aa34;
        case 0x23aa38u: goto label_23aa38;
        case 0x23aa3cu: goto label_23aa3c;
        case 0x23aa40u: goto label_23aa40;
        case 0x23aa44u: goto label_23aa44;
        case 0x23aa48u: goto label_23aa48;
        case 0x23aa4cu: goto label_23aa4c;
        case 0x23aa50u: goto label_23aa50;
        case 0x23aa54u: goto label_23aa54;
        case 0x23aa58u: goto label_23aa58;
        case 0x23aa5cu: goto label_23aa5c;
        case 0x23aa60u: goto label_23aa60;
        case 0x23aa64u: goto label_23aa64;
        case 0x23aa68u: goto label_23aa68;
        case 0x23aa6cu: goto label_23aa6c;
        default: break;
    }

    ctx->pc = 0x23a960u;

label_23a960:
    // 0x23a960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23a964:
    // 0x23a964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23a968:
    // 0x23a968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23a96c:
    // 0x23a96c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23a970:
    // 0x23a970: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23a970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a974:
    // 0x23a974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23a978:
    // 0x23a978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23a97c:
    // 0x23a97c: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x23a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
label_23a980:
    // 0x23a980: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x23a980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a984:
    // 0x23a984: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_23a988:
    if (ctx->pc == 0x23A988u) {
        ctx->pc = 0x23A988u;
            // 0x23a988: 0x24900140  addiu       $s0, $a0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
        ctx->pc = 0x23A98Cu;
        goto label_23a98c;
    }
    ctx->pc = 0x23A984u;
    {
        const bool branch_taken_0x23a984 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x23A988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A984u;
            // 0x23a988: 0x24900140  addiu       $s0, $a0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a984) {
            ctx->pc = 0x23A9C8u;
            goto label_23a9c8;
        }
    }
    ctx->pc = 0x23A98Cu;
label_23a98c:
    // 0x23a98c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x23a98cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_23a990:
    // 0x23a990: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a994:
    // 0x23a994: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_23a998:
    // 0x23a998: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a99c:
    // 0x23a99c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23a9a0:
    if (ctx->pc == 0x23A9A0u) {
        ctx->pc = 0x23A9A4u;
        goto label_23a9a4;
    }
    ctx->pc = 0x23A99Cu;
    {
        const bool branch_taken_0x23a99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a99c) {
            ctx->pc = 0x23A9B8u;
            goto label_23a9b8;
        }
    }
    ctx->pc = 0x23A9A4u;
label_23a9a4:
    // 0x23a9a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23a9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a9a8:
    // 0x23a9a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23a9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23a9ac:
    // 0x23a9ac: 0x320f809  jalr        $t9
label_23a9b0:
    if (ctx->pc == 0x23A9B0u) {
        ctx->pc = 0x23A9B0u;
            // 0x23a9b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A9B4u;
        goto label_23a9b4;
    }
    ctx->pc = 0x23A9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A9B4u);
        ctx->pc = 0x23A9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A9ACu;
            // 0x23a9b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A9B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A9B4u; }
            if (ctx->pc != 0x23A9B4u) { return; }
        }
        }
    }
    ctx->pc = 0x23A9B4u;
label_23a9b4:
    // 0x23a9b4: 0x0  nop
    ctx->pc = 0x23a9b4u;
    // NOP
label_23a9b8:
    // 0x23a9b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23a9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23a9bc:
    // 0x23a9bc: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_23a9c0:
    if (ctx->pc == 0x23A9C0u) {
        ctx->pc = 0x23A9C0u;
            // 0x23a9c0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x23A9C4u;
        goto label_23a9c4;
    }
    ctx->pc = 0x23A9BCu;
    {
        const bool branch_taken_0x23a9bc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x23A9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A9BCu;
            // 0x23a9c0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9bc) {
            ctx->pc = 0x23A990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a990;
        }
    }
    ctx->pc = 0x23A9C4u;
label_23a9c4:
    // 0x23a9c4: 0x0  nop
    ctx->pc = 0x23a9c4u;
    // NOP
label_23a9c8:
    // 0x23a9c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a9cc:
    // 0x23a9cc: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23a9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a9d0:
    // 0x23a9d0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_23a9d4:
    if (ctx->pc == 0x23A9D4u) {
        ctx->pc = 0x23A9D8u;
        goto label_23a9d8;
    }
    ctx->pc = 0x23A9D0u;
    {
        const bool branch_taken_0x23a9d0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x23a9d0) {
            ctx->pc = 0x23AA48u;
            goto label_23aa48;
        }
    }
    ctx->pc = 0x23A9D8u;
label_23a9d8:
    // 0x23a9d8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x23a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a9dc:
    // 0x23a9dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a9e0:
    // 0x23a9e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23a9e4:
    // 0x23a9e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a9e8:
    // 0x23a9e8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23a9ec:
    if (ctx->pc == 0x23A9ECu) {
        ctx->pc = 0x23A9F0u;
        goto label_23a9f0;
    }
    ctx->pc = 0x23A9E8u;
    {
        const bool branch_taken_0x23a9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a9e8) {
            ctx->pc = 0x23AA38u;
            goto label_23aa38;
        }
    }
    ctx->pc = 0x23A9F0u;
label_23a9f0:
    // 0x23a9f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a9f4:
    // 0x23a9f4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a9f8:
    // 0x23a9f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a9fc:
    // 0x23a9fc: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23a9fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23aa00:
    // 0x23aa00: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23aa04:
    if (ctx->pc == 0x23AA04u) {
        ctx->pc = 0x23AA04u;
            // 0x23aa04: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x23AA08u;
        goto label_23aa08;
    }
    ctx->pc = 0x23AA00u;
    {
        const bool branch_taken_0x23aa00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA00u;
            // 0x23aa04: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa00) {
            ctx->pc = 0x23AA38u;
            goto label_23aa38;
        }
    }
    ctx->pc = 0x23AA08u;
label_23aa08:
    // 0x23aa08: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x23aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23aa0c:
    // 0x23aa0c: 0x0  nop
    ctx->pc = 0x23aa0cu;
    // NOP
label_23aa10:
    // 0x23aa10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23aa14:
    // 0x23aa14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23aa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23aa18:
    // 0x23aa18: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23aa1c:
    // 0x23aa1c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23aa20:
    // 0x23aa20: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23aa24:
    // 0x23aa24: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23aa28:
    // 0x23aa28: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23aa28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23aa2c:
    // 0x23aa2c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23aa30:
    if (ctx->pc == 0x23AA30u) {
        ctx->pc = 0x23AA30u;
            // 0x23aa30: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23AA34u;
        goto label_23aa34;
    }
    ctx->pc = 0x23AA2Cu;
    {
        const bool branch_taken_0x23aa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA2Cu;
            // 0x23aa30: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa2c) {
            ctx->pc = 0x23AA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23aa10;
        }
    }
    ctx->pc = 0x23AA34u;
label_23aa34:
    // 0x23aa34: 0x0  nop
    ctx->pc = 0x23aa34u;
    // NOP
label_23aa38:
    // 0x23aa38: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23aa38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23aa3c:
    // 0x23aa3c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_23aa40:
    if (ctx->pc == 0x23AA40u) {
        ctx->pc = 0x23AA40u;
            // 0x23aa40: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23AA44u;
        goto label_23aa44;
    }
    ctx->pc = 0x23AA3Cu;
    {
        const bool branch_taken_0x23aa3c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23AA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA3Cu;
            // 0x23aa40: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa3c) {
            ctx->pc = 0x23A9DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a9dc;
        }
    }
    ctx->pc = 0x23AA44u;
label_23aa44:
    // 0x23aa44: 0x0  nop
    ctx->pc = 0x23aa44u;
    // NOP
label_23aa48:
    // 0x23aa48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23aa4c:
    // 0x23aa4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23aa4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23aa50:
    // 0x23aa50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23aa50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23aa54:
    // 0x23aa54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23aa54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23aa58:
    // 0x23aa58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23aa58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23aa5c:
    // 0x23aa5c: 0x3e00008  jr          $ra
label_23aa60:
    if (ctx->pc == 0x23AA60u) {
        ctx->pc = 0x23AA60u;
            // 0x23aa60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x23AA64u;
        goto label_23aa64;
    }
    ctx->pc = 0x23AA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA5Cu;
            // 0x23aa60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23AA64u;
label_23aa64:
    // 0x23aa64: 0x0  nop
    ctx->pc = 0x23aa64u;
    // NOP
label_23aa68:
    // 0x23aa68: 0x0  nop
    ctx->pc = 0x23aa68u;
    // NOP
label_23aa6c:
    // 0x23aa6c: 0x0  nop
    ctx->pc = 0x23aa6cu;
    // NOP
}
