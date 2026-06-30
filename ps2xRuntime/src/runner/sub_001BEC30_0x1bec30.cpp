#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEC30
// Address: 0x1bec30 - 0x1bece0
void sub_001BEC30_0x1bec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEC30_0x1bec30");
#endif

    switch (ctx->pc) {
        case 0x1bec58u: goto label_1bec58;
        case 0x1bec7cu: goto label_1bec7c;
        case 0x1bec88u: goto label_1bec88;
        case 0x1becb0u: goto label_1becb0;
        case 0x1becc8u: goto label_1becc8;
        default: break;
    }

    ctx->pc = 0x1bec30u;

    // 0x1bec30: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1bec30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bec34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bec34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bec38: 0xa73818  mult        $a3, $a1, $a3
    ctx->pc = 0x1bec38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bec3c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bec40: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1bec40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bec44: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bec44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1bec48: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bec4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1bec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bec50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC50u;
            // 0x1bec54: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEC58u;
label_1bec58:
    // 0x1bec58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bec58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bec5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bec5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bec60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bec60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bec68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bec68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bec6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bec74: 0xc062316  jal         func_188C58
    ctx->pc = 0x1BEC74u;
    SET_GPR_U32(ctx, 31, 0x1BEC7Cu);
    ctx->pc = 0x1BEC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC74u;
            // 0x1bec78: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x188C58u;
    if (runtime->hasFunction(0x188C58u)) {
        auto targetFn = runtime->lookupFunction(0x188C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC7Cu; }
        if (ctx->pc != 0x1BEC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188C58_0x188c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC7Cu; }
        if (ctx->pc != 0x1BEC7Cu) { return; }
    }
    ctx->pc = 0x1BEC7Cu;
label_1bec7c:
    // 0x1bec7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec80: 0xc06fa1c  jal         func_1BE870
    ctx->pc = 0x1BEC80u;
    SET_GPR_U32(ctx, 31, 0x1BEC88u);
    ctx->pc = 0x1BEC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC80u;
            // 0x1bec84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE870u;
    if (runtime->hasFunction(0x1BE870u)) {
        auto targetFn = runtime->lookupFunction(0x1BE870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC88u; }
        if (ctx->pc != 0x1BEC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE870_0x1be870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC88u; }
        if (ctx->pc != 0x1BEC88u) { return; }
    }
    ctx->pc = 0x1BEC88u;
label_1bec88:
    // 0x1bec88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bec8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec90: 0x103042  srl         $a2, $s0, 1
    ctx->pc = 0x1bec90u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1bec94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bec94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bec98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bec98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bec9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1beca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beca4: 0x806fa7a  j           func_1BE9E8
    ctx->pc = 0x1BECA4u;
    ctx->pc = 0x1BECA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECA4u;
            // 0x1beca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9E8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE9E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BECACu;
    // 0x1becac: 0x0  nop
    ctx->pc = 0x1becacu;
    // NOP
label_1becb0:
    // 0x1becb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1becb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1becb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1becb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1becb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1becb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1becbc: 0x8062320  j           func_188C80
    ctx->pc = 0x1BECBCu;
    ctx->pc = 0x1BECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECBCu;
            // 0x1becc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188C80u;
    {
        auto targetFn = runtime->lookupFunction(0x188C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BECC4u;
    // 0x1becc4: 0x0  nop
    ctx->pc = 0x1becc4u;
    // NOP
label_1becc8:
    // 0x1becc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1becc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1beccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1becccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1becd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1becd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1becd4: 0x8062300  j           func_188C00
    ctx->pc = 0x1BECD4u;
    ctx->pc = 0x1BECD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECD4u;
            // 0x1becd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188C00u;
    {
        auto targetFn = runtime->lookupFunction(0x188C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BECDCu;
    // 0x1becdc: 0x0  nop
    ctx->pc = 0x1becdcu;
    // NOP
}
