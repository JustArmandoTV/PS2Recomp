#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00479EC0
// Address: 0x479ec0 - 0x47a0e0
void sub_00479EC0_0x479ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479EC0_0x479ec0");
#endif

    switch (ctx->pc) {
        case 0x479ec0u: goto label_479ec0;
        case 0x479ec4u: goto label_479ec4;
        case 0x479ec8u: goto label_479ec8;
        case 0x479eccu: goto label_479ecc;
        case 0x479ed0u: goto label_479ed0;
        case 0x479ed4u: goto label_479ed4;
        case 0x479ed8u: goto label_479ed8;
        case 0x479edcu: goto label_479edc;
        case 0x479ee0u: goto label_479ee0;
        case 0x479ee4u: goto label_479ee4;
        case 0x479ee8u: goto label_479ee8;
        case 0x479eecu: goto label_479eec;
        case 0x479ef0u: goto label_479ef0;
        case 0x479ef4u: goto label_479ef4;
        case 0x479ef8u: goto label_479ef8;
        case 0x479efcu: goto label_479efc;
        case 0x479f00u: goto label_479f00;
        case 0x479f04u: goto label_479f04;
        case 0x479f08u: goto label_479f08;
        case 0x479f0cu: goto label_479f0c;
        case 0x479f10u: goto label_479f10;
        case 0x479f14u: goto label_479f14;
        case 0x479f18u: goto label_479f18;
        case 0x479f1cu: goto label_479f1c;
        case 0x479f20u: goto label_479f20;
        case 0x479f24u: goto label_479f24;
        case 0x479f28u: goto label_479f28;
        case 0x479f2cu: goto label_479f2c;
        case 0x479f30u: goto label_479f30;
        case 0x479f34u: goto label_479f34;
        case 0x479f38u: goto label_479f38;
        case 0x479f3cu: goto label_479f3c;
        case 0x479f40u: goto label_479f40;
        case 0x479f44u: goto label_479f44;
        case 0x479f48u: goto label_479f48;
        case 0x479f4cu: goto label_479f4c;
        case 0x479f50u: goto label_479f50;
        case 0x479f54u: goto label_479f54;
        case 0x479f58u: goto label_479f58;
        case 0x479f5cu: goto label_479f5c;
        case 0x479f60u: goto label_479f60;
        case 0x479f64u: goto label_479f64;
        case 0x479f68u: goto label_479f68;
        case 0x479f6cu: goto label_479f6c;
        case 0x479f70u: goto label_479f70;
        case 0x479f74u: goto label_479f74;
        case 0x479f78u: goto label_479f78;
        case 0x479f7cu: goto label_479f7c;
        case 0x479f80u: goto label_479f80;
        case 0x479f84u: goto label_479f84;
        case 0x479f88u: goto label_479f88;
        case 0x479f8cu: goto label_479f8c;
        case 0x479f90u: goto label_479f90;
        case 0x479f94u: goto label_479f94;
        case 0x479f98u: goto label_479f98;
        case 0x479f9cu: goto label_479f9c;
        case 0x479fa0u: goto label_479fa0;
        case 0x479fa4u: goto label_479fa4;
        case 0x479fa8u: goto label_479fa8;
        case 0x479facu: goto label_479fac;
        case 0x479fb0u: goto label_479fb0;
        case 0x479fb4u: goto label_479fb4;
        case 0x479fb8u: goto label_479fb8;
        case 0x479fbcu: goto label_479fbc;
        case 0x479fc0u: goto label_479fc0;
        case 0x479fc4u: goto label_479fc4;
        case 0x479fc8u: goto label_479fc8;
        case 0x479fccu: goto label_479fcc;
        case 0x479fd0u: goto label_479fd0;
        case 0x479fd4u: goto label_479fd4;
        case 0x479fd8u: goto label_479fd8;
        case 0x479fdcu: goto label_479fdc;
        case 0x479fe0u: goto label_479fe0;
        case 0x479fe4u: goto label_479fe4;
        case 0x479fe8u: goto label_479fe8;
        case 0x479fecu: goto label_479fec;
        case 0x479ff0u: goto label_479ff0;
        case 0x479ff4u: goto label_479ff4;
        case 0x479ff8u: goto label_479ff8;
        case 0x479ffcu: goto label_479ffc;
        case 0x47a000u: goto label_47a000;
        case 0x47a004u: goto label_47a004;
        case 0x47a008u: goto label_47a008;
        case 0x47a00cu: goto label_47a00c;
        case 0x47a010u: goto label_47a010;
        case 0x47a014u: goto label_47a014;
        case 0x47a018u: goto label_47a018;
        case 0x47a01cu: goto label_47a01c;
        case 0x47a020u: goto label_47a020;
        case 0x47a024u: goto label_47a024;
        case 0x47a028u: goto label_47a028;
        case 0x47a02cu: goto label_47a02c;
        case 0x47a030u: goto label_47a030;
        case 0x47a034u: goto label_47a034;
        case 0x47a038u: goto label_47a038;
        case 0x47a03cu: goto label_47a03c;
        case 0x47a040u: goto label_47a040;
        case 0x47a044u: goto label_47a044;
        case 0x47a048u: goto label_47a048;
        case 0x47a04cu: goto label_47a04c;
        case 0x47a050u: goto label_47a050;
        case 0x47a054u: goto label_47a054;
        case 0x47a058u: goto label_47a058;
        case 0x47a05cu: goto label_47a05c;
        case 0x47a060u: goto label_47a060;
        case 0x47a064u: goto label_47a064;
        case 0x47a068u: goto label_47a068;
        case 0x47a06cu: goto label_47a06c;
        case 0x47a070u: goto label_47a070;
        case 0x47a074u: goto label_47a074;
        case 0x47a078u: goto label_47a078;
        case 0x47a07cu: goto label_47a07c;
        case 0x47a080u: goto label_47a080;
        case 0x47a084u: goto label_47a084;
        case 0x47a088u: goto label_47a088;
        case 0x47a08cu: goto label_47a08c;
        case 0x47a090u: goto label_47a090;
        case 0x47a094u: goto label_47a094;
        case 0x47a098u: goto label_47a098;
        case 0x47a09cu: goto label_47a09c;
        case 0x47a0a0u: goto label_47a0a0;
        case 0x47a0a4u: goto label_47a0a4;
        case 0x47a0a8u: goto label_47a0a8;
        case 0x47a0acu: goto label_47a0ac;
        case 0x47a0b0u: goto label_47a0b0;
        case 0x47a0b4u: goto label_47a0b4;
        case 0x47a0b8u: goto label_47a0b8;
        case 0x47a0bcu: goto label_47a0bc;
        case 0x47a0c0u: goto label_47a0c0;
        case 0x47a0c4u: goto label_47a0c4;
        case 0x47a0c8u: goto label_47a0c8;
        case 0x47a0ccu: goto label_47a0cc;
        case 0x47a0d0u: goto label_47a0d0;
        case 0x47a0d4u: goto label_47a0d4;
        case 0x47a0d8u: goto label_47a0d8;
        case 0x47a0dcu: goto label_47a0dc;
        default: break;
    }

    ctx->pc = 0x479ec0u;

label_479ec0:
    // 0x479ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x479ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_479ec4:
    // 0x479ec4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x479ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_479ec8:
    // 0x479ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x479ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_479ecc:
    // 0x479ecc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x479eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_479ed0:
    // 0x479ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_479ed4:
    // 0x479ed4: 0x34430006  ori         $v1, $v0, 0x6
    ctx->pc = 0x479ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_479ed8:
    // 0x479ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_479edc:
    // 0x479edc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x479edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_479ee0:
    // 0x479ee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x479ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_479ee4:
    // 0x479ee4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x479ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_479ee8:
    // 0x479ee8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_479eec:
    if (ctx->pc == 0x479EECu) {
        ctx->pc = 0x479EECu;
            // 0x479eec: 0x30660007  andi        $a2, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x479EF0u;
        goto label_479ef0;
    }
    ctx->pc = 0x479EE8u;
    {
        const bool branch_taken_0x479ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479EE8u;
            // 0x479eec: 0x30660007  andi        $a2, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479ee8) {
            ctx->pc = 0x479EF8u;
            goto label_479ef8;
        }
    }
    ctx->pc = 0x479EF0u;
label_479ef0:
    // 0x479ef0: 0x10000002  b           . + 4 + (0x2 << 2)
label_479ef4:
    if (ctx->pc == 0x479EF4u) {
        ctx->pc = 0x479EF4u;
            // 0x479ef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x479EF8u;
        goto label_479ef8;
    }
    ctx->pc = 0x479EF0u;
    {
        const bool branch_taken_0x479ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479EF0u;
            // 0x479ef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479ef0) {
            ctx->pc = 0x479EFCu;
            goto label_479efc;
        }
    }
    ctx->pc = 0x479EF8u;
label_479ef8:
    // 0x479ef8: 0x30670004  andi        $a3, $v1, 0x4
    ctx->pc = 0x479ef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_479efc:
    // 0x479efc: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x479efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_479f00:
    // 0x479f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x479f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_479f04:
    // 0x479f04: 0xc10ca68  jal         func_4329A0
label_479f08:
    if (ctx->pc == 0x479F08u) {
        ctx->pc = 0x479F08u;
            // 0x479f08: 0x3445af50  ori         $a1, $v0, 0xAF50 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44880);
        ctx->pc = 0x479F0Cu;
        goto label_479f0c;
    }
    ctx->pc = 0x479F04u;
    SET_GPR_U32(ctx, 31, 0x479F0Cu);
    ctx->pc = 0x479F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479F04u;
            // 0x479f08: 0x3445af50  ori         $a1, $v0, 0xAF50 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44880);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479F0Cu; }
        if (ctx->pc != 0x479F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479F0Cu; }
        if (ctx->pc != 0x479F0Cu) { return; }
    }
    ctx->pc = 0x479F0Cu;
label_479f0c:
    // 0x479f0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x479f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_479f10:
    // 0x479f10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x479f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_479f14:
    // 0x479f14: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x479f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_479f18:
    // 0x479f18: 0x2442ebd0  addiu       $v0, $v0, -0x1430
    ctx->pc = 0x479f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
label_479f1c:
    // 0x479f1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x479f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_479f20:
    // 0x479f20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x479f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_479f24:
    // 0x479f24: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x479f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_479f28:
    // 0x479f28: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x479f28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_479f2c:
    // 0x479f2c: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x479f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_479f30:
    // 0x479f30: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x479f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_479f34:
    // 0x479f34: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x479f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_479f38:
    // 0x479f38: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x479f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_479f3c:
    // 0x479f3c: 0x320f809  jalr        $t9
label_479f40:
    if (ctx->pc == 0x479F40u) {
        ctx->pc = 0x479F40u;
            // 0x479f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x479F44u;
        goto label_479f44;
    }
    ctx->pc = 0x479F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x479F44u);
        ctx->pc = 0x479F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479F3Cu;
            // 0x479f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x479F44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x479F44u; }
            if (ctx->pc != 0x479F44u) { return; }
        }
        }
    }
    ctx->pc = 0x479F44u;
label_479f44:
    // 0x479f44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x479f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_479f48:
    // 0x479f48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x479f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_479f4c:
    // 0x479f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x479f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_479f50:
    // 0x479f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_479f54:
    // 0x479f54: 0x3e00008  jr          $ra
label_479f58:
    if (ctx->pc == 0x479F58u) {
        ctx->pc = 0x479F58u;
            // 0x479f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x479F5Cu;
        goto label_479f5c;
    }
    ctx->pc = 0x479F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x479F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479F54u;
            // 0x479f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x479F5Cu;
label_479f5c:
    // 0x479f5c: 0x0  nop
    ctx->pc = 0x479f5cu;
    // NOP
label_479f60:
    // 0x479f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x479f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_479f64:
    // 0x479f64: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x479f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_479f68:
    // 0x479f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x479f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_479f6c:
    // 0x479f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_479f70:
    // 0x479f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x479f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_479f74:
    // 0x479f74: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x479f74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_479f78:
    // 0x479f78: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_479f7c:
    if (ctx->pc == 0x479F7Cu) {
        ctx->pc = 0x479F80u;
        goto label_479f80;
    }
    ctx->pc = 0x479F78u;
    {
        const bool branch_taken_0x479f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x479f78) {
            ctx->pc = 0x479FE0u;
            goto label_479fe0;
        }
    }
    ctx->pc = 0x479F80u;
label_479f80:
    // 0x479f80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x479f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_479f84:
    // 0x479f84: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_479f88:
    if (ctx->pc == 0x479F88u) {
        ctx->pc = 0x479F8Cu;
        goto label_479f8c;
    }
    ctx->pc = 0x479F84u;
    {
        const bool branch_taken_0x479f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x479f84) {
            ctx->pc = 0x479FE0u;
            goto label_479fe0;
        }
    }
    ctx->pc = 0x479F8Cu;
label_479f8c:
    // 0x479f8c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x479f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_479f90:
    // 0x479f90: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_479f94:
    if (ctx->pc == 0x479F94u) {
        ctx->pc = 0x479F94u;
            // 0x479f94: 0x8e030064  lw          $v1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->pc = 0x479F98u;
        goto label_479f98;
    }
    ctx->pc = 0x479F90u;
    {
        const bool branch_taken_0x479f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x479f90) {
            ctx->pc = 0x479F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479F90u;
            // 0x479f94: 0x8e030064  lw          $v1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479FB0u;
            goto label_479fb0;
        }
    }
    ctx->pc = 0x479F98u;
label_479f98:
    // 0x479f98: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x479f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_479f9c:
    // 0x479f9c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_479fa0:
    if (ctx->pc == 0x479FA0u) {
        ctx->pc = 0x479FA4u;
        goto label_479fa4;
    }
    ctx->pc = 0x479F9Cu;
    {
        const bool branch_taken_0x479f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x479f9c) {
            ctx->pc = 0x479FACu;
            goto label_479fac;
        }
    }
    ctx->pc = 0x479FA4u;
label_479fa4:
    // 0x479fa4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_479fa8:
    if (ctx->pc == 0x479FA8u) {
        ctx->pc = 0x479FA8u;
            // 0x479fa8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x479FACu;
        goto label_479fac;
    }
    ctx->pc = 0x479FA4u;
    {
        const bool branch_taken_0x479fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479FA4u;
            // 0x479fa8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479fa4) {
            ctx->pc = 0x47A0D4u;
            goto label_47a0d4;
        }
    }
    ctx->pc = 0x479FACu;
label_479fac:
    // 0x479fac: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x479facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_479fb0:
    // 0x479fb0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x479fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_479fb4:
    // 0x479fb4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_479fb8:
    if (ctx->pc == 0x479FB8u) {
        ctx->pc = 0x479FBCu;
        goto label_479fbc;
    }
    ctx->pc = 0x479FB4u;
    {
        const bool branch_taken_0x479fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479fb4) {
            ctx->pc = 0x479FE0u;
            goto label_479fe0;
        }
    }
    ctx->pc = 0x479FBCu;
label_479fbc:
    // 0x479fbc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x479fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_479fc0:
    // 0x479fc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_479fc4:
    if (ctx->pc == 0x479FC4u) {
        ctx->pc = 0x479FC8u;
        goto label_479fc8;
    }
    ctx->pc = 0x479FC0u;
    {
        const bool branch_taken_0x479fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479fc0) {
            ctx->pc = 0x479FE0u;
            goto label_479fe0;
        }
    }
    ctx->pc = 0x479FC8u;
label_479fc8:
    // 0x479fc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x479fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_479fcc:
    // 0x479fcc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x479fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_479fd0:
    // 0x479fd0: 0xc0506ac  jal         func_141AB0
label_479fd4:
    if (ctx->pc == 0x479FD4u) {
        ctx->pc = 0x479FD4u;
            // 0x479fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x479FD8u;
        goto label_479fd8;
    }
    ctx->pc = 0x479FD0u;
    SET_GPR_U32(ctx, 31, 0x479FD8u);
    ctx->pc = 0x479FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479FD0u;
            // 0x479fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479FD8u; }
        if (ctx->pc != 0x479FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479FD8u; }
        if (ctx->pc != 0x479FD8u) { return; }
    }
    ctx->pc = 0x479FD8u;
label_479fd8:
    // 0x479fd8: 0xc11e838  jal         func_47A0E0
label_479fdc:
    if (ctx->pc == 0x479FDCu) {
        ctx->pc = 0x479FDCu;
            // 0x479fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x479FE0u;
        goto label_479fe0;
    }
    ctx->pc = 0x479FD8u;
    SET_GPR_U32(ctx, 31, 0x479FE0u);
    ctx->pc = 0x479FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479FD8u;
            // 0x479fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47A0E0u;
    if (runtime->hasFunction(0x47A0E0u)) {
        auto targetFn = runtime->lookupFunction(0x47A0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479FE0u; }
        if (ctx->pc != 0x479FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047A0E0_0x47a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479FE0u; }
        if (ctx->pc != 0x479FE0u) { return; }
    }
    ctx->pc = 0x479FE0u;
label_479fe0:
    // 0x479fe0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x479fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_479fe4:
    // 0x479fe4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x479fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_479fe8:
    // 0x479fe8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x479fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_479fec:
    // 0x479fec: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x479fecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_479ff0:
    // 0x479ff0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_479ff4:
    if (ctx->pc == 0x479FF4u) {
        ctx->pc = 0x479FF8u;
        goto label_479ff8;
    }
    ctx->pc = 0x479FF0u;
    {
        const bool branch_taken_0x479ff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x479ff0) {
            ctx->pc = 0x47A014u;
            goto label_47a014;
        }
    }
    ctx->pc = 0x479FF8u;
label_479ff8:
    // 0x479ff8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x479ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_479ffc:
    // 0x479ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x479ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47a000:
    // 0x47a000: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47a000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47a004:
    // 0x47a004: 0x320f809  jalr        $t9
label_47a008:
    if (ctx->pc == 0x47A008u) {
        ctx->pc = 0x47A008u;
            // 0x47a008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A00Cu;
        goto label_47a00c;
    }
    ctx->pc = 0x47A004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A00Cu);
        ctx->pc = 0x47A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A004u;
            // 0x47a008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A00Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A00Cu; }
            if (ctx->pc != 0x47A00Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47A00Cu;
label_47a00c:
    // 0x47a00c: 0x10000030  b           . + 4 + (0x30 << 2)
label_47a010:
    if (ctx->pc == 0x47A010u) {
        ctx->pc = 0x47A014u;
        goto label_47a014;
    }
    ctx->pc = 0x47A00Cu;
    {
        const bool branch_taken_0x47a00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a00c) {
            ctx->pc = 0x47A0D0u;
            goto label_47a0d0;
        }
    }
    ctx->pc = 0x47A014u;
label_47a014:
    // 0x47a014: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47a014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47a018:
    // 0x47a018: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x47a018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_47a01c:
    // 0x47a01c: 0xc0506ac  jal         func_141AB0
label_47a020:
    if (ctx->pc == 0x47A020u) {
        ctx->pc = 0x47A020u;
            // 0x47a020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A024u;
        goto label_47a024;
    }
    ctx->pc = 0x47A01Cu;
    SET_GPR_U32(ctx, 31, 0x47A024u);
    ctx->pc = 0x47A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A01Cu;
            // 0x47a020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A024u; }
        if (ctx->pc != 0x47A024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A024u; }
        if (ctx->pc != 0x47A024u) { return; }
    }
    ctx->pc = 0x47A024u;
label_47a024:
    // 0x47a024: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47a024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47a028:
    // 0x47a028: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x47a028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_47a02c:
    // 0x47a02c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47a02cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47a030:
    // 0x47a030: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x47a030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_47a034:
    // 0x47a034: 0x320f809  jalr        $t9
label_47a038:
    if (ctx->pc == 0x47A038u) {
        ctx->pc = 0x47A038u;
            // 0x47a038: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x47A03Cu;
        goto label_47a03c;
    }
    ctx->pc = 0x47A034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A03Cu);
        ctx->pc = 0x47A038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A034u;
            // 0x47a038: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A03Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A03Cu; }
            if (ctx->pc != 0x47A03Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47A03Cu;
label_47a03c:
    // 0x47a03c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x47a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_47a040:
    // 0x47a040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x47a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_47a044:
    // 0x47a044: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_47a048:
    if (ctx->pc == 0x47A048u) {
        ctx->pc = 0x47A048u;
            // 0x47a048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A04Cu;
        goto label_47a04c;
    }
    ctx->pc = 0x47A044u;
    {
        const bool branch_taken_0x47a044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a044) {
            ctx->pc = 0x47A048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A044u;
            // 0x47a048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47A058u;
            goto label_47a058;
        }
    }
    ctx->pc = 0x47A04Cu;
label_47a04c:
    // 0x47a04c: 0xc110754  jal         func_441D50
label_47a050:
    if (ctx->pc == 0x47A050u) {
        ctx->pc = 0x47A050u;
            // 0x47a050: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->pc = 0x47A054u;
        goto label_47a054;
    }
    ctx->pc = 0x47A04Cu;
    SET_GPR_U32(ctx, 31, 0x47A054u);
    ctx->pc = 0x47A050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A04Cu;
            // 0x47a050: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A054u; }
        if (ctx->pc != 0x47A054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A054u; }
        if (ctx->pc != 0x47A054u) { return; }
    }
    ctx->pc = 0x47A054u;
label_47a054:
    // 0x47a054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47a054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47a058:
    // 0x47a058: 0xc11e8b8  jal         func_47A2E0
label_47a05c:
    if (ctx->pc == 0x47A05Cu) {
        ctx->pc = 0x47A060u;
        goto label_47a060;
    }
    ctx->pc = 0x47A058u;
    SET_GPR_U32(ctx, 31, 0x47A060u);
    ctx->pc = 0x47A2E0u;
    if (runtime->hasFunction(0x47A2E0u)) {
        auto targetFn = runtime->lookupFunction(0x47A2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A060u; }
        if (ctx->pc != 0x47A060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047A2E0_0x47a2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A060u; }
        if (ctx->pc != 0x47A060u) { return; }
    }
    ctx->pc = 0x47A060u;
label_47a060:
    // 0x47a060: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47a060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47a064:
    // 0x47a064: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x47a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_47a068:
    // 0x47a068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47a068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47a06c:
    // 0x47a06c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x47a06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_47a070:
    // 0x47a070: 0x320f809  jalr        $t9
label_47a074:
    if (ctx->pc == 0x47A074u) {
        ctx->pc = 0x47A078u;
        goto label_47a078;
    }
    ctx->pc = 0x47A070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A078u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A078u; }
            if (ctx->pc != 0x47A078u) { return; }
        }
        }
    }
    ctx->pc = 0x47A078u;
label_47a078:
    // 0x47a078: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x47a078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_47a07c:
    // 0x47a07c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x47a07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_47a080:
    // 0x47a080: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_47a084:
    if (ctx->pc == 0x47A084u) {
        ctx->pc = 0x47A088u;
        goto label_47a088;
    }
    ctx->pc = 0x47A080u;
    {
        const bool branch_taken_0x47a080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a080) {
            ctx->pc = 0x47A0D0u;
            goto label_47a0d0;
        }
    }
    ctx->pc = 0x47A088u;
label_47a088:
    // 0x47a088: 0xc05068c  jal         func_141A30
label_47a08c:
    if (ctx->pc == 0x47A08Cu) {
        ctx->pc = 0x47A08Cu;
            // 0x47a08c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A090u;
        goto label_47a090;
    }
    ctx->pc = 0x47A088u;
    SET_GPR_U32(ctx, 31, 0x47A090u);
    ctx->pc = 0x47A08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A088u;
            // 0x47a08c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A090u; }
        if (ctx->pc != 0x47A090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A090u; }
        if (ctx->pc != 0x47A090u) { return; }
    }
    ctx->pc = 0x47A090u;
label_47a090:
    // 0x47a090: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47a090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47a094:
    // 0x47a094: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x47a094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_47a098:
    // 0x47a098: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47a098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47a09c:
    // 0x47a09c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x47a09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_47a0a0:
    // 0x47a0a0: 0x320f809  jalr        $t9
label_47a0a4:
    if (ctx->pc == 0x47A0A4u) {
        ctx->pc = 0x47A0A4u;
            // 0x47a0a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x47A0A8u;
        goto label_47a0a8;
    }
    ctx->pc = 0x47A0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A0A8u);
        ctx->pc = 0x47A0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A0A0u;
            // 0x47a0a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A0A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A0A8u; }
            if (ctx->pc != 0x47A0A8u) { return; }
        }
        }
    }
    ctx->pc = 0x47A0A8u;
label_47a0a8:
    // 0x47a0a8: 0xc110754  jal         func_441D50
label_47a0ac:
    if (ctx->pc == 0x47A0ACu) {
        ctx->pc = 0x47A0ACu;
            // 0x47a0ac: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->pc = 0x47A0B0u;
        goto label_47a0b0;
    }
    ctx->pc = 0x47A0A8u;
    SET_GPR_U32(ctx, 31, 0x47A0B0u);
    ctx->pc = 0x47A0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A0A8u;
            // 0x47a0ac: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A0B0u; }
        if (ctx->pc != 0x47A0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A0B0u; }
        if (ctx->pc != 0x47A0B0u) { return; }
    }
    ctx->pc = 0x47A0B0u;
label_47a0b0:
    // 0x47a0b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47a0b4:
    // 0x47a0b4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x47a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_47a0b8:
    // 0x47a0b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47a0b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47a0bc:
    // 0x47a0bc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x47a0bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_47a0c0:
    // 0x47a0c0: 0x320f809  jalr        $t9
label_47a0c4:
    if (ctx->pc == 0x47A0C4u) {
        ctx->pc = 0x47A0C8u;
        goto label_47a0c8;
    }
    ctx->pc = 0x47A0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A0C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A0C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A0C8u; }
            if (ctx->pc != 0x47A0C8u) { return; }
        }
        }
    }
    ctx->pc = 0x47A0C8u;
label_47a0c8:
    // 0x47a0c8: 0xc05068c  jal         func_141A30
label_47a0cc:
    if (ctx->pc == 0x47A0CCu) {
        ctx->pc = 0x47A0CCu;
            // 0x47a0cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47A0D0u;
        goto label_47a0d0;
    }
    ctx->pc = 0x47A0C8u;
    SET_GPR_U32(ctx, 31, 0x47A0D0u);
    ctx->pc = 0x47A0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A0C8u;
            // 0x47a0cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A0D0u; }
        if (ctx->pc != 0x47A0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A0D0u; }
        if (ctx->pc != 0x47A0D0u) { return; }
    }
    ctx->pc = 0x47A0D0u;
label_47a0d0:
    // 0x47a0d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47a0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47a0d4:
    // 0x47a0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47a0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47a0d8:
    // 0x47a0d8: 0x3e00008  jr          $ra
label_47a0dc:
    if (ctx->pc == 0x47A0DCu) {
        ctx->pc = 0x47A0DCu;
            // 0x47a0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x47A0E0u;
        goto label_fallthrough_0x47a0d8;
    }
    ctx->pc = 0x47A0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A0D8u;
            // 0x47a0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x47a0d8:
    ctx->pc = 0x47A0E0u;
}
