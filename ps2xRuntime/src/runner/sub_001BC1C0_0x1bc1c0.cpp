#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC1C0
// Address: 0x1bc1c0 - 0x1bc208
void sub_001BC1C0_0x1bc1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC1C0_0x1bc1c0");
#endif

    switch (ctx->pc) {
        case 0x1bc1d8u: goto label_1bc1d8;
        default: break;
    }

    ctx->pc = 0x1bc1c0u;

    // 0x1bc1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc1c4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bc1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bc1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc1cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bc1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bc1d0: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BC1D0u;
    SET_GPR_U32(ctx, 31, 0x1BC1D8u);
    ctx->pc = 0x1BC1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1D0u;
            // 0x1bc1d4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1D8u; }
        if (ctx->pc != 0x1BC1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1D8u; }
        if (ctx->pc != 0x1BC1D8u) { return; }
    }
    ctx->pc = 0x1BC1D8u;
label_1bc1d8:
    // 0x1bc1d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc1d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1dc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC1DCu;
    {
        const bool branch_taken_0x1bc1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc1dc) {
            ctx->pc = 0x1BC1E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1DCu;
            // 0x1bc1e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC1FCu;
            goto label_1bc1fc;
        }
    }
    ctx->pc = 0x1BC1E4u;
    // 0x1bc1e4: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x1bc1e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x1bc1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc1ec: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bc1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bc1f0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1bc1f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bc1f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc1fc:
    // 0x1bc1fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc200: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC200u;
            // 0x1bc204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC208u;
}
