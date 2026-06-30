#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2F40
// Address: 0x2c2f40 - 0x2c30a0
void sub_002C2F40_0x2c2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2F40_0x2c2f40");
#endif

    switch (ctx->pc) {
        case 0x2c2f40u: goto label_2c2f40;
        case 0x2c2f44u: goto label_2c2f44;
        case 0x2c2f48u: goto label_2c2f48;
        case 0x2c2f4cu: goto label_2c2f4c;
        case 0x2c2f50u: goto label_2c2f50;
        case 0x2c2f54u: goto label_2c2f54;
        case 0x2c2f58u: goto label_2c2f58;
        case 0x2c2f5cu: goto label_2c2f5c;
        case 0x2c2f60u: goto label_2c2f60;
        case 0x2c2f64u: goto label_2c2f64;
        case 0x2c2f68u: goto label_2c2f68;
        case 0x2c2f6cu: goto label_2c2f6c;
        case 0x2c2f70u: goto label_2c2f70;
        case 0x2c2f74u: goto label_2c2f74;
        case 0x2c2f78u: goto label_2c2f78;
        case 0x2c2f7cu: goto label_2c2f7c;
        case 0x2c2f80u: goto label_2c2f80;
        case 0x2c2f84u: goto label_2c2f84;
        case 0x2c2f88u: goto label_2c2f88;
        case 0x2c2f8cu: goto label_2c2f8c;
        case 0x2c2f90u: goto label_2c2f90;
        case 0x2c2f94u: goto label_2c2f94;
        case 0x2c2f98u: goto label_2c2f98;
        case 0x2c2f9cu: goto label_2c2f9c;
        case 0x2c2fa0u: goto label_2c2fa0;
        case 0x2c2fa4u: goto label_2c2fa4;
        case 0x2c2fa8u: goto label_2c2fa8;
        case 0x2c2facu: goto label_2c2fac;
        case 0x2c2fb0u: goto label_2c2fb0;
        case 0x2c2fb4u: goto label_2c2fb4;
        case 0x2c2fb8u: goto label_2c2fb8;
        case 0x2c2fbcu: goto label_2c2fbc;
        case 0x2c2fc0u: goto label_2c2fc0;
        case 0x2c2fc4u: goto label_2c2fc4;
        case 0x2c2fc8u: goto label_2c2fc8;
        case 0x2c2fccu: goto label_2c2fcc;
        case 0x2c2fd0u: goto label_2c2fd0;
        case 0x2c2fd4u: goto label_2c2fd4;
        case 0x2c2fd8u: goto label_2c2fd8;
        case 0x2c2fdcu: goto label_2c2fdc;
        case 0x2c2fe0u: goto label_2c2fe0;
        case 0x2c2fe4u: goto label_2c2fe4;
        case 0x2c2fe8u: goto label_2c2fe8;
        case 0x2c2fecu: goto label_2c2fec;
        case 0x2c2ff0u: goto label_2c2ff0;
        case 0x2c2ff4u: goto label_2c2ff4;
        case 0x2c2ff8u: goto label_2c2ff8;
        case 0x2c2ffcu: goto label_2c2ffc;
        case 0x2c3000u: goto label_2c3000;
        case 0x2c3004u: goto label_2c3004;
        case 0x2c3008u: goto label_2c3008;
        case 0x2c300cu: goto label_2c300c;
        case 0x2c3010u: goto label_2c3010;
        case 0x2c3014u: goto label_2c3014;
        case 0x2c3018u: goto label_2c3018;
        case 0x2c301cu: goto label_2c301c;
        case 0x2c3020u: goto label_2c3020;
        case 0x2c3024u: goto label_2c3024;
        case 0x2c3028u: goto label_2c3028;
        case 0x2c302cu: goto label_2c302c;
        case 0x2c3030u: goto label_2c3030;
        case 0x2c3034u: goto label_2c3034;
        case 0x2c3038u: goto label_2c3038;
        case 0x2c303cu: goto label_2c303c;
        case 0x2c3040u: goto label_2c3040;
        case 0x2c3044u: goto label_2c3044;
        case 0x2c3048u: goto label_2c3048;
        case 0x2c304cu: goto label_2c304c;
        case 0x2c3050u: goto label_2c3050;
        case 0x2c3054u: goto label_2c3054;
        case 0x2c3058u: goto label_2c3058;
        case 0x2c305cu: goto label_2c305c;
        case 0x2c3060u: goto label_2c3060;
        case 0x2c3064u: goto label_2c3064;
        case 0x2c3068u: goto label_2c3068;
        case 0x2c306cu: goto label_2c306c;
        case 0x2c3070u: goto label_2c3070;
        case 0x2c3074u: goto label_2c3074;
        case 0x2c3078u: goto label_2c3078;
        case 0x2c307cu: goto label_2c307c;
        case 0x2c3080u: goto label_2c3080;
        case 0x2c3084u: goto label_2c3084;
        case 0x2c3088u: goto label_2c3088;
        case 0x2c308cu: goto label_2c308c;
        case 0x2c3090u: goto label_2c3090;
        case 0x2c3094u: goto label_2c3094;
        case 0x2c3098u: goto label_2c3098;
        case 0x2c309cu: goto label_2c309c;
        default: break;
    }

    ctx->pc = 0x2c2f40u;

label_2c2f40:
    // 0x2c2f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c2f44:
    // 0x2c2f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c2f48:
    // 0x2c2f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c2f4c:
    // 0x2c2f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c2f50:
    // 0x2c2f50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c2f54:
    // 0x2c2f54: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c2f58:
    if (ctx->pc == 0x2C2F58u) {
        ctx->pc = 0x2C2F58u;
            // 0x2c2f58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F5Cu;
        goto label_2c2f5c;
    }
    ctx->pc = 0x2C2F54u;
    {
        const bool branch_taken_0x2c2f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F54u;
            // 0x2c2f58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f54) {
            ctx->pc = 0x2C3088u;
            goto label_2c3088;
        }
    }
    ctx->pc = 0x2C2F5Cu;
label_2c2f5c:
    // 0x2c2f5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c2f60:
    // 0x2c2f60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2f64:
    // 0x2c2f64: 0x246312c0  addiu       $v1, $v1, 0x12C0
    ctx->pc = 0x2c2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_2c2f68:
    // 0x2c2f68: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c2f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c2f6c:
    // 0x2c2f6c: 0x244212f8  addiu       $v0, $v0, 0x12F8
    ctx->pc = 0x2c2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4856));
label_2c2f70:
    // 0x2c2f70: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c2f74:
    // 0x2c2f74: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c2f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c2f78:
    // 0x2c2f78: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c2f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c2f7c:
    // 0x2c2f7c: 0xc0407c0  jal         func_101F00
label_2c2f80:
    if (ctx->pc == 0x2C2F80u) {
        ctx->pc = 0x2C2F80u;
            // 0x2c2f80: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
        ctx->pc = 0x2C2F84u;
        goto label_2c2f84;
    }
    ctx->pc = 0x2C2F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C2F84u);
    ctx->pc = 0x2C2F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F7Cu;
            // 0x2c2f80: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F84u; }
        if (ctx->pc != 0x2C2F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F84u; }
        if (ctx->pc != 0x2C2F84u) { return; }
    }
    ctx->pc = 0x2C2F84u;
label_2c2f84:
    // 0x2c2f84: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c2f88:
    // 0x2c2f88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c2f8c:
    if (ctx->pc == 0x2C2F8Cu) {
        ctx->pc = 0x2C2F8Cu;
            // 0x2c2f8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C2F90u;
        goto label_2c2f90;
    }
    ctx->pc = 0x2C2F88u;
    {
        const bool branch_taken_0x2c2f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f88) {
            ctx->pc = 0x2C2F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F88u;
            // 0x2c2f8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2F9Cu;
            goto label_2c2f9c;
        }
    }
    ctx->pc = 0x2C2F90u;
label_2c2f90:
    // 0x2c2f90: 0xc07507c  jal         func_1D41F0
label_2c2f94:
    if (ctx->pc == 0x2C2F94u) {
        ctx->pc = 0x2C2F94u;
            // 0x2c2f94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C2F98u;
        goto label_2c2f98;
    }
    ctx->pc = 0x2C2F90u;
    SET_GPR_U32(ctx, 31, 0x2C2F98u);
    ctx->pc = 0x2C2F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F90u;
            // 0x2c2f94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F98u; }
        if (ctx->pc != 0x2C2F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F98u; }
        if (ctx->pc != 0x2C2F98u) { return; }
    }
    ctx->pc = 0x2C2F98u;
label_2c2f98:
    // 0x2c2f98: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c2f9c:
    // 0x2c2f9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c2fa0:
    if (ctx->pc == 0x2C2FA0u) {
        ctx->pc = 0x2C2FA0u;
            // 0x2c2fa0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C2FA4u;
        goto label_2c2fa4;
    }
    ctx->pc = 0x2C2F9Cu;
    {
        const bool branch_taken_0x2c2f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f9c) {
            ctx->pc = 0x2C2FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F9Cu;
            // 0x2c2fa0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2FCCu;
            goto label_2c2fcc;
        }
    }
    ctx->pc = 0x2C2FA4u;
label_2c2fa4:
    // 0x2c2fa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c2fa8:
    if (ctx->pc == 0x2C2FA8u) {
        ctx->pc = 0x2C2FACu;
        goto label_2c2fac;
    }
    ctx->pc = 0x2C2FA4u;
    {
        const bool branch_taken_0x2c2fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fa4) {
            ctx->pc = 0x2C2FC8u;
            goto label_2c2fc8;
        }
    }
    ctx->pc = 0x2C2FACu;
label_2c2fac:
    // 0x2c2fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c2fb0:
    if (ctx->pc == 0x2C2FB0u) {
        ctx->pc = 0x2C2FB4u;
        goto label_2c2fb4;
    }
    ctx->pc = 0x2C2FACu;
    {
        const bool branch_taken_0x2c2fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fac) {
            ctx->pc = 0x2C2FC8u;
            goto label_2c2fc8;
        }
    }
    ctx->pc = 0x2C2FB4u;
label_2c2fb4:
    // 0x2c2fb4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c2fb8:
    // 0x2c2fb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c2fbc:
    if (ctx->pc == 0x2C2FBCu) {
        ctx->pc = 0x2C2FC0u;
        goto label_2c2fc0;
    }
    ctx->pc = 0x2C2FB8u;
    {
        const bool branch_taken_0x2c2fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fb8) {
            ctx->pc = 0x2C2FC8u;
            goto label_2c2fc8;
        }
    }
    ctx->pc = 0x2C2FC0u;
label_2c2fc0:
    // 0x2c2fc0: 0xc0400a8  jal         func_1002A0
label_2c2fc4:
    if (ctx->pc == 0x2C2FC4u) {
        ctx->pc = 0x2C2FC8u;
        goto label_2c2fc8;
    }
    ctx->pc = 0x2C2FC0u;
    SET_GPR_U32(ctx, 31, 0x2C2FC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2FC8u; }
        if (ctx->pc != 0x2C2FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2FC8u; }
        if (ctx->pc != 0x2C2FC8u) { return; }
    }
    ctx->pc = 0x2C2FC8u;
label_2c2fc8:
    // 0x2c2fc8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c2fcc:
    // 0x2c2fcc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c2fd0:
    if (ctx->pc == 0x2C2FD0u) {
        ctx->pc = 0x2C2FD0u;
            // 0x2c2fd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C2FD4u;
        goto label_2c2fd4;
    }
    ctx->pc = 0x2C2FCCu;
    {
        const bool branch_taken_0x2c2fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fcc) {
            ctx->pc = 0x2C2FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2FCCu;
            // 0x2c2fd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2FFCu;
            goto label_2c2ffc;
        }
    }
    ctx->pc = 0x2C2FD4u;
label_2c2fd4:
    // 0x2c2fd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c2fd8:
    if (ctx->pc == 0x2C2FD8u) {
        ctx->pc = 0x2C2FDCu;
        goto label_2c2fdc;
    }
    ctx->pc = 0x2C2FD4u;
    {
        const bool branch_taken_0x2c2fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fd4) {
            ctx->pc = 0x2C2FF8u;
            goto label_2c2ff8;
        }
    }
    ctx->pc = 0x2C2FDCu;
label_2c2fdc:
    // 0x2c2fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c2fe0:
    if (ctx->pc == 0x2C2FE0u) {
        ctx->pc = 0x2C2FE4u;
        goto label_2c2fe4;
    }
    ctx->pc = 0x2C2FDCu;
    {
        const bool branch_taken_0x2c2fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fdc) {
            ctx->pc = 0x2C2FF8u;
            goto label_2c2ff8;
        }
    }
    ctx->pc = 0x2C2FE4u;
label_2c2fe4:
    // 0x2c2fe4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c2fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c2fe8:
    // 0x2c2fe8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c2fec:
    if (ctx->pc == 0x2C2FECu) {
        ctx->pc = 0x2C2FF0u;
        goto label_2c2ff0;
    }
    ctx->pc = 0x2C2FE8u;
    {
        const bool branch_taken_0x2c2fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fe8) {
            ctx->pc = 0x2C2FF8u;
            goto label_2c2ff8;
        }
    }
    ctx->pc = 0x2C2FF0u;
label_2c2ff0:
    // 0x2c2ff0: 0xc0400a8  jal         func_1002A0
label_2c2ff4:
    if (ctx->pc == 0x2C2FF4u) {
        ctx->pc = 0x2C2FF8u;
        goto label_2c2ff8;
    }
    ctx->pc = 0x2C2FF0u;
    SET_GPR_U32(ctx, 31, 0x2C2FF8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2FF8u; }
        if (ctx->pc != 0x2C2FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2FF8u; }
        if (ctx->pc != 0x2C2FF8u) { return; }
    }
    ctx->pc = 0x2C2FF8u;
label_2c2ff8:
    // 0x2c2ff8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c2ffc:
    // 0x2c2ffc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c3000:
    if (ctx->pc == 0x2C3000u) {
        ctx->pc = 0x2C3004u;
        goto label_2c3004;
    }
    ctx->pc = 0x2C2FFCu;
    {
        const bool branch_taken_0x2c2ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ffc) {
            ctx->pc = 0x2C3018u;
            goto label_2c3018;
        }
    }
    ctx->pc = 0x2C3004u;
label_2c3004:
    // 0x2c3004: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c3008:
    // 0x2c3008: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c3008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c300c:
    // 0x2c300c: 0x246312b0  addiu       $v1, $v1, 0x12B0
    ctx->pc = 0x2c300cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4784));
label_2c3010:
    // 0x2c3010: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c3010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c3014:
    // 0x2c3014: 0xac400da0  sw          $zero, 0xDA0($v0)
    ctx->pc = 0x2c3014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3488), GPR_U32(ctx, 0));
label_2c3018:
    // 0x2c3018: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c301c:
    if (ctx->pc == 0x2C301Cu) {
        ctx->pc = 0x2C301Cu;
            // 0x2c301c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C3020u;
        goto label_2c3020;
    }
    ctx->pc = 0x2C3018u;
    {
        const bool branch_taken_0x2c3018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3018) {
            ctx->pc = 0x2C301Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3018u;
            // 0x2c301c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3074u;
            goto label_2c3074;
        }
    }
    ctx->pc = 0x2C3020u;
label_2c3020:
    // 0x2c3020: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3024:
    // 0x2c3024: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c3024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c3028:
    // 0x2c3028: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c3028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c302c:
    // 0x2c302c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c302cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c3030:
    // 0x2c3030: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c3034:
    if (ctx->pc == 0x2C3034u) {
        ctx->pc = 0x2C3034u;
            // 0x2c3034: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C3038u;
        goto label_2c3038;
    }
    ctx->pc = 0x2C3030u;
    {
        const bool branch_taken_0x2c3030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3030) {
            ctx->pc = 0x2C3034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3030u;
            // 0x2c3034: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C304Cu;
            goto label_2c304c;
        }
    }
    ctx->pc = 0x2C3038u;
label_2c3038:
    // 0x2c3038: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c3038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c303c:
    // 0x2c303c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c303cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c3040:
    // 0x2c3040: 0x320f809  jalr        $t9
label_2c3044:
    if (ctx->pc == 0x2C3044u) {
        ctx->pc = 0x2C3044u;
            // 0x2c3044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C3048u;
        goto label_2c3048;
    }
    ctx->pc = 0x2C3040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C3048u);
        ctx->pc = 0x2C3044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3040u;
            // 0x2c3044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C3048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C3048u; }
            if (ctx->pc != 0x2C3048u) { return; }
        }
        }
    }
    ctx->pc = 0x2C3048u;
label_2c3048:
    // 0x2c3048: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c3048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c304c:
    // 0x2c304c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c3050:
    if (ctx->pc == 0x2C3050u) {
        ctx->pc = 0x2C3050u;
            // 0x2c3050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3054u;
        goto label_2c3054;
    }
    ctx->pc = 0x2C304Cu;
    {
        const bool branch_taken_0x2c304c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c304c) {
            ctx->pc = 0x2C3050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C304Cu;
            // 0x2c3050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3068u;
            goto label_2c3068;
        }
    }
    ctx->pc = 0x2C3054u;
label_2c3054:
    // 0x2c3054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c3054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c3058:
    // 0x2c3058: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c3058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c305c:
    // 0x2c305c: 0x320f809  jalr        $t9
label_2c3060:
    if (ctx->pc == 0x2C3060u) {
        ctx->pc = 0x2C3060u;
            // 0x2c3060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C3064u;
        goto label_2c3064;
    }
    ctx->pc = 0x2C305Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C3064u);
        ctx->pc = 0x2C3060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C305Cu;
            // 0x2c3060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C3064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C3064u; }
            if (ctx->pc != 0x2C3064u) { return; }
        }
        }
    }
    ctx->pc = 0x2C3064u;
label_2c3064:
    // 0x2c3064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3068:
    // 0x2c3068: 0xc075bf8  jal         func_1D6FE0
label_2c306c:
    if (ctx->pc == 0x2C306Cu) {
        ctx->pc = 0x2C306Cu;
            // 0x2c306c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3070u;
        goto label_2c3070;
    }
    ctx->pc = 0x2C3068u;
    SET_GPR_U32(ctx, 31, 0x2C3070u);
    ctx->pc = 0x2C306Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3068u;
            // 0x2c306c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3070u; }
        if (ctx->pc != 0x2C3070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3070u; }
        if (ctx->pc != 0x2C3070u) { return; }
    }
    ctx->pc = 0x2C3070u;
label_2c3070:
    // 0x2c3070: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c3070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c3074:
    // 0x2c3074: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c3074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c3078:
    // 0x2c3078: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c307c:
    if (ctx->pc == 0x2C307Cu) {
        ctx->pc = 0x2C307Cu;
            // 0x2c307c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3080u;
        goto label_2c3080;
    }
    ctx->pc = 0x2C3078u;
    {
        const bool branch_taken_0x2c3078 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c3078) {
            ctx->pc = 0x2C307Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3078u;
            // 0x2c307c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C308Cu;
            goto label_2c308c;
        }
    }
    ctx->pc = 0x2C3080u;
label_2c3080:
    // 0x2c3080: 0xc0400a8  jal         func_1002A0
label_2c3084:
    if (ctx->pc == 0x2C3084u) {
        ctx->pc = 0x2C3084u;
            // 0x2c3084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3088u;
        goto label_2c3088;
    }
    ctx->pc = 0x2C3080u;
    SET_GPR_U32(ctx, 31, 0x2C3088u);
    ctx->pc = 0x2C3084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3080u;
            // 0x2c3084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3088u; }
        if (ctx->pc != 0x2C3088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3088u; }
        if (ctx->pc != 0x2C3088u) { return; }
    }
    ctx->pc = 0x2C3088u;
label_2c3088:
    // 0x2c3088: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c3088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c308c:
    // 0x2c308c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3090:
    // 0x2c3090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3094:
    // 0x2c3094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3098:
    // 0x2c3098: 0x3e00008  jr          $ra
label_2c309c:
    if (ctx->pc == 0x2C309Cu) {
        ctx->pc = 0x2C309Cu;
            // 0x2c309c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C30A0u;
        goto label_fallthrough_0x2c3098;
    }
    ctx->pc = 0x2C3098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C309Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3098u;
            // 0x2c309c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c3098:
    ctx->pc = 0x2C30A0u;
}
