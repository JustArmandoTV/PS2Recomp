#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE280
// Address: 0x2ce280 - 0x2ce2f0
void sub_002CE280_0x2ce280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE280_0x2ce280");
#endif

    switch (ctx->pc) {
        case 0x2ce2a0u: goto label_2ce2a0;
        case 0x2ce2acu: goto label_2ce2ac;
        case 0x2ce2bcu: goto label_2ce2bc;
        case 0x2ce2c8u: goto label_2ce2c8;
        default: break;
    }

    ctx->pc = 0x2ce280u;

    // 0x2ce280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ce280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ce284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce28c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ce290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce294: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ce294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce298: 0xc0b3970  jal         func_2CE5C0
    ctx->pc = 0x2CE298u;
    SET_GPR_U32(ctx, 31, 0x2CE2A0u);
    ctx->pc = 0x2CE29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE298u;
            // 0x2ce29c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE5C0u;
    if (runtime->hasFunction(0x2CE5C0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2A0u; }
        if (ctx->pc != 0x2CE2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE5C0_0x2ce5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2A0u; }
        if (ctx->pc != 0x2CE2A0u) { return; }
    }
    ctx->pc = 0x2CE2A0u;
label_2ce2a0:
    // 0x2ce2a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2a4: 0xc0b3968  jal         func_2CE5A0
    ctx->pc = 0x2CE2A4u;
    SET_GPR_U32(ctx, 31, 0x2CE2ACu);
    ctx->pc = 0x2CE2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2A4u;
            // 0x2ce2a8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE5A0u;
    if (runtime->hasFunction(0x2CE5A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2ACu; }
        if (ctx->pc != 0x2CE2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE5A0_0x2ce5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2ACu; }
        if (ctx->pc != 0x2CE2ACu) { return; }
    }
    ctx->pc = 0x2CE2ACu;
label_2ce2ac:
    // 0x2ce2ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ce2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2b4: 0xc0b38dc  jal         func_2CE370
    ctx->pc = 0x2CE2B4u;
    SET_GPR_U32(ctx, 31, 0x2CE2BCu);
    ctx->pc = 0x2CE2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2B4u;
            // 0x2ce2b8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE370u;
    if (runtime->hasFunction(0x2CE370u)) {
        auto targetFn = runtime->lookupFunction(0x2CE370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2BCu; }
        if (ctx->pc != 0x2CE2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE370_0x2ce370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2BCu; }
        if (ctx->pc != 0x2CE2BCu) { return; }
    }
    ctx->pc = 0x2CE2BCu;
label_2ce2bc:
    // 0x2ce2bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ce2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ce2c0: 0xc0b38bc  jal         func_2CE2F0
    ctx->pc = 0x2CE2C0u;
    SET_GPR_U32(ctx, 31, 0x2CE2C8u);
    ctx->pc = 0x2CE2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2C0u;
            // 0x2ce2c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE2F0u;
    if (runtime->hasFunction(0x2CE2F0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2C8u; }
        if (ctx->pc != 0x2CE2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE2F0_0x2ce2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2C8u; }
        if (ctx->pc != 0x2CE2C8u) { return; }
    }
    ctx->pc = 0x2CE2C8u;
label_2ce2c8:
    // 0x2ce2c8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2ce2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2ce2cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ce2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2d0: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2ce2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2ce2d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ce2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce2d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce2dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2E0u;
            // 0x2ce2e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE2E8u;
    // 0x2ce2e8: 0x0  nop
    ctx->pc = 0x2ce2e8u;
    // NOP
    // 0x2ce2ec: 0x0  nop
    ctx->pc = 0x2ce2ecu;
    // NOP
}
