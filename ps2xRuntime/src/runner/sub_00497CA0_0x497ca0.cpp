#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497CA0
// Address: 0x497ca0 - 0x497d10
void sub_00497CA0_0x497ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497CA0_0x497ca0");
#endif

    switch (ctx->pc) {
        case 0x497cd4u: goto label_497cd4;
        case 0x497cecu: goto label_497cec;
        default: break;
    }

    ctx->pc = 0x497ca0u;

    // 0x497ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x497ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x497ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x497ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x497ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x497ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x497cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x497cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x497cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x497cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497cb4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x497CB4u;
    {
        const bool branch_taken_0x497cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x497CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497CB4u;
            // 0x497cb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497cb4) {
            ctx->pc = 0x497CECu;
            goto label_497cec;
        }
    }
    ctx->pc = 0x497CBCu;
    // 0x497cbc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x497cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x497cc0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x497cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x497cc4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x497CC4u;
    {
        const bool branch_taken_0x497cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x497cc4) {
            ctx->pc = 0x497CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497CC4u;
            // 0x497cc8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497CD8u;
            goto label_497cd8;
        }
    }
    ctx->pc = 0x497CCCu;
    // 0x497ccc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497CCCu;
    SET_GPR_U32(ctx, 31, 0x497CD4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497CD4u; }
        if (ctx->pc != 0x497CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497CD4u; }
        if (ctx->pc != 0x497CD4u) { return; }
    }
    ctx->pc = 0x497CD4u;
label_497cd4:
    // 0x497cd4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x497cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_497cd8:
    // 0x497cd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x497cd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x497cdc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x497CDCu;
    {
        const bool branch_taken_0x497cdc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x497cdc) {
            ctx->pc = 0x497CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497CDCu;
            // 0x497ce0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497CF0u;
            goto label_497cf0;
        }
    }
    ctx->pc = 0x497CE4u;
    // 0x497ce4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497CE4u;
    SET_GPR_U32(ctx, 31, 0x497CECu);
    ctx->pc = 0x497CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497CE4u;
            // 0x497ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497CECu; }
        if (ctx->pc != 0x497CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497CECu; }
        if (ctx->pc != 0x497CECu) { return; }
    }
    ctx->pc = 0x497CECu;
label_497cec:
    // 0x497cec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x497cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497cf0:
    // 0x497cf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x497cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x497cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x497CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497CFCu;
            // 0x497d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497D04u;
    // 0x497d04: 0x0  nop
    ctx->pc = 0x497d04u;
    // NOP
    // 0x497d08: 0x0  nop
    ctx->pc = 0x497d08u;
    // NOP
    // 0x497d0c: 0x0  nop
    ctx->pc = 0x497d0cu;
    // NOP
}
