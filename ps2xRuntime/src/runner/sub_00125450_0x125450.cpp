#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125450
// Address: 0x125450 - 0x125490
void sub_00125450_0x125450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125450_0x125450");
#endif

    switch (ctx->pc) {
        case 0x125468u: goto label_125468;
        case 0x125480u: goto label_125480;
        default: break;
    }

    ctx->pc = 0x125450u;

    // 0x125450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125454: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x125454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x125458: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12545c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125460: 0xc0494f2  jal         func_1253C8
    ctx->pc = 0x125460u;
    SET_GPR_U32(ctx, 31, 0x125468u);
    ctx->pc = 0x125464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125460u;
            // 0x125464: 0xe7ac0010  swc1        $f12, 0x10($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1253C8u;
    if (runtime->hasFunction(0x1253C8u)) {
        auto targetFn = runtime->lookupFunction(0x1253C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125468u; }
        if (ctx->pc != 0x125468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001253C8_0x1253c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125468u; }
        if (ctx->pc != 0x125468u) { return; }
    }
    ctx->pc = 0x125468u;
label_125468:
    // 0x125468: 0x9fa7000c  lwu         $a3, 0xC($sp)
    ctx->pc = 0x125468u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12546c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12546cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125470: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x125470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x125474: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x125474u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x125478: 0xc0497d0  jal         func_125F40
    ctx->pc = 0x125478u;
    SET_GPR_U32(ctx, 31, 0x125480u);
    ctx->pc = 0x12547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125478u;
            // 0x12547c: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F40u;
    if (runtime->hasFunction(0x125F40u)) {
        auto targetFn = runtime->lookupFunction(0x125F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125480u; }
        if (ctx->pc != 0x125480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F40_0x125f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125480u; }
        if (ctx->pc != 0x125480u) { return; }
    }
    ctx->pc = 0x125480u;
label_125480:
    // 0x125480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125484: 0x3e00008  jr          $ra
    ctx->pc = 0x125484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125484u;
            // 0x125488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12548Cu;
    // 0x12548c: 0x0  nop
    ctx->pc = 0x12548cu;
    // NOP
}
