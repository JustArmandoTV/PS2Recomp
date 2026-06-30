#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B69B0
// Address: 0x1b69b0 - 0x1b6a48
void sub_001B69B0_0x1b69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B69B0_0x1b69b0");
#endif

    switch (ctx->pc) {
        case 0x1b69f4u: goto label_1b69f4;
        case 0x1b6a0cu: goto label_1b6a0c;
        case 0x1b6a18u: goto label_1b6a18;
        default: break;
    }

    ctx->pc = 0x1b69b0u;

    // 0x1b69b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b69b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b69b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b69b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b69bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b69bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b69c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b69c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b69c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b69c8: 0x26300d88  addiu       $s0, $s1, 0xD88
    ctx->pc = 0x1b69c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
    // 0x1b69cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b69ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b69d0: 0x8c459b40  lw          $a1, -0x64C0($v0)
    ctx->pc = 0x1b69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941504)));
    // 0x1b69d4: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1b69d8: 0x8e0302ac  lw          $v1, 0x2AC($s0)
    ctx->pc = 0x1b69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1b69dc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B69DCu;
    {
        const bool branch_taken_0x1b69dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69dc) {
            ctx->pc = 0x1B69E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69DCu;
            // 0x1b69e0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B69E4u;
            goto label_1b69e4;
        }
    }
    ctx->pc = 0x1B69E4u;
label_1b69e4:
    // 0x1b69e4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1b69e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b69e8: 0x7062001a  div1        $zero, $v1, $v0
    ctx->pc = 0x1b69e8u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1b69ec: 0xc06da92  jal         func_1B6A48
    ctx->pc = 0x1B69ECu;
    SET_GPR_U32(ctx, 31, 0x1B69F4u);
    ctx->pc = 0x1B69F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69ECu;
            // 0x1b69f0: 0x70009012  mflo1       $s2 (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->lo1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6A48u;
    if (runtime->hasFunction(0x1B6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1B6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69F4u; }
        if (ctx->pc != 0x1B69F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6A48_0x1b6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69F4u; }
        if (ctx->pc != 0x1B69F4u) { return; }
    }
    ctx->pc = 0x1B69F4u;
label_1b69f4:
    // 0x1b69f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B69F4u;
    {
        const bool branch_taken_0x1b69f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B69F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69F4u;
            // 0x1b69f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69f4) {
            ctx->pc = 0x1B6A0Cu;
            goto label_1b6a0c;
        }
    }
    ctx->pc = 0x1B69FCu;
    // 0x1b69fc: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x1b69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1b6a00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b6a04: 0xc06e0c8  jal         func_1B8320
    ctx->pc = 0x1B6A04u;
    SET_GPR_U32(ctx, 31, 0x1B6A0Cu);
    ctx->pc = 0x1B6A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A04u;
            // 0x1b6a08: 0xae0202a8  sw          $v0, 0x2A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8320u;
    if (runtime->hasFunction(0x1B8320u)) {
        auto targetFn = runtime->lookupFunction(0x1B8320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A0Cu; }
        if (ctx->pc != 0x1B6A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8320_0x1b8320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A0Cu; }
        if (ctx->pc != 0x1B6A0Cu) { return; }
    }
    ctx->pc = 0x1B6A0Cu;
label_1b6a0c:
    // 0x1b6a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a10: 0xc06daa0  jal         func_1B6A80
    ctx->pc = 0x1B6A10u;
    SET_GPR_U32(ctx, 31, 0x1B6A18u);
    ctx->pc = 0x1B6A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A10u;
            // 0x1b6a14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6A80u;
    if (runtime->hasFunction(0x1B6A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B6A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A18u; }
        if (ctx->pc != 0x1B6A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6A80_0x1b6a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A18u; }
        if (ctx->pc != 0x1B6A18u) { return; }
    }
    ctx->pc = 0x1B6A18u;
label_1b6a18:
    // 0x1b6a18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6A18u;
    {
        const bool branch_taken_0x1b6a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a18) {
            ctx->pc = 0x1B6A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A18u;
            // 0x1b6a1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A30u;
            goto label_1b6a30;
        }
    }
    ctx->pc = 0x1B6A20u;
    // 0x1b6a20: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x1b6a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x1b6a24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b6a28: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x1b6a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    // 0x1b6a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6a30:
    // 0x1b6a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6a34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6a38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A3Cu;
            // 0x1b6a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6A44u;
    // 0x1b6a44: 0x0  nop
    ctx->pc = 0x1b6a44u;
    // NOP
}
