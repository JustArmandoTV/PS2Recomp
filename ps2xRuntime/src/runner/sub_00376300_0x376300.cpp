#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376300
// Address: 0x376300 - 0x376350
void sub_00376300_0x376300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376300_0x376300");
#endif

    switch (ctx->pc) {
        case 0x376324u: goto label_376324;
        case 0x376334u: goto label_376334;
        default: break;
    }

    ctx->pc = 0x376300u;

    // 0x376300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376304: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x376304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x376308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37630c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x376310: 0x8c820288  lw          $v0, 0x288($a0)
    ctx->pc = 0x376310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 648)));
    // 0x376314: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x376314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376318: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x376318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x37631c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x37631Cu;
    SET_GPR_U32(ctx, 31, 0x376324u);
    ctx->pc = 0x376320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37631Cu;
            // 0x376320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376324u; }
        if (ctx->pc != 0x376324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376324u; }
        if (ctx->pc != 0x376324u) { return; }
    }
    ctx->pc = 0x376324u;
label_376324:
    // 0x376324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x376328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37632c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x37632Cu;
    SET_GPR_U32(ctx, 31, 0x376334u);
    ctx->pc = 0x376330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37632Cu;
            // 0x376330: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376334u; }
        if (ctx->pc != 0x376334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376334u; }
        if (ctx->pc != 0x376334u) { return; }
    }
    ctx->pc = 0x376334u;
label_376334:
    // 0x376334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37633c: 0x3e00008  jr          $ra
    ctx->pc = 0x37633Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37633Cu;
            // 0x376340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376344u;
    // 0x376344: 0x0  nop
    ctx->pc = 0x376344u;
    // NOP
    // 0x376348: 0x0  nop
    ctx->pc = 0x376348u;
    // NOP
    // 0x37634c: 0x0  nop
    ctx->pc = 0x37634cu;
    // NOP
}
