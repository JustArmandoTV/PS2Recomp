#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C9AA0
// Address: 0x4c9aa0 - 0x4c9b00
void sub_004C9AA0_0x4c9aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9AA0_0x4c9aa0");
#endif

    switch (ctx->pc) {
        case 0x4c9ae0u: goto label_4c9ae0;
        default: break;
    }

    ctx->pc = 0x4c9aa0u;

    // 0x4c9aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c9aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c9aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c9aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c9aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c9aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c9aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c9aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9ab0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4C9AB0u;
    {
        const bool branch_taken_0x4c9ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9ab0) {
            ctx->pc = 0x4C9AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9AB0u;
            // 0x4c9ab4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9AE4u;
            goto label_4c9ae4;
        }
    }
    ctx->pc = 0x4C9AB8u;
    // 0x4c9ab8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c9abc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4c9abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4c9ac0: 0x24421af0  addiu       $v0, $v0, 0x1AF0
    ctx->pc = 0x4c9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6896));
    // 0x4c9ac4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4c9ac4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4c9ac8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c9ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c9acc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c9accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4c9ad0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C9AD0u;
    {
        const bool branch_taken_0x4c9ad0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4C9AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9AD0u;
            // 0x4c9ad4: 0xac40aa10  sw          $zero, -0x55F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9ad0) {
            ctx->pc = 0x4C9AE0u;
            goto label_4c9ae0;
        }
    }
    ctx->pc = 0x4C9AD8u;
    // 0x4c9ad8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C9AD8u;
    SET_GPR_U32(ctx, 31, 0x4C9AE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9AE0u; }
        if (ctx->pc != 0x4C9AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9AE0u; }
        if (ctx->pc != 0x4C9AE0u) { return; }
    }
    ctx->pc = 0x4C9AE0u;
label_4c9ae0:
    // 0x4c9ae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c9ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c9ae4:
    // 0x4c9ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c9ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c9ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c9ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c9aec: 0x3e00008  jr          $ra
    ctx->pc = 0x4C9AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9AECu;
            // 0x4c9af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C9AF4u;
    // 0x4c9af4: 0x0  nop
    ctx->pc = 0x4c9af4u;
    // NOP
    // 0x4c9af8: 0x0  nop
    ctx->pc = 0x4c9af8u;
    // NOP
    // 0x4c9afc: 0x0  nop
    ctx->pc = 0x4c9afcu;
    // NOP
}
