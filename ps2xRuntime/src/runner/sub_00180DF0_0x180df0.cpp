#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180DF0
// Address: 0x180df0 - 0x180fe0
void sub_00180DF0_0x180df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180DF0_0x180df0");
#endif

    switch (ctx->pc) {
        case 0x180e30u: goto label_180e30;
        case 0x180e44u: goto label_180e44;
        case 0x180e60u: goto label_180e60;
        case 0x180e68u: goto label_180e68;
        case 0x180eb0u: goto label_180eb0;
        case 0x180ee8u: goto label_180ee8;
        case 0x180ef0u: goto label_180ef0;
        case 0x180efcu: goto label_180efc;
        case 0x180f10u: goto label_180f10;
        case 0x180f74u: goto label_180f74;
        case 0x180f80u: goto label_180f80;
        case 0x180fa0u: goto label_180fa0;
        case 0x180facu: goto label_180fac;
        case 0x180fb4u: goto label_180fb4;
        default: break;
    }

    ctx->pc = 0x180df0u;

    // 0x180df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180df4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x180df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x180df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180dfc: 0x24636d78  addiu       $v1, $v1, 0x6D78
    ctx->pc = 0x180dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28024));
    // 0x180e00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180e04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x180e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x180e08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x180e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x180e0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x180e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x180e10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x180e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180e14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x180e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x180e18: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x180E18u;
    {
        const bool branch_taken_0x180e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180E18u;
            // 0x180e1c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e18) {
            ctx->pc = 0x180E90u;
            goto label_180e90;
        }
    }
    ctx->pc = 0x180E20u;
    // 0x180e20: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x180e20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x180e24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x180e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180e28: 0x26706d80  addiu       $s0, $s3, 0x6D80
    ctx->pc = 0x180e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28032));
    // 0x180e2c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x180e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_180e30:
    // 0x180e30: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x180e30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180e34: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x180E34u;
    {
        const bool branch_taken_0x180e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x180e34) {
            ctx->pc = 0x180E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180E34u;
            // 0x180e38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180E48u;
            goto label_180e48;
        }
    }
    ctx->pc = 0x180E3Cu;
    // 0x180e3c: 0xc060006  jal         func_180018
    ctx->pc = 0x180E3Cu;
    SET_GPR_U32(ctx, 31, 0x180E44u);
    ctx->pc = 0x180E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180E3Cu;
            // 0x180e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180018u;
    if (runtime->hasFunction(0x180018u)) {
        auto targetFn = runtime->lookupFunction(0x180018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E44u; }
        if (ctx->pc != 0x180E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180018_0x180018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E44u; }
        if (ctx->pc != 0x180E44u) { return; }
    }
    ctx->pc = 0x180E44u;
label_180e44:
    // 0x180e44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x180e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_180e48:
    // 0x180e48: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x180E48u;
    {
        const bool branch_taken_0x180e48 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x180E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180E48u;
            // 0x180e4c: 0x26100238  addiu       $s0, $s0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e48) {
            ctx->pc = 0x180E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_180e30;
        }
    }
    ctx->pc = 0x180E50u;
    // 0x180e50: 0x26646d80  addiu       $a0, $s3, 0x6D80
    ctx->pc = 0x180e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28032));
    // 0x180e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e58: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x180E58u;
    SET_GPR_U32(ctx, 31, 0x180E60u);
    ctx->pc = 0x180E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180E58u;
            // 0x180e5c: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E60u; }
        if (ctx->pc != 0x180E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E60u; }
        if (ctx->pc != 0x180E60u) { return; }
    }
    ctx->pc = 0x180E60u;
label_180e60:
    // 0x180e60: 0xc06035a  jal         func_180D68
    ctx->pc = 0x180E60u;
    SET_GPR_U32(ctx, 31, 0x180E68u);
    ctx->pc = 0x180D68u;
    if (runtime->hasFunction(0x180D68u)) {
        auto targetFn = runtime->lookupFunction(0x180D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E68u; }
        if (ctx->pc != 0x180E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D68_0x180d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E68u; }
        if (ctx->pc != 0x180E68u) { return; }
    }
    ctx->pc = 0x180E68u;
label_180e68:
    // 0x180e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180e6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x180e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180e7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x180e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180e80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x180e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180e84: 0x806032a  j           func_180CA8
    ctx->pc = 0x180E84u;
    ctx->pc = 0x180E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180E84u;
            // 0x180e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CA8u;
    if (runtime->hasFunction(0x180CA8u)) {
        auto targetFn = runtime->lookupFunction(0x180CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CA8_0x180ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180E8Cu;
    // 0x180e8c: 0x0  nop
    ctx->pc = 0x180e8cu;
    // NOP
label_180e90:
    // 0x180e90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180e94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180e98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x180e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180e9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x180e9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180ea0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x180ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x180EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180EA4u;
            // 0x180ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180EACu;
    // 0x180eac: 0x0  nop
    ctx->pc = 0x180eacu;
    // NOP
label_180eb0:
    // 0x180eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180eb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ebc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180ec0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x180ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x180ec4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x180ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x180ec8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x180ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x180ecc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x180eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x180ed0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x180ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180ed4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x180ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x180ed8: 0x1860003a  blez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x180ED8u;
    {
        const bool branch_taken_0x180ed8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x180EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180ED8u;
            // 0x180edc: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ed8) {
            ctx->pc = 0x180FC4u;
            goto label_180fc4;
        }
    }
    ctx->pc = 0x180EE0u;
    // 0x180ee0: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x180EE0u;
    SET_GPR_U32(ctx, 31, 0x180EE8u);
    ctx->pc = 0x180EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180EE0u;
            // 0x180ee4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EE8u; }
        if (ctx->pc != 0x180EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EE8u; }
        if (ctx->pc != 0x180EE8u) { return; }
    }
    ctx->pc = 0x180EE8u;
label_180ee8:
    // 0x180ee8: 0xc05c296  jal         func_170A58
    ctx->pc = 0x180EE8u;
    SET_GPR_U32(ctx, 31, 0x180EF0u);
    ctx->pc = 0x180EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180EE8u;
            // 0x180eec: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A58u;
    if (runtime->hasFunction(0x170A58u)) {
        auto targetFn = runtime->lookupFunction(0x170A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EF0u; }
        if (ctx->pc != 0x180EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A58_0x170a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EF0u; }
        if (ctx->pc != 0x180EF0u) { return; }
    }
    ctx->pc = 0x180EF0u;
label_180ef0:
    // 0x180ef0: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x180ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x180ef4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x180EF4u;
    SET_GPR_U32(ctx, 31, 0x180EFCu);
    ctx->pc = 0x180EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180EF4u;
            // 0x180ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EFCu; }
        if (ctx->pc != 0x180EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EFCu; }
        if (ctx->pc != 0x180EFCu) { return; }
    }
    ctx->pc = 0x180EFCu;
label_180efc:
    // 0x180efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x180f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f04: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x180F04u;
    {
        const bool branch_taken_0x180f04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x180F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180F04u;
            // 0x180f08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f04) {
            ctx->pc = 0x180F2Cu;
            goto label_180f2c;
        }
    }
    ctx->pc = 0x180F0Cu;
    // 0x180f0c: 0x0  nop
    ctx->pc = 0x180f0cu;
    // NOP
label_180f10:
    // 0x180f10: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x180f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x180f14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x180f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x180f18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x180f18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180f1c: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x180f1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x180f20: 0x0  nop
    ctx->pc = 0x180f20u;
    // NOP
    // 0x180f24: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x180F24u;
    {
        const bool branch_taken_0x180f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180F24u;
            // 0x180f28: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f24) {
            ctx->pc = 0x180F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_180f10;
        }
    }
    ctx->pc = 0x180F2Cu;
label_180f2c:
    // 0x180f2c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x180f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x180f30: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x180F30u;
    {
        const bool branch_taken_0x180f30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x180F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180F30u;
            // 0x180f34: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f30) {
            ctx->pc = 0x180F58u;
            goto label_180f58;
        }
    }
    ctx->pc = 0x180F38u;
    // 0x180f38: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x180f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180f40: 0x24846b40  addiu       $a0, $a0, 0x6B40
    ctx->pc = 0x180f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27456));
    // 0x180f44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180f48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x180f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180f4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x180f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180f50: 0x8060334  j           func_180CD0
    ctx->pc = 0x180F50u;
    ctx->pc = 0x180F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180F50u;
            // 0x180f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CD0_0x180cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180F58u;
label_180f58:
    // 0x180f58: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x180f58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x180f5c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x180f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x180f60: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x180f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x180f64: 0x842f8  dsll        $t0, $t0, 11
    ctx->pc = 0x180f64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 11);
    // 0x180f68: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x180f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x180f6c: 0xc05c22e  jal         func_1708B8
    ctx->pc = 0x180F6Cu;
    SET_GPR_U32(ctx, 31, 0x180F74u);
    ctx->pc = 0x180F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180F6Cu;
            // 0x180f70: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1708B8u;
    if (runtime->hasFunction(0x1708B8u)) {
        auto targetFn = runtime->lookupFunction(0x1708B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F74u; }
        if (ctx->pc != 0x180F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001708B8_0x1708b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F74u; }
        if (ctx->pc != 0x180F74u) { return; }
    }
    ctx->pc = 0x180F74u;
label_180f74:
    // 0x180f74: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x180f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x180f78: 0xc05c3ce  jal         func_170F38
    ctx->pc = 0x180F78u;
    SET_GPR_U32(ctx, 31, 0x180F80u);
    ctx->pc = 0x180F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180F78u;
            // 0x180f7c: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F38u;
    if (runtime->hasFunction(0x170F38u)) {
        auto targetFn = runtime->lookupFunction(0x170F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F80u; }
        if (ctx->pc != 0x180F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170F38_0x170f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F80u; }
        if (ctx->pc != 0x180F80u) { return; }
    }
    ctx->pc = 0x180F80u;
label_180f80:
    // 0x180f80: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x180f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x180f84: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x180f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x180f88: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x180f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x180f8c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x180f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x180f90: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x180f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x180f94: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x180f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x180f98: 0xc05c67e  jal         func_1719F8
    ctx->pc = 0x180F98u;
    SET_GPR_U32(ctx, 31, 0x180FA0u);
    ctx->pc = 0x180F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180F98u;
            // 0x180f9c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719F8u;
    if (runtime->hasFunction(0x1719F8u)) {
        auto targetFn = runtime->lookupFunction(0x1719F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FA0u; }
        if (ctx->pc != 0x180FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001719F8_0x1719f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FA0u; }
        if (ctx->pc != 0x180FA0u) { return; }
    }
    ctx->pc = 0x180FA0u;
label_180fa0:
    // 0x180fa0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x180fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x180fa4: 0xc05c2f2  jal         func_170BC8
    ctx->pc = 0x180FA4u;
    SET_GPR_U32(ctx, 31, 0x180FACu);
    ctx->pc = 0x180FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180FA4u;
            // 0x180fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FACu; }
        if (ctx->pc != 0x180FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC8_0x170bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FACu; }
        if (ctx->pc != 0x180FACu) { return; }
    }
    ctx->pc = 0x180FACu;
label_180fac:
    // 0x180fac: 0xc05c32e  jal         func_170CB8
    ctx->pc = 0x180FACu;
    SET_GPR_U32(ctx, 31, 0x180FB4u);
    ctx->pc = 0x180FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180FACu;
            // 0x180fb0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170CB8u;
    if (runtime->hasFunction(0x170CB8u)) {
        auto targetFn = runtime->lookupFunction(0x170CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FB4u; }
        if (ctx->pc != 0x180FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170CB8_0x170cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FB4u; }
        if (ctx->pc != 0x180FB4u) { return; }
    }
    ctx->pc = 0x180FB4u;
label_180fb4:
    // 0x180fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180fbc: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x180fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x180fc0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x180fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_180fc4:
    // 0x180fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180fcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x180fccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180fd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x180fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x180FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180FD4u;
            // 0x180fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180FDCu;
    // 0x180fdc: 0x0  nop
    ctx->pc = 0x180fdcu;
    // NOP
}
