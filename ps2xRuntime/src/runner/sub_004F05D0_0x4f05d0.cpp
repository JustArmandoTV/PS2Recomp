#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F05D0
// Address: 0x4f05d0 - 0x4f0630
void sub_004F05D0_0x4f05d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F05D0_0x4f05d0");
#endif

    switch (ctx->pc) {
        case 0x4f0610u: goto label_4f0610;
        default: break;
    }

    ctx->pc = 0x4f05d0u;

    // 0x4f05d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f05d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f05d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f05d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f05d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f05d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f05dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f05dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f05e0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4F05E0u;
    {
        const bool branch_taken_0x4f05e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f05e0) {
            ctx->pc = 0x4F05E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F05E0u;
            // 0x4f05e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0614u;
            goto label_4f0614;
        }
    }
    ctx->pc = 0x4F05E8u;
    // 0x4f05e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f05ec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4f05ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4f05f0: 0x24423ef8  addiu       $v0, $v0, 0x3EF8
    ctx->pc = 0x4f05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16120));
    // 0x4f05f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4f05f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4f05f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f05fc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4f0600: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F0600u;
    {
        const bool branch_taken_0x4f0600 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4F0604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0600u;
            // 0x4f0604: 0xac40aad8  sw          $zero, -0x5528($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0600) {
            ctx->pc = 0x4F0610u;
            goto label_4f0610;
        }
    }
    ctx->pc = 0x4F0608u;
    // 0x4f0608: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F0608u;
    SET_GPR_U32(ctx, 31, 0x4F0610u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0610u; }
        if (ctx->pc != 0x4F0610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0610u; }
        if (ctx->pc != 0x4F0610u) { return; }
    }
    ctx->pc = 0x4F0610u;
label_4f0610:
    // 0x4f0610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f0610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f0614:
    // 0x4f0614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f0614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f061c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F061Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F061Cu;
            // 0x4f0620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0624u;
    // 0x4f0624: 0x0  nop
    ctx->pc = 0x4f0624u;
    // NOP
    // 0x4f0628: 0x0  nop
    ctx->pc = 0x4f0628u;
    // NOP
    // 0x4f062c: 0x0  nop
    ctx->pc = 0x4f062cu;
    // NOP
}
