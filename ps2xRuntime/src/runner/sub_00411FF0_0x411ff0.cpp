#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00411FF0
// Address: 0x411ff0 - 0x412050
void sub_00411FF0_0x411ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411FF0_0x411ff0");
#endif

    switch (ctx->pc) {
        case 0x412034u: goto label_412034;
        case 0x412044u: goto label_412044;
        default: break;
    }

    ctx->pc = 0x411ff0u;

    // 0x411ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x411ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x411ff4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x411ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x411ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x411ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x411ffc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x411ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412000: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x412000u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x412004: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x412004u;
    {
        const bool branch_taken_0x412004 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x412008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412004u;
            // 0x412008: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412004) {
            ctx->pc = 0x412044u;
            goto label_412044;
        }
    }
    ctx->pc = 0x41200Cu;
    // 0x41200c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41200cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x412010: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x412010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x412014: 0x8c66e3b8  lw          $a2, -0x1C48($v1)
    ctx->pc = 0x412014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
    // 0x412018: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x412018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x41201c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x41201cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x412020: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x412020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x412024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x412024u;
    {
        const bool branch_taken_0x412024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412024) {
            ctx->pc = 0x41203Cu;
            goto label_41203c;
        }
    }
    ctx->pc = 0x41202Cu;
    // 0x41202c: 0xc055754  jal         func_155D50
    ctx->pc = 0x41202Cu;
    SET_GPR_U32(ctx, 31, 0x412034u);
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412034u; }
        if (ctx->pc != 0x412034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412034u; }
        if (ctx->pc != 0x412034u) { return; }
    }
    ctx->pc = 0x412034u;
label_412034:
    // 0x412034: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x412034u;
    {
        const bool branch_taken_0x412034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412034u;
            // 0x412038: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412034) {
            ctx->pc = 0x412048u;
            goto label_412048;
        }
    }
    ctx->pc = 0x41203Cu;
label_41203c:
    // 0x41203c: 0xc055990  jal         func_156640
    ctx->pc = 0x41203Cu;
    SET_GPR_U32(ctx, 31, 0x412044u);
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412044u; }
        if (ctx->pc != 0x412044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412044u; }
        if (ctx->pc != 0x412044u) { return; }
    }
    ctx->pc = 0x412044u;
label_412044:
    // 0x412044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_412048:
    // 0x412048: 0x3e00008  jr          $ra
    ctx->pc = 0x412048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412048u;
            // 0x41204c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412050u;
}
