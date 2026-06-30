#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049FA10
// Address: 0x49fa10 - 0x49fa70
void sub_0049FA10_0x49fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FA10_0x49fa10");
#endif

    switch (ctx->pc) {
        case 0x49fa54u: goto label_49fa54;
        case 0x49fa64u: goto label_49fa64;
        default: break;
    }

    ctx->pc = 0x49fa10u;

    // 0x49fa10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49fa14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49fa18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49fa1c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x49fa1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fa20: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x49fa20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x49fa24: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x49FA24u;
    {
        const bool branch_taken_0x49fa24 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x49FA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FA24u;
            // 0x49fa28: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fa24) {
            ctx->pc = 0x49FA64u;
            goto label_49fa64;
        }
    }
    ctx->pc = 0x49FA2Cu;
    // 0x49fa2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49fa30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x49fa34: 0x8c66e3b8  lw          $a2, -0x1C48($v1)
    ctx->pc = 0x49fa34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
    // 0x49fa38: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x49fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x49fa3c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x49fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x49fa40: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x49fa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x49fa44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49FA44u;
    {
        const bool branch_taken_0x49fa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fa44) {
            ctx->pc = 0x49FA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49FA44u;
            // 0x49fa48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49FA5Cu;
            goto label_49fa5c;
        }
    }
    ctx->pc = 0x49FA4Cu;
    // 0x49fa4c: 0xc055ea8  jal         func_157AA0
    ctx->pc = 0x49FA4Cu;
    SET_GPR_U32(ctx, 31, 0x49FA54u);
    ctx->pc = 0x49FA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FA4Cu;
            // 0x49fa50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FA54u; }
        if (ctx->pc != 0x49FA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FA54u; }
        if (ctx->pc != 0x49FA54u) { return; }
    }
    ctx->pc = 0x49FA54u;
label_49fa54:
    // 0x49fa54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49FA54u;
    {
        const bool branch_taken_0x49fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FA54u;
            // 0x49fa58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fa54) {
            ctx->pc = 0x49FA68u;
            goto label_49fa68;
        }
    }
    ctx->pc = 0x49FA5Cu;
label_49fa5c:
    // 0x49fa5c: 0xc055d28  jal         func_1574A0
    ctx->pc = 0x49FA5Cu;
    SET_GPR_U32(ctx, 31, 0x49FA64u);
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FA64u; }
        if (ctx->pc != 0x49FA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FA64u; }
        if (ctx->pc != 0x49FA64u) { return; }
    }
    ctx->pc = 0x49FA64u;
label_49fa64:
    // 0x49fa64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49fa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49fa68:
    // 0x49fa68: 0x3e00008  jr          $ra
    ctx->pc = 0x49FA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FA68u;
            // 0x49fa6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FA70u;
}
