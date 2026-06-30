#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001008D0
// Address: 0x1008d0 - 0x100920
void sub_001008D0_0x1008d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001008D0_0x1008d0");
#endif

    switch (ctx->pc) {
        case 0x1008ecu: goto label_1008ec;
        case 0x100904u: goto label_100904;
        case 0x100910u: goto label_100910;
        default: break;
    }

    ctx->pc = 0x1008d0u;

    // 0x1008d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1008d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1008d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1008d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1008d8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1008d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1008dc: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1008DCu;
    {
        const bool branch_taken_0x1008dc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1008E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1008DCu;
            // 0x1008e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008dc) {
            ctx->pc = 0x1008F4u;
            goto label_1008f4;
        }
    }
    ctx->pc = 0x1008E4u;
    // 0x1008e4: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x1008E4u;
    SET_GPR_U32(ctx, 31, 0x1008ECu);
    ctx->pc = 0x1233E8u;
    if (runtime->hasFunction(0x1233E8u)) {
        auto targetFn = runtime->lookupFunction(0x1233E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1008ECu; }
        if (ctx->pc != 0x1008ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001233E8_0x1233e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1008ECu; }
        if (ctx->pc != 0x1008ECu) { return; }
    }
    ctx->pc = 0x1008ECu;
label_1008ec:
    // 0x1008ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1008ECu;
    {
        const bool branch_taken_0x1008ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1008ECu;
            // 0x1008f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008ec) {
            ctx->pc = 0x100914u;
            goto label_100914;
        }
    }
    ctx->pc = 0x1008F4u;
label_1008f4:
    // 0x1008f4: 0x4187a  dsrl        $v1, $a0, 1
    ctx->pc = 0x1008f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 1);
    // 0x1008f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1008f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1008fc: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x1008FCu;
    SET_GPR_U32(ctx, 31, 0x100904u);
    ctx->pc = 0x100900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1008FCu;
            // 0x100900: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1233E8u;
    if (runtime->hasFunction(0x1233E8u)) {
        auto targetFn = runtime->lookupFunction(0x1233E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100904u; }
        if (ctx->pc != 0x100904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001233E8_0x1233e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100904u; }
        if (ctx->pc != 0x100904u) { return; }
    }
    ctx->pc = 0x100904u;
label_100904:
    // 0x100904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100908: 0xc04960a  jal         func_125828
    ctx->pc = 0x100908u;
    SET_GPR_U32(ctx, 31, 0x100910u);
    ctx->pc = 0x10090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100908u;
            // 0x10090c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100910u; }
        if (ctx->pc != 0x100910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100910u; }
        if (ctx->pc != 0x100910u) { return; }
    }
    ctx->pc = 0x100910u;
label_100910:
    // 0x100910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100914:
    // 0x100914: 0x3e00008  jr          $ra
    ctx->pc = 0x100914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100914u;
            // 0x100918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10091Cu;
    // 0x10091c: 0x0  nop
    ctx->pc = 0x10091cu;
    // NOP
}
