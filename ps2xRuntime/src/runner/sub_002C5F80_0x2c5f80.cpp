#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5F80
// Address: 0x2c5f80 - 0x2c6100
void sub_002C5F80_0x2c5f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5F80_0x2c5f80");
#endif

    switch (ctx->pc) {
        case 0x2c5f80u: goto label_2c5f80;
        case 0x2c5f84u: goto label_2c5f84;
        case 0x2c5f88u: goto label_2c5f88;
        case 0x2c5f8cu: goto label_2c5f8c;
        case 0x2c5f90u: goto label_2c5f90;
        case 0x2c5f94u: goto label_2c5f94;
        case 0x2c5f98u: goto label_2c5f98;
        case 0x2c5f9cu: goto label_2c5f9c;
        case 0x2c5fa0u: goto label_2c5fa0;
        case 0x2c5fa4u: goto label_2c5fa4;
        case 0x2c5fa8u: goto label_2c5fa8;
        case 0x2c5facu: goto label_2c5fac;
        case 0x2c5fb0u: goto label_2c5fb0;
        case 0x2c5fb4u: goto label_2c5fb4;
        case 0x2c5fb8u: goto label_2c5fb8;
        case 0x2c5fbcu: goto label_2c5fbc;
        case 0x2c5fc0u: goto label_2c5fc0;
        case 0x2c5fc4u: goto label_2c5fc4;
        case 0x2c5fc8u: goto label_2c5fc8;
        case 0x2c5fccu: goto label_2c5fcc;
        case 0x2c5fd0u: goto label_2c5fd0;
        case 0x2c5fd4u: goto label_2c5fd4;
        case 0x2c5fd8u: goto label_2c5fd8;
        case 0x2c5fdcu: goto label_2c5fdc;
        case 0x2c5fe0u: goto label_2c5fe0;
        case 0x2c5fe4u: goto label_2c5fe4;
        case 0x2c5fe8u: goto label_2c5fe8;
        case 0x2c5fecu: goto label_2c5fec;
        case 0x2c5ff0u: goto label_2c5ff0;
        case 0x2c5ff4u: goto label_2c5ff4;
        case 0x2c5ff8u: goto label_2c5ff8;
        case 0x2c5ffcu: goto label_2c5ffc;
        case 0x2c6000u: goto label_2c6000;
        case 0x2c6004u: goto label_2c6004;
        case 0x2c6008u: goto label_2c6008;
        case 0x2c600cu: goto label_2c600c;
        case 0x2c6010u: goto label_2c6010;
        case 0x2c6014u: goto label_2c6014;
        case 0x2c6018u: goto label_2c6018;
        case 0x2c601cu: goto label_2c601c;
        case 0x2c6020u: goto label_2c6020;
        case 0x2c6024u: goto label_2c6024;
        case 0x2c6028u: goto label_2c6028;
        case 0x2c602cu: goto label_2c602c;
        case 0x2c6030u: goto label_2c6030;
        case 0x2c6034u: goto label_2c6034;
        case 0x2c6038u: goto label_2c6038;
        case 0x2c603cu: goto label_2c603c;
        case 0x2c6040u: goto label_2c6040;
        case 0x2c6044u: goto label_2c6044;
        case 0x2c6048u: goto label_2c6048;
        case 0x2c604cu: goto label_2c604c;
        case 0x2c6050u: goto label_2c6050;
        case 0x2c6054u: goto label_2c6054;
        case 0x2c6058u: goto label_2c6058;
        case 0x2c605cu: goto label_2c605c;
        case 0x2c6060u: goto label_2c6060;
        case 0x2c6064u: goto label_2c6064;
        case 0x2c6068u: goto label_2c6068;
        case 0x2c606cu: goto label_2c606c;
        case 0x2c6070u: goto label_2c6070;
        case 0x2c6074u: goto label_2c6074;
        case 0x2c6078u: goto label_2c6078;
        case 0x2c607cu: goto label_2c607c;
        case 0x2c6080u: goto label_2c6080;
        case 0x2c6084u: goto label_2c6084;
        case 0x2c6088u: goto label_2c6088;
        case 0x2c608cu: goto label_2c608c;
        case 0x2c6090u: goto label_2c6090;
        case 0x2c6094u: goto label_2c6094;
        case 0x2c6098u: goto label_2c6098;
        case 0x2c609cu: goto label_2c609c;
        case 0x2c60a0u: goto label_2c60a0;
        case 0x2c60a4u: goto label_2c60a4;
        case 0x2c60a8u: goto label_2c60a8;
        case 0x2c60acu: goto label_2c60ac;
        case 0x2c60b0u: goto label_2c60b0;
        case 0x2c60b4u: goto label_2c60b4;
        case 0x2c60b8u: goto label_2c60b8;
        case 0x2c60bcu: goto label_2c60bc;
        case 0x2c60c0u: goto label_2c60c0;
        case 0x2c60c4u: goto label_2c60c4;
        case 0x2c60c8u: goto label_2c60c8;
        case 0x2c60ccu: goto label_2c60cc;
        case 0x2c60d0u: goto label_2c60d0;
        case 0x2c60d4u: goto label_2c60d4;
        case 0x2c60d8u: goto label_2c60d8;
        case 0x2c60dcu: goto label_2c60dc;
        case 0x2c60e0u: goto label_2c60e0;
        case 0x2c60e4u: goto label_2c60e4;
        case 0x2c60e8u: goto label_2c60e8;
        case 0x2c60ecu: goto label_2c60ec;
        case 0x2c60f0u: goto label_2c60f0;
        case 0x2c60f4u: goto label_2c60f4;
        case 0x2c60f8u: goto label_2c60f8;
        case 0x2c60fcu: goto label_2c60fc;
        default: break;
    }

    ctx->pc = 0x2c5f80u;

label_2c5f80:
    // 0x2c5f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c5f84:
    // 0x2c5f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c5f88:
    // 0x2c5f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c5f8c:
    // 0x2c5f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c5f90:
    // 0x2c5f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f94:
    // 0x2c5f94: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c5f98:
    if (ctx->pc == 0x2C5F98u) {
        ctx->pc = 0x2C5F98u;
            // 0x2c5f98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F9Cu;
        goto label_2c5f9c;
    }
    ctx->pc = 0x2C5F94u;
    {
        const bool branch_taken_0x2c5f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F94u;
            // 0x2c5f98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f94) {
            ctx->pc = 0x2C60DCu;
            goto label_2c60dc;
        }
    }
    ctx->pc = 0x2C5F9Cu;
label_2c5f9c:
    // 0x2c5f9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c5fa0:
    // 0x2c5fa0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c5fa4:
    // 0x2c5fa4: 0x24630bf0  addiu       $v1, $v1, 0xBF0
    ctx->pc = 0x2c5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3056));
label_2c5fa8:
    // 0x2c5fa8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c5fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c5fac:
    // 0x2c5fac: 0x24420c28  addiu       $v0, $v0, 0xC28
    ctx->pc = 0x2c5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3112));
label_2c5fb0:
    // 0x2c5fb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c5fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c5fb4:
    // 0x2c5fb4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c5fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c5fb8:
    // 0x2c5fb8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c5fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c5fbc:
    // 0x2c5fbc: 0xc0407c0  jal         func_101F00
label_2c5fc0:
    if (ctx->pc == 0x2C5FC0u) {
        ctx->pc = 0x2C5FC0u;
            // 0x2c5fc0: 0x24a55e80  addiu       $a1, $a1, 0x5E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24192));
        ctx->pc = 0x2C5FC4u;
        goto label_2c5fc4;
    }
    ctx->pc = 0x2C5FBCu;
    SET_GPR_U32(ctx, 31, 0x2C5FC4u);
    ctx->pc = 0x2C5FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FBCu;
            // 0x2c5fc0: 0x24a55e80  addiu       $a1, $a1, 0x5E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FC4u; }
        if (ctx->pc != 0x2C5FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FC4u; }
        if (ctx->pc != 0x2C5FC4u) { return; }
    }
    ctx->pc = 0x2C5FC4u;
label_2c5fc4:
    // 0x2c5fc4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c5fc8:
    // 0x2c5fc8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c5fcc:
    if (ctx->pc == 0x2C5FCCu) {
        ctx->pc = 0x2C5FCCu;
            // 0x2c5fcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C5FD0u;
        goto label_2c5fd0;
    }
    ctx->pc = 0x2C5FC8u;
    {
        const bool branch_taken_0x2c5fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5fc8) {
            ctx->pc = 0x2C5FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FC8u;
            // 0x2c5fcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5FF0u;
            goto label_2c5ff0;
        }
    }
    ctx->pc = 0x2C5FD0u;
label_2c5fd0:
    // 0x2c5fd0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c5fd4:
    // 0x2c5fd4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c5fd8:
    if (ctx->pc == 0x2C5FD8u) {
        ctx->pc = 0x2C5FD8u;
            // 0x2c5fd8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C5FDCu;
        goto label_2c5fdc;
    }
    ctx->pc = 0x2C5FD4u;
    {
        const bool branch_taken_0x2c5fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5fd4) {
            ctx->pc = 0x2C5FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FD4u;
            // 0x2c5fd8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5FECu;
            goto label_2c5fec;
        }
    }
    ctx->pc = 0x2C5FDCu;
label_2c5fdc:
    // 0x2c5fdc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c5fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c5fe0:
    // 0x2c5fe0: 0xc0407c0  jal         func_101F00
label_2c5fe4:
    if (ctx->pc == 0x2C5FE4u) {
        ctx->pc = 0x2C5FE4u;
            // 0x2c5fe4: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->pc = 0x2C5FE8u;
        goto label_2c5fe8;
    }
    ctx->pc = 0x2C5FE0u;
    SET_GPR_U32(ctx, 31, 0x2C5FE8u);
    ctx->pc = 0x2C5FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FE0u;
            // 0x2c5fe4: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FE8u; }
        if (ctx->pc != 0x2C5FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FE8u; }
        if (ctx->pc != 0x2C5FE8u) { return; }
    }
    ctx->pc = 0x2C5FE8u;
label_2c5fe8:
    // 0x2c5fe8: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c5fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c5fec:
    // 0x2c5fec: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c5ff0:
    // 0x2c5ff0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c5ff4:
    if (ctx->pc == 0x2C5FF4u) {
        ctx->pc = 0x2C5FF4u;
            // 0x2c5ff4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C5FF8u;
        goto label_2c5ff8;
    }
    ctx->pc = 0x2C5FF0u;
    {
        const bool branch_taken_0x2c5ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ff0) {
            ctx->pc = 0x2C5FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FF0u;
            // 0x2c5ff4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6020u;
            goto label_2c6020;
        }
    }
    ctx->pc = 0x2C5FF8u;
label_2c5ff8:
    // 0x2c5ff8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c5ffc:
    if (ctx->pc == 0x2C5FFCu) {
        ctx->pc = 0x2C6000u;
        goto label_2c6000;
    }
    ctx->pc = 0x2C5FF8u;
    {
        const bool branch_taken_0x2c5ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ff8) {
            ctx->pc = 0x2C601Cu;
            goto label_2c601c;
        }
    }
    ctx->pc = 0x2C6000u;
label_2c6000:
    // 0x2c6000: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c6004:
    if (ctx->pc == 0x2C6004u) {
        ctx->pc = 0x2C6008u;
        goto label_2c6008;
    }
    ctx->pc = 0x2C6000u;
    {
        const bool branch_taken_0x2c6000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6000) {
            ctx->pc = 0x2C601Cu;
            goto label_2c601c;
        }
    }
    ctx->pc = 0x2C6008u;
label_2c6008:
    // 0x2c6008: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c6008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c600c:
    // 0x2c600c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c6010:
    if (ctx->pc == 0x2C6010u) {
        ctx->pc = 0x2C6014u;
        goto label_2c6014;
    }
    ctx->pc = 0x2C600Cu;
    {
        const bool branch_taken_0x2c600c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c600c) {
            ctx->pc = 0x2C601Cu;
            goto label_2c601c;
        }
    }
    ctx->pc = 0x2C6014u;
label_2c6014:
    // 0x2c6014: 0xc0400a8  jal         func_1002A0
label_2c6018:
    if (ctx->pc == 0x2C6018u) {
        ctx->pc = 0x2C601Cu;
        goto label_2c601c;
    }
    ctx->pc = 0x2C6014u;
    SET_GPR_U32(ctx, 31, 0x2C601Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C601Cu; }
        if (ctx->pc != 0x2C601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C601Cu; }
        if (ctx->pc != 0x2C601Cu) { return; }
    }
    ctx->pc = 0x2C601Cu;
label_2c601c:
    // 0x2c601c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c6020:
    // 0x2c6020: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c6024:
    if (ctx->pc == 0x2C6024u) {
        ctx->pc = 0x2C6024u;
            // 0x2c6024: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C6028u;
        goto label_2c6028;
    }
    ctx->pc = 0x2C6020u;
    {
        const bool branch_taken_0x2c6020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6020) {
            ctx->pc = 0x2C6024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6020u;
            // 0x2c6024: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6050u;
            goto label_2c6050;
        }
    }
    ctx->pc = 0x2C6028u;
label_2c6028:
    // 0x2c6028: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c602c:
    if (ctx->pc == 0x2C602Cu) {
        ctx->pc = 0x2C6030u;
        goto label_2c6030;
    }
    ctx->pc = 0x2C6028u;
    {
        const bool branch_taken_0x2c6028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6028) {
            ctx->pc = 0x2C604Cu;
            goto label_2c604c;
        }
    }
    ctx->pc = 0x2C6030u;
label_2c6030:
    // 0x2c6030: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c6034:
    if (ctx->pc == 0x2C6034u) {
        ctx->pc = 0x2C6038u;
        goto label_2c6038;
    }
    ctx->pc = 0x2C6030u;
    {
        const bool branch_taken_0x2c6030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6030) {
            ctx->pc = 0x2C604Cu;
            goto label_2c604c;
        }
    }
    ctx->pc = 0x2C6038u;
label_2c6038:
    // 0x2c6038: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c6038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c603c:
    // 0x2c603c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c6040:
    if (ctx->pc == 0x2C6040u) {
        ctx->pc = 0x2C6044u;
        goto label_2c6044;
    }
    ctx->pc = 0x2C603Cu;
    {
        const bool branch_taken_0x2c603c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c603c) {
            ctx->pc = 0x2C604Cu;
            goto label_2c604c;
        }
    }
    ctx->pc = 0x2C6044u;
label_2c6044:
    // 0x2c6044: 0xc0400a8  jal         func_1002A0
label_2c6048:
    if (ctx->pc == 0x2C6048u) {
        ctx->pc = 0x2C604Cu;
        goto label_2c604c;
    }
    ctx->pc = 0x2C6044u;
    SET_GPR_U32(ctx, 31, 0x2C604Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C604Cu; }
        if (ctx->pc != 0x2C604Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C604Cu; }
        if (ctx->pc != 0x2C604Cu) { return; }
    }
    ctx->pc = 0x2C604Cu;
label_2c604c:
    // 0x2c604c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c6050:
    // 0x2c6050: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c6054:
    if (ctx->pc == 0x2C6054u) {
        ctx->pc = 0x2C6058u;
        goto label_2c6058;
    }
    ctx->pc = 0x2C6050u;
    {
        const bool branch_taken_0x2c6050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6050) {
            ctx->pc = 0x2C606Cu;
            goto label_2c606c;
        }
    }
    ctx->pc = 0x2C6058u;
label_2c6058:
    // 0x2c6058: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c605c:
    // 0x2c605c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c605cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c6060:
    // 0x2c6060: 0x24630bd8  addiu       $v1, $v1, 0xBD8
    ctx->pc = 0x2c6060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3032));
label_2c6064:
    // 0x2c6064: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c6064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c6068:
    // 0x2c6068: 0xac400dd0  sw          $zero, 0xDD0($v0)
    ctx->pc = 0x2c6068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3536), GPR_U32(ctx, 0));
label_2c606c:
    // 0x2c606c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c6070:
    if (ctx->pc == 0x2C6070u) {
        ctx->pc = 0x2C6070u;
            // 0x2c6070: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C6074u;
        goto label_2c6074;
    }
    ctx->pc = 0x2C606Cu;
    {
        const bool branch_taken_0x2c606c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c606c) {
            ctx->pc = 0x2C6070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C606Cu;
            // 0x2c6070: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C60C8u;
            goto label_2c60c8;
        }
    }
    ctx->pc = 0x2C6074u;
label_2c6074:
    // 0x2c6074: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c6078:
    // 0x2c6078: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c6078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c607c:
    // 0x2c607c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c607cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c6080:
    // 0x2c6080: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c6080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c6084:
    // 0x2c6084: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c6088:
    if (ctx->pc == 0x2C6088u) {
        ctx->pc = 0x2C6088u;
            // 0x2c6088: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C608Cu;
        goto label_2c608c;
    }
    ctx->pc = 0x2C6084u;
    {
        const bool branch_taken_0x2c6084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6084) {
            ctx->pc = 0x2C6088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6084u;
            // 0x2c6088: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C60A0u;
            goto label_2c60a0;
        }
    }
    ctx->pc = 0x2C608Cu;
label_2c608c:
    // 0x2c608c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c608cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c6090:
    // 0x2c6090: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c6090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c6094:
    // 0x2c6094: 0x320f809  jalr        $t9
label_2c6098:
    if (ctx->pc == 0x2C6098u) {
        ctx->pc = 0x2C6098u;
            // 0x2c6098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C609Cu;
        goto label_2c609c;
    }
    ctx->pc = 0x2C6094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C609Cu);
        ctx->pc = 0x2C6098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6094u;
            // 0x2c6098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C609Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C609Cu; }
            if (ctx->pc != 0x2C609Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C609Cu;
label_2c609c:
    // 0x2c609c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c60a0:
    // 0x2c60a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c60a4:
    if (ctx->pc == 0x2C60A4u) {
        ctx->pc = 0x2C60A4u;
            // 0x2c60a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C60A8u;
        goto label_2c60a8;
    }
    ctx->pc = 0x2C60A0u;
    {
        const bool branch_taken_0x2c60a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c60a0) {
            ctx->pc = 0x2C60A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60A0u;
            // 0x2c60a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C60BCu;
            goto label_2c60bc;
        }
    }
    ctx->pc = 0x2C60A8u;
label_2c60a8:
    // 0x2c60a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c60a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c60ac:
    // 0x2c60ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c60acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c60b0:
    // 0x2c60b0: 0x320f809  jalr        $t9
label_2c60b4:
    if (ctx->pc == 0x2C60B4u) {
        ctx->pc = 0x2C60B4u;
            // 0x2c60b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C60B8u;
        goto label_2c60b8;
    }
    ctx->pc = 0x2C60B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C60B8u);
        ctx->pc = 0x2C60B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60B0u;
            // 0x2c60b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C60B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C60B8u; }
            if (ctx->pc != 0x2C60B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C60B8u;
label_2c60b8:
    // 0x2c60b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c60b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c60bc:
    // 0x2c60bc: 0xc075bf8  jal         func_1D6FE0
label_2c60c0:
    if (ctx->pc == 0x2C60C0u) {
        ctx->pc = 0x2C60C0u;
            // 0x2c60c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C60C4u;
        goto label_2c60c4;
    }
    ctx->pc = 0x2C60BCu;
    SET_GPR_U32(ctx, 31, 0x2C60C4u);
    ctx->pc = 0x2C60C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60BCu;
            // 0x2c60c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60C4u; }
        if (ctx->pc != 0x2C60C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60C4u; }
        if (ctx->pc != 0x2C60C4u) { return; }
    }
    ctx->pc = 0x2C60C4u;
label_2c60c4:
    // 0x2c60c4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c60c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c60c8:
    // 0x2c60c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c60c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c60cc:
    // 0x2c60cc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c60d0:
    if (ctx->pc == 0x2C60D0u) {
        ctx->pc = 0x2C60D0u;
            // 0x2c60d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C60D4u;
        goto label_2c60d4;
    }
    ctx->pc = 0x2C60CCu;
    {
        const bool branch_taken_0x2c60cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c60cc) {
            ctx->pc = 0x2C60D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60CCu;
            // 0x2c60d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C60E0u;
            goto label_2c60e0;
        }
    }
    ctx->pc = 0x2C60D4u;
label_2c60d4:
    // 0x2c60d4: 0xc0400a8  jal         func_1002A0
label_2c60d8:
    if (ctx->pc == 0x2C60D8u) {
        ctx->pc = 0x2C60D8u;
            // 0x2c60d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C60DCu;
        goto label_2c60dc;
    }
    ctx->pc = 0x2C60D4u;
    SET_GPR_U32(ctx, 31, 0x2C60DCu);
    ctx->pc = 0x2C60D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60D4u;
            // 0x2c60d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60DCu; }
        if (ctx->pc != 0x2C60DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60DCu; }
        if (ctx->pc != 0x2C60DCu) { return; }
    }
    ctx->pc = 0x2C60DCu;
label_2c60dc:
    // 0x2c60dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c60dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c60e0:
    // 0x2c60e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c60e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c60e4:
    // 0x2c60e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c60e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c60e8:
    // 0x2c60e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c60e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c60ec:
    // 0x2c60ec: 0x3e00008  jr          $ra
label_2c60f0:
    if (ctx->pc == 0x2C60F0u) {
        ctx->pc = 0x2C60F0u;
            // 0x2c60f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C60F4u;
        goto label_2c60f4;
    }
    ctx->pc = 0x2C60ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C60F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60ECu;
            // 0x2c60f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C60F4u;
label_2c60f4:
    // 0x2c60f4: 0x0  nop
    ctx->pc = 0x2c60f4u;
    // NOP
label_2c60f8:
    // 0x2c60f8: 0x0  nop
    ctx->pc = 0x2c60f8u;
    // NOP
label_2c60fc:
    // 0x2c60fc: 0x0  nop
    ctx->pc = 0x2c60fcu;
    // NOP
}
