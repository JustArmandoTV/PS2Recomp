#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CC78
// Address: 0x19cc78 - 0x19cce0
void sub_0019CC78_0x19cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CC78_0x19cc78");
#endif

    switch (ctx->pc) {
        case 0x19cca0u: goto label_19cca0;
        case 0x19ccc0u: goto label_19ccc0;
        default: break;
    }

    ctx->pc = 0x19cc78u;

    // 0x19cc78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cc7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cc80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19cc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19cc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19cc88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19cc88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc8c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x19cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19cc90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19cc94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19cc98: 0xc040eb6  jal         func_103AD8
    ctx->pc = 0x19CC98u;
    SET_GPR_U32(ctx, 31, 0x19CCA0u);
    ctx->pc = 0x19CC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC98u;
            // 0x19cc9c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AD8u;
    if (runtime->hasFunction(0x103AD8u)) {
        auto targetFn = runtime->lookupFunction(0x103AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCA0u; }
        if (ctx->pc != 0x19CCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AD8_0x103ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCA0u; }
        if (ctx->pc != 0x19CCA0u) { return; }
    }
    ctx->pc = 0x19CCA0u;
label_19cca0:
    // 0x19cca0: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x19cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x19cca4: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x19cca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19cca8: 0xac510080  sw          $s1, 0x80($v0)
    ctx->pc = 0x19cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x19ccac: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x19ccacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x19ccb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19ccb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccb8: 0xc040fea  jal         func_103FA8
    ctx->pc = 0x19CCB8u;
    SET_GPR_U32(ctx, 31, 0x19CCC0u);
    ctx->pc = 0x19CCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCB8u;
            // 0x19ccbc: 0x103103  sra         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103FA8u;
    if (runtime->hasFunction(0x103FA8u)) {
        auto targetFn = runtime->lookupFunction(0x103FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCC0u; }
        if (ctx->pc != 0x19CCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103FA8_0x103fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCC0u; }
        if (ctx->pc != 0x19CCC0u) { return; }
    }
    ctx->pc = 0x19CCC0u;
label_19ccc0:
    // 0x19ccc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ccc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ccc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ccc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ccc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19cccc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19ccccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ccd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19ccd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ccd4: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCD4u;
            // 0x19ccd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CCDCu;
    // 0x19ccdc: 0x0  nop
    ctx->pc = 0x19ccdcu;
    // NOP
}
