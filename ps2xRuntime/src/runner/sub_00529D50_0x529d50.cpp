#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00529D50
// Address: 0x529d50 - 0x529db0
void sub_00529D50_0x529d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00529D50_0x529d50");
#endif

    switch (ctx->pc) {
        case 0x529d90u: goto label_529d90;
        default: break;
    }

    ctx->pc = 0x529d50u;

    // 0x529d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x529d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x529d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x529d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x529d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x529d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x529d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x529d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x529d60: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x529D60u;
    {
        const bool branch_taken_0x529d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x529d60) {
            ctx->pc = 0x529D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529D60u;
            // 0x529d64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529D94u;
            goto label_529d94;
        }
    }
    ctx->pc = 0x529D68u;
    // 0x529d68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x529d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x529d6c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x529d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x529d70: 0x24426758  addiu       $v0, $v0, 0x6758
    ctx->pc = 0x529d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26456));
    // 0x529d74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x529d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x529d78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x529d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x529d7c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x529d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x529d80: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x529D80u;
    {
        const bool branch_taken_0x529d80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x529D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529D80u;
            // 0x529d84: 0xac40b600  sw          $zero, -0x4A00($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529d80) {
            ctx->pc = 0x529D90u;
            goto label_529d90;
        }
    }
    ctx->pc = 0x529D88u;
    // 0x529d88: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x529D88u;
    SET_GPR_U32(ctx, 31, 0x529D90u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D90u; }
        if (ctx->pc != 0x529D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D90u; }
        if (ctx->pc != 0x529D90u) { return; }
    }
    ctx->pc = 0x529D90u;
label_529d90:
    // 0x529d90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x529d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_529d94:
    // 0x529d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x529d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x529d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x529d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x529d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x529D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x529DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529D9Cu;
            // 0x529da0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529DA4u;
    // 0x529da4: 0x0  nop
    ctx->pc = 0x529da4u;
    // NOP
    // 0x529da8: 0x0  nop
    ctx->pc = 0x529da8u;
    // NOP
    // 0x529dac: 0x0  nop
    ctx->pc = 0x529dacu;
    // NOP
}
