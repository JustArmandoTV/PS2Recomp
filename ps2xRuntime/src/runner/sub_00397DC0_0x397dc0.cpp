#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397DC0
// Address: 0x397dc0 - 0x3980c0
void sub_00397DC0_0x397dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397DC0_0x397dc0");
#endif

    switch (ctx->pc) {
        case 0x397dc0u: goto label_397dc0;
        case 0x397dc4u: goto label_397dc4;
        case 0x397dc8u: goto label_397dc8;
        case 0x397dccu: goto label_397dcc;
        case 0x397dd0u: goto label_397dd0;
        case 0x397dd4u: goto label_397dd4;
        case 0x397dd8u: goto label_397dd8;
        case 0x397ddcu: goto label_397ddc;
        case 0x397de0u: goto label_397de0;
        case 0x397de4u: goto label_397de4;
        case 0x397de8u: goto label_397de8;
        case 0x397decu: goto label_397dec;
        case 0x397df0u: goto label_397df0;
        case 0x397df4u: goto label_397df4;
        case 0x397df8u: goto label_397df8;
        case 0x397dfcu: goto label_397dfc;
        case 0x397e00u: goto label_397e00;
        case 0x397e04u: goto label_397e04;
        case 0x397e08u: goto label_397e08;
        case 0x397e0cu: goto label_397e0c;
        case 0x397e10u: goto label_397e10;
        case 0x397e14u: goto label_397e14;
        case 0x397e18u: goto label_397e18;
        case 0x397e1cu: goto label_397e1c;
        case 0x397e20u: goto label_397e20;
        case 0x397e24u: goto label_397e24;
        case 0x397e28u: goto label_397e28;
        case 0x397e2cu: goto label_397e2c;
        case 0x397e30u: goto label_397e30;
        case 0x397e34u: goto label_397e34;
        case 0x397e38u: goto label_397e38;
        case 0x397e3cu: goto label_397e3c;
        case 0x397e40u: goto label_397e40;
        case 0x397e44u: goto label_397e44;
        case 0x397e48u: goto label_397e48;
        case 0x397e4cu: goto label_397e4c;
        case 0x397e50u: goto label_397e50;
        case 0x397e54u: goto label_397e54;
        case 0x397e58u: goto label_397e58;
        case 0x397e5cu: goto label_397e5c;
        case 0x397e60u: goto label_397e60;
        case 0x397e64u: goto label_397e64;
        case 0x397e68u: goto label_397e68;
        case 0x397e6cu: goto label_397e6c;
        case 0x397e70u: goto label_397e70;
        case 0x397e74u: goto label_397e74;
        case 0x397e78u: goto label_397e78;
        case 0x397e7cu: goto label_397e7c;
        case 0x397e80u: goto label_397e80;
        case 0x397e84u: goto label_397e84;
        case 0x397e88u: goto label_397e88;
        case 0x397e8cu: goto label_397e8c;
        case 0x397e90u: goto label_397e90;
        case 0x397e94u: goto label_397e94;
        case 0x397e98u: goto label_397e98;
        case 0x397e9cu: goto label_397e9c;
        case 0x397ea0u: goto label_397ea0;
        case 0x397ea4u: goto label_397ea4;
        case 0x397ea8u: goto label_397ea8;
        case 0x397eacu: goto label_397eac;
        case 0x397eb0u: goto label_397eb0;
        case 0x397eb4u: goto label_397eb4;
        case 0x397eb8u: goto label_397eb8;
        case 0x397ebcu: goto label_397ebc;
        case 0x397ec0u: goto label_397ec0;
        case 0x397ec4u: goto label_397ec4;
        case 0x397ec8u: goto label_397ec8;
        case 0x397eccu: goto label_397ecc;
        case 0x397ed0u: goto label_397ed0;
        case 0x397ed4u: goto label_397ed4;
        case 0x397ed8u: goto label_397ed8;
        case 0x397edcu: goto label_397edc;
        case 0x397ee0u: goto label_397ee0;
        case 0x397ee4u: goto label_397ee4;
        case 0x397ee8u: goto label_397ee8;
        case 0x397eecu: goto label_397eec;
        case 0x397ef0u: goto label_397ef0;
        case 0x397ef4u: goto label_397ef4;
        case 0x397ef8u: goto label_397ef8;
        case 0x397efcu: goto label_397efc;
        case 0x397f00u: goto label_397f00;
        case 0x397f04u: goto label_397f04;
        case 0x397f08u: goto label_397f08;
        case 0x397f0cu: goto label_397f0c;
        case 0x397f10u: goto label_397f10;
        case 0x397f14u: goto label_397f14;
        case 0x397f18u: goto label_397f18;
        case 0x397f1cu: goto label_397f1c;
        case 0x397f20u: goto label_397f20;
        case 0x397f24u: goto label_397f24;
        case 0x397f28u: goto label_397f28;
        case 0x397f2cu: goto label_397f2c;
        case 0x397f30u: goto label_397f30;
        case 0x397f34u: goto label_397f34;
        case 0x397f38u: goto label_397f38;
        case 0x397f3cu: goto label_397f3c;
        case 0x397f40u: goto label_397f40;
        case 0x397f44u: goto label_397f44;
        case 0x397f48u: goto label_397f48;
        case 0x397f4cu: goto label_397f4c;
        case 0x397f50u: goto label_397f50;
        case 0x397f54u: goto label_397f54;
        case 0x397f58u: goto label_397f58;
        case 0x397f5cu: goto label_397f5c;
        case 0x397f60u: goto label_397f60;
        case 0x397f64u: goto label_397f64;
        case 0x397f68u: goto label_397f68;
        case 0x397f6cu: goto label_397f6c;
        case 0x397f70u: goto label_397f70;
        case 0x397f74u: goto label_397f74;
        case 0x397f78u: goto label_397f78;
        case 0x397f7cu: goto label_397f7c;
        case 0x397f80u: goto label_397f80;
        case 0x397f84u: goto label_397f84;
        case 0x397f88u: goto label_397f88;
        case 0x397f8cu: goto label_397f8c;
        case 0x397f90u: goto label_397f90;
        case 0x397f94u: goto label_397f94;
        case 0x397f98u: goto label_397f98;
        case 0x397f9cu: goto label_397f9c;
        case 0x397fa0u: goto label_397fa0;
        case 0x397fa4u: goto label_397fa4;
        case 0x397fa8u: goto label_397fa8;
        case 0x397facu: goto label_397fac;
        case 0x397fb0u: goto label_397fb0;
        case 0x397fb4u: goto label_397fb4;
        case 0x397fb8u: goto label_397fb8;
        case 0x397fbcu: goto label_397fbc;
        case 0x397fc0u: goto label_397fc0;
        case 0x397fc4u: goto label_397fc4;
        case 0x397fc8u: goto label_397fc8;
        case 0x397fccu: goto label_397fcc;
        case 0x397fd0u: goto label_397fd0;
        case 0x397fd4u: goto label_397fd4;
        case 0x397fd8u: goto label_397fd8;
        case 0x397fdcu: goto label_397fdc;
        case 0x397fe0u: goto label_397fe0;
        case 0x397fe4u: goto label_397fe4;
        case 0x397fe8u: goto label_397fe8;
        case 0x397fecu: goto label_397fec;
        case 0x397ff0u: goto label_397ff0;
        case 0x397ff4u: goto label_397ff4;
        case 0x397ff8u: goto label_397ff8;
        case 0x397ffcu: goto label_397ffc;
        case 0x398000u: goto label_398000;
        case 0x398004u: goto label_398004;
        case 0x398008u: goto label_398008;
        case 0x39800cu: goto label_39800c;
        case 0x398010u: goto label_398010;
        case 0x398014u: goto label_398014;
        case 0x398018u: goto label_398018;
        case 0x39801cu: goto label_39801c;
        case 0x398020u: goto label_398020;
        case 0x398024u: goto label_398024;
        case 0x398028u: goto label_398028;
        case 0x39802cu: goto label_39802c;
        case 0x398030u: goto label_398030;
        case 0x398034u: goto label_398034;
        case 0x398038u: goto label_398038;
        case 0x39803cu: goto label_39803c;
        case 0x398040u: goto label_398040;
        case 0x398044u: goto label_398044;
        case 0x398048u: goto label_398048;
        case 0x39804cu: goto label_39804c;
        case 0x398050u: goto label_398050;
        case 0x398054u: goto label_398054;
        case 0x398058u: goto label_398058;
        case 0x39805cu: goto label_39805c;
        case 0x398060u: goto label_398060;
        case 0x398064u: goto label_398064;
        case 0x398068u: goto label_398068;
        case 0x39806cu: goto label_39806c;
        case 0x398070u: goto label_398070;
        case 0x398074u: goto label_398074;
        case 0x398078u: goto label_398078;
        case 0x39807cu: goto label_39807c;
        case 0x398080u: goto label_398080;
        case 0x398084u: goto label_398084;
        case 0x398088u: goto label_398088;
        case 0x39808cu: goto label_39808c;
        case 0x398090u: goto label_398090;
        case 0x398094u: goto label_398094;
        case 0x398098u: goto label_398098;
        case 0x39809cu: goto label_39809c;
        case 0x3980a0u: goto label_3980a0;
        case 0x3980a4u: goto label_3980a4;
        case 0x3980a8u: goto label_3980a8;
        case 0x3980acu: goto label_3980ac;
        case 0x3980b0u: goto label_3980b0;
        case 0x3980b4u: goto label_3980b4;
        case 0x3980b8u: goto label_3980b8;
        case 0x3980bcu: goto label_3980bc;
        default: break;
    }

    ctx->pc = 0x397dc0u;

label_397dc0:
    // 0x397dc0: 0x3e00008  jr          $ra
label_397dc4:
    if (ctx->pc == 0x397DC4u) {
        ctx->pc = 0x397DC4u;
            // 0x397dc4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x397DC8u;
        goto label_397dc8;
    }
    ctx->pc = 0x397DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397DC0u;
            // 0x397dc4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397DC8u;
label_397dc8:
    // 0x397dc8: 0x0  nop
    ctx->pc = 0x397dc8u;
    // NOP
label_397dcc:
    // 0x397dcc: 0x0  nop
    ctx->pc = 0x397dccu;
    // NOP
label_397dd0:
    // 0x397dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x397dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_397dd4:
    // 0x397dd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x397dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_397dd8:
    // 0x397dd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x397dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_397ddc:
    // 0x397ddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x397ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_397de0:
    // 0x397de0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x397de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_397de4:
    // 0x397de4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x397de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_397de8:
    // 0x397de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x397de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_397dec:
    // 0x397dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x397decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_397df0:
    // 0x397df0: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x397df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_397df4:
    // 0x397df4: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
label_397df8:
    if (ctx->pc == 0x397DF8u) {
        ctx->pc = 0x397DF8u;
            // 0x397df8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x397DFCu;
        goto label_397dfc;
    }
    ctx->pc = 0x397DF4u;
    {
        const bool branch_taken_0x397df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397DF4u;
            // 0x397df8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397df4) {
            ctx->pc = 0x397FD0u;
            goto label_397fd0;
        }
    }
    ctx->pc = 0x397DFCu;
label_397dfc:
    // 0x397dfc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x397dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_397e00:
    // 0x397e00: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x397e00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_397e04:
    // 0x397e04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x397e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_397e08:
    // 0x397e08: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x397e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_397e0c:
    // 0x397e0c: 0x320f809  jalr        $t9
label_397e10:
    if (ctx->pc == 0x397E10u) {
        ctx->pc = 0x397E10u;
            // 0x397e10: 0x26920084  addiu       $s2, $s4, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
        ctx->pc = 0x397E14u;
        goto label_397e14;
    }
    ctx->pc = 0x397E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x397E14u);
        ctx->pc = 0x397E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397E0Cu;
            // 0x397e10: 0x26920084  addiu       $s2, $s4, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x397E14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x397E14u; }
            if (ctx->pc != 0x397E14u) { return; }
        }
        }
    }
    ctx->pc = 0x397E14u;
label_397e14:
    // 0x397e14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x397e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397e18:
    // 0x397e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x397e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_397e1c:
    // 0x397e1c: 0xc075128  jal         func_1D44A0
label_397e20:
    if (ctx->pc == 0x397E20u) {
        ctx->pc = 0x397E20u;
            // 0x397e20: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x397E24u;
        goto label_397e24;
    }
    ctx->pc = 0x397E1Cu;
    SET_GPR_U32(ctx, 31, 0x397E24u);
    ctx->pc = 0x397E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397E1Cu;
            // 0x397e20: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397E24u; }
        if (ctx->pc != 0x397E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397E24u; }
        if (ctx->pc != 0x397E24u) { return; }
    }
    ctx->pc = 0x397E24u;
label_397e24:
    // 0x397e24: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x397e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_397e28:
    // 0x397e28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397e2c:
    // 0x397e2c: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x397e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_397e30:
    // 0x397e30: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x397e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_397e34:
    // 0x397e34: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x397e34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397e38:
    // 0x397e38: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_397e3c:
    if (ctx->pc == 0x397E3Cu) {
        ctx->pc = 0x397E3Cu;
            // 0x397e3c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x397E40u;
        goto label_397e40;
    }
    ctx->pc = 0x397E38u;
    {
        const bool branch_taken_0x397e38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397e38) {
            ctx->pc = 0x397E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397E38u;
            // 0x397e3c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397E4Cu;
            goto label_397e4c;
        }
    }
    ctx->pc = 0x397E40u;
label_397e40:
    // 0x397e40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397e44:
    // 0x397e44: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x397e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_397e48:
    // 0x397e48: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x397e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_397e4c:
    // 0x397e4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397e50:
    // 0x397e50: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x397e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_397e54:
    // 0x397e54: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x397e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_397e58:
    // 0x397e58: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x397e58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397e5c:
    // 0x397e5c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_397e60:
    if (ctx->pc == 0x397E60u) {
        ctx->pc = 0x397E60u;
            // 0x397e60: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x397E64u;
        goto label_397e64;
    }
    ctx->pc = 0x397E5Cu;
    {
        const bool branch_taken_0x397e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397e5c) {
            ctx->pc = 0x397E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397E5Cu;
            // 0x397e60: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397E70u;
            goto label_397e70;
        }
    }
    ctx->pc = 0x397E64u;
label_397e64:
    // 0x397e64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397e68:
    // 0x397e68: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x397e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_397e6c:
    // 0x397e6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x397e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_397e70:
    // 0x397e70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397e74:
    // 0x397e74: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x397e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_397e78:
    // 0x397e78: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x397e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_397e7c:
    // 0x397e7c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x397e7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397e80:
    // 0x397e80: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_397e84:
    if (ctx->pc == 0x397E84u) {
        ctx->pc = 0x397E84u;
            // 0x397e84: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x397E88u;
        goto label_397e88;
    }
    ctx->pc = 0x397E80u;
    {
        const bool branch_taken_0x397e80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397e80) {
            ctx->pc = 0x397E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397E80u;
            // 0x397e84: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397E94u;
            goto label_397e94;
        }
    }
    ctx->pc = 0x397E88u;
label_397e88:
    // 0x397e88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397e8c:
    // 0x397e8c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x397e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_397e90:
    // 0x397e90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x397e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_397e94:
    // 0x397e94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397e98:
    // 0x397e98: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x397e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_397e9c:
    // 0x397e9c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x397e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_397ea0:
    // 0x397ea0: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x397ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_397ea4:
    // 0x397ea4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x397ea4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397ea8:
    // 0x397ea8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_397eac:
    if (ctx->pc == 0x397EACu) {
        ctx->pc = 0x397EACu;
            // 0x397eac: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x397EB0u;
        goto label_397eb0;
    }
    ctx->pc = 0x397EA8u;
    {
        const bool branch_taken_0x397ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397ea8) {
            ctx->pc = 0x397EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397EA8u;
            // 0x397eac: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397EBCu;
            goto label_397ebc;
        }
    }
    ctx->pc = 0x397EB0u;
label_397eb0:
    // 0x397eb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397eb4:
    // 0x397eb4: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x397eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_397eb8:
    // 0x397eb8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x397eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_397ebc:
    // 0x397ebc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397ec0:
    // 0x397ec0: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x397ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_397ec4:
    // 0x397ec4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x397ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_397ec8:
    // 0x397ec8: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x397ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_397ecc:
    // 0x397ecc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x397eccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397ed0:
    // 0x397ed0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_397ed4:
    if (ctx->pc == 0x397ED4u) {
        ctx->pc = 0x397ED4u;
            // 0x397ed4: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->pc = 0x397ED8u;
        goto label_397ed8;
    }
    ctx->pc = 0x397ED0u;
    {
        const bool branch_taken_0x397ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397ed0) {
            ctx->pc = 0x397ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397ED0u;
            // 0x397ed4: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397EE4u;
            goto label_397ee4;
        }
    }
    ctx->pc = 0x397ED8u;
label_397ed8:
    // 0x397ed8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397edc:
    // 0x397edc: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x397edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_397ee0:
    // 0x397ee0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x397ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_397ee4:
    // 0x397ee4: 0x26900094  addiu       $s0, $s4, 0x94
    ctx->pc = 0x397ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 148));
label_397ee8:
    // 0x397ee8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x397ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_397eec:
    // 0x397eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_397ef0:
    // 0x397ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397ef4:
    // 0x397ef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x397ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_397ef8:
    // 0x397ef8: 0xc074f30  jal         func_1D3CC0
label_397efc:
    if (ctx->pc == 0x397EFCu) {
        ctx->pc = 0x397EFCu;
            // 0x397efc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x397F00u;
        goto label_397f00;
    }
    ctx->pc = 0x397EF8u;
    SET_GPR_U32(ctx, 31, 0x397F00u);
    ctx->pc = 0x397EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397EF8u;
            // 0x397efc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397F00u; }
        if (ctx->pc != 0x397F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397F00u; }
        if (ctx->pc != 0x397F00u) { return; }
    }
    ctx->pc = 0x397F00u;
label_397f00:
    // 0x397f00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x397f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_397f04:
    // 0x397f04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397f08:
    // 0x397f08: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x397f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_397f0c:
    // 0x397f0c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x397f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_397f10:
    // 0x397f10: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x397f10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397f14:
    // 0x397f14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_397f18:
    if (ctx->pc == 0x397F18u) {
        ctx->pc = 0x397F18u;
            // 0x397f18: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x397F1Cu;
        goto label_397f1c;
    }
    ctx->pc = 0x397F14u;
    {
        const bool branch_taken_0x397f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397f14) {
            ctx->pc = 0x397F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397F14u;
            // 0x397f18: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397F28u;
            goto label_397f28;
        }
    }
    ctx->pc = 0x397F1Cu;
label_397f1c:
    // 0x397f1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397f20:
    // 0x397f20: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x397f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_397f24:
    // 0x397f24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x397f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_397f28:
    // 0x397f28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397f2c:
    // 0x397f2c: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x397f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_397f30:
    // 0x397f30: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x397f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_397f34:
    // 0x397f34: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x397f34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397f38:
    // 0x397f38: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_397f3c:
    if (ctx->pc == 0x397F3Cu) {
        ctx->pc = 0x397F3Cu;
            // 0x397f3c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x397F40u;
        goto label_397f40;
    }
    ctx->pc = 0x397F38u;
    {
        const bool branch_taken_0x397f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397f38) {
            ctx->pc = 0x397F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397F38u;
            // 0x397f3c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397F4Cu;
            goto label_397f4c;
        }
    }
    ctx->pc = 0x397F40u;
label_397f40:
    // 0x397f40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397f44:
    // 0x397f44: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x397f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_397f48:
    // 0x397f48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x397f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_397f4c:
    // 0x397f4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397f50:
    // 0x397f50: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x397f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_397f54:
    // 0x397f54: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x397f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_397f58:
    // 0x397f58: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x397f58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397f5c:
    // 0x397f5c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_397f60:
    if (ctx->pc == 0x397F60u) {
        ctx->pc = 0x397F60u;
            // 0x397f60: 0x8e660020  lw          $a2, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->pc = 0x397F64u;
        goto label_397f64;
    }
    ctx->pc = 0x397F5Cu;
    {
        const bool branch_taken_0x397f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397f5c) {
            ctx->pc = 0x397F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397F5Cu;
            // 0x397f60: 0x8e660020  lw          $a2, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397F70u;
            goto label_397f70;
        }
    }
    ctx->pc = 0x397F64u;
label_397f64:
    // 0x397f64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397f68:
    // 0x397f68: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x397f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_397f6c:
    // 0x397f6c: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x397f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_397f70:
    // 0x397f70: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x397f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_397f74:
    // 0x397f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397f78:
    // 0x397f78: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x397f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397f7c:
    // 0x397f7c: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x397f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_397f80:
    // 0x397f80: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x397f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_397f84:
    // 0x397f84: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x397f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_397f88:
    // 0x397f88: 0xc0751b8  jal         func_1D46E0
label_397f8c:
    if (ctx->pc == 0x397F8Cu) {
        ctx->pc = 0x397F8Cu;
            // 0x397f8c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x397F90u;
        goto label_397f90;
    }
    ctx->pc = 0x397F88u;
    SET_GPR_U32(ctx, 31, 0x397F90u);
    ctx->pc = 0x397F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397F88u;
            // 0x397f8c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397F90u; }
        if (ctx->pc != 0x397F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397F90u; }
        if (ctx->pc != 0x397F90u) { return; }
    }
    ctx->pc = 0x397F90u;
label_397f90:
    // 0x397f90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_397f94:
    // 0x397f94: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x397f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_397f98:
    // 0x397f98: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x397f98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_397f9c:
    // 0x397f9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_397fa0:
    if (ctx->pc == 0x397FA0u) {
        ctx->pc = 0x397FA4u;
        goto label_397fa4;
    }
    ctx->pc = 0x397F9Cu;
    {
        const bool branch_taken_0x397f9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397f9c) {
            ctx->pc = 0x397FACu;
            goto label_397fac;
        }
    }
    ctx->pc = 0x397FA4u;
label_397fa4:
    // 0x397fa4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_397fa8:
    // 0x397fa8: 0xac71e3c8  sw          $s1, -0x1C38($v1)
    ctx->pc = 0x397fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 17));
label_397fac:
    // 0x397fac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_397fb0:
    // 0x397fb0: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x397fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_397fb4:
    // 0x397fb4: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x397fb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_397fb8:
    // 0x397fb8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_397fbc:
    if (ctx->pc == 0x397FBCu) {
        ctx->pc = 0x397FBCu;
            // 0x397fbc: 0xae92009c  sw          $s2, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 18));
        ctx->pc = 0x397FC0u;
        goto label_397fc0;
    }
    ctx->pc = 0x397FB8u;
    {
        const bool branch_taken_0x397fb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x397fb8) {
            ctx->pc = 0x397FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397FB8u;
            // 0x397fbc: 0xae92009c  sw          $s2, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397FCCu;
            goto label_397fcc;
        }
    }
    ctx->pc = 0x397FC0u;
label_397fc0:
    // 0x397fc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_397fc4:
    // 0x397fc4: 0xac71e3d0  sw          $s1, -0x1C30($v1)
    ctx->pc = 0x397fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 17));
label_397fc8:
    // 0x397fc8: 0xae92009c  sw          $s2, 0x9C($s4)
    ctx->pc = 0x397fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 18));
label_397fcc:
    // 0x397fcc: 0xae9000a0  sw          $s0, 0xA0($s4)
    ctx->pc = 0x397fccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 16));
label_397fd0:
    // 0x397fd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x397fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_397fd4:
    // 0x397fd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x397fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_397fd8:
    // 0x397fd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x397fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_397fdc:
    // 0x397fdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x397fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_397fe0:
    // 0x397fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x397fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_397fe4:
    // 0x397fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x397fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_397fe8:
    // 0x397fe8: 0x3e00008  jr          $ra
label_397fec:
    if (ctx->pc == 0x397FECu) {
        ctx->pc = 0x397FECu;
            // 0x397fec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x397FF0u;
        goto label_397ff0;
    }
    ctx->pc = 0x397FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397FE8u;
            // 0x397fec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397FF0u;
label_397ff0:
    // 0x397ff0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x397ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_397ff4:
    // 0x397ff4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x397ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_397ff8:
    // 0x397ff8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x397ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_397ffc:
    // 0x397ffc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x397ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_398000:
    // 0x398000: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x398000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_398004:
    // 0x398004: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x398004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_398008:
    // 0x398008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x398008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39800c:
    // 0x39800c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_398010:
    // 0x398010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_398014:
    // 0x398014: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x398014u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_398018:
    // 0x398018: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_39801c:
    if (ctx->pc == 0x39801Cu) {
        ctx->pc = 0x39801Cu;
            // 0x39801c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398020u;
        goto label_398020;
    }
    ctx->pc = 0x398018u;
    {
        const bool branch_taken_0x398018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39801Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398018u;
            // 0x39801c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398018) {
            ctx->pc = 0x398098u;
            goto label_398098;
        }
    }
    ctx->pc = 0x398020u;
label_398020:
    // 0x398020: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x398020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398024:
    // 0x398024: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x398024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398028:
    // 0x398028: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x398028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_39802c:
    // 0x39802c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x39802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_398030:
    // 0x398030: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x398030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_398034:
    // 0x398034: 0x26140070  addiu       $s4, $s0, 0x70
    ctx->pc = 0x398034u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_398038:
    // 0x398038: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x398038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_39803c:
    // 0x39803c: 0xc0e6300  jal         func_398C00
label_398040:
    if (ctx->pc == 0x398040u) {
        ctx->pc = 0x398040u;
            // 0x398040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398044u;
        goto label_398044;
    }
    ctx->pc = 0x39803Cu;
    SET_GPR_U32(ctx, 31, 0x398044u);
    ctx->pc = 0x398040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39803Cu;
            // 0x398040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398C00u;
    if (runtime->hasFunction(0x398C00u)) {
        auto targetFn = runtime->lookupFunction(0x398C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398044u; }
        if (ctx->pc != 0x398044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398C00_0x398c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398044u; }
        if (ctx->pc != 0x398044u) { return; }
    }
    ctx->pc = 0x398044u;
label_398044:
    // 0x398044: 0xc0e62ec  jal         func_398BB0
label_398048:
    if (ctx->pc == 0x398048u) {
        ctx->pc = 0x398048u;
            // 0x398048: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39804Cu;
        goto label_39804c;
    }
    ctx->pc = 0x398044u;
    SET_GPR_U32(ctx, 31, 0x39804Cu);
    ctx->pc = 0x398048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398044u;
            // 0x398048: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398BB0u;
    if (runtime->hasFunction(0x398BB0u)) {
        auto targetFn = runtime->lookupFunction(0x398BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39804Cu; }
        if (ctx->pc != 0x39804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398BB0_0x398bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39804Cu; }
        if (ctx->pc != 0x39804Cu) { return; }
    }
    ctx->pc = 0x39804Cu;
label_39804c:
    // 0x39804c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39804cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398050:
    // 0x398050: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x398050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_398054:
    // 0x398054: 0xc04cc04  jal         func_133010
label_398058:
    if (ctx->pc == 0x398058u) {
        ctx->pc = 0x398058u;
            // 0x398058: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x39805Cu;
        goto label_39805c;
    }
    ctx->pc = 0x398054u;
    SET_GPR_U32(ctx, 31, 0x39805Cu);
    ctx->pc = 0x398058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398054u;
            // 0x398058: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39805Cu; }
        if (ctx->pc != 0x39805Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39805Cu; }
        if (ctx->pc != 0x39805Cu) { return; }
    }
    ctx->pc = 0x39805Cu;
label_39805c:
    // 0x39805c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x39805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_398060:
    // 0x398060: 0xc04c720  jal         func_131C80
label_398064:
    if (ctx->pc == 0x398064u) {
        ctx->pc = 0x398064u;
            // 0x398064: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x398068u;
        goto label_398068;
    }
    ctx->pc = 0x398060u;
    SET_GPR_U32(ctx, 31, 0x398068u);
    ctx->pc = 0x398064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398060u;
            // 0x398064: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398068u; }
        if (ctx->pc != 0x398068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398068u; }
        if (ctx->pc != 0x398068u) { return; }
    }
    ctx->pc = 0x398068u;
label_398068:
    // 0x398068: 0xae7001c8  sw          $s0, 0x1C8($s3)
    ctx->pc = 0x398068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 456), GPR_U32(ctx, 16));
label_39806c:
    // 0x39806c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398070:
    // 0x398070: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x398070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_398074:
    // 0x398074: 0xae6301c0  sw          $v1, 0x1C0($s3)
    ctx->pc = 0x398074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 3));
label_398078:
    // 0x398078: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x398078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39807c:
    // 0x39807c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39807cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398080:
    // 0x398080: 0xc0e62f8  jal         func_398BE0
label_398084:
    if (ctx->pc == 0x398084u) {
        ctx->pc = 0x398084u;
            // 0x398084: 0xae6201c4  sw          $v0, 0x1C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 2));
        ctx->pc = 0x398088u;
        goto label_398088;
    }
    ctx->pc = 0x398080u;
    SET_GPR_U32(ctx, 31, 0x398088u);
    ctx->pc = 0x398084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398080u;
            // 0x398084: 0xae6201c4  sw          $v0, 0x1C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398BE0u;
    if (runtime->hasFunction(0x398BE0u)) {
        auto targetFn = runtime->lookupFunction(0x398BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398088u; }
        if (ctx->pc != 0x398088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398BE0_0x398be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398088u; }
        if (ctx->pc != 0x398088u) { return; }
    }
    ctx->pc = 0x398088u;
label_398088:
    // 0x398088: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x398088u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_39808c:
    // 0x39808c: 0x2b1182b  sltu        $v1, $s5, $s1
    ctx->pc = 0x39808cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_398090:
    // 0x398090: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_398094:
    if (ctx->pc == 0x398094u) {
        ctx->pc = 0x398094u;
            // 0x398094: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x398098u;
        goto label_398098;
    }
    ctx->pc = 0x398090u;
    {
        const bool branch_taken_0x398090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x398094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398090u;
            // 0x398094: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398090) {
            ctx->pc = 0x398028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_398028;
        }
    }
    ctx->pc = 0x398098u;
label_398098:
    // 0x398098: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x398098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_39809c:
    // 0x39809c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39809cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3980a0:
    // 0x3980a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3980a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3980a4:
    // 0x3980a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3980a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3980a8:
    // 0x3980a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3980a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3980ac:
    // 0x3980ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3980acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3980b0:
    // 0x3980b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3980b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3980b4:
    // 0x3980b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3980b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3980b8:
    // 0x3980b8: 0x3e00008  jr          $ra
label_3980bc:
    if (ctx->pc == 0x3980BCu) {
        ctx->pc = 0x3980BCu;
            // 0x3980bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3980C0u;
        goto label_fallthrough_0x3980b8;
    }
    ctx->pc = 0x3980B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3980BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3980B8u;
            // 0x3980bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3980b8:
    ctx->pc = 0x3980C0u;
}
