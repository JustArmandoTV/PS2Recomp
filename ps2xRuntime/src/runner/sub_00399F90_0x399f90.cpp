#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00399F90
// Address: 0x399f90 - 0x399ff0
void sub_00399F90_0x399f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399F90_0x399f90");
#endif

    switch (ctx->pc) {
        case 0x399fd4u: goto label_399fd4;
        case 0x399fe4u: goto label_399fe4;
        default: break;
    }

    ctx->pc = 0x399f90u;

    // 0x399f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399f94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x399f9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x399f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399fa0: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x399fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x399fa4: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x399FA4u;
    {
        const bool branch_taken_0x399fa4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x399FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399FA4u;
            // 0x399fa8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399fa4) {
            ctx->pc = 0x399FE4u;
            goto label_399fe4;
        }
    }
    ctx->pc = 0x399FACu;
    // 0x399fac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399fb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x399fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x399fb4: 0x8c66e3b8  lw          $a2, -0x1C48($v1)
    ctx->pc = 0x399fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
    // 0x399fb8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x399fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x399fbc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x399fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x399fc0: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x399fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x399fc4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x399FC4u;
    {
        const bool branch_taken_0x399fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x399fc4) {
            ctx->pc = 0x399FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399FC4u;
            // 0x399fc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x399FDCu;
            goto label_399fdc;
        }
    }
    ctx->pc = 0x399FCCu;
    // 0x399fcc: 0xc055ea8  jal         func_157AA0
    ctx->pc = 0x399FCCu;
    SET_GPR_U32(ctx, 31, 0x399FD4u);
    ctx->pc = 0x399FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399FCCu;
            // 0x399fd0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399FD4u; }
        if (ctx->pc != 0x399FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399FD4u; }
        if (ctx->pc != 0x399FD4u) { return; }
    }
    ctx->pc = 0x399FD4u;
label_399fd4:
    // 0x399fd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x399FD4u;
    {
        const bool branch_taken_0x399fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399FD4u;
            // 0x399fd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399fd4) {
            ctx->pc = 0x399FE8u;
            goto label_399fe8;
        }
    }
    ctx->pc = 0x399FDCu;
label_399fdc:
    // 0x399fdc: 0xc055d28  jal         func_1574A0
    ctx->pc = 0x399FDCu;
    SET_GPR_U32(ctx, 31, 0x399FE4u);
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399FE4u; }
        if (ctx->pc != 0x399FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399FE4u; }
        if (ctx->pc != 0x399FE4u) { return; }
    }
    ctx->pc = 0x399FE4u;
label_399fe4:
    // 0x399fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_399fe8:
    // 0x399fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x399FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399FE8u;
            // 0x399fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399FF0u;
}
