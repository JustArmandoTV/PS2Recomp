#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034FA50
// Address: 0x34fa50 - 0x34fab0
void sub_0034FA50_0x34fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FA50_0x34fa50");
#endif

    switch (ctx->pc) {
        case 0x34fa70u: goto label_34fa70;
        case 0x34fa7cu: goto label_34fa7c;
        default: break;
    }

    ctx->pc = 0x34fa50u;

    // 0x34fa50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34fa54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34fa58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34fa5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34fa60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34fa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34fa64: 0x809100a1  lb          $s1, 0xA1($a0)
    ctx->pc = 0x34fa64u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 161)));
    // 0x34fa68: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x34FA68u;
    SET_GPR_U32(ctx, 31, 0x34FA70u);
    ctx->pc = 0x34FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FA68u;
            // 0x34fa6c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FA70u; }
        if (ctx->pc != 0x34FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FA70u; }
        if (ctx->pc != 0x34FA70u) { return; }
    }
    ctx->pc = 0x34FA70u;
label_34fa70:
    // 0x34fa70: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34fa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34fa74: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x34FA74u;
    SET_GPR_U32(ctx, 31, 0x34FA7Cu);
    ctx->pc = 0x34FA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FA74u;
            // 0x34fa78: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FA7Cu; }
        if (ctx->pc != 0x34FA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FA7Cu; }
        if (ctx->pc != 0x34FA7Cu) { return; }
    }
    ctx->pc = 0x34FA7Cu;
label_34fa7c:
    // 0x34fa7c: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x34fa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x34fa80: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x34fa80u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x34fa84: 0x1810  mfhi        $v1
    ctx->pc = 0x34fa84u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x34fa88: 0xa24300a2  sb          $v1, 0xA2($s2)
    ctx->pc = 0x34fa88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x34fa8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34fa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34fa90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34fa90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34fa94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34fa94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fa98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34fa98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x34FA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FA9Cu;
            // 0x34faa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FAA4u;
    // 0x34faa4: 0x0  nop
    ctx->pc = 0x34faa4u;
    // NOP
    // 0x34faa8: 0x0  nop
    ctx->pc = 0x34faa8u;
    // NOP
    // 0x34faac: 0x0  nop
    ctx->pc = 0x34faacu;
    // NOP
}
