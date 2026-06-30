#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055C150
// Address: 0x55c150 - 0x55c1b0
void sub_0055C150_0x55c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055C150_0x55c150");
#endif

    switch (ctx->pc) {
        case 0x55c170u: goto label_55c170;
        case 0x55c178u: goto label_55c178;
        default: break;
    }

    ctx->pc = 0x55c150u;

    // 0x55c150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x55c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x55c154: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x55c154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55c158: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x55c158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x55c15c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x55c15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x55c160: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x55c160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x55c164: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x55c164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x55c168: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x55C168u;
    SET_GPR_U32(ctx, 31, 0x55C170u);
    ctx->pc = 0x55C16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C168u;
            // 0x55c16c: 0x24c6f400  addiu       $a2, $a2, -0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C170u; }
        if (ctx->pc != 0x55C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C170u; }
        if (ctx->pc != 0x55C170u) { return; }
    }
    ctx->pc = 0x55C170u;
label_55c170:
    // 0x55c170: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x55C170u;
    SET_GPR_U32(ctx, 31, 0x55C178u);
    ctx->pc = 0x55C174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C170u;
            // 0x55c174: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C178u; }
        if (ctx->pc != 0x55C178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C178u; }
        if (ctx->pc != 0x55C178u) { return; }
    }
    ctx->pc = 0x55C178u;
label_55c178:
    // 0x55c178: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x55c178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x55c17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x55c17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55c180: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x55c180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x55c184: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x55c184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x55c188: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x55c188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x55c18c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x55c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x55c190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55c190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x55c194: 0x0  nop
    ctx->pc = 0x55c194u;
    // NOP
    // 0x55c198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55c198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x55c19c: 0x3e00008  jr          $ra
    ctx->pc = 0x55C19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55C1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C19Cu;
            // 0x55c1a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55C1A4u;
    // 0x55c1a4: 0x0  nop
    ctx->pc = 0x55c1a4u;
    // NOP
    // 0x55c1a8: 0x0  nop
    ctx->pc = 0x55c1a8u;
    // NOP
    // 0x55c1ac: 0x0  nop
    ctx->pc = 0x55c1acu;
    // NOP
}
