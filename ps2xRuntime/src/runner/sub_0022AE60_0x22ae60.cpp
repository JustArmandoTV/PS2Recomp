#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022AE60
// Address: 0x22ae60 - 0x22afc0
void sub_0022AE60_0x22ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AE60_0x22ae60");
#endif

    switch (ctx->pc) {
        case 0x22ae60u: goto label_22ae60;
        case 0x22ae64u: goto label_22ae64;
        case 0x22ae68u: goto label_22ae68;
        case 0x22ae6cu: goto label_22ae6c;
        case 0x22ae70u: goto label_22ae70;
        case 0x22ae74u: goto label_22ae74;
        case 0x22ae78u: goto label_22ae78;
        case 0x22ae7cu: goto label_22ae7c;
        case 0x22ae80u: goto label_22ae80;
        case 0x22ae84u: goto label_22ae84;
        case 0x22ae88u: goto label_22ae88;
        case 0x22ae8cu: goto label_22ae8c;
        case 0x22ae90u: goto label_22ae90;
        case 0x22ae94u: goto label_22ae94;
        case 0x22ae98u: goto label_22ae98;
        case 0x22ae9cu: goto label_22ae9c;
        case 0x22aea0u: goto label_22aea0;
        case 0x22aea4u: goto label_22aea4;
        case 0x22aea8u: goto label_22aea8;
        case 0x22aeacu: goto label_22aeac;
        case 0x22aeb0u: goto label_22aeb0;
        case 0x22aeb4u: goto label_22aeb4;
        case 0x22aeb8u: goto label_22aeb8;
        case 0x22aebcu: goto label_22aebc;
        case 0x22aec0u: goto label_22aec0;
        case 0x22aec4u: goto label_22aec4;
        case 0x22aec8u: goto label_22aec8;
        case 0x22aeccu: goto label_22aecc;
        case 0x22aed0u: goto label_22aed0;
        case 0x22aed4u: goto label_22aed4;
        case 0x22aed8u: goto label_22aed8;
        case 0x22aedcu: goto label_22aedc;
        case 0x22aee0u: goto label_22aee0;
        case 0x22aee4u: goto label_22aee4;
        case 0x22aee8u: goto label_22aee8;
        case 0x22aeecu: goto label_22aeec;
        case 0x22aef0u: goto label_22aef0;
        case 0x22aef4u: goto label_22aef4;
        case 0x22aef8u: goto label_22aef8;
        case 0x22aefcu: goto label_22aefc;
        case 0x22af00u: goto label_22af00;
        case 0x22af04u: goto label_22af04;
        case 0x22af08u: goto label_22af08;
        case 0x22af0cu: goto label_22af0c;
        case 0x22af10u: goto label_22af10;
        case 0x22af14u: goto label_22af14;
        case 0x22af18u: goto label_22af18;
        case 0x22af1cu: goto label_22af1c;
        case 0x22af20u: goto label_22af20;
        case 0x22af24u: goto label_22af24;
        case 0x22af28u: goto label_22af28;
        case 0x22af2cu: goto label_22af2c;
        case 0x22af30u: goto label_22af30;
        case 0x22af34u: goto label_22af34;
        case 0x22af38u: goto label_22af38;
        case 0x22af3cu: goto label_22af3c;
        case 0x22af40u: goto label_22af40;
        case 0x22af44u: goto label_22af44;
        case 0x22af48u: goto label_22af48;
        case 0x22af4cu: goto label_22af4c;
        case 0x22af50u: goto label_22af50;
        case 0x22af54u: goto label_22af54;
        case 0x22af58u: goto label_22af58;
        case 0x22af5cu: goto label_22af5c;
        case 0x22af60u: goto label_22af60;
        case 0x22af64u: goto label_22af64;
        case 0x22af68u: goto label_22af68;
        case 0x22af6cu: goto label_22af6c;
        case 0x22af70u: goto label_22af70;
        case 0x22af74u: goto label_22af74;
        case 0x22af78u: goto label_22af78;
        case 0x22af7cu: goto label_22af7c;
        case 0x22af80u: goto label_22af80;
        case 0x22af84u: goto label_22af84;
        case 0x22af88u: goto label_22af88;
        case 0x22af8cu: goto label_22af8c;
        case 0x22af90u: goto label_22af90;
        case 0x22af94u: goto label_22af94;
        case 0x22af98u: goto label_22af98;
        case 0x22af9cu: goto label_22af9c;
        case 0x22afa0u: goto label_22afa0;
        case 0x22afa4u: goto label_22afa4;
        case 0x22afa8u: goto label_22afa8;
        case 0x22afacu: goto label_22afac;
        case 0x22afb0u: goto label_22afb0;
        case 0x22afb4u: goto label_22afb4;
        case 0x22afb8u: goto label_22afb8;
        case 0x22afbcu: goto label_22afbc;
        default: break;
    }

    ctx->pc = 0x22ae60u;

label_22ae60:
    // 0x22ae60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22ae64:
    // 0x22ae64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22ae68:
    // 0x22ae68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22ae6c:
    // 0x22ae6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22ae70:
    // 0x22ae70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ae74:
    // 0x22ae74: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x22ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_22ae78:
    // 0x22ae78: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x22ae78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22ae7c:
    // 0x22ae7c: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_22ae80:
    if (ctx->pc == 0x22AE80u) {
        ctx->pc = 0x22AE80u;
            // 0x22ae80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AE84u;
        goto label_22ae84;
    }
    ctx->pc = 0x22AE7Cu;
    {
        const bool branch_taken_0x22ae7c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE7Cu;
            // 0x22ae80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae7c) {
            ctx->pc = 0x22AEC0u;
            goto label_22aec0;
        }
    }
    ctx->pc = 0x22AE84u;
label_22ae84:
    // 0x22ae84: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x22ae84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_22ae88:
    // 0x22ae88: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x22ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22ae8c:
    // 0x22ae8c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22ae90:
    // 0x22ae90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22ae94:
    // 0x22ae94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_22ae98:
    if (ctx->pc == 0x22AE98u) {
        ctx->pc = 0x22AE9Cu;
        goto label_22ae9c;
    }
    ctx->pc = 0x22AE94u;
    {
        const bool branch_taken_0x22ae94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae94) {
            ctx->pc = 0x22AEB0u;
            goto label_22aeb0;
        }
    }
    ctx->pc = 0x22AE9Cu;
label_22ae9c:
    // 0x22ae9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ae9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22aea0:
    // 0x22aea0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x22aea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22aea4:
    // 0x22aea4: 0x320f809  jalr        $t9
label_22aea8:
    if (ctx->pc == 0x22AEA8u) {
        ctx->pc = 0x22AEA8u;
            // 0x22aea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AEACu;
        goto label_22aeac;
    }
    ctx->pc = 0x22AEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22AEACu);
        ctx->pc = 0x22AEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AEA4u;
            // 0x22aea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22AEACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22AEACu; }
            if (ctx->pc != 0x22AEACu) { return; }
        }
        }
    }
    ctx->pc = 0x22AEACu;
label_22aeac:
    // 0x22aeac: 0x0  nop
    ctx->pc = 0x22aeacu;
    // NOP
label_22aeb0:
    // 0x22aeb0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22aeb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_22aeb4:
    // 0x22aeb4: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_22aeb8:
    if (ctx->pc == 0x22AEB8u) {
        ctx->pc = 0x22AEB8u;
            // 0x22aeb8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x22AEBCu;
        goto label_22aebc;
    }
    ctx->pc = 0x22AEB4u;
    {
        const bool branch_taken_0x22aeb4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x22AEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AEB4u;
            // 0x22aeb8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aeb4) {
            ctx->pc = 0x22AE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ae88;
        }
    }
    ctx->pc = 0x22AEBCu;
label_22aebc:
    // 0x22aebc: 0x0  nop
    ctx->pc = 0x22aebcu;
    // NOP
label_22aec0:
    // 0x22aec0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22aec4:
    // 0x22aec4: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x22aec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22aec8:
    // 0x22aec8: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_22aecc:
    if (ctx->pc == 0x22AECCu) {
        ctx->pc = 0x22AED0u;
        goto label_22aed0;
    }
    ctx->pc = 0x22AEC8u;
    {
        const bool branch_taken_0x22aec8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x22aec8) {
            ctx->pc = 0x22AF40u;
            goto label_22af40;
        }
    }
    ctx->pc = 0x22AED0u;
label_22aed0:
    // 0x22aed0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x22aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22aed4:
    // 0x22aed4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x22aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22aed8:
    // 0x22aed8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22aedc:
    // 0x22aedc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22aee0:
    // 0x22aee0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_22aee4:
    if (ctx->pc == 0x22AEE4u) {
        ctx->pc = 0x22AEE8u;
        goto label_22aee8;
    }
    ctx->pc = 0x22AEE0u;
    {
        const bool branch_taken_0x22aee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22aee0) {
            ctx->pc = 0x22AF30u;
            goto label_22af30;
        }
    }
    ctx->pc = 0x22AEE8u;
label_22aee8:
    // 0x22aee8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22aeec:
    // 0x22aeec: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x22aeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22aef0:
    // 0x22aef0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22aef4:
    // 0x22aef4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x22aef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22aef8:
    // 0x22aef8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_22aefc:
    if (ctx->pc == 0x22AEFCu) {
        ctx->pc = 0x22AEFCu;
            // 0x22aefc: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
        ctx->pc = 0x22AF00u;
        goto label_22af00;
    }
    ctx->pc = 0x22AEF8u;
    {
        const bool branch_taken_0x22aef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AEF8u;
            // 0x22aefc: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aef8) {
            ctx->pc = 0x22AF30u;
            goto label_22af30;
        }
    }
    ctx->pc = 0x22AF00u;
label_22af00:
    // 0x22af00: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x22af00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22af04:
    // 0x22af04: 0x0  nop
    ctx->pc = 0x22af04u;
    // NOP
label_22af08:
    // 0x22af08: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x22af08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22af0c:
    // 0x22af0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22af0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22af10:
    // 0x22af10: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x22af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22af14:
    // 0x22af14: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22af14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22af18:
    // 0x22af18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22af18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22af1c:
    // 0x22af1c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22af20:
    // 0x22af20: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22af20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22af24:
    // 0x22af24: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_22af28:
    if (ctx->pc == 0x22AF28u) {
        ctx->pc = 0x22AF28u;
            // 0x22af28: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22AF2Cu;
        goto label_22af2c;
    }
    ctx->pc = 0x22AF24u;
    {
        const bool branch_taken_0x22af24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF24u;
            // 0x22af28: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af24) {
            ctx->pc = 0x22AF08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22af08;
        }
    }
    ctx->pc = 0x22AF2Cu;
label_22af2c:
    // 0x22af2c: 0x0  nop
    ctx->pc = 0x22af2cu;
    // NOP
label_22af30:
    // 0x22af30: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x22af30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_22af34:
    // 0x22af34: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_22af38:
    if (ctx->pc == 0x22AF38u) {
        ctx->pc = 0x22AF38u;
            // 0x22af38: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x22AF3Cu;
        goto label_22af3c;
    }
    ctx->pc = 0x22AF34u;
    {
        const bool branch_taken_0x22af34 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x22AF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF34u;
            // 0x22af38: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af34) {
            ctx->pc = 0x22AED4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22aed4;
        }
    }
    ctx->pc = 0x22AF3Cu;
label_22af3c:
    // 0x22af3c: 0x0  nop
    ctx->pc = 0x22af3cu;
    // NOP
label_22af40:
    // 0x22af40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22af40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22af44:
    // 0x22af44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22af44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22af48:
    // 0x22af48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22af48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22af4c:
    // 0x22af4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22af4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22af50:
    // 0x22af50: 0x3e00008  jr          $ra
label_22af54:
    if (ctx->pc == 0x22AF54u) {
        ctx->pc = 0x22AF54u;
            // 0x22af54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22AF58u;
        goto label_22af58;
    }
    ctx->pc = 0x22AF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF50u;
            // 0x22af54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AF58u;
label_22af58:
    // 0x22af58: 0x0  nop
    ctx->pc = 0x22af58u;
    // NOP
label_22af5c:
    // 0x22af5c: 0x0  nop
    ctx->pc = 0x22af5cu;
    // NOP
label_22af60:
    // 0x22af60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22af64:
    // 0x22af64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22af64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22af68:
    // 0x22af68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22af6c:
    // 0x22af6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22af6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22af70:
    // 0x22af70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22af70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22af74:
    // 0x22af74: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x22af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_22af78:
    // 0x22af78: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_22af7c:
    if (ctx->pc == 0x22AF7Cu) {
        ctx->pc = 0x22AF7Cu;
            // 0x22af7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AF80u;
        goto label_22af80;
    }
    ctx->pc = 0x22AF78u;
    {
        const bool branch_taken_0x22af78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF78u;
            // 0x22af7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af78) {
            ctx->pc = 0x22AFA4u;
            goto label_22afa4;
        }
    }
    ctx->pc = 0x22AF80u;
label_22af80:
    // 0x22af80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22af80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22af84:
    // 0x22af84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22af84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22af88:
    // 0x22af88: 0x320f809  jalr        $t9
label_22af8c:
    if (ctx->pc == 0x22AF8Cu) {
        ctx->pc = 0x22AF90u;
        goto label_22af90;
    }
    ctx->pc = 0x22AF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22AF90u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22AF90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22AF90u; }
            if (ctx->pc != 0x22AF90u) { return; }
        }
        }
    }
    ctx->pc = 0x22AF90u;
label_22af90:
    // 0x22af90: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x22af90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22af94:
    // 0x22af94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22af94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22af98:
    // 0x22af98: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22af98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22af9c:
    // 0x22af9c: 0x320f809  jalr        $t9
label_22afa0:
    if (ctx->pc == 0x22AFA0u) {
        ctx->pc = 0x22AFA0u;
            // 0x22afa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AFA4u;
        goto label_22afa4;
    }
    ctx->pc = 0x22AF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22AFA4u);
        ctx->pc = 0x22AFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF9Cu;
            // 0x22afa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22AFA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22AFA4u; }
            if (ctx->pc != 0x22AFA4u) { return; }
        }
        }
    }
    ctx->pc = 0x22AFA4u;
label_22afa4:
    // 0x22afa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22afa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22afa8:
    // 0x22afa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22afa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22afac:
    // 0x22afac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22afacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22afb0:
    // 0x22afb0: 0x3e00008  jr          $ra
label_22afb4:
    if (ctx->pc == 0x22AFB4u) {
        ctx->pc = 0x22AFB4u;
            // 0x22afb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x22AFB8u;
        goto label_22afb8;
    }
    ctx->pc = 0x22AFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFB0u;
            // 0x22afb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AFB8u;
label_22afb8:
    // 0x22afb8: 0x0  nop
    ctx->pc = 0x22afb8u;
    // NOP
label_22afbc:
    // 0x22afbc: 0x0  nop
    ctx->pc = 0x22afbcu;
    // NOP
}
