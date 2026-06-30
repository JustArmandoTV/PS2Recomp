#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00569FB0
// Address: 0x569fb0 - 0x56a0e0
void sub_00569FB0_0x569fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00569FB0_0x569fb0");
#endif

    switch (ctx->pc) {
        case 0x569fb0u: goto label_569fb0;
        case 0x569fb4u: goto label_569fb4;
        case 0x569fb8u: goto label_569fb8;
        case 0x569fbcu: goto label_569fbc;
        case 0x569fc0u: goto label_569fc0;
        case 0x569fc4u: goto label_569fc4;
        case 0x569fc8u: goto label_569fc8;
        case 0x569fccu: goto label_569fcc;
        case 0x569fd0u: goto label_569fd0;
        case 0x569fd4u: goto label_569fd4;
        case 0x569fd8u: goto label_569fd8;
        case 0x569fdcu: goto label_569fdc;
        case 0x569fe0u: goto label_569fe0;
        case 0x569fe4u: goto label_569fe4;
        case 0x569fe8u: goto label_569fe8;
        case 0x569fecu: goto label_569fec;
        case 0x569ff0u: goto label_569ff0;
        case 0x569ff4u: goto label_569ff4;
        case 0x569ff8u: goto label_569ff8;
        case 0x569ffcu: goto label_569ffc;
        case 0x56a000u: goto label_56a000;
        case 0x56a004u: goto label_56a004;
        case 0x56a008u: goto label_56a008;
        case 0x56a00cu: goto label_56a00c;
        case 0x56a010u: goto label_56a010;
        case 0x56a014u: goto label_56a014;
        case 0x56a018u: goto label_56a018;
        case 0x56a01cu: goto label_56a01c;
        case 0x56a020u: goto label_56a020;
        case 0x56a024u: goto label_56a024;
        case 0x56a028u: goto label_56a028;
        case 0x56a02cu: goto label_56a02c;
        case 0x56a030u: goto label_56a030;
        case 0x56a034u: goto label_56a034;
        case 0x56a038u: goto label_56a038;
        case 0x56a03cu: goto label_56a03c;
        case 0x56a040u: goto label_56a040;
        case 0x56a044u: goto label_56a044;
        case 0x56a048u: goto label_56a048;
        case 0x56a04cu: goto label_56a04c;
        case 0x56a050u: goto label_56a050;
        case 0x56a054u: goto label_56a054;
        case 0x56a058u: goto label_56a058;
        case 0x56a05cu: goto label_56a05c;
        case 0x56a060u: goto label_56a060;
        case 0x56a064u: goto label_56a064;
        case 0x56a068u: goto label_56a068;
        case 0x56a06cu: goto label_56a06c;
        case 0x56a070u: goto label_56a070;
        case 0x56a074u: goto label_56a074;
        case 0x56a078u: goto label_56a078;
        case 0x56a07cu: goto label_56a07c;
        case 0x56a080u: goto label_56a080;
        case 0x56a084u: goto label_56a084;
        case 0x56a088u: goto label_56a088;
        case 0x56a08cu: goto label_56a08c;
        case 0x56a090u: goto label_56a090;
        case 0x56a094u: goto label_56a094;
        case 0x56a098u: goto label_56a098;
        case 0x56a09cu: goto label_56a09c;
        case 0x56a0a0u: goto label_56a0a0;
        case 0x56a0a4u: goto label_56a0a4;
        case 0x56a0a8u: goto label_56a0a8;
        case 0x56a0acu: goto label_56a0ac;
        case 0x56a0b0u: goto label_56a0b0;
        case 0x56a0b4u: goto label_56a0b4;
        case 0x56a0b8u: goto label_56a0b8;
        case 0x56a0bcu: goto label_56a0bc;
        case 0x56a0c0u: goto label_56a0c0;
        case 0x56a0c4u: goto label_56a0c4;
        case 0x56a0c8u: goto label_56a0c8;
        case 0x56a0ccu: goto label_56a0cc;
        case 0x56a0d0u: goto label_56a0d0;
        case 0x56a0d4u: goto label_56a0d4;
        case 0x56a0d8u: goto label_56a0d8;
        case 0x56a0dcu: goto label_56a0dc;
        default: break;
    }

    ctx->pc = 0x569fb0u;

label_569fb0:
    // 0x569fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x569fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_569fb4:
    // 0x569fb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x569fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_569fb8:
    // 0x569fb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x569fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_569fbc:
    // 0x569fbc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x569fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_569fc0:
    // 0x569fc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x569fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_569fc4:
    // 0x569fc4: 0x2463d360  addiu       $v1, $v1, -0x2CA0
    ctx->pc = 0x569fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955872));
label_569fc8:
    // 0x569fc8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x569fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_569fcc:
    // 0x569fcc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x569fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_569fd0:
    // 0x569fd0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x569fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_569fd4:
    // 0x569fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x569fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_569fd8:
    // 0x569fd8: 0x8ca30d98  lw          $v1, 0xD98($a1)
    ctx->pc = 0x569fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_569fdc:
    // 0x569fdc: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x569fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_569fe0:
    // 0x569fe0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x569fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_569fe4:
    // 0x569fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x569fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_569fe8:
    // 0x569fe8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x569fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_569fec:
    // 0x569fec: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x569fecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_569ff0:
    // 0x569ff0: 0xc04a576  jal         func_1295D8
label_569ff4:
    if (ctx->pc == 0x569FF4u) {
        ctx->pc = 0x569FF4u;
            // 0x569ff4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x569FF8u;
        goto label_569ff8;
    }
    ctx->pc = 0x569FF0u;
    SET_GPR_U32(ctx, 31, 0x569FF8u);
    ctx->pc = 0x569FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569FF0u;
            // 0x569ff4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569FF8u; }
        if (ctx->pc != 0x569FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569FF8u; }
        if (ctx->pc != 0x569FF8u) { return; }
    }
    ctx->pc = 0x569FF8u;
label_569ff8:
    // 0x569ff8: 0xc15a748  jal         func_569D20
label_569ffc:
    if (ctx->pc == 0x569FFCu) {
        ctx->pc = 0x569FFCu;
            // 0x569ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A000u;
        goto label_56a000;
    }
    ctx->pc = 0x569FF8u;
    SET_GPR_U32(ctx, 31, 0x56A000u);
    ctx->pc = 0x569FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569FF8u;
            // 0x569ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x569D20u;
    if (runtime->hasFunction(0x569D20u)) {
        auto targetFn = runtime->lookupFunction(0x569D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A000u; }
        if (ctx->pc != 0x56A000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00569D20_0x569d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A000u; }
        if (ctx->pc != 0x56A000u) { return; }
    }
    ctx->pc = 0x56A000u;
label_56a000:
    // 0x56a000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x56a000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56a004:
    // 0x56a004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x56a004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_56a008:
    // 0x56a008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56a008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56a00c:
    // 0x56a00c: 0x3e00008  jr          $ra
label_56a010:
    if (ctx->pc == 0x56A010u) {
        ctx->pc = 0x56A010u;
            // 0x56a010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x56A014u;
        goto label_56a014;
    }
    ctx->pc = 0x56A00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A00Cu;
            // 0x56a010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56A014u;
label_56a014:
    // 0x56a014: 0x0  nop
    ctx->pc = 0x56a014u;
    // NOP
label_56a018:
    // 0x56a018: 0x0  nop
    ctx->pc = 0x56a018u;
    // NOP
label_56a01c:
    // 0x56a01c: 0x0  nop
    ctx->pc = 0x56a01cu;
    // NOP
label_56a020:
    // 0x56a020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x56a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_56a024:
    // 0x56a024: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x56a024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_56a028:
    // 0x56a028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x56a028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_56a02c:
    // 0x56a02c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x56a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56a030:
    // 0x56a030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56a030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56a034:
    // 0x56a034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x56a034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_56a038:
    // 0x56a038: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x56a038u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_56a03c:
    // 0x56a03c: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
label_56a040:
    if (ctx->pc == 0x56A040u) {
        ctx->pc = 0x56A040u;
            // 0x56a040: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x56A044u;
        goto label_56a044;
    }
    ctx->pc = 0x56A03Cu;
    {
        const bool branch_taken_0x56a03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x56a03c) {
            ctx->pc = 0x56A040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A03Cu;
            // 0x56a040: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A068u;
            goto label_56a068;
        }
    }
    ctx->pc = 0x56A044u;
label_56a044:
    // 0x56a044: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x56a044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_56a048:
    // 0x56a048: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_56a04c:
    if (ctx->pc == 0x56A04Cu) {
        ctx->pc = 0x56A04Cu;
            // 0x56a04c: 0x8e390004  lw          $t9, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x56A050u;
        goto label_56a050;
    }
    ctx->pc = 0x56A048u;
    {
        const bool branch_taken_0x56a048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x56a048) {
            ctx->pc = 0x56A04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A048u;
            // 0x56a04c: 0x8e390004  lw          $t9, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A058u;
            goto label_56a058;
        }
    }
    ctx->pc = 0x56A050u;
label_56a050:
    // 0x56a050: 0x1000001d  b           . + 4 + (0x1D << 2)
label_56a054:
    if (ctx->pc == 0x56A054u) {
        ctx->pc = 0x56A058u;
        goto label_56a058;
    }
    ctx->pc = 0x56A050u;
    {
        const bool branch_taken_0x56a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a050) {
            ctx->pc = 0x56A0C8u;
            goto label_56a0c8;
        }
    }
    ctx->pc = 0x56A058u;
label_56a058:
    // 0x56a058: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x56a058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_56a05c:
    // 0x56a05c: 0x320f809  jalr        $t9
label_56a060:
    if (ctx->pc == 0x56A060u) {
        ctx->pc = 0x56A060u;
            // 0x56a060: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x56A064u;
        goto label_56a064;
    }
    ctx->pc = 0x56A05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A064u);
        ctx->pc = 0x56A060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A05Cu;
            // 0x56a060: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A064u; }
            if (ctx->pc != 0x56A064u) { return; }
        }
        }
    }
    ctx->pc = 0x56A064u;
label_56a064:
    // 0x56a064: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x56a064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_56a068:
    // 0x56a068: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_56a06c:
    if (ctx->pc == 0x56A06Cu) {
        ctx->pc = 0x56A06Cu;
            // 0x56a06c: 0x26300058  addiu       $s0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x56A070u;
        goto label_56a070;
    }
    ctx->pc = 0x56A068u;
    {
        const bool branch_taken_0x56a068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A068u;
            // 0x56a06c: 0x26300058  addiu       $s0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a068) {
            ctx->pc = 0x56A0C8u;
            goto label_56a0c8;
        }
    }
    ctx->pc = 0x56A070u;
label_56a070:
    // 0x56a070: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x56a070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_56a074:
    // 0x56a074: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x56a074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_56a078:
    // 0x56a078: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x56a078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_56a07c:
    // 0x56a07c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x56a07cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_56a080:
    // 0x56a080: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x56a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_56a084:
    // 0x56a084: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x56a084u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_56a088:
    // 0x56a088: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_56a08c:
    if (ctx->pc == 0x56A08Cu) {
        ctx->pc = 0x56A090u;
        goto label_56a090;
    }
    ctx->pc = 0x56A088u;
    {
        const bool branch_taken_0x56a088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x56a088) {
            ctx->pc = 0x56A0B0u;
            goto label_56a0b0;
        }
    }
    ctx->pc = 0x56A090u;
label_56a090:
    // 0x56a090: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x56a090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
label_56a094:
    // 0x56a094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x56a094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56a098:
    // 0x56a098: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x56a098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_56a09c:
    // 0x56a09c: 0xc0582ac  jal         func_160AB0
label_56a0a0:
    if (ctx->pc == 0x56A0A0u) {
        ctx->pc = 0x56A0A0u;
            // 0x56a0a0: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->pc = 0x56A0A4u;
        goto label_56a0a4;
    }
    ctx->pc = 0x56A09Cu;
    SET_GPR_U32(ctx, 31, 0x56A0A4u);
    ctx->pc = 0x56A0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A09Cu;
            // 0x56a0a0: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160AB0u;
    if (runtime->hasFunction(0x160AB0u)) {
        auto targetFn = runtime->lookupFunction(0x160AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A0A4u; }
        if (ctx->pc != 0x56A0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160AB0_0x160ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A0A4u; }
        if (ctx->pc != 0x56A0A4u) { return; }
    }
    ctx->pc = 0x56A0A4u;
label_56a0a4:
    // 0x56a0a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_56a0a8:
    if (ctx->pc == 0x56A0A8u) {
        ctx->pc = 0x56A0A8u;
            // 0x56a0a8: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x56A0ACu;
        goto label_56a0ac;
    }
    ctx->pc = 0x56A0A4u;
    {
        const bool branch_taken_0x56a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A0A4u;
            // 0x56a0a8: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a0a4) {
            ctx->pc = 0x56A0B8u;
            goto label_56a0b8;
        }
    }
    ctx->pc = 0x56A0ACu;
label_56a0ac:
    // 0x56a0ac: 0x0  nop
    ctx->pc = 0x56a0acu;
    // NOP
label_56a0b0:
    // 0x56a0b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x56a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_56a0b4:
    // 0x56a0b4: 0x0  nop
    ctx->pc = 0x56a0b4u;
    // NOP
label_56a0b8:
    // 0x56a0b8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x56a0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_56a0bc:
    // 0x56a0bc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x56a0bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_56a0c0:
    // 0x56a0c0: 0x5491ffee  bnel        $a0, $s1, . + 4 + (-0x12 << 2)
label_56a0c4:
    if (ctx->pc == 0x56A0C4u) {
        ctx->pc = 0x56A0C4u;
            // 0x56a0c4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x56A0C8u;
        goto label_56a0c8;
    }
    ctx->pc = 0x56A0C0u;
    {
        const bool branch_taken_0x56a0c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x56a0c0) {
            ctx->pc = 0x56A0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A0C0u;
            // 0x56a0c4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A07Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_56a07c;
        }
    }
    ctx->pc = 0x56A0C8u;
label_56a0c8:
    // 0x56a0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x56a0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_56a0cc:
    // 0x56a0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56a0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_56a0d0:
    // 0x56a0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56a0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56a0d4:
    // 0x56a0d4: 0x3e00008  jr          $ra
label_56a0d8:
    if (ctx->pc == 0x56A0D8u) {
        ctx->pc = 0x56A0D8u;
            // 0x56a0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x56A0DCu;
        goto label_56a0dc;
    }
    ctx->pc = 0x56A0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A0D4u;
            // 0x56a0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56A0DCu;
label_56a0dc:
    // 0x56a0dc: 0x0  nop
    ctx->pc = 0x56a0dcu;
    // NOP
}
