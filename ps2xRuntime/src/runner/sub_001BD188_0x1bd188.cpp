#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD188
// Address: 0x1bd188 - 0x1bd1d0
void sub_001BD188_0x1bd188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD188_0x1bd188");
#endif

    switch (ctx->pc) {
        case 0x1bd1a0u: goto label_1bd1a0;
        default: break;
    }

    ctx->pc = 0x1bd188u;

    // 0x1bd188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd18c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bd18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bd190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd194: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd198: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BD198u;
    SET_GPR_U32(ctx, 31, 0x1BD1A0u);
    ctx->pc = 0x1BD19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD198u;
            // 0x1bd19c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1A0u; }
        if (ctx->pc != 0x1BD1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1A0u; }
        if (ctx->pc != 0x1BD1A0u) { return; }
    }
    ctx->pc = 0x1BD1A0u;
label_1bd1a0:
    // 0x1bd1a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bd1a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1a4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD1A4u;
    {
        const bool branch_taken_0x1bd1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd1a4) {
            ctx->pc = 0x1BD1A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1A4u;
            // 0x1bd1a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD1C4u;
            goto label_1bd1c4;
        }
    }
    ctx->pc = 0x1BD1ACu;
    // 0x1bd1ac: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x1bd1acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x1bd1b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd1b4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bd1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bd1b8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1bd1b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bd1bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bd1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bd1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd1c4:
    // 0x1bd1c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1C8u;
            // 0x1bd1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD1D0u;
}
