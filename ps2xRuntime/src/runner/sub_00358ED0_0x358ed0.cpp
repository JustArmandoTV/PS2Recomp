#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358ED0
// Address: 0x358ed0 - 0x358f30
void sub_00358ED0_0x358ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358ED0_0x358ed0");
#endif

    switch (ctx->pc) {
        case 0x358f14u: goto label_358f14;
        case 0x358f24u: goto label_358f24;
        default: break;
    }

    ctx->pc = 0x358ed0u;

    // 0x358ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358ed4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x358ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x358ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358edc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x358edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ee0: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x358ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x358ee4: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x358EE4u;
    {
        const bool branch_taken_0x358ee4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x358EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358EE4u;
            // 0x358ee8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ee4) {
            ctx->pc = 0x358F24u;
            goto label_358f24;
        }
    }
    ctx->pc = 0x358EECu;
    // 0x358eec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x358eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x358ef0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x358ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x358ef4: 0x8c66e3b8  lw          $a2, -0x1C48($v1)
    ctx->pc = 0x358ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
    // 0x358ef8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x358ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x358efc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x358efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x358f00: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x358f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x358f04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x358F04u;
    {
        const bool branch_taken_0x358f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358f04) {
            ctx->pc = 0x358F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358F04u;
            // 0x358f08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358F1Cu;
            goto label_358f1c;
        }
    }
    ctx->pc = 0x358F0Cu;
    // 0x358f0c: 0xc055ea8  jal         func_157AA0
    ctx->pc = 0x358F0Cu;
    SET_GPR_U32(ctx, 31, 0x358F14u);
    ctx->pc = 0x358F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358F0Cu;
            // 0x358f10: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358F14u; }
        if (ctx->pc != 0x358F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358F14u; }
        if (ctx->pc != 0x358F14u) { return; }
    }
    ctx->pc = 0x358F14u;
label_358f14:
    // 0x358f14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x358F14u;
    {
        const bool branch_taken_0x358f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358F14u;
            // 0x358f18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f14) {
            ctx->pc = 0x358F28u;
            goto label_358f28;
        }
    }
    ctx->pc = 0x358F1Cu;
label_358f1c:
    // 0x358f1c: 0xc055d28  jal         func_1574A0
    ctx->pc = 0x358F1Cu;
    SET_GPR_U32(ctx, 31, 0x358F24u);
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358F24u; }
        if (ctx->pc != 0x358F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358F24u; }
        if (ctx->pc != 0x358F24u) { return; }
    }
    ctx->pc = 0x358F24u;
label_358f24:
    // 0x358f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_358f28:
    // 0x358f28: 0x3e00008  jr          $ra
    ctx->pc = 0x358F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358F28u;
            // 0x358f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358F30u;
}
