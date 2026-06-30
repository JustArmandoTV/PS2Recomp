#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2F08
// Address: 0x1b2f08 - 0x1b2fe8
void sub_001B2F08_0x1b2f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2F08_0x1b2f08");
#endif

    switch (ctx->pc) {
        case 0x1b2f20u: goto label_1b2f20;
        case 0x1b2f34u: goto label_1b2f34;
        case 0x1b2f48u: goto label_1b2f48;
        case 0x1b2f5cu: goto label_1b2f5c;
        case 0x1b2f70u: goto label_1b2f70;
        case 0x1b2f90u: goto label_1b2f90;
        case 0x1b2fa8u: goto label_1b2fa8;
        case 0x1b2fbcu: goto label_1b2fbc;
        case 0x1b2fd0u: goto label_1b2fd0;
        default: break;
    }

    ctx->pc = 0x1b2f08u;

    // 0x1b2f08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2f0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b2f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b2f10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b2f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b2f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b2f18: 0xc06cbfa  jal         func_1B2FE8
    ctx->pc = 0x1B2F18u;
    SET_GPR_U32(ctx, 31, 0x1B2F20u);
    ctx->pc = 0x1B2F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F18u;
            // 0x1b2f1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2FE8u;
    if (runtime->hasFunction(0x1B2FE8u)) {
        auto targetFn = runtime->lookupFunction(0x1B2FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F20u; }
        if (ctx->pc != 0x1B2F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2FE8_0x1b2fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F20u; }
        if (ctx->pc != 0x1B2F20u) { return; }
    }
    ctx->pc = 0x1B2F20u;
label_1b2f20:
    // 0x1b2f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f24: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B2F24u;
    {
        const bool branch_taken_0x1b2f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F24u;
            // 0x1b2f28: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f24) {
            ctx->pc = 0x1B2F78u;
            goto label_1b2f78;
        }
    }
    ctx->pc = 0x1B2F2Cu;
    // 0x1b2f2c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B2F34u);
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F34u; }
        if (ctx->pc != 0x1B2F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F34u; }
        if (ctx->pc != 0x1B2F34u) { return; }
    }
    ctx->pc = 0x1B2F34u;
label_1b2f34:
    // 0x1b2f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2f38: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2F38u;
    {
        const bool branch_taken_0x1b2f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B2F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F38u;
            // 0x1b2f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f38) {
            ctx->pc = 0x1B2F50u;
            goto label_1b2f50;
        }
    }
    ctx->pc = 0x1B2F40u;
    // 0x1b2f40: 0xc06cc22  jal         func_1B3088
    ctx->pc = 0x1B2F40u;
    SET_GPR_U32(ctx, 31, 0x1B2F48u);
    ctx->pc = 0x1B3088u;
    if (runtime->hasFunction(0x1B3088u)) {
        auto targetFn = runtime->lookupFunction(0x1B3088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F48u; }
        if (ctx->pc != 0x1B2F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3088_0x1b3088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F48u; }
        if (ctx->pc != 0x1B2F48u) { return; }
    }
    ctx->pc = 0x1B2F48u;
label_1b2f48:
    // 0x1b2f48: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B2F48u;
    {
        const bool branch_taken_0x1b2f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F48u;
            // 0x1b2f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f48) {
            ctx->pc = 0x1B2FD4u;
            goto label_1b2fd4;
        }
    }
    ctx->pc = 0x1B2F50u;
label_1b2f50:
    // 0x1b2f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f54: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2F54u;
    SET_GPR_U32(ctx, 31, 0x1B2F5Cu);
    ctx->pc = 0x1B2F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F54u;
            // 0x1b2f58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F5Cu; }
        if (ctx->pc != 0x1B2F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F5Cu; }
        if (ctx->pc != 0x1B2F5Cu) { return; }
    }
    ctx->pc = 0x1B2F5Cu;
label_1b2f5c:
    // 0x1b2f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2f60: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2F60u;
    {
        const bool branch_taken_0x1b2f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B2F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F60u;
            // 0x1b2f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f60) {
            ctx->pc = 0x1B2F80u;
            goto label_1b2f80;
        }
    }
    ctx->pc = 0x1B2F68u;
    // 0x1b2f68: 0xc06cc50  jal         func_1B3140
    ctx->pc = 0x1B2F68u;
    SET_GPR_U32(ctx, 31, 0x1B2F70u);
    ctx->pc = 0x1B3140u;
    if (runtime->hasFunction(0x1B3140u)) {
        auto targetFn = runtime->lookupFunction(0x1B3140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F70u; }
        if (ctx->pc != 0x1B2F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3140_0x1b3140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F70u; }
        if (ctx->pc != 0x1B2F70u) { return; }
    }
    ctx->pc = 0x1B2F70u;
label_1b2f70:
    // 0x1b2f70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2F70u;
    {
        const bool branch_taken_0x1b2f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f70) {
            ctx->pc = 0x1B2F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F70u;
            // 0x1b2f74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2F84u;
            goto label_1b2f84;
        }
    }
    ctx->pc = 0x1B2F78u;
label_1b2f78:
    // 0x1b2f78: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B2F78u;
    {
        const bool branch_taken_0x1b2f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F78u;
            // 0x1b2f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f78) {
            ctx->pc = 0x1B2FD4u;
            goto label_1b2fd4;
        }
    }
    ctx->pc = 0x1B2F80u;
label_1b2f80:
    // 0x1b2f80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b2f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b2f84:
    // 0x1b2f84: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1b2f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b2f88: 0xc06dbb6  jal         func_1B6ED8
    ctx->pc = 0x1B2F88u;
    SET_GPR_U32(ctx, 31, 0x1B2F90u);
    ctx->pc = 0x1B2F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F88u;
            // 0x1b2f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (runtime->hasFunction(0x1B6ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F90u; }
        if (ctx->pc != 0x1B2F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6ED8_0x1b6ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F90u; }
        if (ctx->pc != 0x1B2F90u) { return; }
    }
    ctx->pc = 0x1B2F90u;
label_1b2f90:
    // 0x1b2f90: 0x26230d88  addiu       $v1, $s1, 0xD88
    ctx->pc = 0x1b2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
    // 0x1b2f94: 0x8c700288  lw          $s0, 0x288($v1)
    ctx->pc = 0x1b2f94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x1b2f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f9c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1b2f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1b2fa0: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2FA0u;
    SET_GPR_U32(ctx, 31, 0x1B2FA8u);
    ctx->pc = 0x1B2FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FA0u;
            // 0x1b2fa4: 0x8c710284  lw          $s1, 0x284($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FA8u; }
        if (ctx->pc != 0x1B2FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FA8u; }
        if (ctx->pc != 0x1B2FA8u) { return; }
    }
    ctx->pc = 0x1B2FA8u;
label_1b2fa8:
    // 0x1b2fa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fac: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x1b2facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x1b2fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b2fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fb4: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B2FB4u;
    SET_GPR_U32(ctx, 31, 0x1B2FBCu);
    ctx->pc = 0x1B2FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FB4u;
            // 0x1b2fb8: 0x34c64240  ori         $a2, $a2, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FBCu; }
        if (ctx->pc != 0x1B2FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FBCu; }
        if (ctx->pc != 0x1B2FBCu) { return; }
    }
    ctx->pc = 0x1B2FBCu;
label_1b2fbc:
    // 0x1b2fbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b2fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fc0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b2fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2fc4: 0x2223023  subu        $a2, $s1, $v0
    ctx->pc = 0x1b2fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b2fc8: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B2FC8u;
    SET_GPR_U32(ctx, 31, 0x1B2FD0u);
    ctx->pc = 0x1B2FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FC8u;
            // 0x1b2fcc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FD0u; }
        if (ctx->pc != 0x1B2FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FD0u; }
        if (ctx->pc != 0x1B2FD0u) { return; }
    }
    ctx->pc = 0x1B2FD0u;
label_1b2fd0:
    // 0x1b2fd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b2fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b2fd4:
    // 0x1b2fd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2fd8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b2fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2fdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FE0u;
            // 0x1b2fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2FE8u;
}
