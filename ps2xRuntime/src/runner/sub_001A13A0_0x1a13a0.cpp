#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A13A0
// Address: 0x1a13a0 - 0x1a1400
void sub_001A13A0_0x1a13a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A13A0_0x1a13a0");
#endif

    switch (ctx->pc) {
        case 0x1a13a0u: goto label_1a13a0;
        case 0x1a13a4u: goto label_1a13a4;
        case 0x1a13a8u: goto label_1a13a8;
        case 0x1a13acu: goto label_1a13ac;
        case 0x1a13b0u: goto label_1a13b0;
        case 0x1a13b4u: goto label_1a13b4;
        case 0x1a13b8u: goto label_1a13b8;
        case 0x1a13bcu: goto label_1a13bc;
        case 0x1a13c0u: goto label_1a13c0;
        case 0x1a13c4u: goto label_1a13c4;
        case 0x1a13c8u: goto label_1a13c8;
        case 0x1a13ccu: goto label_1a13cc;
        case 0x1a13d0u: goto label_1a13d0;
        case 0x1a13d4u: goto label_1a13d4;
        case 0x1a13d8u: goto label_1a13d8;
        case 0x1a13dcu: goto label_1a13dc;
        case 0x1a13e0u: goto label_1a13e0;
        case 0x1a13e4u: goto label_1a13e4;
        case 0x1a13e8u: goto label_1a13e8;
        case 0x1a13ecu: goto label_1a13ec;
        case 0x1a13f0u: goto label_1a13f0;
        case 0x1a13f4u: goto label_1a13f4;
        case 0x1a13f8u: goto label_1a13f8;
        case 0x1a13fcu: goto label_1a13fc;
        default: break;
    }

    ctx->pc = 0x1a13a0u;

label_1a13a0:
    // 0x1a13a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a13a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a13a4:
    // 0x1a13a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a13a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a13a8:
    // 0x1a13a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a13a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a13ac:
    // 0x1a13ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a13acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a13b0:
    // 0x1a13b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a13b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a13b4:
    // 0x1a13b4: 0xc0685d4  jal         func_1A1750
label_1a13b8:
    if (ctx->pc == 0x1A13B8u) {
        ctx->pc = 0x1A13B8u;
            // 0x1a13b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A13BCu;
        goto label_1a13bc;
    }
    ctx->pc = 0x1A13B4u;
    SET_GPR_U32(ctx, 31, 0x1A13BCu);
    ctx->pc = 0x1A13B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13B4u;
            // 0x1a13b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13BCu; }
        if (ctx->pc != 0x1A13BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13BCu; }
        if (ctx->pc != 0x1A13BCu) { return; }
    }
    ctx->pc = 0x1A13BCu;
label_1a13bc:
    // 0x1a13bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a13c0:
    // 0x1a13c0: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1a13c4:
    if (ctx->pc == 0x1A13C4u) {
        ctx->pc = 0x1A13C4u;
            // 0x1a13c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A13C8u;
        goto label_1a13c8;
    }
    ctx->pc = 0x1A13C0u;
    {
        const bool branch_taken_0x1a13c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a13c0) {
            ctx->pc = 0x1A13C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13C0u;
            // 0x1a13c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A13ECu;
            goto label_1a13ec;
        }
    }
    ctx->pc = 0x1A13C8u;
label_1a13c8:
    // 0x1a13c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a13cc:
    // 0x1a13cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a13d0:
    if (ctx->pc == 0x1A13D0u) {
        ctx->pc = 0x1A13D0u;
            // 0x1a13d0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1A13D4u;
        goto label_1a13d4;
    }
    ctx->pc = 0x1A13CCu;
    {
        const bool branch_taken_0x1a13cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A13D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13CCu;
            // 0x1a13d0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13cc) {
            ctx->pc = 0x1A13E8u;
            goto label_1a13e8;
        }
    }
    ctx->pc = 0x1A13D4u;
label_1a13d4:
    // 0x1a13d4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1a13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a13d8:
    // 0x1a13d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a13dc:
    if (ctx->pc == 0x1A13DCu) {
        ctx->pc = 0x1A13DCu;
            // 0x1a13dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A13E0u;
        goto label_1a13e0;
    }
    ctx->pc = 0x1A13D8u;
    {
        const bool branch_taken_0x1a13d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a13d8) {
            ctx->pc = 0x1A13DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13D8u;
            // 0x1a13dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A13ECu;
            goto label_1a13ec;
        }
    }
    ctx->pc = 0x1A13E0u;
label_1a13e0:
    // 0x1a13e0: 0x40f809  jalr        $v0
label_1a13e4:
    if (ctx->pc == 0x1A13E4u) {
        ctx->pc = 0x1A13E4u;
            // 0x1a13e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A13E8u;
        goto label_1a13e8;
    }
    ctx->pc = 0x1A13E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A13E8u);
        ctx->pc = 0x1A13E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13E0u;
            // 0x1a13e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A13E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A13E8u; }
            if (ctx->pc != 0x1A13E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A13E8u;
label_1a13e8:
    // 0x1a13e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a13e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a13ec:
    // 0x1a13ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a13ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a13f0:
    // 0x1a13f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a13f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a13f4:
    // 0x1a13f4: 0x3e00008  jr          $ra
label_1a13f8:
    if (ctx->pc == 0x1A13F8u) {
        ctx->pc = 0x1A13F8u;
            // 0x1a13f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A13FCu;
        goto label_1a13fc;
    }
    ctx->pc = 0x1A13F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A13F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13F4u;
            // 0x1a13f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A13FCu;
label_1a13fc:
    // 0x1a13fc: 0x0  nop
    ctx->pc = 0x1a13fcu;
    // NOP
}
