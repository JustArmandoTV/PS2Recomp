#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169DE0
// Address: 0x169de0 - 0x169e28
void sub_00169DE0_0x169de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169DE0_0x169de0");
#endif

    switch (ctx->pc) {
        case 0x169dfcu: goto label_169dfc;
        case 0x169e08u: goto label_169e08;
        case 0x169e10u: goto label_169e10;
        default: break;
    }

    ctx->pc = 0x169de0u;

    // 0x169de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169dec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169df0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169df4: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x169DF4u;
    SET_GPR_U32(ctx, 31, 0x169DFCu);
    ctx->pc = 0x169DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DF4u;
            // 0x169df8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DFCu; }
        if (ctx->pc != 0x169DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DFCu; }
        if (ctx->pc != 0x169DFCu) { return; }
    }
    ctx->pc = 0x169DFCu;
label_169dfc:
    // 0x169dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e00: 0xc05a78a  jal         func_169E28
    ctx->pc = 0x169E00u;
    SET_GPR_U32(ctx, 31, 0x169E08u);
    ctx->pc = 0x169E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E00u;
            // 0x169e04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169E28u;
    if (runtime->hasFunction(0x169E28u)) {
        auto targetFn = runtime->lookupFunction(0x169E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E08u; }
        if (ctx->pc != 0x169E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E28_0x169e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E08u; }
        if (ctx->pc != 0x169E08u) { return; }
    }
    ctx->pc = 0x169E08u;
label_169e08:
    // 0x169e08: 0xc05adca  jal         func_16B728
    ctx->pc = 0x169E08u;
    SET_GPR_U32(ctx, 31, 0x169E10u);
    ctx->pc = 0x169E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E08u;
            // 0x169e0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E10u; }
        if (ctx->pc != 0x169E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E10u; }
        if (ctx->pc != 0x169E10u) { return; }
    }
    ctx->pc = 0x169E10u;
label_169e10:
    // 0x169e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169e14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169e20: 0x3e00008  jr          $ra
    ctx->pc = 0x169E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169E20u;
            // 0x169e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169E28u;
}
