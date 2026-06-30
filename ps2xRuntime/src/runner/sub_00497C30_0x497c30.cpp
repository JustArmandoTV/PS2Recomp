#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497C30
// Address: 0x497c30 - 0x497ca0
void sub_00497C30_0x497c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497C30_0x497c30");
#endif

    switch (ctx->pc) {
        case 0x497c54u: goto label_497c54;
        case 0x497c68u: goto label_497c68;
        case 0x497c80u: goto label_497c80;
        default: break;
    }

    ctx->pc = 0x497c30u;

    // 0x497c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x497c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x497c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x497c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x497c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x497c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x497c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x497c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x497c40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x497c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497c44: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x497C44u;
    {
        const bool branch_taken_0x497c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x497C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497C44u;
            // 0x497c48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497c44) {
            ctx->pc = 0x497C80u;
            goto label_497c80;
        }
    }
    ctx->pc = 0x497C4Cu;
    // 0x497c4c: 0xc125fa0  jal         func_497E80
    ctx->pc = 0x497C4Cu;
    SET_GPR_U32(ctx, 31, 0x497C54u);
    ctx->pc = 0x497E80u;
    if (runtime->hasFunction(0x497E80u)) {
        auto targetFn = runtime->lookupFunction(0x497E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497C54u; }
        if (ctx->pc != 0x497C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497E80_0x497e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497C54u; }
        if (ctx->pc != 0x497C54u) { return; }
    }
    ctx->pc = 0x497C54u;
label_497c54:
    // 0x497c54: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x497c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x497c58: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x497C58u;
    {
        const bool branch_taken_0x497c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x497c58) {
            ctx->pc = 0x497C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497C58u;
            // 0x497c5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497C6Cu;
            goto label_497c6c;
        }
    }
    ctx->pc = 0x497C60u;
    // 0x497c60: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497C60u;
    SET_GPR_U32(ctx, 31, 0x497C68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497C68u; }
        if (ctx->pc != 0x497C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497C68u; }
        if (ctx->pc != 0x497C68u) { return; }
    }
    ctx->pc = 0x497C68u;
label_497c68:
    // 0x497c68: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x497c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_497c6c:
    // 0x497c6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x497c6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x497c70: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x497C70u;
    {
        const bool branch_taken_0x497c70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x497c70) {
            ctx->pc = 0x497C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497C70u;
            // 0x497c74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497C84u;
            goto label_497c84;
        }
    }
    ctx->pc = 0x497C78u;
    // 0x497c78: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497C78u;
    SET_GPR_U32(ctx, 31, 0x497C80u);
    ctx->pc = 0x497C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497C78u;
            // 0x497c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497C80u; }
        if (ctx->pc != 0x497C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497C80u; }
        if (ctx->pc != 0x497C80u) { return; }
    }
    ctx->pc = 0x497C80u;
label_497c80:
    // 0x497c80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x497c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497c84:
    // 0x497c84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x497c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x497c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497c90: 0x3e00008  jr          $ra
    ctx->pc = 0x497C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497C90u;
            // 0x497c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497C98u;
    // 0x497c98: 0x0  nop
    ctx->pc = 0x497c98u;
    // NOP
    // 0x497c9c: 0x0  nop
    ctx->pc = 0x497c9cu;
    // NOP
}
