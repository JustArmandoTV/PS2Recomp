#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116EB0
// Address: 0x116eb0 - 0x1170f0
void sub_00116EB0_0x116eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116EB0_0x116eb0");
#endif

    switch (ctx->pc) {
        case 0x116f0cu: goto label_116f0c;
        case 0x116f20u: goto label_116f20;
        case 0x116f48u: goto label_116f48;
        case 0x116f60u: goto label_116f60;
        case 0x116f80u: goto label_116f80;
        case 0x116fb8u: goto label_116fb8;
        case 0x116fc0u: goto label_116fc0;
        case 0x116fc8u: goto label_116fc8;
        case 0x116fd0u: goto label_116fd0;
        case 0x116fe0u: goto label_116fe0;
        case 0x11705cu: goto label_11705c;
        case 0x11706cu: goto label_11706c;
        case 0x11707cu: goto label_11707c;
        case 0x117084u: goto label_117084;
        case 0x11708cu: goto label_11708c;
        case 0x1170a4u: goto label_1170a4;
        default: break;
    }

    ctx->pc = 0x116eb0u;

    // 0x116eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x116eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x116eb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116eb8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x116eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x116ebc: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x116ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x116ec0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x116ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x116ec4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x116ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x116ec8: 0x2651fa48  addiu       $s1, $s2, -0x5B8
    ctx->pc = 0x116ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965832));
    // 0x116ecc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x116eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x116ed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116ed4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x116ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x116ed8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116ED8u;
    {
        const bool branch_taken_0x116ed8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x116EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116ED8u;
            // 0x116edc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ed8) {
            ctx->pc = 0x116EECu;
            goto label_116eec;
        }
    }
    ctx->pc = 0x116EE0u;
    // 0x116ee0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x116ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x116ee4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x116EE4u;
    {
        const bool branch_taken_0x116ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116EE4u;
            // 0x116ee8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ee4) {
            ctx->pc = 0x116FE4u;
            goto label_116fe4;
        }
    }
    ctx->pc = 0x116EECu;
label_116eec:
    // 0x116eec: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x116eecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x116ef0: 0xfe40fa48  sd          $zero, -0x5B8($s2)
    ctx->pc = 0x116ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294965832), GPR_U64(ctx, 0));
    // 0x116ef4: 0x2670e300  addiu       $s0, $s3, -0x1D00
    ctx->pc = 0x116ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959872));
    // 0x116ef8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x116ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x116efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f04: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x116F04u;
    SET_GPR_U32(ctx, 31, 0x116F0Cu);
    ctx->pc = 0x116F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116F04u;
            // 0x116f08: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F0Cu; }
        if (ctx->pc != 0x116F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F0Cu; }
        if (ctx->pc != 0x116F0Cu) { return; }
    }
    ctx->pc = 0x116F0Cu;
label_116f0c:
    // 0x116f0c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x116f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x116f10: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x116f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x116f14: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x116f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x116f18: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x116f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x116f1c: 0x0  nop
    ctx->pc = 0x116f1cu;
    // NOP
label_116f20:
    // 0x116f20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x116f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x116f24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x116f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x116f28: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x116f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x116f2c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x116f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x116f30: 0x0  nop
    ctx->pc = 0x116f30u;
    // NOP
    // 0x116f34: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116F34u;
    {
        const bool branch_taken_0x116f34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x116f34) {
            ctx->pc = 0x116F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116f20;
        }
    }
    ctx->pc = 0x116F3Cu;
    // 0x116f3c: 0x2662e300  addiu       $v0, $s3, -0x1D00
    ctx->pc = 0x116f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959872));
    // 0x116f40: 0xc046078  jal         func_1181E0
    ctx->pc = 0x116F40u;
    SET_GPR_U32(ctx, 31, 0x116F48u);
    ctx->pc = 0x116F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116F40u;
            // 0x116f44: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1181E0u;
    if (runtime->hasFunction(0x1181E0u)) {
        auto targetFn = runtime->lookupFunction(0x1181E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F48u; }
        if (ctx->pc != 0x116F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001181E0_0x1181e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F48u; }
        if (ctx->pc != 0x116F48u) { return; }
    }
    ctx->pc = 0x116F48u;
label_116f48:
    // 0x116f48: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x116f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x116f4c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x116f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x116f50: 0x24a57450  addiu       $a1, $a1, 0x7450
    ctx->pc = 0x116f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29776));
    // 0x116f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f58: 0xc043014  jal         func_10C050
    ctx->pc = 0x116F58u;
    SET_GPR_U32(ctx, 31, 0x116F60u);
    ctx->pc = 0x116F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116F58u;
            // 0x116f5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C050u;
    if (runtime->hasFunction(0x10C050u)) {
        auto targetFn = runtime->lookupFunction(0x10C050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F60u; }
        if (ctx->pc != 0x116F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C050_0x10c050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F60u; }
        if (ctx->pc != 0x116F60u) { return; }
    }
    ctx->pc = 0x116F60u;
label_116f60:
    // 0x116f60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116f60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f64: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x116F64u;
    {
        const bool branch_taken_0x116f64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x116f64) {
            ctx->pc = 0x116F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116F64u;
            // 0x116f68: 0x2642fa48  addiu       $v0, $s2, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965832));
        ctx->in_delay_slot = false;
            ctx->pc = 0x116F78u;
            goto label_116f78;
        }
    }
    ctx->pc = 0x116F6Cu;
    // 0x116f6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x116f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x116f70: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x116F70u;
    {
        const bool branch_taken_0x116f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F70u;
            // 0x116f74: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f70) {
            ctx->pc = 0x116FE4u;
            goto label_116fe4;
        }
    }
    ctx->pc = 0x116F78u;
label_116f78:
    // 0x116f78: 0xc045968  jal         func_1165A0
    ctx->pc = 0x116F78u;
    SET_GPR_U32(ctx, 31, 0x116F80u);
    ctx->pc = 0x116F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116F78u;
            // 0x116f7c: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F80u; }
        if (ctx->pc != 0x116F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F80u; }
        if (ctx->pc != 0x116F80u) { return; }
    }
    ctx->pc = 0x116F80u;
label_116f80:
    // 0x116f80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x116f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x116f84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f88: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x116f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x116f8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x116f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x116f90: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x116f90u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x116f94: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x116f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x116f98: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x116f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x116f9c: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x116f9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x116fa0: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x116fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x116fa4: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x116fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x116fa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116FA8u;
    {
        const bool branch_taken_0x116fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FA8u;
            // 0x116fac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fa8) {
            ctx->pc = 0x116FC0u;
            goto label_116fc0;
        }
    }
    ctx->pc = 0x116FB0u;
    // 0x116fb0: 0xc045ba0  jal         func_116E80
    ctx->pc = 0x116FB0u;
    SET_GPR_U32(ctx, 31, 0x116FB8u);
    ctx->pc = 0x116FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116FB0u;
            // 0x116fb4: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E80u;
    if (runtime->hasFunction(0x116E80u)) {
        auto targetFn = runtime->lookupFunction(0x116E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FB8u; }
        if (ctx->pc != 0x116FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E80_0x116e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FB8u; }
        if (ctx->pc != 0x116FB8u) { return; }
    }
    ctx->pc = 0x116FB8u;
label_116fb8:
    // 0x116fb8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x116FB8u;
    SET_GPR_U32(ctx, 31, 0x116FC0u);
    ctx->pc = 0x116FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116FB8u;
            // 0x116fbc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FC0u; }
        if (ctx->pc != 0x116FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116EA0_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FC0u; }
        if (ctx->pc != 0x116FC0u) { return; }
    }
    ctx->pc = 0x116FC0u;
label_116fc0:
    // 0x116fc0: 0xc045ba4  jal         func_116E90
    ctx->pc = 0x116FC0u;
    SET_GPR_U32(ctx, 31, 0x116FC8u);
    ctx->pc = 0x116FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116FC0u;
            // 0x116fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FC8u; }
        if (ctx->pc != 0x116FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E90_0x116e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FC8u; }
        if (ctx->pc != 0x116FC8u) { return; }
    }
    ctx->pc = 0x116FC8u;
label_116fc8:
    // 0x116fc8: 0xc0433aa  jal         func_10CEA8
    ctx->pc = 0x116FC8u;
    SET_GPR_U32(ctx, 31, 0x116FD0u);
    ctx->pc = 0x116FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116FC8u;
            // 0x116fcc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEA8u;
    if (runtime->hasFunction(0x10CEA8u)) {
        auto targetFn = runtime->lookupFunction(0x10CEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FD0u; }
        if (ctx->pc != 0x116FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEA8_0x10cea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FD0u; }
        if (ctx->pc != 0x116FD0u) { return; }
    }
    ctx->pc = 0x116FD0u;
label_116fd0:
    // 0x116fd0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x116FD0u;
    {
        const bool branch_taken_0x116fd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FD0u;
            // 0x116fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fd0) {
            ctx->pc = 0x116FE4u;
            goto label_116fe4;
        }
    }
    ctx->pc = 0x116FD8u;
    // 0x116fd8: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x116FD8u;
    SET_GPR_U32(ctx, 31, 0x116FE0u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FE0u; }
        if (ctx->pc != 0x116FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116FE0u; }
        if (ctx->pc != 0x116FE0u) { return; }
    }
    ctx->pc = 0x116FE0u;
label_116fe0:
    // 0x116fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116fe4:
    // 0x116fe4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x116fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116fe8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x116fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116fec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x116fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116ff0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116ff4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x116FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FFCu;
            // 0x117000: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117004u;
    // 0x117004: 0x0  nop
    ctx->pc = 0x117004u;
    // NOP
    // 0x117008: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11700c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117014: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x117014u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x117018: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11701c: 0x2650fa48  addiu       $s0, $s2, -0x5B8
    ctx->pc = 0x11701cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965832));
    // 0x117020: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117024: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x117024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117028: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117028u;
    {
        const bool branch_taken_0x117028 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117028) {
            ctx->pc = 0x11703Cu;
            goto label_11703c;
        }
    }
    ctx->pc = 0x117030u;
    // 0x117030: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x117034: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x117034u;
    {
        const bool branch_taken_0x117034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117034u;
            // 0x117038: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117034) {
            ctx->pc = 0x1170A8u;
            goto label_1170a8;
        }
    }
    ctx->pc = 0x11703Cu;
label_11703c:
    // 0x11703c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x117040: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117040u;
    {
        const bool branch_taken_0x117040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117040) {
            ctx->pc = 0x117054u;
            goto label_117054;
        }
    }
    ctx->pc = 0x117048u;
    // 0x117048: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11704c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11704Cu;
    {
        const bool branch_taken_0x11704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11704Cu;
            // 0x117050: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11704c) {
            ctx->pc = 0x1170A8u;
            goto label_1170a8;
        }
    }
    ctx->pc = 0x117054u;
label_117054:
    // 0x117054: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117054u;
    SET_GPR_U32(ctx, 31, 0x11705Cu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11705Cu; }
        if (ctx->pc != 0x11705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11705Cu; }
        if (ctx->pc != 0x11705Cu) { return; }
    }
    ctx->pc = 0x11705Cu;
label_11705c:
    // 0x11705c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x11705cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117060: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117064: 0xc043018  jal         func_10C060
    ctx->pc = 0x117064u;
    SET_GPR_U32(ctx, 31, 0x11706Cu);
    ctx->pc = 0x117068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117064u;
            // 0x117068: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C060u;
    if (runtime->hasFunction(0x10C060u)) {
        auto targetFn = runtime->lookupFunction(0x10C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11706Cu; }
        if (ctx->pc != 0x11706Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C060_0x10c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11706Cu; }
        if (ctx->pc != 0x11706Cu) { return; }
    }
    ctx->pc = 0x11706Cu;
label_11706c:
    // 0x11706c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11706Cu;
    {
        const bool branch_taken_0x11706c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11706Cu;
            // 0x117070: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11706c) {
            ctx->pc = 0x117090u;
            goto label_117090;
        }
    }
    ctx->pc = 0x117074u;
    // 0x117074: 0xc043390  jal         func_10CE40
    ctx->pc = 0x117074u;
    SET_GPR_U32(ctx, 31, 0x11707Cu);
    ctx->pc = 0x117078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117074u;
            // 0x117078: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CE40u;
    if (runtime->hasFunction(0x10CE40u)) {
        auto targetFn = runtime->lookupFunction(0x10CE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11707Cu; }
        if (ctx->pc != 0x11707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CE40_0x10ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11707Cu; }
        if (ctx->pc != 0x11707Cu) { return; }
    }
    ctx->pc = 0x11707Cu;
label_11707c:
    // 0x11707c: 0xc045ba4  jal         func_116E90
    ctx->pc = 0x11707Cu;
    SET_GPR_U32(ctx, 31, 0x117084u);
    ctx->pc = 0x117080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11707Cu;
            // 0x117080: 0x24040c00  addiu       $a0, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117084u; }
        if (ctx->pc != 0x117084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E90_0x116e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117084u; }
        if (ctx->pc != 0x117084u) { return; }
    }
    ctx->pc = 0x117084u;
label_117084:
    // 0x117084: 0xc045ba0  jal         func_116E80
    ctx->pc = 0x117084u;
    SET_GPR_U32(ctx, 31, 0x11708Cu);
    ctx->pc = 0x117088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117084u;
            // 0x117088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E80u;
    if (runtime->hasFunction(0x116E80u)) {
        auto targetFn = runtime->lookupFunction(0x116E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11708Cu; }
        if (ctx->pc != 0x11708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E80_0x116e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11708Cu; }
        if (ctx->pc != 0x11708Cu) { return; }
    }
    ctx->pc = 0x11708Cu;
label_11708c:
    // 0x11708c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117090:
    // 0x117090: 0xfe40fa48  sd          $zero, -0x5B8($s2)
    ctx->pc = 0x117090u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294965832), GPR_U64(ctx, 0));
    // 0x117094: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117094u;
    {
        const bool branch_taken_0x117094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117094u;
            // 0x117098: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117094) {
            ctx->pc = 0x1170A4u;
            goto label_1170a4;
        }
    }
    ctx->pc = 0x11709Cu;
    // 0x11709c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x11709Cu;
    SET_GPR_U32(ctx, 31, 0x1170A4u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1170A4u; }
        if (ctx->pc != 0x1170A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1170A4u; }
        if (ctx->pc != 0x1170A4u) { return; }
    }
    ctx->pc = 0x1170A4u;
label_1170a4:
    // 0x1170a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1170a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1170a8:
    // 0x1170a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1170a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1170ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1170acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1170b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1170b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1170b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1170b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1170b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1170B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1170BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1170B8u;
            // 0x1170bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1170C0u;
    // 0x1170c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1170c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1170c4: 0x8c43fa50  lw          $v1, -0x5B0($v0)
    ctx->pc = 0x1170c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965840)));
    // 0x1170c8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1170C8u;
    {
        const bool branch_taken_0x1170c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1170CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1170C8u;
            // 0x1170cc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170c8) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170D0u;
    // 0x1170d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1170d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1170d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1170D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1170D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1170D4u;
            // 0x1170d8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1170DCu;
label_1170dc:
    // 0x1170dc: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x1170dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x1170e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1170e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1170e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1170E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1170E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1170E4u;
            // 0x1170e8: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1170ECu;
    // 0x1170ec: 0x0  nop
    ctx->pc = 0x1170ecu;
    // NOP
}
