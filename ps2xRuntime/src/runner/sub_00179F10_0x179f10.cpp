#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00179F10
// Address: 0x179f10 - 0x179fe0
void sub_00179F10_0x179f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179F10_0x179f10");
#endif

    switch (ctx->pc) {
        case 0x179f10u: goto label_179f10;
        case 0x179f14u: goto label_179f14;
        case 0x179f18u: goto label_179f18;
        case 0x179f1cu: goto label_179f1c;
        case 0x179f20u: goto label_179f20;
        case 0x179f24u: goto label_179f24;
        case 0x179f28u: goto label_179f28;
        case 0x179f2cu: goto label_179f2c;
        case 0x179f30u: goto label_179f30;
        case 0x179f34u: goto label_179f34;
        case 0x179f38u: goto label_179f38;
        case 0x179f3cu: goto label_179f3c;
        case 0x179f40u: goto label_179f40;
        case 0x179f44u: goto label_179f44;
        case 0x179f48u: goto label_179f48;
        case 0x179f4cu: goto label_179f4c;
        case 0x179f50u: goto label_179f50;
        case 0x179f54u: goto label_179f54;
        case 0x179f58u: goto label_179f58;
        case 0x179f5cu: goto label_179f5c;
        case 0x179f60u: goto label_179f60;
        case 0x179f64u: goto label_179f64;
        case 0x179f68u: goto label_179f68;
        case 0x179f6cu: goto label_179f6c;
        case 0x179f70u: goto label_179f70;
        case 0x179f74u: goto label_179f74;
        case 0x179f78u: goto label_179f78;
        case 0x179f7cu: goto label_179f7c;
        case 0x179f80u: goto label_179f80;
        case 0x179f84u: goto label_179f84;
        case 0x179f88u: goto label_179f88;
        case 0x179f8cu: goto label_179f8c;
        case 0x179f90u: goto label_179f90;
        case 0x179f94u: goto label_179f94;
        case 0x179f98u: goto label_179f98;
        case 0x179f9cu: goto label_179f9c;
        case 0x179fa0u: goto label_179fa0;
        case 0x179fa4u: goto label_179fa4;
        case 0x179fa8u: goto label_179fa8;
        case 0x179facu: goto label_179fac;
        case 0x179fb0u: goto label_179fb0;
        case 0x179fb4u: goto label_179fb4;
        case 0x179fb8u: goto label_179fb8;
        case 0x179fbcu: goto label_179fbc;
        case 0x179fc0u: goto label_179fc0;
        case 0x179fc4u: goto label_179fc4;
        case 0x179fc8u: goto label_179fc8;
        case 0x179fccu: goto label_179fcc;
        case 0x179fd0u: goto label_179fd0;
        case 0x179fd4u: goto label_179fd4;
        case 0x179fd8u: goto label_179fd8;
        case 0x179fdcu: goto label_179fdc;
        default: break;
    }

    ctx->pc = 0x179f10u;

label_179f10:
    // 0x179f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_179f14:
    // 0x179f14: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x179f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_179f18:
    // 0x179f18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179f1c:
    // 0x179f1c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x179f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_179f20:
    // 0x179f20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x179f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_179f24:
    // 0x179f24: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x179f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_179f28:
    // 0x179f28: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_179f2c:
    if (ctx->pc == 0x179F2Cu) {
        ctx->pc = 0x179F2Cu;
            // 0x179f2c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->pc = 0x179F30u;
        goto label_179f30;
    }
    ctx->pc = 0x179F28u;
    {
        const bool branch_taken_0x179f28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179F28u;
            // 0x179f2c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f28) {
            ctx->pc = 0x179F40u;
            goto label_179f40;
        }
    }
    ctx->pc = 0x179F30u;
label_179f30:
    // 0x179f30: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179f34:
    // 0x179f34: 0x10000011  b           . + 4 + (0x11 << 2)
label_179f38:
    if (ctx->pc == 0x179F38u) {
        ctx->pc = 0x179F38u;
            // 0x179f38: 0x24845680  addiu       $a0, $a0, 0x5680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22144));
        ctx->pc = 0x179F3Cu;
        goto label_179f3c;
    }
    ctx->pc = 0x179F34u;
    {
        const bool branch_taken_0x179f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179F34u;
            // 0x179f38: 0x24845680  addiu       $a0, $a0, 0x5680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f34) {
            ctx->pc = 0x179F7Cu;
            goto label_179f7c;
        }
    }
    ctx->pc = 0x179F3Cu;
label_179f3c:
    // 0x179f3c: 0x0  nop
    ctx->pc = 0x179f3cu;
    // NOP
label_179f40:
    // 0x179f40: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_179f44:
    if (ctx->pc == 0x179F44u) {
        ctx->pc = 0x179F48u;
        goto label_179f48;
    }
    ctx->pc = 0x179F40u;
    {
        const bool branch_taken_0x179f40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179f40) {
            ctx->pc = 0x179F58u;
            goto label_179f58;
        }
    }
    ctx->pc = 0x179F48u;
label_179f48:
    // 0x179f48: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179f4c:
    // 0x179f4c: 0x1000000b  b           . + 4 + (0xB << 2)
label_179f50:
    if (ctx->pc == 0x179F50u) {
        ctx->pc = 0x179F50u;
            // 0x179f50: 0x248456b0  addiu       $a0, $a0, 0x56B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22192));
        ctx->pc = 0x179F54u;
        goto label_179f54;
    }
    ctx->pc = 0x179F4Cu;
    {
        const bool branch_taken_0x179f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179F4Cu;
            // 0x179f50: 0x248456b0  addiu       $a0, $a0, 0x56B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f4c) {
            ctx->pc = 0x179F7Cu;
            goto label_179f7c;
        }
    }
    ctx->pc = 0x179F54u;
label_179f54:
    // 0x179f54: 0x0  nop
    ctx->pc = 0x179f54u;
    // NOP
label_179f58:
    // 0x179f58: 0xc05e158  jal         func_178560
label_179f5c:
    if (ctx->pc == 0x179F5Cu) {
        ctx->pc = 0x179F60u;
        goto label_179f60;
    }
    ctx->pc = 0x179F58u;
    SET_GPR_U32(ctx, 31, 0x179F60u);
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F60u; }
        if (ctx->pc != 0x179F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F60u; }
        if (ctx->pc != 0x179F60u) { return; }
    }
    ctx->pc = 0x179F60u;
label_179f60:
    // 0x179f60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179f64:
    // 0x179f64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x179f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179f68:
    // 0x179f68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179f6c:
    // 0x179f6c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_179f70:
    if (ctx->pc == 0x179F70u) {
        ctx->pc = 0x179F70u;
            // 0x179f70: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x179F74u;
        goto label_179f74;
    }
    ctx->pc = 0x179F6Cu;
    {
        const bool branch_taken_0x179f6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x179F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179F6Cu;
            // 0x179f70: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f6c) {
            ctx->pc = 0x179F90u;
            goto label_179f90;
        }
    }
    ctx->pc = 0x179F74u;
label_179f74:
    // 0x179f74: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179f78:
    // 0x179f78: 0x248456e0  addiu       $a0, $a0, 0x56E0
    ctx->pc = 0x179f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22240));
label_179f7c:
    // 0x179f7c: 0xc05e0a6  jal         func_178298
label_179f80:
    if (ctx->pc == 0x179F80u) {
        ctx->pc = 0x179F84u;
        goto label_179f84;
    }
    ctx->pc = 0x179F7Cu;
    SET_GPR_U32(ctx, 31, 0x179F84u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F84u; }
        if (ctx->pc != 0x179F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F84u; }
        if (ctx->pc != 0x179F84u) { return; }
    }
    ctx->pc = 0x179F84u;
label_179f84:
    // 0x179f84: 0x1000000f  b           . + 4 + (0xF << 2)
label_179f88:
    if (ctx->pc == 0x179F88u) {
        ctx->pc = 0x179F88u;
            // 0x179f88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x179F8Cu;
        goto label_179f8c;
    }
    ctx->pc = 0x179F84u;
    {
        const bool branch_taken_0x179f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179F84u;
            // 0x179f88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f84) {
            ctx->pc = 0x179FC4u;
            goto label_179fc4;
        }
    }
    ctx->pc = 0x179F8Cu;
label_179f8c:
    // 0x179f8c: 0x0  nop
    ctx->pc = 0x179f8cu;
    // NOP
label_179f90:
    // 0x179f90: 0xc04a576  jal         func_1295D8
label_179f94:
    if (ctx->pc == 0x179F94u) {
        ctx->pc = 0x179F98u;
        goto label_179f98;
    }
    ctx->pc = 0x179F90u;
    SET_GPR_U32(ctx, 31, 0x179F98u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F98u; }
        if (ctx->pc != 0x179F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F98u; }
        if (ctx->pc != 0x179F98u) { return; }
    }
    ctx->pc = 0x179F98u;
label_179f98:
    // 0x179f98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x179f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_179f9c:
    // 0x179f9c: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x179f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_179fa0:
    // 0x179fa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179fa4:
    // 0x179fa4: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x179fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_179fa8:
    // 0x179fa8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x179fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_179fac:
    // 0x179fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179fb0:
    // 0x179fb0: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x179fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_179fb4:
    // 0x179fb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_179fb8:
    if (ctx->pc == 0x179FB8u) {
        ctx->pc = 0x179FB8u;
            // 0x179fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179FBCu;
        goto label_179fbc;
    }
    ctx->pc = 0x179FB4u;
    {
        const bool branch_taken_0x179fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179FB4u;
            // 0x179fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fb4) {
            ctx->pc = 0x179FC4u;
            goto label_179fc4;
        }
    }
    ctx->pc = 0x179FBCu;
label_179fbc:
    // 0x179fbc: 0x60f809  jalr        $v1
label_179fc0:
    if (ctx->pc == 0x179FC0u) {
        ctx->pc = 0x179FC4u;
        goto label_179fc4;
    }
    ctx->pc = 0x179FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x179FC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x179FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179FC4u; }
            if (ctx->pc != 0x179FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x179FC4u;
label_179fc4:
    // 0x179fc4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x179fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_179fc8:
    // 0x179fc8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x179fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_179fcc:
    // 0x179fcc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x179fccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_179fd0:
    // 0x179fd0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x179fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_179fd4:
    // 0x179fd4: 0x3e00008  jr          $ra
label_179fd8:
    if (ctx->pc == 0x179FD8u) {
        ctx->pc = 0x179FD8u;
            // 0x179fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x179FDCu;
        goto label_179fdc;
    }
    ctx->pc = 0x179FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179FD4u;
            // 0x179fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179FDCu;
label_179fdc:
    // 0x179fdc: 0x0  nop
    ctx->pc = 0x179fdcu;
    // NOP
}
