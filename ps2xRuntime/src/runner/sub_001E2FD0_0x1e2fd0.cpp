#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2FD0
// Address: 0x1e2fd0 - 0x1e3020
void sub_001E2FD0_0x1e2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2FD0_0x1e2fd0");
#endif

    switch (ctx->pc) {
        case 0x1e3008u: goto label_1e3008;
        default: break;
    }

    ctx->pc = 0x1e2fd0u;

    // 0x1e2fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fe0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2FE0u;
    {
        const bool branch_taken_0x1e2fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2fe0) {
            ctx->pc = 0x1E2FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FE0u;
            // 0x1e2fe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E300Cu;
            goto label_1e300c;
        }
    }
    ctx->pc = 0x1E2FE8u;
    // 0x1e2fe8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e2fec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e2ff0: 0x2463d400  addiu       $v1, $v1, -0x2C00
    ctx->pc = 0x1e2ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956032));
    // 0x1e2ff4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2ff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e2ff8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2FF8u;
    {
        const bool branch_taken_0x1e2ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E2FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FF8u;
            // 0x1e2ffc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ff8) {
            ctx->pc = 0x1E3008u;
            goto label_1e3008;
        }
    }
    ctx->pc = 0x1E3000u;
    // 0x1e3000: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E3000u;
    SET_GPR_U32(ctx, 31, 0x1E3008u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3008u; }
        if (ctx->pc != 0x1E3008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3008u; }
        if (ctx->pc != 0x1E3008u) { return; }
    }
    ctx->pc = 0x1E3008u;
label_1e3008:
    // 0x1e3008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e300c:
    // 0x1e300c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3014: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3014u;
            // 0x1e3018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E301Cu;
    // 0x1e301c: 0x0  nop
    ctx->pc = 0x1e301cu;
    // NOP
}
