#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303970
// Address: 0x303970 - 0x3039d0
void sub_00303970_0x303970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303970_0x303970");
#endif

    switch (ctx->pc) {
        case 0x30399cu: goto label_30399c;
        case 0x3039acu: goto label_3039ac;
        case 0x3039bcu: goto label_3039bc;
        default: break;
    }

    ctx->pc = 0x303970u;

    // 0x303970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x303970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x303974: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x303974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x303978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x303978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30397c: 0x24a52b70  addiu       $a1, $a1, 0x2B70
    ctx->pc = 0x30397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11120));
    // 0x303980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303984: 0xac80068c  sw          $zero, 0x68C($a0)
    ctx->pc = 0x303984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1676), GPR_U32(ctx, 0));
    // 0x303988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x303988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30398c: 0xac800dd8  sw          $zero, 0xDD8($a0)
    ctx->pc = 0x30398cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3544), GPR_U32(ctx, 0));
    // 0x303990: 0xac800e2c  sw          $zero, 0xE2C($a0)
    ctx->pc = 0x303990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3628), GPR_U32(ctx, 0));
    // 0x303994: 0xc04cc04  jal         func_133010
    ctx->pc = 0x303994u;
    SET_GPR_U32(ctx, 31, 0x30399Cu);
    ctx->pc = 0x303998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303994u;
            // 0x303998: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30399Cu; }
        if (ctx->pc != 0x30399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30399Cu; }
        if (ctx->pc != 0x30399Cu) { return; }
    }
    ctx->pc = 0x30399Cu;
label_30399c:
    // 0x30399c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x30399cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x3039a0: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3039a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x3039a4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3039A4u;
    SET_GPR_U32(ctx, 31, 0x3039ACu);
    ctx->pc = 0x3039A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3039A4u;
            // 0x3039a8: 0x24a52b70  addiu       $a1, $a1, 0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3039ACu; }
        if (ctx->pc != 0x3039ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3039ACu; }
        if (ctx->pc != 0x3039ACu) { return; }
    }
    ctx->pc = 0x3039ACu;
label_3039ac:
    // 0x3039ac: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3039acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x3039b0: 0x26040370  addiu       $a0, $s0, 0x370
    ctx->pc = 0x3039b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x3039b4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3039B4u;
    SET_GPR_U32(ctx, 31, 0x3039BCu);
    ctx->pc = 0x3039B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3039B4u;
            // 0x3039b8: 0x24a52b70  addiu       $a1, $a1, 0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3039BCu; }
        if (ctx->pc != 0x3039BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3039BCu; }
        if (ctx->pc != 0x3039BCu) { return; }
    }
    ctx->pc = 0x3039BCu;
label_3039bc:
    // 0x3039bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3039bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3039c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3039c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3039c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3039C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3039C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3039C4u;
            // 0x3039c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3039CCu;
    // 0x3039cc: 0x0  nop
    ctx->pc = 0x3039ccu;
    // NOP
}
