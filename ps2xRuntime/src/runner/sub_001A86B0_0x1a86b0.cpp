#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A86B0
// Address: 0x1a86b0 - 0x1a8720
void sub_001A86B0_0x1a86b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A86B0_0x1a86b0");
#endif

    switch (ctx->pc) {
        case 0x1a86e4u: goto label_1a86e4;
        case 0x1a86f8u: goto label_1a86f8;
        default: break;
    }

    ctx->pc = 0x1a86b0u;

    // 0x1a86b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a86b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a86b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a86b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a86b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a86bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a86bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a86c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a86c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a86c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86c8: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A86C8u;
    {
        const bool branch_taken_0x1a86c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A86C8u;
            // 0x1a86cc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86c8) {
            ctx->pc = 0x1A870Cu;
            goto label_1a870c;
        }
    }
    ctx->pc = 0x1A86D0u;
    // 0x1a86d0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A86D0u;
    {
        const bool branch_taken_0x1a86d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a86d0) {
            ctx->pc = 0x1A86F0u;
            goto label_1a86f0;
        }
    }
    ctx->pc = 0x1A86D8u;
    // 0x1a86d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a86d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1a86dc: 0xc06a1c8  jal         func_1A8720
    ctx->pc = 0x1A86DCu;
    SET_GPR_U32(ctx, 31, 0x1A86E4u);
    ctx->pc = 0x1A86E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A86DCu;
            // 0x1a86e0: 0x24849b1c  addiu       $a0, $a0, -0x64E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941468));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8720u;
    if (runtime->hasFunction(0x1A8720u)) {
        auto targetFn = runtime->lookupFunction(0x1A8720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86E4u; }
        if (ctx->pc != 0x1A86E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8720_0x1a8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86E4u; }
        if (ctx->pc != 0x1A86E4u) { return; }
    }
    ctx->pc = 0x1A86E4u;
label_1a86e4:
    // 0x1a86e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A86E4u;
    {
        const bool branch_taken_0x1a86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A86E4u;
            // 0x1a86e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86e4) {
            ctx->pc = 0x1A870Cu;
            goto label_1a870c;
        }
    }
    ctx->pc = 0x1A86ECu;
    // 0x1a86ec: 0x0  nop
    ctx->pc = 0x1a86ecu;
    // NOP
label_1a86f0:
    // 0x1a86f0: 0xc06a1c8  jal         func_1A8720
    ctx->pc = 0x1A86F0u;
    SET_GPR_U32(ctx, 31, 0x1A86F8u);
    ctx->pc = 0x1A86F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A86F0u;
            // 0x1a86f4: 0x260409f8  addiu       $a0, $s0, 0x9F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8720u;
    if (runtime->hasFunction(0x1A8720u)) {
        auto targetFn = runtime->lookupFunction(0x1A8720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86F8u; }
        if (ctx->pc != 0x1A86F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8720_0x1a8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86F8u; }
        if (ctx->pc != 0x1A86F8u) { return; }
    }
    ctx->pc = 0x1A86F8u;
label_1a86f8:
    // 0x1a86f8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1a86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1a86fc: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A86FCu;
    {
        const bool branch_taken_0x1a86fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A8700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A86FCu;
            // 0x1a8700: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86fc) {
            ctx->pc = 0x1A8708u;
            goto label_1a8708;
        }
    }
    ctx->pc = 0x1A8704u;
    // 0x1a8704: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1a8704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1a8708:
    // 0x1a8708: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a8708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a870c:
    // 0x1a870c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a870cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8718: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A871Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8718u;
            // 0x1a871c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8720u;
}
