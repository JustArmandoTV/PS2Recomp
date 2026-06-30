#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5F48
// Address: 0x1b5f48 - 0x1b5fd0
void sub_001B5F48_0x1b5f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5F48_0x1b5f48");
#endif

    switch (ctx->pc) {
        case 0x1b5f84u: goto label_1b5f84;
        case 0x1b5facu: goto label_1b5fac;
        default: break;
    }

    ctx->pc = 0x1b5f48u;

    // 0x1b5f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5f4c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b5f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5f54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b5f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5f5c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b5f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5f64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b5f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f68: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5F68u;
    {
        const bool branch_taken_0x1b5f68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F68u;
            // 0x1b5f6c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f68) {
            ctx->pc = 0x1B5F8Cu;
            goto label_1b5f8c;
        }
    }
    ctx->pc = 0x1B5F70u;
    // 0x1b5f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5f74: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5F74u;
    {
        const bool branch_taken_0x1b5f74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5f74) {
            ctx->pc = 0x1B5F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F74u;
            // 0x1b5f78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F90u;
            goto label_1b5f90;
        }
    }
    ctx->pc = 0x1B5F7Cu;
    // 0x1b5f7c: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1B5F7Cu;
    SET_GPR_U32(ctx, 31, 0x1B5F84u);
    ctx->pc = 0x1B5F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F7Cu;
            // 0x1b5f80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F84u; }
        if (ctx->pc != 0x1B5F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F84u; }
        if (ctx->pc != 0x1B5F84u) { return; }
    }
    ctx->pc = 0x1B5F84u;
label_1b5f84:
    // 0x1b5f84: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B5F84u;
    {
        const bool branch_taken_0x1b5f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f84) {
            ctx->pc = 0x1B5F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F84u;
            // 0x1b5f88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5FBCu;
            goto label_1b5fbc;
        }
    }
    ctx->pc = 0x1B5F8Cu;
label_1b5f8c:
    // 0x1b5f8c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b5f90:
    // 0x1b5f90: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5F90u;
    {
        const bool branch_taken_0x1b5f90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F90u;
            // 0x1b5f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f90) {
            ctx->pc = 0x1B5FB8u;
            goto label_1b5fb8;
        }
    }
    ctx->pc = 0x1B5F98u;
    // 0x1b5f98: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5F98u;
    {
        const bool branch_taken_0x1b5f98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5f98) {
            ctx->pc = 0x1B5F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F98u;
            // 0x1b5f9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5FBCu;
            goto label_1b5fbc;
        }
    }
    ctx->pc = 0x1B5FA0u;
    // 0x1b5fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fa4: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1B5FA4u;
    SET_GPR_U32(ctx, 31, 0x1B5FACu);
    ctx->pc = 0x1B5FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FA4u;
            // 0x1b5fa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FACu; }
        if (ctx->pc != 0x1B5FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FACu; }
        if (ctx->pc != 0x1B5FACu) { return; }
    }
    ctx->pc = 0x1B5FACu;
label_1b5fac:
    // 0x1b5fac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5FACu;
    {
        const bool branch_taken_0x1b5fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FACu;
            // 0x1b5fb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fac) {
            ctx->pc = 0x1B5FBCu;
            goto label_1b5fbc;
        }
    }
    ctx->pc = 0x1B5FB4u;
    // 0x1b5fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5fb8:
    // 0x1b5fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5fbc:
    // 0x1b5fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5fc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5fc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5fc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b5fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FC8u;
            // 0x1b5fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5FD0u;
}
