#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1870
// Address: 0x1c1870 - 0x1c1910
void sub_001C1870_0x1c1870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1870_0x1c1870");
#endif

    switch (ctx->pc) {
        case 0x1c1870u: goto label_1c1870;
        case 0x1c1874u: goto label_1c1874;
        case 0x1c1878u: goto label_1c1878;
        case 0x1c187cu: goto label_1c187c;
        case 0x1c1880u: goto label_1c1880;
        case 0x1c1884u: goto label_1c1884;
        case 0x1c1888u: goto label_1c1888;
        case 0x1c188cu: goto label_1c188c;
        case 0x1c1890u: goto label_1c1890;
        case 0x1c1894u: goto label_1c1894;
        case 0x1c1898u: goto label_1c1898;
        case 0x1c189cu: goto label_1c189c;
        case 0x1c18a0u: goto label_1c18a0;
        case 0x1c18a4u: goto label_1c18a4;
        case 0x1c18a8u: goto label_1c18a8;
        case 0x1c18acu: goto label_1c18ac;
        case 0x1c18b0u: goto label_1c18b0;
        case 0x1c18b4u: goto label_1c18b4;
        case 0x1c18b8u: goto label_1c18b8;
        case 0x1c18bcu: goto label_1c18bc;
        case 0x1c18c0u: goto label_1c18c0;
        case 0x1c18c4u: goto label_1c18c4;
        case 0x1c18c8u: goto label_1c18c8;
        case 0x1c18ccu: goto label_1c18cc;
        case 0x1c18d0u: goto label_1c18d0;
        case 0x1c18d4u: goto label_1c18d4;
        case 0x1c18d8u: goto label_1c18d8;
        case 0x1c18dcu: goto label_1c18dc;
        case 0x1c18e0u: goto label_1c18e0;
        case 0x1c18e4u: goto label_1c18e4;
        case 0x1c18e8u: goto label_1c18e8;
        case 0x1c18ecu: goto label_1c18ec;
        case 0x1c18f0u: goto label_1c18f0;
        case 0x1c18f4u: goto label_1c18f4;
        case 0x1c18f8u: goto label_1c18f8;
        case 0x1c18fcu: goto label_1c18fc;
        case 0x1c1900u: goto label_1c1900;
        case 0x1c1904u: goto label_1c1904;
        case 0x1c1908u: goto label_1c1908;
        case 0x1c190cu: goto label_1c190c;
        default: break;
    }

    ctx->pc = 0x1c1870u;

label_1c1870:
    // 0x1c1870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1874:
    // 0x1c1874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1878:
    // 0x1c1878: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c187c:
    // 0x1c187c: 0xc071236  jal         func_1C48D8
label_1c1880:
    if (ctx->pc == 0x1C1880u) {
        ctx->pc = 0x1C1880u;
            // 0x1c1880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1884u;
        goto label_1c1884;
    }
    ctx->pc = 0x1C187Cu;
    SET_GPR_U32(ctx, 31, 0x1C1884u);
    ctx->pc = 0x1C1880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C187Cu;
            // 0x1c1880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1884u; }
        if (ctx->pc != 0x1C1884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1884u; }
        if (ctx->pc != 0x1C1884u) { return; }
    }
    ctx->pc = 0x1C1884u;
label_1c1884:
    // 0x1c1884: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1888:
    // 0x1c1888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c188c:
    // 0x1c188c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c188cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1890:
    // 0x1c1890: 0x807042c  j           func_1C10B0
label_1c1894:
    if (ctx->pc == 0x1C1894u) {
        ctx->pc = 0x1C1894u;
            // 0x1c1894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1898u;
        goto label_1c1898;
    }
    ctx->pc = 0x1C1890u;
    ctx->pc = 0x1C1894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1890u;
            // 0x1c1894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C10B0u;
    if (runtime->hasFunction(0x1C10B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C10B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C10B0_0x1c10b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1898u;
label_1c1898:
    // 0x1c1898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c189c:
    // 0x1c189c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c18a0:
    // 0x1c18a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c18a4:
    // 0x1c18a4: 0xc071236  jal         func_1C48D8
label_1c18a8:
    if (ctx->pc == 0x1C18A8u) {
        ctx->pc = 0x1C18A8u;
            // 0x1c18a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C18ACu;
        goto label_1c18ac;
    }
    ctx->pc = 0x1C18A4u;
    SET_GPR_U32(ctx, 31, 0x1C18ACu);
    ctx->pc = 0x1C18A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18A4u;
            // 0x1c18a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18ACu; }
        if (ctx->pc != 0x1C18ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18ACu; }
        if (ctx->pc != 0x1C18ACu) { return; }
    }
    ctx->pc = 0x1C18ACu;
label_1c18ac:
    // 0x1c18ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c18acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c18b0:
    // 0x1c18b0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c18b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c18b4:
    // 0x1c18b4: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c18b8:
    // 0x1c18b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c18b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c18bc:
    // 0x1c18bc: 0x24c6b9e0  addiu       $a2, $a2, -0x4620
    ctx->pc = 0x1c18bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949344));
label_1c18c0:
    // 0x1c18c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c18c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c18c4:
    // 0x1c18c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c18c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c18c8:
    // 0x1c18c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c18cc:
    if (ctx->pc == 0x1C18CCu) {
        ctx->pc = 0x1C18CCu;
            // 0x1c18cc: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C18D0u;
        goto label_1c18d0;
    }
    ctx->pc = 0x1C18C8u;
    {
        const bool branch_taken_0x1c18c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C18CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18C8u;
            // 0x1c18cc: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18c8) {
            ctx->pc = 0x1C18F0u;
            goto label_1c18f0;
        }
    }
    ctx->pc = 0x1C18D0u;
label_1c18d0:
    // 0x1c18d0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1c18d4:
    // 0x1c18d4: 0x40f809  jalr        $v0
label_1c18d8:
    if (ctx->pc == 0x1C18D8u) {
        ctx->pc = 0x1C18DCu;
        goto label_1c18dc;
    }
    ctx->pc = 0x1C18D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C18DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C18DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C18DCu; }
            if (ctx->pc != 0x1C18DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1C18DCu;
label_1c18dc:
    // 0x1c18dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c18dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c18e0:
    // 0x1c18e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c18e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c18e4:
    // 0x1c18e4: 0x3e00008  jr          $ra
label_1c18e8:
    if (ctx->pc == 0x1C18E8u) {
        ctx->pc = 0x1C18E8u;
            // 0x1c18e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C18ECu;
        goto label_1c18ec;
    }
    ctx->pc = 0x1C18E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C18E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18E4u;
            // 0x1c18e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C18ECu;
label_1c18ec:
    // 0x1c18ec: 0x0  nop
    ctx->pc = 0x1c18ecu;
    // NOP
label_1c18f0:
    // 0x1c18f0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c18f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c18f4:
    // 0x1c18f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c18f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c18f8:
    // 0x1c18f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c18f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c18fc:
    // 0x1c18fc: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1900:
    // 0x1c1900: 0x2405013a  addiu       $a1, $zero, 0x13A
    ctx->pc = 0x1c1900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
label_1c1904:
    // 0x1c1904: 0x80711fe  j           func_1C47F8
label_1c1908:
    if (ctx->pc == 0x1C1908u) {
        ctx->pc = 0x1C1908u;
            // 0x1c1908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C190Cu;
        goto label_1c190c;
    }
    ctx->pc = 0x1C1904u;
    ctx->pc = 0x1C1908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1904u;
            // 0x1c1908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C190Cu;
label_1c190c:
    // 0x1c190c: 0x0  nop
    ctx->pc = 0x1c190cu;
    // NOP
}
