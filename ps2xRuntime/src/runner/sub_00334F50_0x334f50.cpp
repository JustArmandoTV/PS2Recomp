#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00334F50
// Address: 0x334f50 - 0x3351a0
void sub_00334F50_0x334f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334F50_0x334f50");
#endif

    switch (ctx->pc) {
        case 0x334f98u: goto label_334f98;
        case 0x334facu: goto label_334fac;
        case 0x334fb8u: goto label_334fb8;
        case 0x334fc4u: goto label_334fc4;
        case 0x334fccu: goto label_334fcc;
        case 0x334fdcu: goto label_334fdc;
        case 0x334ffcu: goto label_334ffc;
        case 0x335010u: goto label_335010;
        case 0x33501cu: goto label_33501c;
        case 0x335028u: goto label_335028;
        case 0x335030u: goto label_335030;
        case 0x335040u: goto label_335040;
        case 0x33504cu: goto label_33504c;
        case 0x335054u: goto label_335054;
        case 0x335068u: goto label_335068;
        case 0x335094u: goto label_335094;
        case 0x3350a8u: goto label_3350a8;
        case 0x3350b4u: goto label_3350b4;
        case 0x3350c0u: goto label_3350c0;
        case 0x3350c8u: goto label_3350c8;
        case 0x3350d8u: goto label_3350d8;
        case 0x3350f8u: goto label_3350f8;
        case 0x33510cu: goto label_33510c;
        case 0x335118u: goto label_335118;
        case 0x335124u: goto label_335124;
        case 0x33512cu: goto label_33512c;
        case 0x33513cu: goto label_33513c;
        case 0x335148u: goto label_335148;
        case 0x335150u: goto label_335150;
        case 0x335164u: goto label_335164;
        case 0x33517cu: goto label_33517c;
        default: break;
    }

    ctx->pc = 0x334f50u;

label_334f50:
    // 0x334f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x334f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x334f54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x334f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x334f58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x334f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x334f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x334f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x334f60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x334f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x334f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x334f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x334f68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f6c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x334f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x334f70: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x334F70u;
    {
        const bool branch_taken_0x334f70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334F70u;
            // 0x334f74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f70) {
            ctx->pc = 0x335068u;
            goto label_335068;
        }
    }
    ctx->pc = 0x334F78u;
    // 0x334f78: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x334f78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x334f7c: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x334F7Cu;
    {
        const bool branch_taken_0x334f7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f7c) {
            ctx->pc = 0x334F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334F7Cu;
            // 0x334f80: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334FE0u;
            goto label_334fe0;
        }
    }
    ctx->pc = 0x334F84u;
    // 0x334f84: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x334f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x334f88: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x334F88u;
    {
        const bool branch_taken_0x334f88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f88) {
            ctx->pc = 0x334F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334F88u;
            // 0x334f8c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334F9Cu;
            goto label_334f9c;
        }
    }
    ctx->pc = 0x334F90u;
    // 0x334f90: 0xc0cd3d4  jal         func_334F50
    ctx->pc = 0x334F90u;
    SET_GPR_U32(ctx, 31, 0x334F98u);
    ctx->pc = 0x334F50u;
    goto label_334f50;
    ctx->pc = 0x334F98u;
label_334f98:
    // 0x334f98: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x334f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_334f9c:
    // 0x334f9c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x334F9Cu;
    {
        const bool branch_taken_0x334f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f9c) {
            ctx->pc = 0x334FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334F9Cu;
            // 0x334fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334FB0u;
            goto label_334fb0;
        }
    }
    ctx->pc = 0x334FA4u;
    // 0x334fa4: 0xc0cd3d4  jal         func_334F50
    ctx->pc = 0x334FA4u;
    SET_GPR_U32(ctx, 31, 0x334FACu);
    ctx->pc = 0x334FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334FA4u;
            // 0x334fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334F50u;
    goto label_334f50;
    ctx->pc = 0x334FACu;
label_334fac:
    // 0x334fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334fb0:
    // 0x334fb0: 0xc0cd478  jal         func_3351E0
    ctx->pc = 0x334FB0u;
    SET_GPR_U32(ctx, 31, 0x334FB8u);
    ctx->pc = 0x3351E0u;
    if (runtime->hasFunction(0x3351E0u)) {
        auto targetFn = runtime->lookupFunction(0x3351E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334FB8u; }
        if (ctx->pc != 0x334FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351E0_0x3351e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334FB8u; }
        if (ctx->pc != 0x334FB8u) { return; }
    }
    ctx->pc = 0x334FB8u;
label_334fb8:
    // 0x334fb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x334fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fbc: 0xc0cd474  jal         func_3351D0
    ctx->pc = 0x334FBCu;
    SET_GPR_U32(ctx, 31, 0x334FC4u);
    ctx->pc = 0x334FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334FBCu;
            // 0x334fc0: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351D0u;
    if (runtime->hasFunction(0x3351D0u)) {
        auto targetFn = runtime->lookupFunction(0x3351D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334FC4u; }
        if (ctx->pc != 0x334FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351D0_0x3351d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334FC4u; }
        if (ctx->pc != 0x334FC4u) { return; }
    }
    ctx->pc = 0x334FC4u;
label_334fc4:
    // 0x334fc4: 0xc0cd470  jal         func_3351C0
    ctx->pc = 0x334FC4u;
    SET_GPR_U32(ctx, 31, 0x334FCCu);
    ctx->pc = 0x334FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334FC4u;
            // 0x334fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351C0u;
    if (runtime->hasFunction(0x3351C0u)) {
        auto targetFn = runtime->lookupFunction(0x3351C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334FCCu; }
        if (ctx->pc != 0x334FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351C0_0x3351c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334FCCu; }
        if (ctx->pc != 0x334FCCu) { return; }
    }
    ctx->pc = 0x334FCCu;
label_334fcc:
    // 0x334fcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x334fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x334fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fd4: 0xc0cd468  jal         func_3351A0
    ctx->pc = 0x334FD4u;
    SET_GPR_U32(ctx, 31, 0x334FDCu);
    ctx->pc = 0x334FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334FD4u;
            // 0x334fd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351A0u;
    if (runtime->hasFunction(0x3351A0u)) {
        auto targetFn = runtime->lookupFunction(0x3351A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334FDCu; }
        if (ctx->pc != 0x334FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351A0_0x3351a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334FDCu; }
        if (ctx->pc != 0x334FDCu) { return; }
    }
    ctx->pc = 0x334FDCu;
label_334fdc:
    // 0x334fdc: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x334fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_334fe0:
    // 0x334fe0: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x334FE0u;
    {
        const bool branch_taken_0x334fe0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x334fe0) {
            ctx->pc = 0x334FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334FE0u;
            // 0x334fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335044u;
            goto label_335044;
        }
    }
    ctx->pc = 0x334FE8u;
    // 0x334fe8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x334fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x334fec: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x334FECu;
    {
        const bool branch_taken_0x334fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x334fec) {
            ctx->pc = 0x334FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334FECu;
            // 0x334ff0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335000u;
            goto label_335000;
        }
    }
    ctx->pc = 0x334FF4u;
    // 0x334ff4: 0xc0cd3d4  jal         func_334F50
    ctx->pc = 0x334FF4u;
    SET_GPR_U32(ctx, 31, 0x334FFCu);
    ctx->pc = 0x334FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334FF4u;
            // 0x334ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334F50u;
    goto label_334f50;
    ctx->pc = 0x334FFCu;
label_334ffc:
    // 0x334ffc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x334ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_335000:
    // 0x335000: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335000u;
    {
        const bool branch_taken_0x335000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x335000) {
            ctx->pc = 0x335004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335000u;
            // 0x335004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335014u;
            goto label_335014;
        }
    }
    ctx->pc = 0x335008u;
    // 0x335008: 0xc0cd3d4  jal         func_334F50
    ctx->pc = 0x335008u;
    SET_GPR_U32(ctx, 31, 0x335010u);
    ctx->pc = 0x33500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335008u;
            // 0x33500c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334F50u;
    goto label_334f50;
    ctx->pc = 0x335010u;
label_335010:
    // 0x335010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x335010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_335014:
    // 0x335014: 0xc0cd478  jal         func_3351E0
    ctx->pc = 0x335014u;
    SET_GPR_U32(ctx, 31, 0x33501Cu);
    ctx->pc = 0x3351E0u;
    if (runtime->hasFunction(0x3351E0u)) {
        auto targetFn = runtime->lookupFunction(0x3351E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33501Cu; }
        if (ctx->pc != 0x33501Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351E0_0x3351e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33501Cu; }
        if (ctx->pc != 0x33501Cu) { return; }
    }
    ctx->pc = 0x33501Cu;
label_33501c:
    // 0x33501c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33501cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335020: 0xc0cd474  jal         func_3351D0
    ctx->pc = 0x335020u;
    SET_GPR_U32(ctx, 31, 0x335028u);
    ctx->pc = 0x335024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335020u;
            // 0x335024: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351D0u;
    if (runtime->hasFunction(0x3351D0u)) {
        auto targetFn = runtime->lookupFunction(0x3351D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335028u; }
        if (ctx->pc != 0x335028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351D0_0x3351d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335028u; }
        if (ctx->pc != 0x335028u) { return; }
    }
    ctx->pc = 0x335028u;
label_335028:
    // 0x335028: 0xc0cd470  jal         func_3351C0
    ctx->pc = 0x335028u;
    SET_GPR_U32(ctx, 31, 0x335030u);
    ctx->pc = 0x33502Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335028u;
            // 0x33502c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351C0u;
    if (runtime->hasFunction(0x3351C0u)) {
        auto targetFn = runtime->lookupFunction(0x3351C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335030u; }
        if (ctx->pc != 0x335030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351C0_0x3351c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335030u; }
        if (ctx->pc != 0x335030u) { return; }
    }
    ctx->pc = 0x335030u;
label_335030:
    // 0x335030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x335030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x335034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335038: 0xc0cd468  jal         func_3351A0
    ctx->pc = 0x335038u;
    SET_GPR_U32(ctx, 31, 0x335040u);
    ctx->pc = 0x33503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335038u;
            // 0x33503c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351A0u;
    if (runtime->hasFunction(0x3351A0u)) {
        auto targetFn = runtime->lookupFunction(0x3351A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335040u; }
        if (ctx->pc != 0x335040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351A0_0x3351a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335040u; }
        if (ctx->pc != 0x335040u) { return; }
    }
    ctx->pc = 0x335040u;
label_335040:
    // 0x335040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x335040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_335044:
    // 0x335044: 0xc0cd478  jal         func_3351E0
    ctx->pc = 0x335044u;
    SET_GPR_U32(ctx, 31, 0x33504Cu);
    ctx->pc = 0x3351E0u;
    if (runtime->hasFunction(0x3351E0u)) {
        auto targetFn = runtime->lookupFunction(0x3351E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33504Cu; }
        if (ctx->pc != 0x33504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351E0_0x3351e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33504Cu; }
        if (ctx->pc != 0x33504Cu) { return; }
    }
    ctx->pc = 0x33504Cu;
label_33504c:
    // 0x33504c: 0xc0cd470  jal         func_3351C0
    ctx->pc = 0x33504Cu;
    SET_GPR_U32(ctx, 31, 0x335054u);
    ctx->pc = 0x335050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33504Cu;
            // 0x335050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351C0u;
    if (runtime->hasFunction(0x3351C0u)) {
        auto targetFn = runtime->lookupFunction(0x3351C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335054u; }
        if (ctx->pc != 0x335054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351C0_0x3351c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335054u; }
        if (ctx->pc != 0x335054u) { return; }
    }
    ctx->pc = 0x335054u;
label_335054:
    // 0x335054: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x335054u;
    {
        const bool branch_taken_0x335054 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x335054) {
            ctx->pc = 0x335058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335054u;
            // 0x335058: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33506Cu;
            goto label_33506c;
        }
    }
    ctx->pc = 0x33505Cu;
    // 0x33505c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33505cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335060: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x335060u;
    SET_GPR_U32(ctx, 31, 0x335068u);
    ctx->pc = 0x335064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335060u;
            // 0x335064: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335068u; }
        if (ctx->pc != 0x335068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335068u; }
        if (ctx->pc != 0x335068u) { return; }
    }
    ctx->pc = 0x335068u;
label_335068:
    // 0x335068: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x335068u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33506c:
    // 0x33506c: 0x5260003e  beql        $s3, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x33506Cu;
    {
        const bool branch_taken_0x33506c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x33506c) {
            ctx->pc = 0x335070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33506Cu;
            // 0x335070: 0x26230008  addiu       $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335168u;
            goto label_335168;
        }
    }
    ctx->pc = 0x335074u;
    // 0x335074: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x335074u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x335078: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x335078u;
    {
        const bool branch_taken_0x335078 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x335078) {
            ctx->pc = 0x33507Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335078u;
            // 0x33507c: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3350DCu;
            goto label_3350dc;
        }
    }
    ctx->pc = 0x335080u;
    // 0x335080: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x335080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x335084: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335084u;
    {
        const bool branch_taken_0x335084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x335084) {
            ctx->pc = 0x335088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335084u;
            // 0x335088: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335098u;
            goto label_335098;
        }
    }
    ctx->pc = 0x33508Cu;
    // 0x33508c: 0xc0cd3d4  jal         func_334F50
    ctx->pc = 0x33508Cu;
    SET_GPR_U32(ctx, 31, 0x335094u);
    ctx->pc = 0x335090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33508Cu;
            // 0x335090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334F50u;
    goto label_334f50;
    ctx->pc = 0x335094u;
label_335094:
    // 0x335094: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x335094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_335098:
    // 0x335098: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335098u;
    {
        const bool branch_taken_0x335098 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x335098) {
            ctx->pc = 0x33509Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335098u;
            // 0x33509c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3350ACu;
            goto label_3350ac;
        }
    }
    ctx->pc = 0x3350A0u;
    // 0x3350a0: 0xc0cd3d4  jal         func_334F50
    ctx->pc = 0x3350A0u;
    SET_GPR_U32(ctx, 31, 0x3350A8u);
    ctx->pc = 0x3350A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3350A0u;
            // 0x3350a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334F50u;
    goto label_334f50;
    ctx->pc = 0x3350A8u;
label_3350a8:
    // 0x3350a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3350a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3350ac:
    // 0x3350ac: 0xc0cd478  jal         func_3351E0
    ctx->pc = 0x3350ACu;
    SET_GPR_U32(ctx, 31, 0x3350B4u);
    ctx->pc = 0x3351E0u;
    if (runtime->hasFunction(0x3351E0u)) {
        auto targetFn = runtime->lookupFunction(0x3351E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3350B4u; }
        if (ctx->pc != 0x3350B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351E0_0x3351e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3350B4u; }
        if (ctx->pc != 0x3350B4u) { return; }
    }
    ctx->pc = 0x3350B4u;
label_3350b4:
    // 0x3350b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3350b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350b8: 0xc0cd474  jal         func_3351D0
    ctx->pc = 0x3350B8u;
    SET_GPR_U32(ctx, 31, 0x3350C0u);
    ctx->pc = 0x3350BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3350B8u;
            // 0x3350bc: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351D0u;
    if (runtime->hasFunction(0x3351D0u)) {
        auto targetFn = runtime->lookupFunction(0x3351D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3350C0u; }
        if (ctx->pc != 0x3350C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351D0_0x3351d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3350C0u; }
        if (ctx->pc != 0x3350C0u) { return; }
    }
    ctx->pc = 0x3350C0u;
label_3350c0:
    // 0x3350c0: 0xc0cd470  jal         func_3351C0
    ctx->pc = 0x3350C0u;
    SET_GPR_U32(ctx, 31, 0x3350C8u);
    ctx->pc = 0x3350C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3350C0u;
            // 0x3350c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351C0u;
    if (runtime->hasFunction(0x3351C0u)) {
        auto targetFn = runtime->lookupFunction(0x3351C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3350C8u; }
        if (ctx->pc != 0x3350C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351C0_0x3351c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3350C8u; }
        if (ctx->pc != 0x3350C8u) { return; }
    }
    ctx->pc = 0x3350C8u;
label_3350c8:
    // 0x3350c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3350c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3350ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350d0: 0xc0cd468  jal         func_3351A0
    ctx->pc = 0x3350D0u;
    SET_GPR_U32(ctx, 31, 0x3350D8u);
    ctx->pc = 0x3350D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3350D0u;
            // 0x3350d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351A0u;
    if (runtime->hasFunction(0x3351A0u)) {
        auto targetFn = runtime->lookupFunction(0x3351A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3350D8u; }
        if (ctx->pc != 0x3350D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351A0_0x3351a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3350D8u; }
        if (ctx->pc != 0x3350D8u) { return; }
    }
    ctx->pc = 0x3350D8u;
label_3350d8:
    // 0x3350d8: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x3350d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3350dc:
    // 0x3350dc: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3350DCu;
    {
        const bool branch_taken_0x3350dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3350dc) {
            ctx->pc = 0x3350E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3350DCu;
            // 0x3350e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335140u;
            goto label_335140;
        }
    }
    ctx->pc = 0x3350E4u;
    // 0x3350e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3350e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3350e8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3350E8u;
    {
        const bool branch_taken_0x3350e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3350e8) {
            ctx->pc = 0x3350ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3350E8u;
            // 0x3350ec: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3350FCu;
            goto label_3350fc;
        }
    }
    ctx->pc = 0x3350F0u;
    // 0x3350f0: 0xc0cd3d4  jal         func_334F50
    ctx->pc = 0x3350F0u;
    SET_GPR_U32(ctx, 31, 0x3350F8u);
    ctx->pc = 0x3350F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3350F0u;
            // 0x3350f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334F50u;
    goto label_334f50;
    ctx->pc = 0x3350F8u;
label_3350f8:
    // 0x3350f8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3350f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3350fc:
    // 0x3350fc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3350FCu;
    {
        const bool branch_taken_0x3350fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3350fc) {
            ctx->pc = 0x335100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3350FCu;
            // 0x335100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335110u;
            goto label_335110;
        }
    }
    ctx->pc = 0x335104u;
    // 0x335104: 0xc0cd3d4  jal         func_334F50
    ctx->pc = 0x335104u;
    SET_GPR_U32(ctx, 31, 0x33510Cu);
    ctx->pc = 0x335108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335104u;
            // 0x335108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334F50u;
    goto label_334f50;
    ctx->pc = 0x33510Cu;
label_33510c:
    // 0x33510c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33510cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_335110:
    // 0x335110: 0xc0cd478  jal         func_3351E0
    ctx->pc = 0x335110u;
    SET_GPR_U32(ctx, 31, 0x335118u);
    ctx->pc = 0x3351E0u;
    if (runtime->hasFunction(0x3351E0u)) {
        auto targetFn = runtime->lookupFunction(0x3351E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335118u; }
        if (ctx->pc != 0x335118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351E0_0x3351e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335118u; }
        if (ctx->pc != 0x335118u) { return; }
    }
    ctx->pc = 0x335118u;
label_335118:
    // 0x335118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x335118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33511c: 0xc0cd474  jal         func_3351D0
    ctx->pc = 0x33511Cu;
    SET_GPR_U32(ctx, 31, 0x335124u);
    ctx->pc = 0x335120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33511Cu;
            // 0x335120: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351D0u;
    if (runtime->hasFunction(0x3351D0u)) {
        auto targetFn = runtime->lookupFunction(0x3351D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335124u; }
        if (ctx->pc != 0x335124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351D0_0x3351d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335124u; }
        if (ctx->pc != 0x335124u) { return; }
    }
    ctx->pc = 0x335124u;
label_335124:
    // 0x335124: 0xc0cd470  jal         func_3351C0
    ctx->pc = 0x335124u;
    SET_GPR_U32(ctx, 31, 0x33512Cu);
    ctx->pc = 0x335128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335124u;
            // 0x335128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351C0u;
    if (runtime->hasFunction(0x3351C0u)) {
        auto targetFn = runtime->lookupFunction(0x3351C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33512Cu; }
        if (ctx->pc != 0x33512Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351C0_0x3351c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33512Cu; }
        if (ctx->pc != 0x33512Cu) { return; }
    }
    ctx->pc = 0x33512Cu;
label_33512c:
    // 0x33512c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335130: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x335130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335134: 0xc0cd468  jal         func_3351A0
    ctx->pc = 0x335134u;
    SET_GPR_U32(ctx, 31, 0x33513Cu);
    ctx->pc = 0x335138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335134u;
            // 0x335138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351A0u;
    if (runtime->hasFunction(0x3351A0u)) {
        auto targetFn = runtime->lookupFunction(0x3351A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33513Cu; }
        if (ctx->pc != 0x33513Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351A0_0x3351a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33513Cu; }
        if (ctx->pc != 0x33513Cu) { return; }
    }
    ctx->pc = 0x33513Cu;
label_33513c:
    // 0x33513c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_335140:
    // 0x335140: 0xc0cd478  jal         func_3351E0
    ctx->pc = 0x335140u;
    SET_GPR_U32(ctx, 31, 0x335148u);
    ctx->pc = 0x3351E0u;
    if (runtime->hasFunction(0x3351E0u)) {
        auto targetFn = runtime->lookupFunction(0x3351E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335148u; }
        if (ctx->pc != 0x335148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351E0_0x3351e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335148u; }
        if (ctx->pc != 0x335148u) { return; }
    }
    ctx->pc = 0x335148u;
label_335148:
    // 0x335148: 0xc0cd470  jal         func_3351C0
    ctx->pc = 0x335148u;
    SET_GPR_U32(ctx, 31, 0x335150u);
    ctx->pc = 0x33514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335148u;
            // 0x33514c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351C0u;
    if (runtime->hasFunction(0x3351C0u)) {
        auto targetFn = runtime->lookupFunction(0x3351C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335150u; }
        if (ctx->pc != 0x335150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351C0_0x3351c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335150u; }
        if (ctx->pc != 0x335150u) { return; }
    }
    ctx->pc = 0x335150u;
label_335150:
    // 0x335150: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x335150u;
    {
        const bool branch_taken_0x335150 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x335150) {
            ctx->pc = 0x335164u;
            goto label_335164;
        }
    }
    ctx->pc = 0x335158u;
    // 0x335158: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x335158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33515c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x33515Cu;
    SET_GPR_U32(ctx, 31, 0x335164u);
    ctx->pc = 0x335160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33515Cu;
            // 0x335160: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335164u; }
        if (ctx->pc != 0x335164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335164u; }
        if (ctx->pc != 0x335164u) { return; }
    }
    ctx->pc = 0x335164u;
label_335164:
    // 0x335164: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x335164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_335168:
    // 0x335168: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x335168u;
    {
        const bool branch_taken_0x335168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x335168) {
            ctx->pc = 0x33516Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335168u;
            // 0x33516c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335180u;
            goto label_335180;
        }
    }
    ctx->pc = 0x335170u;
    // 0x335170: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x335170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335174: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x335174u;
    SET_GPR_U32(ctx, 31, 0x33517Cu);
    ctx->pc = 0x335178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335174u;
            // 0x335178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33517Cu; }
        if (ctx->pc != 0x33517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33517Cu; }
        if (ctx->pc != 0x33517Cu) { return; }
    }
    ctx->pc = 0x33517Cu;
label_33517c:
    // 0x33517c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33517cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_335180:
    // 0x335180: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x335180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335184: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x335184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x335188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33518c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33518cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335190: 0x3e00008  jr          $ra
    ctx->pc = 0x335190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335190u;
            // 0x335194: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335198u;
    // 0x335198: 0x0  nop
    ctx->pc = 0x335198u;
    // NOP
    // 0x33519c: 0x0  nop
    ctx->pc = 0x33519cu;
    // NOP
}
