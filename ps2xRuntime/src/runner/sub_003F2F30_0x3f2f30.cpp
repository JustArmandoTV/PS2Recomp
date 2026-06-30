#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F2F30
// Address: 0x3f2f30 - 0x3f3050
void sub_003F2F30_0x3f2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2F30_0x3f2f30");
#endif

    switch (ctx->pc) {
        case 0x3f2f58u: goto label_3f2f58;
        case 0x3f2f7cu: goto label_3f2f7c;
        case 0x3f2fa0u: goto label_3f2fa0;
        case 0x3f2fbcu: goto label_3f2fbc;
        case 0x3f2fd0u: goto label_3f2fd0;
        case 0x3f3014u: goto label_3f3014;
        default: break;
    }

    ctx->pc = 0x3f2f30u;

    // 0x3f2f30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f2f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3f2f34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f2f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f2f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f2f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f2f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f2f40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f2f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f2f48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f2f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f2f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f50: 0xc0b6458  jal         func_2D9160
    ctx->pc = 0x3F2F50u;
    SET_GPR_U32(ctx, 31, 0x3F2F58u);
    ctx->pc = 0x3F2F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2F50u;
            // 0x3f2f54: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9160u;
    if (runtime->hasFunction(0x2D9160u)) {
        auto targetFn = runtime->lookupFunction(0x2D9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2F58u; }
        if (ctx->pc != 0x3F2F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9160_0x2d9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2F58u; }
        if (ctx->pc != 0x3F2F58u) { return; }
    }
    ctx->pc = 0x3F2F58u;
label_3f2f58:
    // 0x3f2f58: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x3F2F58u;
    {
        const bool branch_taken_0x3f2f58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2f58) {
            ctx->pc = 0x3F2F88u;
            goto label_3f2f88;
        }
    }
    ctx->pc = 0x3F2F60u;
    // 0x3f2f60: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3f2f60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x3f2f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f2f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f68: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3F2F68u;
    {
        const bool branch_taken_0x3f2f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2F68u;
            // 0x3f2f6c: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2f68) {
            ctx->pc = 0x3F3030u;
            goto label_3f3030;
        }
    }
    ctx->pc = 0x3F2F70u;
    // 0x3f2f70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3f2f74: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x3F2F74u;
    SET_GPR_U32(ctx, 31, 0x3F2F7Cu);
    ctx->pc = 0x3F2F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2F74u;
            // 0x3f2f78: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2F7Cu; }
        if (ctx->pc != 0x3F2F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2F7Cu; }
        if (ctx->pc != 0x3F2F7Cu) { return; }
    }
    ctx->pc = 0x3F2F7Cu;
label_3f2f7c:
    // 0x3f2f7c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3f2f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x3f2f80: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3F2F80u;
    {
        const bool branch_taken_0x3f2f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2F80u;
            // 0x3f2f84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2f80) {
            ctx->pc = 0x3F3034u;
            goto label_3f3034;
        }
    }
    ctx->pc = 0x3F2F88u;
label_3f2f88:
    // 0x3f2f88: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2F88u;
    {
        const bool branch_taken_0x3f2f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2f88) {
            ctx->pc = 0x3F2F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2F88u;
            // 0x3f2f8c: 0xae510008  sw          $s1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2FACu;
            goto label_3f2fac;
        }
    }
    ctx->pc = 0x3F2F90u;
    // 0x3f2f90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f2f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2f94: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x3f2f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3f2f98: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x3F2F98u;
    SET_GPR_U32(ctx, 31, 0x3F2FA0u);
    ctx->pc = 0x3F2F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2F98u;
            // 0x3f2f9c: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2FA0u; }
        if (ctx->pc != 0x3F2FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2FA0u; }
        if (ctx->pc != 0x3F2FA0u) { return; }
    }
    ctx->pc = 0x3F2FA0u;
label_3f2fa0:
    // 0x3f2fa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F2FA0u;
    {
        const bool branch_taken_0x3f2fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2FA0u;
            // 0x3f2fa4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2fa0) {
            ctx->pc = 0x3F2FB0u;
            goto label_3f2fb0;
        }
    }
    ctx->pc = 0x3F2FA8u;
    // 0x3f2fa8: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x3f2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_3f2fac:
    // 0x3f2fac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3f2facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3f2fb0:
    // 0x3f2fb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3f2fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f2fb4: 0xc0fcd14  jal         func_3F3450
    ctx->pc = 0x3F2FB4u;
    SET_GPR_U32(ctx, 31, 0x3F2FBCu);
    ctx->pc = 0x3F2FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2FB4u;
            // 0x3f2fb8: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3450u;
    if (runtime->hasFunction(0x3F3450u)) {
        auto targetFn = runtime->lookupFunction(0x3F3450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2FBCu; }
        if (ctx->pc != 0x3F2FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3450_0x3f3450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2FBCu; }
        if (ctx->pc != 0x3F2FBCu) { return; }
    }
    ctx->pc = 0x3F2FBCu;
label_3f2fbc:
    // 0x3f2fbc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3f2fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3f2fc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f2fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f2fc4: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F2FC4u;
    {
        const bool branch_taken_0x3f2fc4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F2FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2FC4u;
            // 0x3f2fc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2fc4) {
            ctx->pc = 0x3F3030u;
            goto label_3f3030;
        }
    }
    ctx->pc = 0x3F2FCCu;
    // 0x3f2fcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f2fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2fd0:
    // 0x3f2fd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3f2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3f2fd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f2fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2fd8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x3f2fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3f2fdc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3f2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3f2fe0: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x3f2fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3f2fe4: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x3f2fe4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3f2fe8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x3f2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x3f2fec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3f2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3f2ff0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3f2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3f2ff4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3f2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3f2ff8: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x3f2ff8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x3f2ffc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3f2ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x3f3000: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f3000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3f3004: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3f3004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3f3008: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3f3008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3f300c: 0xc0fcc14  jal         func_3F3050
    ctx->pc = 0x3F300Cu;
    SET_GPR_U32(ctx, 31, 0x3F3014u);
    ctx->pc = 0x3F3010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F300Cu;
            // 0x3f3010: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3050u;
    if (runtime->hasFunction(0x3F3050u)) {
        auto targetFn = runtime->lookupFunction(0x3F3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3014u; }
        if (ctx->pc != 0x3F3014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3050_0x3f3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3014u; }
        if (ctx->pc != 0x3F3014u) { return; }
    }
    ctx->pc = 0x3F3014u;
label_3f3014:
    // 0x3f3014: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3f3014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3f3018: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f3018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f301c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f3020: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f3020u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f3024: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3F3024u;
    {
        const bool branch_taken_0x3f3024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3024u;
            // 0x3f3028: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3024) {
            ctx->pc = 0x3F2FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f2fd0;
        }
    }
    ctx->pc = 0x3F302Cu;
    // 0x3f302c: 0x0  nop
    ctx->pc = 0x3f302cu;
    // NOP
label_3f3030:
    // 0x3f3030: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f3030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f3034:
    // 0x3f3034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f3034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f3038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f3038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f303c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f303cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3040: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3040u;
            // 0x3f3044: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F3048u;
    // 0x3f3048: 0x0  nop
    ctx->pc = 0x3f3048u;
    // NOP
    // 0x3f304c: 0x0  nop
    ctx->pc = 0x3f304cu;
    // NOP
}
