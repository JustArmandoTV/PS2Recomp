#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4A78
// Address: 0x1b4a78 - 0x1b4ad8
void sub_001B4A78_0x1b4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4A78_0x1b4a78");
#endif

    switch (ctx->pc) {
        case 0x1b4a94u: goto label_1b4a94;
        default: break;
    }

    ctx->pc = 0x1b4a78u;

    // 0x1b4a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4a80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4a8c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B4A8Cu;
    SET_GPR_U32(ctx, 31, 0x1B4A94u);
    ctx->pc = 0x1B4A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A8Cu;
            // 0x1b4a90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A94u; }
        if (ctx->pc != 0x1B4A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A94u; }
        if (ctx->pc != 0x1B4A94u) { return; }
    }
    ctx->pc = 0x1B4A94u;
label_1b4a94:
    // 0x1b4a94: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4a98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4A98u;
    {
        const bool branch_taken_0x1b4a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A98u;
            // 0x1b4a9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a98) {
            ctx->pc = 0x1B4AB8u;
            goto label_1b4ab8;
        }
    }
    ctx->pc = 0x1B4AA0u;
    // 0x1b4aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4aa4: 0x34a50139  ori         $a1, $a1, 0x139
    ctx->pc = 0x1b4aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)313);
    // 0x1b4aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4ab0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B4AB0u;
    ctx->pc = 0x1B4AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4AB0u;
            // 0x1b4ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4AB8u;
label_1b4ab8:
    // 0x1b4ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4ac0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b4ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4ac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4acc: 0x806955a  j           func_1A5568
    ctx->pc = 0x1B4ACCu;
    ctx->pc = 0x1B4AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4ACCu;
            // 0x1b4ad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5568u;
    {
        auto targetFn = runtime->lookupFunction(0x1A5568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B4AD4u;
    // 0x1b4ad4: 0x0  nop
    ctx->pc = 0x1b4ad4u;
    // NOP
}
