#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00337D50
// Address: 0x337d50 - 0x337db0
void sub_00337D50_0x337d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337D50_0x337d50");
#endif

    switch (ctx->pc) {
        case 0x337d90u: goto label_337d90;
        default: break;
    }

    ctx->pc = 0x337d50u;

    // 0x337d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d60: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x337D60u;
    {
        const bool branch_taken_0x337d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x337d60) {
            ctx->pc = 0x337D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337D60u;
            // 0x337d64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337D94u;
            goto label_337d94;
        }
    }
    ctx->pc = 0x337D68u;
    // 0x337d68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x337d6c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x337d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x337d70: 0x24424e08  addiu       $v0, $v0, 0x4E08
    ctx->pc = 0x337d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19976));
    // 0x337d74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x337d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x337d78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x337d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x337d7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x337d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x337d80: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337D80u;
    {
        const bool branch_taken_0x337d80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x337D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337D80u;
            // 0x337d84: 0xac403e70  sw          $zero, 0x3E70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d80) {
            ctx->pc = 0x337D90u;
            goto label_337d90;
        }
    }
    ctx->pc = 0x337D88u;
    // 0x337d88: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x337D88u;
    SET_GPR_U32(ctx, 31, 0x337D90u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D90u; }
        if (ctx->pc != 0x337D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D90u; }
        if (ctx->pc != 0x337D90u) { return; }
    }
    ctx->pc = 0x337D90u;
label_337d90:
    // 0x337d90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x337d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_337d94:
    // 0x337d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x337D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337D9Cu;
            // 0x337da0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337DA4u;
    // 0x337da4: 0x0  nop
    ctx->pc = 0x337da4u;
    // NOP
    // 0x337da8: 0x0  nop
    ctx->pc = 0x337da8u;
    // NOP
    // 0x337dac: 0x0  nop
    ctx->pc = 0x337dacu;
    // NOP
}
