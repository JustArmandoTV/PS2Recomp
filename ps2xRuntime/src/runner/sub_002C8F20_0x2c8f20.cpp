#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8F20
// Address: 0x2c8f20 - 0x2c90a0
void sub_002C8F20_0x2c8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8F20_0x2c8f20");
#endif

    switch (ctx->pc) {
        case 0x2c8f20u: goto label_2c8f20;
        case 0x2c8f24u: goto label_2c8f24;
        case 0x2c8f28u: goto label_2c8f28;
        case 0x2c8f2cu: goto label_2c8f2c;
        case 0x2c8f30u: goto label_2c8f30;
        case 0x2c8f34u: goto label_2c8f34;
        case 0x2c8f38u: goto label_2c8f38;
        case 0x2c8f3cu: goto label_2c8f3c;
        case 0x2c8f40u: goto label_2c8f40;
        case 0x2c8f44u: goto label_2c8f44;
        case 0x2c8f48u: goto label_2c8f48;
        case 0x2c8f4cu: goto label_2c8f4c;
        case 0x2c8f50u: goto label_2c8f50;
        case 0x2c8f54u: goto label_2c8f54;
        case 0x2c8f58u: goto label_2c8f58;
        case 0x2c8f5cu: goto label_2c8f5c;
        case 0x2c8f60u: goto label_2c8f60;
        case 0x2c8f64u: goto label_2c8f64;
        case 0x2c8f68u: goto label_2c8f68;
        case 0x2c8f6cu: goto label_2c8f6c;
        case 0x2c8f70u: goto label_2c8f70;
        case 0x2c8f74u: goto label_2c8f74;
        case 0x2c8f78u: goto label_2c8f78;
        case 0x2c8f7cu: goto label_2c8f7c;
        case 0x2c8f80u: goto label_2c8f80;
        case 0x2c8f84u: goto label_2c8f84;
        case 0x2c8f88u: goto label_2c8f88;
        case 0x2c8f8cu: goto label_2c8f8c;
        case 0x2c8f90u: goto label_2c8f90;
        case 0x2c8f94u: goto label_2c8f94;
        case 0x2c8f98u: goto label_2c8f98;
        case 0x2c8f9cu: goto label_2c8f9c;
        case 0x2c8fa0u: goto label_2c8fa0;
        case 0x2c8fa4u: goto label_2c8fa4;
        case 0x2c8fa8u: goto label_2c8fa8;
        case 0x2c8facu: goto label_2c8fac;
        case 0x2c8fb0u: goto label_2c8fb0;
        case 0x2c8fb4u: goto label_2c8fb4;
        case 0x2c8fb8u: goto label_2c8fb8;
        case 0x2c8fbcu: goto label_2c8fbc;
        case 0x2c8fc0u: goto label_2c8fc0;
        case 0x2c8fc4u: goto label_2c8fc4;
        case 0x2c8fc8u: goto label_2c8fc8;
        case 0x2c8fccu: goto label_2c8fcc;
        case 0x2c8fd0u: goto label_2c8fd0;
        case 0x2c8fd4u: goto label_2c8fd4;
        case 0x2c8fd8u: goto label_2c8fd8;
        case 0x2c8fdcu: goto label_2c8fdc;
        case 0x2c8fe0u: goto label_2c8fe0;
        case 0x2c8fe4u: goto label_2c8fe4;
        case 0x2c8fe8u: goto label_2c8fe8;
        case 0x2c8fecu: goto label_2c8fec;
        case 0x2c8ff0u: goto label_2c8ff0;
        case 0x2c8ff4u: goto label_2c8ff4;
        case 0x2c8ff8u: goto label_2c8ff8;
        case 0x2c8ffcu: goto label_2c8ffc;
        case 0x2c9000u: goto label_2c9000;
        case 0x2c9004u: goto label_2c9004;
        case 0x2c9008u: goto label_2c9008;
        case 0x2c900cu: goto label_2c900c;
        case 0x2c9010u: goto label_2c9010;
        case 0x2c9014u: goto label_2c9014;
        case 0x2c9018u: goto label_2c9018;
        case 0x2c901cu: goto label_2c901c;
        case 0x2c9020u: goto label_2c9020;
        case 0x2c9024u: goto label_2c9024;
        case 0x2c9028u: goto label_2c9028;
        case 0x2c902cu: goto label_2c902c;
        case 0x2c9030u: goto label_2c9030;
        case 0x2c9034u: goto label_2c9034;
        case 0x2c9038u: goto label_2c9038;
        case 0x2c903cu: goto label_2c903c;
        case 0x2c9040u: goto label_2c9040;
        case 0x2c9044u: goto label_2c9044;
        case 0x2c9048u: goto label_2c9048;
        case 0x2c904cu: goto label_2c904c;
        case 0x2c9050u: goto label_2c9050;
        case 0x2c9054u: goto label_2c9054;
        case 0x2c9058u: goto label_2c9058;
        case 0x2c905cu: goto label_2c905c;
        case 0x2c9060u: goto label_2c9060;
        case 0x2c9064u: goto label_2c9064;
        case 0x2c9068u: goto label_2c9068;
        case 0x2c906cu: goto label_2c906c;
        case 0x2c9070u: goto label_2c9070;
        case 0x2c9074u: goto label_2c9074;
        case 0x2c9078u: goto label_2c9078;
        case 0x2c907cu: goto label_2c907c;
        case 0x2c9080u: goto label_2c9080;
        case 0x2c9084u: goto label_2c9084;
        case 0x2c9088u: goto label_2c9088;
        case 0x2c908cu: goto label_2c908c;
        case 0x2c9090u: goto label_2c9090;
        case 0x2c9094u: goto label_2c9094;
        case 0x2c9098u: goto label_2c9098;
        case 0x2c909cu: goto label_2c909c;
        default: break;
    }

    ctx->pc = 0x2c8f20u;

label_2c8f20:
    // 0x2c8f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8f24:
    // 0x2c8f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c8f28:
    // 0x2c8f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c8f2c:
    // 0x2c8f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c8f30:
    // 0x2c8f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f34:
    // 0x2c8f34: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c8f38:
    if (ctx->pc == 0x2C8F38u) {
        ctx->pc = 0x2C8F38u;
            // 0x2c8f38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F3Cu;
        goto label_2c8f3c;
    }
    ctx->pc = 0x2C8F34u;
    {
        const bool branch_taken_0x2c8f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F34u;
            // 0x2c8f38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f34) {
            ctx->pc = 0x2C907Cu;
            goto label_2c907c;
        }
    }
    ctx->pc = 0x2C8F3Cu;
label_2c8f3c:
    // 0x2c8f3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c8f40:
    // 0x2c8f40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c8f44:
    // 0x2c8f44: 0x246305c0  addiu       $v1, $v1, 0x5C0
    ctx->pc = 0x2c8f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1472));
label_2c8f48:
    // 0x2c8f48: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c8f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2c8f4c:
    // 0x2c8f4c: 0x244205f8  addiu       $v0, $v0, 0x5F8
    ctx->pc = 0x2c8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1528));
label_2c8f50:
    // 0x2c8f50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c8f54:
    // 0x2c8f54: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c8f58:
    // 0x2c8f58: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c8f5c:
    // 0x2c8f5c: 0xc0407c0  jal         func_101F00
label_2c8f60:
    if (ctx->pc == 0x2C8F60u) {
        ctx->pc = 0x2C8F60u;
            // 0x2c8f60: 0x24a58e20  addiu       $a1, $a1, -0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938144));
        ctx->pc = 0x2C8F64u;
        goto label_2c8f64;
    }
    ctx->pc = 0x2C8F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C8F64u);
    ctx->pc = 0x2C8F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F5Cu;
            // 0x2c8f60: 0x24a58e20  addiu       $a1, $a1, -0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8F64u; }
        if (ctx->pc != 0x2C8F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8F64u; }
        if (ctx->pc != 0x2C8F64u) { return; }
    }
    ctx->pc = 0x2C8F64u;
label_2c8f64:
    // 0x2c8f64: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c8f68:
    // 0x2c8f68: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c8f6c:
    if (ctx->pc == 0x2C8F6Cu) {
        ctx->pc = 0x2C8F6Cu;
            // 0x2c8f6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C8F70u;
        goto label_2c8f70;
    }
    ctx->pc = 0x2C8F68u;
    {
        const bool branch_taken_0x2c8f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f68) {
            ctx->pc = 0x2C8F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F68u;
            // 0x2c8f6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F90u;
            goto label_2c8f90;
        }
    }
    ctx->pc = 0x2C8F70u;
label_2c8f70:
    // 0x2c8f70: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c8f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c8f74:
    // 0x2c8f74: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c8f78:
    if (ctx->pc == 0x2C8F78u) {
        ctx->pc = 0x2C8F78u;
            // 0x2c8f78: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C8F7Cu;
        goto label_2c8f7c;
    }
    ctx->pc = 0x2C8F74u;
    {
        const bool branch_taken_0x2c8f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f74) {
            ctx->pc = 0x2C8F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F74u;
            // 0x2c8f78: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F8Cu;
            goto label_2c8f8c;
        }
    }
    ctx->pc = 0x2C8F7Cu;
label_2c8f7c:
    // 0x2c8f7c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c8f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c8f80:
    // 0x2c8f80: 0xc0407c0  jal         func_101F00
label_2c8f84:
    if (ctx->pc == 0x2C8F84u) {
        ctx->pc = 0x2C8F84u;
            // 0x2c8f84: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x2C8F88u;
        goto label_2c8f88;
    }
    ctx->pc = 0x2C8F80u;
    SET_GPR_U32(ctx, 31, 0x2C8F88u);
    ctx->pc = 0x2C8F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F80u;
            // 0x2c8f84: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8F88u; }
        if (ctx->pc != 0x2C8F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8F88u; }
        if (ctx->pc != 0x2C8F88u) { return; }
    }
    ctx->pc = 0x2C8F88u;
label_2c8f88:
    // 0x2c8f88: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c8f8c:
    // 0x2c8f8c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c8f90:
    // 0x2c8f90: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c8f94:
    if (ctx->pc == 0x2C8F94u) {
        ctx->pc = 0x2C8F94u;
            // 0x2c8f94: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C8F98u;
        goto label_2c8f98;
    }
    ctx->pc = 0x2C8F90u;
    {
        const bool branch_taken_0x2c8f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f90) {
            ctx->pc = 0x2C8F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F90u;
            // 0x2c8f94: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8FC0u;
            goto label_2c8fc0;
        }
    }
    ctx->pc = 0x2C8F98u;
label_2c8f98:
    // 0x2c8f98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c8f9c:
    if (ctx->pc == 0x2C8F9Cu) {
        ctx->pc = 0x2C8FA0u;
        goto label_2c8fa0;
    }
    ctx->pc = 0x2C8F98u;
    {
        const bool branch_taken_0x2c8f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f98) {
            ctx->pc = 0x2C8FBCu;
            goto label_2c8fbc;
        }
    }
    ctx->pc = 0x2C8FA0u;
label_2c8fa0:
    // 0x2c8fa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c8fa4:
    if (ctx->pc == 0x2C8FA4u) {
        ctx->pc = 0x2C8FA8u;
        goto label_2c8fa8;
    }
    ctx->pc = 0x2C8FA0u;
    {
        const bool branch_taken_0x2c8fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8fa0) {
            ctx->pc = 0x2C8FBCu;
            goto label_2c8fbc;
        }
    }
    ctx->pc = 0x2C8FA8u;
label_2c8fa8:
    // 0x2c8fa8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c8fac:
    // 0x2c8fac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c8fb0:
    if (ctx->pc == 0x2C8FB0u) {
        ctx->pc = 0x2C8FB4u;
        goto label_2c8fb4;
    }
    ctx->pc = 0x2C8FACu;
    {
        const bool branch_taken_0x2c8fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8fac) {
            ctx->pc = 0x2C8FBCu;
            goto label_2c8fbc;
        }
    }
    ctx->pc = 0x2C8FB4u;
label_2c8fb4:
    // 0x2c8fb4: 0xc0400a8  jal         func_1002A0
label_2c8fb8:
    if (ctx->pc == 0x2C8FB8u) {
        ctx->pc = 0x2C8FBCu;
        goto label_2c8fbc;
    }
    ctx->pc = 0x2C8FB4u;
    SET_GPR_U32(ctx, 31, 0x2C8FBCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8FBCu; }
        if (ctx->pc != 0x2C8FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8FBCu; }
        if (ctx->pc != 0x2C8FBCu) { return; }
    }
    ctx->pc = 0x2C8FBCu;
label_2c8fbc:
    // 0x2c8fbc: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c8fc0:
    // 0x2c8fc0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c8fc4:
    if (ctx->pc == 0x2C8FC4u) {
        ctx->pc = 0x2C8FC4u;
            // 0x2c8fc4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C8FC8u;
        goto label_2c8fc8;
    }
    ctx->pc = 0x2C8FC0u;
    {
        const bool branch_taken_0x2c8fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8fc0) {
            ctx->pc = 0x2C8FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8FC0u;
            // 0x2c8fc4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8FF0u;
            goto label_2c8ff0;
        }
    }
    ctx->pc = 0x2C8FC8u;
label_2c8fc8:
    // 0x2c8fc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c8fcc:
    if (ctx->pc == 0x2C8FCCu) {
        ctx->pc = 0x2C8FD0u;
        goto label_2c8fd0;
    }
    ctx->pc = 0x2C8FC8u;
    {
        const bool branch_taken_0x2c8fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8fc8) {
            ctx->pc = 0x2C8FECu;
            goto label_2c8fec;
        }
    }
    ctx->pc = 0x2C8FD0u;
label_2c8fd0:
    // 0x2c8fd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c8fd4:
    if (ctx->pc == 0x2C8FD4u) {
        ctx->pc = 0x2C8FD8u;
        goto label_2c8fd8;
    }
    ctx->pc = 0x2C8FD0u;
    {
        const bool branch_taken_0x2c8fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8fd0) {
            ctx->pc = 0x2C8FECu;
            goto label_2c8fec;
        }
    }
    ctx->pc = 0x2C8FD8u;
label_2c8fd8:
    // 0x2c8fd8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c8fdc:
    // 0x2c8fdc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c8fe0:
    if (ctx->pc == 0x2C8FE0u) {
        ctx->pc = 0x2C8FE4u;
        goto label_2c8fe4;
    }
    ctx->pc = 0x2C8FDCu;
    {
        const bool branch_taken_0x2c8fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8fdc) {
            ctx->pc = 0x2C8FECu;
            goto label_2c8fec;
        }
    }
    ctx->pc = 0x2C8FE4u;
label_2c8fe4:
    // 0x2c8fe4: 0xc0400a8  jal         func_1002A0
label_2c8fe8:
    if (ctx->pc == 0x2C8FE8u) {
        ctx->pc = 0x2C8FECu;
        goto label_2c8fec;
    }
    ctx->pc = 0x2C8FE4u;
    SET_GPR_U32(ctx, 31, 0x2C8FECu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8FECu; }
        if (ctx->pc != 0x2C8FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8FECu; }
        if (ctx->pc != 0x2C8FECu) { return; }
    }
    ctx->pc = 0x2C8FECu;
label_2c8fec:
    // 0x2c8fec: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c8ff0:
    // 0x2c8ff0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c8ff4:
    if (ctx->pc == 0x2C8FF4u) {
        ctx->pc = 0x2C8FF8u;
        goto label_2c8ff8;
    }
    ctx->pc = 0x2C8FF0u;
    {
        const bool branch_taken_0x2c8ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ff0) {
            ctx->pc = 0x2C900Cu;
            goto label_2c900c;
        }
    }
    ctx->pc = 0x2C8FF8u;
label_2c8ff8:
    // 0x2c8ff8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c8ffc:
    // 0x2c8ffc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c9000:
    // 0x2c9000: 0x246305a8  addiu       $v1, $v1, 0x5A8
    ctx->pc = 0x2c9000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1448));
label_2c9004:
    // 0x2c9004: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c9004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c9008:
    // 0x2c9008: 0xac400d78  sw          $zero, 0xD78($v0)
    ctx->pc = 0x2c9008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3448), GPR_U32(ctx, 0));
label_2c900c:
    // 0x2c900c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c9010:
    if (ctx->pc == 0x2C9010u) {
        ctx->pc = 0x2C9010u;
            // 0x2c9010: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C9014u;
        goto label_2c9014;
    }
    ctx->pc = 0x2C900Cu;
    {
        const bool branch_taken_0x2c900c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c900c) {
            ctx->pc = 0x2C9010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C900Cu;
            // 0x2c9010: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9068u;
            goto label_2c9068;
        }
    }
    ctx->pc = 0x2C9014u;
label_2c9014:
    // 0x2c9014: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c9018:
    // 0x2c9018: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c9018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c901c:
    // 0x2c901c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c901cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c9020:
    // 0x2c9020: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c9020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c9024:
    // 0x2c9024: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c9028:
    if (ctx->pc == 0x2C9028u) {
        ctx->pc = 0x2C9028u;
            // 0x2c9028: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C902Cu;
        goto label_2c902c;
    }
    ctx->pc = 0x2C9024u;
    {
        const bool branch_taken_0x2c9024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9024) {
            ctx->pc = 0x2C9028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9024u;
            // 0x2c9028: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9040u;
            goto label_2c9040;
        }
    }
    ctx->pc = 0x2C902Cu;
label_2c902c:
    // 0x2c902c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c902cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c9030:
    // 0x2c9030: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c9030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c9034:
    // 0x2c9034: 0x320f809  jalr        $t9
label_2c9038:
    if (ctx->pc == 0x2C9038u) {
        ctx->pc = 0x2C9038u;
            // 0x2c9038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C903Cu;
        goto label_2c903c;
    }
    ctx->pc = 0x2C9034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C903Cu);
        ctx->pc = 0x2C9038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9034u;
            // 0x2c9038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C903Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C903Cu; }
            if (ctx->pc != 0x2C903Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C903Cu;
label_2c903c:
    // 0x2c903c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c9040:
    // 0x2c9040: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c9044:
    if (ctx->pc == 0x2C9044u) {
        ctx->pc = 0x2C9044u;
            // 0x2c9044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9048u;
        goto label_2c9048;
    }
    ctx->pc = 0x2C9040u;
    {
        const bool branch_taken_0x2c9040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9040) {
            ctx->pc = 0x2C9044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9040u;
            // 0x2c9044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C905Cu;
            goto label_2c905c;
        }
    }
    ctx->pc = 0x2C9048u;
label_2c9048:
    // 0x2c9048: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c9048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c904c:
    // 0x2c904c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c904cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c9050:
    // 0x2c9050: 0x320f809  jalr        $t9
label_2c9054:
    if (ctx->pc == 0x2C9054u) {
        ctx->pc = 0x2C9054u;
            // 0x2c9054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C9058u;
        goto label_2c9058;
    }
    ctx->pc = 0x2C9050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9058u);
        ctx->pc = 0x2C9054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9050u;
            // 0x2c9054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9058u; }
            if (ctx->pc != 0x2C9058u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9058u;
label_2c9058:
    // 0x2c9058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c905c:
    // 0x2c905c: 0xc075bf8  jal         func_1D6FE0
label_2c9060:
    if (ctx->pc == 0x2C9060u) {
        ctx->pc = 0x2C9060u;
            // 0x2c9060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9064u;
        goto label_2c9064;
    }
    ctx->pc = 0x2C905Cu;
    SET_GPR_U32(ctx, 31, 0x2C9064u);
    ctx->pc = 0x2C9060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C905Cu;
            // 0x2c9060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9064u; }
        if (ctx->pc != 0x2C9064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9064u; }
        if (ctx->pc != 0x2C9064u) { return; }
    }
    ctx->pc = 0x2C9064u;
label_2c9064:
    // 0x2c9064: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c9064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c9068:
    // 0x2c9068: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9068u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c906c:
    // 0x2c906c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c9070:
    if (ctx->pc == 0x2C9070u) {
        ctx->pc = 0x2C9070u;
            // 0x2c9070: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9074u;
        goto label_2c9074;
    }
    ctx->pc = 0x2C906Cu;
    {
        const bool branch_taken_0x2c906c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c906c) {
            ctx->pc = 0x2C9070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C906Cu;
            // 0x2c9070: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9080u;
            goto label_2c9080;
        }
    }
    ctx->pc = 0x2C9074u;
label_2c9074:
    // 0x2c9074: 0xc0400a8  jal         func_1002A0
label_2c9078:
    if (ctx->pc == 0x2C9078u) {
        ctx->pc = 0x2C9078u;
            // 0x2c9078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C907Cu;
        goto label_2c907c;
    }
    ctx->pc = 0x2C9074u;
    SET_GPR_U32(ctx, 31, 0x2C907Cu);
    ctx->pc = 0x2C9078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9074u;
            // 0x2c9078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C907Cu; }
        if (ctx->pc != 0x2C907Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C907Cu; }
        if (ctx->pc != 0x2C907Cu) { return; }
    }
    ctx->pc = 0x2C907Cu;
label_2c907c:
    // 0x2c907c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c907cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9080:
    // 0x2c9080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9084:
    // 0x2c9084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9088:
    // 0x2c9088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c908c:
    // 0x2c908c: 0x3e00008  jr          $ra
label_2c9090:
    if (ctx->pc == 0x2C9090u) {
        ctx->pc = 0x2C9090u;
            // 0x2c9090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C9094u;
        goto label_2c9094;
    }
    ctx->pc = 0x2C908Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C908Cu;
            // 0x2c9090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9094u;
label_2c9094:
    // 0x2c9094: 0x0  nop
    ctx->pc = 0x2c9094u;
    // NOP
label_2c9098:
    // 0x2c9098: 0x0  nop
    ctx->pc = 0x2c9098u;
    // NOP
label_2c909c:
    // 0x2c909c: 0x0  nop
    ctx->pc = 0x2c909cu;
    // NOP
}
