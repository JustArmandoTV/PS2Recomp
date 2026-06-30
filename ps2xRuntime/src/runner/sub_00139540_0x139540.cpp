#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139540
// Address: 0x139540 - 0x139580
void sub_00139540_0x139540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139540_0x139540");
#endif

    switch (ctx->pc) {
        case 0x139560u: goto label_139560;
        case 0x13956cu: goto label_13956c;
        default: break;
    }

    ctx->pc = 0x139540u;

    // 0x139540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x139540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x139544: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x139544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x139548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13954c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139550: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139554: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x139554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x139558: 0xc04cd60  jal         func_133580
    ctx->pc = 0x139558u;
    SET_GPR_U32(ctx, 31, 0x139560u);
    ctx->pc = 0x13955Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139558u;
            // 0x13955c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139560u; }
        if (ctx->pc != 0x139560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139560u; }
        if (ctx->pc != 0x139560u) { return; }
    }
    ctx->pc = 0x139560u;
label_139560:
    // 0x139560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139564: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x139564u;
    SET_GPR_U32(ctx, 31, 0x13956Cu);
    ctx->pc = 0x139568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139564u;
            // 0x139568: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13956Cu; }
        if (ctx->pc != 0x13956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13956Cu; }
        if (ctx->pc != 0x13956Cu) { return; }
    }
    ctx->pc = 0x13956Cu;
label_13956c:
    // 0x13956c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13956cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139574: 0x3e00008  jr          $ra
    ctx->pc = 0x139574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139574u;
            // 0x139578: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13957Cu;
    // 0x13957c: 0x0  nop
    ctx->pc = 0x13957cu;
    // NOP
}
