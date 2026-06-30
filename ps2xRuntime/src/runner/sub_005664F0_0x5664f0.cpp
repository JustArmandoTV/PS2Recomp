#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005664F0
// Address: 0x5664f0 - 0x566540
void sub_005664F0_0x5664f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005664F0_0x5664f0");
#endif

    switch (ctx->pc) {
        case 0x566528u: goto label_566528;
        default: break;
    }

    ctx->pc = 0x5664f0u;

    // 0x5664f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5664f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5664f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5664f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5664f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5664f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5664fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5664fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x566500: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x566500u;
    {
        const bool branch_taken_0x566500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x566500) {
            ctx->pc = 0x566504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566500u;
            // 0x566504: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56652Cu;
            goto label_56652c;
        }
    }
    ctx->pc = 0x566508u;
    // 0x566508: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x566508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x56650c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x56650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x566510: 0x24637f30  addiu       $v1, $v1, 0x7F30
    ctx->pc = 0x566510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32560));
    // 0x566514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x566514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x566518: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x566518u;
    {
        const bool branch_taken_0x566518 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x56651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566518u;
            // 0x56651c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566518) {
            ctx->pc = 0x566528u;
            goto label_566528;
        }
    }
    ctx->pc = 0x566520u;
    // 0x566520: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x566520u;
    SET_GPR_U32(ctx, 31, 0x566528u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566528u; }
        if (ctx->pc != 0x566528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566528u; }
        if (ctx->pc != 0x566528u) { return; }
    }
    ctx->pc = 0x566528u;
label_566528:
    // 0x566528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x566528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56652c:
    // 0x56652c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x56652cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x566530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x566530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x566534: 0x3e00008  jr          $ra
    ctx->pc = 0x566534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x566538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566534u;
            // 0x566538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56653Cu;
    // 0x56653c: 0x0  nop
    ctx->pc = 0x56653cu;
    // NOP
}
