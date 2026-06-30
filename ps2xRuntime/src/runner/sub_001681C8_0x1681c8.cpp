#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001681C8
// Address: 0x1681c8 - 0x168218
void sub_001681C8_0x1681c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001681C8_0x1681c8");
#endif

    switch (ctx->pc) {
        case 0x168200u: goto label_168200;
        case 0x168208u: goto label_168208;
        default: break;
    }

    ctx->pc = 0x1681c8u;

    // 0x1681c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1681c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1681cc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1681ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1681d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1681d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1681d4: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1681d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1681d8: 0x24843388  addiu       $a0, $a0, 0x3388
    ctx->pc = 0x1681d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13192));
    // 0x1681dc: 0x24a57950  addiu       $a1, $a1, 0x7950
    ctx->pc = 0x1681dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31056));
    // 0x1681e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1681e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1681e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1681e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681e8: 0x805e100  j           func_178400
    ctx->pc = 0x1681E8u;
    ctx->pc = 0x1681ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1681E8u;
            // 0x1681ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178400u;
    if (runtime->hasFunction(0x178400u)) {
        auto targetFn = runtime->lookupFunction(0x178400u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178400_0x178400(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1681F0u;
    // 0x1681f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1681f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1681f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1681f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1681f8: 0xc05a144  jal         func_168510
    ctx->pc = 0x1681F8u;
    SET_GPR_U32(ctx, 31, 0x168200u);
    ctx->pc = 0x168510u;
    if (runtime->hasFunction(0x168510u)) {
        auto targetFn = runtime->lookupFunction(0x168510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168200u; }
        if (ctx->pc != 0x168200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168510_0x168510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168200u; }
        if (ctx->pc != 0x168200u) { return; }
    }
    ctx->pc = 0x168200u;
label_168200:
    // 0x168200: 0xc05a086  jal         func_168218
    ctx->pc = 0x168200u;
    SET_GPR_U32(ctx, 31, 0x168208u);
    ctx->pc = 0x168218u;
    if (runtime->hasFunction(0x168218u)) {
        auto targetFn = runtime->lookupFunction(0x168218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168208u; }
        if (ctx->pc != 0x168208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168218_0x168218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168208u; }
        if (ctx->pc != 0x168208u) { return; }
    }
    ctx->pc = 0x168208u;
label_168208:
    // 0x168208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16820c: 0x805a146  j           func_168518
    ctx->pc = 0x16820Cu;
    ctx->pc = 0x168210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16820Cu;
            // 0x168210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168518u;
    if (runtime->hasFunction(0x168518u)) {
        auto targetFn = runtime->lookupFunction(0x168518u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168518_0x168518(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x168214u;
    // 0x168214: 0x0  nop
    ctx->pc = 0x168214u;
    // NOP
}
