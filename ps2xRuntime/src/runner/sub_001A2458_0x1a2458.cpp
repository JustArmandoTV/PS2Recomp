#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2458
// Address: 0x1a2458 - 0x1a24c0
void sub_001A2458_0x1a2458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2458_0x1a2458");
#endif

    switch (ctx->pc) {
        case 0x1a2458u: goto label_1a2458;
        case 0x1a245cu: goto label_1a245c;
        case 0x1a2460u: goto label_1a2460;
        case 0x1a2464u: goto label_1a2464;
        case 0x1a2468u: goto label_1a2468;
        case 0x1a246cu: goto label_1a246c;
        case 0x1a2470u: goto label_1a2470;
        case 0x1a2474u: goto label_1a2474;
        case 0x1a2478u: goto label_1a2478;
        case 0x1a247cu: goto label_1a247c;
        case 0x1a2480u: goto label_1a2480;
        case 0x1a2484u: goto label_1a2484;
        case 0x1a2488u: goto label_1a2488;
        case 0x1a248cu: goto label_1a248c;
        case 0x1a2490u: goto label_1a2490;
        case 0x1a2494u: goto label_1a2494;
        case 0x1a2498u: goto label_1a2498;
        case 0x1a249cu: goto label_1a249c;
        case 0x1a24a0u: goto label_1a24a0;
        case 0x1a24a4u: goto label_1a24a4;
        case 0x1a24a8u: goto label_1a24a8;
        case 0x1a24acu: goto label_1a24ac;
        case 0x1a24b0u: goto label_1a24b0;
        case 0x1a24b4u: goto label_1a24b4;
        case 0x1a24b8u: goto label_1a24b8;
        case 0x1a24bcu: goto label_1a24bc;
        default: break;
    }

    ctx->pc = 0x1a2458u;

label_1a2458:
    // 0x1a2458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a245c:
    // 0x1a245c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2460:
    // 0x1a2460: 0xc066c68  jal         func_19B1A0
label_1a2464:
    if (ctx->pc == 0x1A2464u) {
        ctx->pc = 0x1A2468u;
        goto label_1a2468;
    }
    ctx->pc = 0x1A2460u;
    SET_GPR_U32(ctx, 31, 0x1A2468u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2468u; }
        if (ctx->pc != 0x1A2468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2468u; }
        if (ctx->pc != 0x1A2468u) { return; }
    }
    ctx->pc = 0x1A2468u;
label_1a2468:
    // 0x1a2468: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x1a2468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1a246c:
    // 0x1a246c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a2470:
    if (ctx->pc == 0x1A2470u) {
        ctx->pc = 0x1A2470u;
            // 0x1a2470: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->pc = 0x1A2474u;
        goto label_1a2474;
    }
    ctx->pc = 0x1A246Cu;
    {
        const bool branch_taken_0x1a246c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A246Cu;
            // 0x1a2470: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a246c) {
            ctx->pc = 0x1A247Cu;
            goto label_1a247c;
        }
    }
    ctx->pc = 0x1A2474u;
label_1a2474:
    // 0x1a2474: 0x60f809  jalr        $v1
label_1a2478:
    if (ctx->pc == 0x1A2478u) {
        ctx->pc = 0x1A247Cu;
        goto label_1a247c;
    }
    ctx->pc = 0x1A2474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A247Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A247Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A247Cu; }
            if (ctx->pc != 0x1A247Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A247Cu;
label_1a247c:
    // 0x1a247c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a247cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2480:
    // 0x1a2480: 0x3e00008  jr          $ra
label_1a2484:
    if (ctx->pc == 0x1A2484u) {
        ctx->pc = 0x1A2484u;
            // 0x1a2484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A2488u;
        goto label_1a2488;
    }
    ctx->pc = 0x1A2480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2480u;
            // 0x1a2484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2488u;
label_1a2488:
    // 0x1a2488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a248c:
    // 0x1a248c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2490:
    // 0x1a2490: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a2490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2494:
    // 0x1a2494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a2498:
    // 0x1a2498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a249c:
    // 0x1a249c: 0xc066c68  jal         func_19B1A0
label_1a24a0:
    if (ctx->pc == 0x1A24A0u) {
        ctx->pc = 0x1A24A0u;
            // 0x1a24a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A24A4u;
        goto label_1a24a4;
    }
    ctx->pc = 0x1A249Cu;
    SET_GPR_U32(ctx, 31, 0x1A24A4u);
    ctx->pc = 0x1A24A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A249Cu;
            // 0x1a24a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24A4u; }
        if (ctx->pc != 0x1A24A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24A4u; }
        if (ctx->pc != 0x1A24A4u) { return; }
    }
    ctx->pc = 0x1A24A4u;
label_1a24a4:
    // 0x1a24a4: 0xac500054  sw          $s0, 0x54($v0)
    ctx->pc = 0x1a24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 16));
label_1a24a8:
    // 0x1a24a8: 0xac510050  sw          $s1, 0x50($v0)
    ctx->pc = 0x1a24a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 17));
label_1a24ac:
    // 0x1a24ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a24acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a24b0:
    // 0x1a24b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a24b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a24b4:
    // 0x1a24b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a24b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a24b8:
    // 0x1a24b8: 0x3e00008  jr          $ra
label_1a24bc:
    if (ctx->pc == 0x1A24BCu) {
        ctx->pc = 0x1A24BCu;
            // 0x1a24bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A24C0u;
        goto label_fallthrough_0x1a24b8;
    }
    ctx->pc = 0x1A24B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A24BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A24B8u;
            // 0x1a24bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a24b8:
    ctx->pc = 0x1A24C0u;
}
