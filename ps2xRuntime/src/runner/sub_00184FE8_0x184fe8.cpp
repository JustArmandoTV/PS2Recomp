#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184FE8
// Address: 0x184fe8 - 0x185118
void sub_00184FE8_0x184fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184FE8_0x184fe8");
#endif

    switch (ctx->pc) {
        case 0x184fe8u: goto label_184fe8;
        case 0x184fecu: goto label_184fec;
        case 0x184ff0u: goto label_184ff0;
        case 0x184ff4u: goto label_184ff4;
        case 0x184ff8u: goto label_184ff8;
        case 0x184ffcu: goto label_184ffc;
        case 0x185000u: goto label_185000;
        case 0x185004u: goto label_185004;
        case 0x185008u: goto label_185008;
        case 0x18500cu: goto label_18500c;
        case 0x185010u: goto label_185010;
        case 0x185014u: goto label_185014;
        case 0x185018u: goto label_185018;
        case 0x18501cu: goto label_18501c;
        case 0x185020u: goto label_185020;
        case 0x185024u: goto label_185024;
        case 0x185028u: goto label_185028;
        case 0x18502cu: goto label_18502c;
        case 0x185030u: goto label_185030;
        case 0x185034u: goto label_185034;
        case 0x185038u: goto label_185038;
        case 0x18503cu: goto label_18503c;
        case 0x185040u: goto label_185040;
        case 0x185044u: goto label_185044;
        case 0x185048u: goto label_185048;
        case 0x18504cu: goto label_18504c;
        case 0x185050u: goto label_185050;
        case 0x185054u: goto label_185054;
        case 0x185058u: goto label_185058;
        case 0x18505cu: goto label_18505c;
        case 0x185060u: goto label_185060;
        case 0x185064u: goto label_185064;
        case 0x185068u: goto label_185068;
        case 0x18506cu: goto label_18506c;
        case 0x185070u: goto label_185070;
        case 0x185074u: goto label_185074;
        case 0x185078u: goto label_185078;
        case 0x18507cu: goto label_18507c;
        case 0x185080u: goto label_185080;
        case 0x185084u: goto label_185084;
        case 0x185088u: goto label_185088;
        case 0x18508cu: goto label_18508c;
        case 0x185090u: goto label_185090;
        case 0x185094u: goto label_185094;
        case 0x185098u: goto label_185098;
        case 0x18509cu: goto label_18509c;
        case 0x1850a0u: goto label_1850a0;
        case 0x1850a4u: goto label_1850a4;
        case 0x1850a8u: goto label_1850a8;
        case 0x1850acu: goto label_1850ac;
        case 0x1850b0u: goto label_1850b0;
        case 0x1850b4u: goto label_1850b4;
        case 0x1850b8u: goto label_1850b8;
        case 0x1850bcu: goto label_1850bc;
        case 0x1850c0u: goto label_1850c0;
        case 0x1850c4u: goto label_1850c4;
        case 0x1850c8u: goto label_1850c8;
        case 0x1850ccu: goto label_1850cc;
        case 0x1850d0u: goto label_1850d0;
        case 0x1850d4u: goto label_1850d4;
        case 0x1850d8u: goto label_1850d8;
        case 0x1850dcu: goto label_1850dc;
        case 0x1850e0u: goto label_1850e0;
        case 0x1850e4u: goto label_1850e4;
        case 0x1850e8u: goto label_1850e8;
        case 0x1850ecu: goto label_1850ec;
        case 0x1850f0u: goto label_1850f0;
        case 0x1850f4u: goto label_1850f4;
        case 0x1850f8u: goto label_1850f8;
        case 0x1850fcu: goto label_1850fc;
        case 0x185100u: goto label_185100;
        case 0x185104u: goto label_185104;
        case 0x185108u: goto label_185108;
        case 0x18510cu: goto label_18510c;
        case 0x185110u: goto label_185110;
        case 0x185114u: goto label_185114;
        default: break;
    }

    ctx->pc = 0x184fe8u;

label_184fe8:
    // 0x184fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184fec:
    // 0x184fec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x184fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184ff0:
    // 0x184ff0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_184ff4:
    if (ctx->pc == 0x184FF4u) {
        ctx->pc = 0x184FF4u;
            // 0x184ff4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x184FF8u;
        goto label_184ff8;
    }
    ctx->pc = 0x184FF0u;
    {
        const bool branch_taken_0x184ff0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x184FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184FF0u;
            // 0x184ff4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ff0) {
            ctx->pc = 0x185018u;
            goto label_185018;
        }
    }
    ctx->pc = 0x184FF8u;
label_184ff8:
    // 0x184ff8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_184ffc:
    // 0x184ffc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x184ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185000:
    // 0x185000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185004:
    // 0x185004: 0x24847a38  addiu       $a0, $a0, 0x7A38
    ctx->pc = 0x185004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31288));
label_185008:
    // 0x185008: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x185008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
label_18500c:
    // 0x18500c: 0x8061296  j           func_184A58
label_185010:
    if (ctx->pc == 0x185010u) {
        ctx->pc = 0x185010u;
            // 0x185010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185014u;
        goto label_185014;
    }
    ctx->pc = 0x18500Cu;
    ctx->pc = 0x185010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18500Cu;
            // 0x185010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185014u;
label_185014:
    // 0x185014: 0x0  nop
    ctx->pc = 0x185014u;
    // NOP
label_185018:
    // 0x185018: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x185018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_18501c:
    // 0x18501c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_185020:
    if (ctx->pc == 0x185020u) {
        ctx->pc = 0x185020u;
            // 0x185020: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x185024u;
        goto label_185024;
    }
    ctx->pc = 0x18501Cu;
    {
        const bool branch_taken_0x18501c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18501Cu;
            // 0x185020: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18501c) {
            ctx->pc = 0x185040u;
            goto label_185040;
        }
    }
    ctx->pc = 0x185024u;
label_185024:
    // 0x185024: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185028:
    // 0x185028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18502c:
    // 0x18502c: 0x24847a48  addiu       $a0, $a0, 0x7A48
    ctx->pc = 0x18502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31304));
label_185030:
    // 0x185030: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x185030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
label_185034:
    // 0x185034: 0x8061296  j           func_184A58
label_185038:
    if (ctx->pc == 0x185038u) {
        ctx->pc = 0x185038u;
            // 0x185038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18503Cu;
        goto label_18503c;
    }
    ctx->pc = 0x185034u;
    ctx->pc = 0x185038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185034u;
            // 0x185038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18503Cu;
label_18503c:
    // 0x18503c: 0x0  nop
    ctx->pc = 0x18503cu;
    // NOP
label_185040:
    // 0x185040: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_185044:
    if (ctx->pc == 0x185044u) {
        ctx->pc = 0x185044u;
            // 0x185044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x185048u;
        goto label_185048;
    }
    ctx->pc = 0x185040u;
    {
        const bool branch_taken_0x185040 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x185044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185040u;
            // 0x185044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185040) {
            ctx->pc = 0x185058u;
            goto label_185058;
        }
    }
    ctx->pc = 0x185048u;
label_185048:
    // 0x185048: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x185048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_18504c:
    // 0x18504c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_185050:
    if (ctx->pc == 0x185050u) {
        ctx->pc = 0x185050u;
            // 0x185050: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x185054u;
        goto label_185054;
    }
    ctx->pc = 0x18504Cu;
    {
        const bool branch_taken_0x18504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18504Cu;
            // 0x185050: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18504c) {
            ctx->pc = 0x1850B8u;
            goto label_1850b8;
        }
    }
    ctx->pc = 0x185054u;
label_185054:
    // 0x185054: 0x0  nop
    ctx->pc = 0x185054u;
    // NOP
label_185058:
    // 0x185058: 0x54a20011  bnel        $a1, $v0, . + 4 + (0x11 << 2)
label_18505c:
    if (ctx->pc == 0x18505Cu) {
        ctx->pc = 0x18505Cu;
            // 0x18505c: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->pc = 0x185060u;
        goto label_185060;
    }
    ctx->pc = 0x185058u;
    {
        const bool branch_taken_0x185058 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x185058) {
            ctx->pc = 0x18505Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185058u;
            // 0x18505c: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1850A0u;
            goto label_1850a0;
        }
    }
    ctx->pc = 0x185060u;
label_185060:
    // 0x185060: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x185060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_185064:
    // 0x185064: 0x8d050014  lw          $a1, 0x14($t0)
    ctx->pc = 0x185064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_185068:
    // 0x185068: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x185068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_18506c:
    // 0x18506c: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x18506cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_185070:
    // 0x185070: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x185070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_185074:
    // 0x185074: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x185074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_185078:
    // 0x185078: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x185078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_18507c:
    // 0x18507c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_185080:
    // 0x185080: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x185080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_185084:
    // 0x185084: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x185084u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
label_185088:
    // 0x185088: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x185088u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_18508c:
    // 0x18508c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x18508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_185090:
    // 0x185090: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x185090u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_185094:
    // 0x185094: 0x10000008  b           . + 4 + (0x8 << 2)
label_185098:
    if (ctx->pc == 0x185098u) {
        ctx->pc = 0x185098u;
            // 0x185098: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x18509Cu;
        goto label_18509c;
    }
    ctx->pc = 0x185094u;
    {
        const bool branch_taken_0x185094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185094u;
            // 0x185098: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185094) {
            ctx->pc = 0x1850B8u;
            goto label_1850b8;
        }
    }
    ctx->pc = 0x18509Cu;
label_18509c:
    // 0x18509c: 0x0  nop
    ctx->pc = 0x18509cu;
    // NOP
label_1850a0:
    // 0x1850a0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1850a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1850a4:
    // 0x1850a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1850a8:
    if (ctx->pc == 0x1850A8u) {
        ctx->pc = 0x1850A8u;
            // 0x1850a8: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1850ACu;
        goto label_1850ac;
    }
    ctx->pc = 0x1850A4u;
    {
        const bool branch_taken_0x1850a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1850A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850A4u;
            // 0x1850a8: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850a4) {
            ctx->pc = 0x1850B8u;
            goto label_1850b8;
        }
    }
    ctx->pc = 0x1850ACu;
label_1850ac:
    // 0x1850ac: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x1850acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_1850b0:
    // 0x1850b0: 0x40f809  jalr        $v0
label_1850b4:
    if (ctx->pc == 0x1850B4u) {
        ctx->pc = 0x1850B4u;
            // 0x1850b4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1850B8u;
        goto label_1850b8;
    }
    ctx->pc = 0x1850B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1850B8u);
        ctx->pc = 0x1850B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850B0u;
            // 0x1850b4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1850B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1850B8u; }
            if (ctx->pc != 0x1850B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1850B8u;
label_1850b8:
    // 0x1850b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1850b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1850bc:
    // 0x1850bc: 0x3e00008  jr          $ra
label_1850c0:
    if (ctx->pc == 0x1850C0u) {
        ctx->pc = 0x1850C0u;
            // 0x1850c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1850C4u;
        goto label_1850c4;
    }
    ctx->pc = 0x1850BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1850C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850BCu;
            // 0x1850c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1850C4u;
label_1850c4:
    // 0x1850c4: 0x0  nop
    ctx->pc = 0x1850c4u;
    // NOP
label_1850c8:
    // 0x1850c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1850c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1850cc:
    // 0x1850cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1850ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1850d0:
    // 0x1850d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1850d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1850d4:
    // 0x1850d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1850d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1850d8:
    // 0x1850d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1850d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1850dc:
    // 0x1850dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1850dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1850e0:
    // 0x1850e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1850e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1850e4:
    // 0x1850e4: 0xc06127c  jal         func_1849F0
label_1850e8:
    if (ctx->pc == 0x1850E8u) {
        ctx->pc = 0x1850E8u;
            // 0x1850e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1850ECu;
        goto label_1850ec;
    }
    ctx->pc = 0x1850E4u;
    SET_GPR_U32(ctx, 31, 0x1850ECu);
    ctx->pc = 0x1850E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1850E4u;
            // 0x1850e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1850ECu; }
        if (ctx->pc != 0x1850ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1850ECu; }
        if (ctx->pc != 0x1850ECu) { return; }
    }
    ctx->pc = 0x1850ECu;
label_1850ec:
    // 0x1850ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1850ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1850f0:
    // 0x1850f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1850f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1850f4:
    // 0x1850f4: 0xc061446  jal         func_185118
label_1850f8:
    if (ctx->pc == 0x1850F8u) {
        ctx->pc = 0x1850F8u;
            // 0x1850f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1850FCu;
        goto label_1850fc;
    }
    ctx->pc = 0x1850F4u;
    SET_GPR_U32(ctx, 31, 0x1850FCu);
    ctx->pc = 0x1850F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1850F4u;
            // 0x1850f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185118u;
    if (runtime->hasFunction(0x185118u)) {
        auto targetFn = runtime->lookupFunction(0x185118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1850FCu; }
        if (ctx->pc != 0x1850FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185118_0x185118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1850FCu; }
        if (ctx->pc != 0x1850FCu) { return; }
    }
    ctx->pc = 0x1850FCu;
label_1850fc:
    // 0x1850fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1850fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185100:
    // 0x185100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185104:
    // 0x185104: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x185104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185108:
    // 0x185108: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x185108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18510c:
    // 0x18510c: 0x8061282  j           func_184A08
label_185110:
    if (ctx->pc == 0x185110u) {
        ctx->pc = 0x185110u;
            // 0x185110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185114u;
        goto label_185114;
    }
    ctx->pc = 0x18510Cu;
    ctx->pc = 0x185110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18510Cu;
            // 0x185110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185114u;
label_185114:
    // 0x185114: 0x0  nop
    ctx->pc = 0x185114u;
    // NOP
}
