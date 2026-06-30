#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DFB40
// Address: 0x4dfb40 - 0x4dfbb0
void sub_004DFB40_0x4dfb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DFB40_0x4dfb40");
#endif

    switch (ctx->pc) {
        case 0x4dfb80u: goto label_4dfb80;
        case 0x4dfb98u: goto label_4dfb98;
        default: break;
    }

    ctx->pc = 0x4dfb40u;

    // 0x4dfb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dfb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4dfb44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dfb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4dfb48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dfb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4dfb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dfb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4dfb50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dfb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dfb54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4DFB54u;
    {
        const bool branch_taken_0x4dfb54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFB54u;
            // 0x4dfb58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfb54) {
            ctx->pc = 0x4DFB98u;
            goto label_4dfb98;
        }
    }
    ctx->pc = 0x4DFB5Cu;
    // 0x4dfb5c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4DFB5Cu;
    {
        const bool branch_taken_0x4dfb5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfb5c) {
            ctx->pc = 0x4DFB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFB5Cu;
            // 0x4dfb60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DFB84u;
            goto label_4dfb84;
        }
    }
    ctx->pc = 0x4DFB64u;
    // 0x4dfb64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DFB64u;
    {
        const bool branch_taken_0x4dfb64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfb64) {
            ctx->pc = 0x4DFB80u;
            goto label_4dfb80;
        }
    }
    ctx->pc = 0x4DFB6Cu;
    // 0x4dfb6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4dfb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4dfb70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DFB70u;
    {
        const bool branch_taken_0x4dfb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfb70) {
            ctx->pc = 0x4DFB80u;
            goto label_4dfb80;
        }
    }
    ctx->pc = 0x4DFB78u;
    // 0x4dfb78: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DFB78u;
    SET_GPR_U32(ctx, 31, 0x4DFB80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFB80u; }
        if (ctx->pc != 0x4DFB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFB80u; }
        if (ctx->pc != 0x4DFB80u) { return; }
    }
    ctx->pc = 0x4DFB80u;
label_4dfb80:
    // 0x4dfb80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4dfb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4dfb84:
    // 0x4dfb84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dfb84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4dfb88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DFB88u;
    {
        const bool branch_taken_0x4dfb88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dfb88) {
            ctx->pc = 0x4DFB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFB88u;
            // 0x4dfb8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DFB9Cu;
            goto label_4dfb9c;
        }
    }
    ctx->pc = 0x4DFB90u;
    // 0x4dfb90: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DFB90u;
    SET_GPR_U32(ctx, 31, 0x4DFB98u);
    ctx->pc = 0x4DFB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFB90u;
            // 0x4dfb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFB98u; }
        if (ctx->pc != 0x4DFB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFB98u; }
        if (ctx->pc != 0x4DFB98u) { return; }
    }
    ctx->pc = 0x4DFB98u;
label_4dfb98:
    // 0x4dfb98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dfb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dfb9c:
    // 0x4dfb9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dfb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dfba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dfba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dfba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dfba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dfba8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DFBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFBA8u;
            // 0x4dfbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DFBB0u;
}
