#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028AC70
// Address: 0x28ac70 - 0x28adc0
void sub_0028AC70_0x28ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AC70_0x28ac70");
#endif

    switch (ctx->pc) {
        case 0x28ac70u: goto label_28ac70;
        case 0x28ac74u: goto label_28ac74;
        case 0x28ac78u: goto label_28ac78;
        case 0x28ac7cu: goto label_28ac7c;
        case 0x28ac80u: goto label_28ac80;
        case 0x28ac84u: goto label_28ac84;
        case 0x28ac88u: goto label_28ac88;
        case 0x28ac8cu: goto label_28ac8c;
        case 0x28ac90u: goto label_28ac90;
        case 0x28ac94u: goto label_28ac94;
        case 0x28ac98u: goto label_28ac98;
        case 0x28ac9cu: goto label_28ac9c;
        case 0x28aca0u: goto label_28aca0;
        case 0x28aca4u: goto label_28aca4;
        case 0x28aca8u: goto label_28aca8;
        case 0x28acacu: goto label_28acac;
        case 0x28acb0u: goto label_28acb0;
        case 0x28acb4u: goto label_28acb4;
        case 0x28acb8u: goto label_28acb8;
        case 0x28acbcu: goto label_28acbc;
        case 0x28acc0u: goto label_28acc0;
        case 0x28acc4u: goto label_28acc4;
        case 0x28acc8u: goto label_28acc8;
        case 0x28acccu: goto label_28accc;
        case 0x28acd0u: goto label_28acd0;
        case 0x28acd4u: goto label_28acd4;
        case 0x28acd8u: goto label_28acd8;
        case 0x28acdcu: goto label_28acdc;
        case 0x28ace0u: goto label_28ace0;
        case 0x28ace4u: goto label_28ace4;
        case 0x28ace8u: goto label_28ace8;
        case 0x28acecu: goto label_28acec;
        case 0x28acf0u: goto label_28acf0;
        case 0x28acf4u: goto label_28acf4;
        case 0x28acf8u: goto label_28acf8;
        case 0x28acfcu: goto label_28acfc;
        case 0x28ad00u: goto label_28ad00;
        case 0x28ad04u: goto label_28ad04;
        case 0x28ad08u: goto label_28ad08;
        case 0x28ad0cu: goto label_28ad0c;
        case 0x28ad10u: goto label_28ad10;
        case 0x28ad14u: goto label_28ad14;
        case 0x28ad18u: goto label_28ad18;
        case 0x28ad1cu: goto label_28ad1c;
        case 0x28ad20u: goto label_28ad20;
        case 0x28ad24u: goto label_28ad24;
        case 0x28ad28u: goto label_28ad28;
        case 0x28ad2cu: goto label_28ad2c;
        case 0x28ad30u: goto label_28ad30;
        case 0x28ad34u: goto label_28ad34;
        case 0x28ad38u: goto label_28ad38;
        case 0x28ad3cu: goto label_28ad3c;
        case 0x28ad40u: goto label_28ad40;
        case 0x28ad44u: goto label_28ad44;
        case 0x28ad48u: goto label_28ad48;
        case 0x28ad4cu: goto label_28ad4c;
        case 0x28ad50u: goto label_28ad50;
        case 0x28ad54u: goto label_28ad54;
        case 0x28ad58u: goto label_28ad58;
        case 0x28ad5cu: goto label_28ad5c;
        case 0x28ad60u: goto label_28ad60;
        case 0x28ad64u: goto label_28ad64;
        case 0x28ad68u: goto label_28ad68;
        case 0x28ad6cu: goto label_28ad6c;
        case 0x28ad70u: goto label_28ad70;
        case 0x28ad74u: goto label_28ad74;
        case 0x28ad78u: goto label_28ad78;
        case 0x28ad7cu: goto label_28ad7c;
        case 0x28ad80u: goto label_28ad80;
        case 0x28ad84u: goto label_28ad84;
        case 0x28ad88u: goto label_28ad88;
        case 0x28ad8cu: goto label_28ad8c;
        case 0x28ad90u: goto label_28ad90;
        case 0x28ad94u: goto label_28ad94;
        case 0x28ad98u: goto label_28ad98;
        case 0x28ad9cu: goto label_28ad9c;
        case 0x28ada0u: goto label_28ada0;
        case 0x28ada4u: goto label_28ada4;
        case 0x28ada8u: goto label_28ada8;
        case 0x28adacu: goto label_28adac;
        case 0x28adb0u: goto label_28adb0;
        case 0x28adb4u: goto label_28adb4;
        case 0x28adb8u: goto label_28adb8;
        case 0x28adbcu: goto label_28adbc;
        default: break;
    }

    ctx->pc = 0x28ac70u;

label_28ac70:
    // 0x28ac70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_28ac74:
    // 0x28ac74: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x28ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_28ac78:
    // 0x28ac78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_28ac7c:
    // 0x28ac7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28ac80:
    // 0x28ac80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28ac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28ac84:
    // 0x28ac84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28ac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28ac88:
    // 0x28ac88: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28ac88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ac8c:
    // 0x28ac8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28ac90:
    // 0x28ac90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28ac94:
    // 0x28ac94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28ac98:
    // 0x28ac98: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28ac98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28ac9c:
    // 0x28ac9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28aca0:
    // 0x28aca0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28aca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28aca4:
    // 0x28aca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28aca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28aca8:
    // 0x28aca8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28aca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28acac:
    // 0x28acac: 0x7863fff0  lq          $v1, -0x10($v1)
    ctx->pc = 0x28acacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_28acb0:
    // 0x28acb0: 0x68043  sra         $s0, $a2, 1
    ctx->pc = 0x28acb0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 1));
label_28acb4:
    // 0x28acb4: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_28acb8:
    if (ctx->pc == 0x28ACB8u) {
        ctx->pc = 0x28ACB8u;
            // 0x28acb8: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x28ACBCu;
        goto label_28acbc;
    }
    ctx->pc = 0x28ACB4u;
    {
        const bool branch_taken_0x28acb4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x28ACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACB4u;
            // 0x28acb8: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acb4) {
            ctx->pc = 0x28ACC4u;
            goto label_28acc4;
        }
    }
    ctx->pc = 0x28ACBCu;
label_28acbc:
    // 0x28acbc: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x28acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28acc0:
    // 0x28acc0: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x28acc0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_28acc4:
    // 0x28acc4: 0x214082a  slt         $at, $s0, $s4
    ctx->pc = 0x28acc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_28acc8:
    // 0x28acc8: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
label_28accc:
    if (ctx->pc == 0x28ACCCu) {
        ctx->pc = 0x28ACD0u;
        goto label_28acd0;
    }
    ctx->pc = 0x28ACC8u;
    {
        const bool branch_taken_0x28acc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28acc8) {
            ctx->pc = 0x28AD70u;
            goto label_28ad70;
        }
    }
    ctx->pc = 0x28ACD0u;
label_28acd0:
    // 0x28acd0: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x28acd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_28acd4:
    // 0x28acd4: 0x233082a  slt         $at, $s1, $s3
    ctx->pc = 0x28acd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_28acd8:
    // 0x28acd8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_28acdc:
    if (ctx->pc == 0x28ACDCu) {
        ctx->pc = 0x28ACDCu;
            // 0x28acdc: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x28ACE0u;
        goto label_28ace0;
    }
    ctx->pc = 0x28ACD8u;
    {
        const bool branch_taken_0x28acd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACD8u;
            // 0x28acdc: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acd8) {
            ctx->pc = 0x28AD10u;
            goto label_28ad10;
        }
    }
    ctx->pc = 0x28ACE0u;
label_28ace0:
    // 0x28ace0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x28ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_28ace4:
    // 0x28ace4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_28ace8:
    // 0x28ace8: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x28ace8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28acec:
    // 0x28acec: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x28acecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28acf0:
    // 0x28acf0: 0x240f809  jalr        $s2
label_28acf4:
    if (ctx->pc == 0x28ACF4u) {
        ctx->pc = 0x28ACF4u;
            // 0x28acf4: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->pc = 0x28ACF8u;
        goto label_28acf8;
    }
    ctx->pc = 0x28ACF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x28ACF8u);
        ctx->pc = 0x28ACF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACF0u;
            // 0x28acf4: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28ACF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28ACF8u; }
            if (ctx->pc != 0x28ACF8u) { return; }
        }
        }
    }
    ctx->pc = 0x28ACF8u;
label_28acf8:
    // 0x28acf8: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x28acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_28acfc:
    // 0x28acfc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x28acfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28ad00:
    // 0x28ad00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28ad04:
    if (ctx->pc == 0x28AD04u) {
        ctx->pc = 0x28AD08u;
        goto label_28ad08;
    }
    ctx->pc = 0x28AD00u;
    {
        const bool branch_taken_0x28ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ad00) {
            ctx->pc = 0x28AD10u;
            goto label_28ad10;
        }
    }
    ctx->pc = 0x28AD08u;
label_28ad08:
    // 0x28ad08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28ad08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28ad0c:
    // 0x28ad0c: 0x0  nop
    ctx->pc = 0x28ad0cu;
    // NOP
label_28ad10:
    // 0x28ad10: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x28ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28ad14:
    // 0x28ad14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28ad18:
    // 0x28ad18: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x28ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_28ad1c:
    // 0x28ad1c: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x28ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28ad20:
    // 0x28ad20: 0x240f809  jalr        $s2
label_28ad24:
    if (ctx->pc == 0x28AD24u) {
        ctx->pc = 0x28AD24u;
            // 0x28ad24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x28AD28u;
        goto label_28ad28;
    }
    ctx->pc = 0x28AD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x28AD28u);
        ctx->pc = 0x28AD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD20u;
            // 0x28ad24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28AD28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28AD28u; }
            if (ctx->pc != 0x28AD28u) { return; }
        }
        }
    }
    ctx->pc = 0x28AD28u;
label_28ad28:
    // 0x28ad28: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x28ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_28ad2c:
    // 0x28ad2c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x28ad2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_28ad30:
    // 0x28ad30: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_28ad34:
    if (ctx->pc == 0x28AD34u) {
        ctx->pc = 0x28AD34u;
            // 0x28ad34: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x28AD38u;
        goto label_28ad38;
    }
    ctx->pc = 0x28AD30u;
    {
        const bool branch_taken_0x28ad30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD30u;
            // 0x28ad34: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad30) {
            ctx->pc = 0x28AD70u;
            goto label_28ad70;
        }
    }
    ctx->pc = 0x28AD38u;
label_28ad38:
    // 0x28ad38: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x28ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_28ad3c:
    // 0x28ad3c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x28ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_28ad40:
    // 0x28ad40: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x28ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28ad44:
    // 0x28ad44: 0xc480fff0  lwc1        $f0, -0x10($a0)
    ctx->pc = 0x28ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad48:
    // 0x28ad48: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x28ad48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28ad4c:
    // 0x28ad4c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x28ad4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ad50:
    // 0x28ad50: 0xe460fff0  swc1        $f0, -0x10($v1)
    ctx->pc = 0x28ad50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), bits); }
label_28ad54:
    // 0x28ad54: 0xc480fff4  lwc1        $f0, -0xC($a0)
    ctx->pc = 0x28ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad58:
    // 0x28ad58: 0xe460fff4  swc1        $f0, -0xC($v1)
    ctx->pc = 0x28ad58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), bits); }
label_28ad5c:
    // 0x28ad5c: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x28ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad60:
    // 0x28ad60: 0xe460fff8  swc1        $f0, -0x8($v1)
    ctx->pc = 0x28ad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
label_28ad64:
    // 0x28ad64: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x28ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad68:
    // 0x28ad68: 0x1020ffd9  beqz        $at, . + 4 + (-0x27 << 2)
label_28ad6c:
    if (ctx->pc == 0x28AD6Cu) {
        ctx->pc = 0x28AD6Cu;
            // 0x28ad6c: 0xe460fffc  swc1        $f0, -0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
        ctx->pc = 0x28AD70u;
        goto label_28ad70;
    }
    ctx->pc = 0x28AD68u;
    {
        const bool branch_taken_0x28ad68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD68u;
            // 0x28ad6c: 0xe460fffc  swc1        $f0, -0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad68) {
            ctx->pc = 0x28ACD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28acd0;
        }
    }
    ctx->pc = 0x28AD70u;
label_28ad70:
    // 0x28ad70: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x28ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_28ad74:
    // 0x28ad74: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x28ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad78:
    // 0x28ad78: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x28ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_28ad7c:
    // 0x28ad7c: 0xe460fff0  swc1        $f0, -0x10($v1)
    ctx->pc = 0x28ad7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), bits); }
label_28ad80:
    // 0x28ad80: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x28ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad84:
    // 0x28ad84: 0xe460fff4  swc1        $f0, -0xC($v1)
    ctx->pc = 0x28ad84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), bits); }
label_28ad88:
    // 0x28ad88: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x28ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad8c:
    // 0x28ad8c: 0xe460fff8  swc1        $f0, -0x8($v1)
    ctx->pc = 0x28ad8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
label_28ad90:
    // 0x28ad90: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x28ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad94:
    // 0x28ad94: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x28ad94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
label_28ad98:
    // 0x28ad98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28ad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28ad9c:
    // 0x28ad9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28ad9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28ada0:
    // 0x28ada0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28ada0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28ada4:
    // 0x28ada4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ada4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28ada8:
    // 0x28ada8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ada8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28adac:
    // 0x28adac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28adacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28adb0:
    // 0x28adb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28adb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28adb4:
    // 0x28adb4: 0x3e00008  jr          $ra
label_28adb8:
    if (ctx->pc == 0x28ADB8u) {
        ctx->pc = 0x28ADB8u;
            // 0x28adb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x28ADBCu;
        goto label_28adbc;
    }
    ctx->pc = 0x28ADB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADB4u;
            // 0x28adb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28ADBCu;
label_28adbc:
    // 0x28adbc: 0x0  nop
    ctx->pc = 0x28adbcu;
    // NOP
}
